#include <algorithm>
#include <arpa/inet.h>

#include <pluginlib/class_list_macros.h>
#include <ros/console.h>

#include "etsi_its_conversion/Converter.h"


PLUGINLIB_EXPORT_CLASS(etsi_its_conversion::Converter, nodelet::Nodelet)


namespace etsi_its_conversion {


const std::string Converter::kInputTopicUdp{"udp/in"};
const std::string Converter::kOutputTopicCam{"cam/out"};
const std::string Converter::kInputTopicCam{"cam/in"};
const std::string Converter::kOutputTopicUdp{"udp/out"};


bool logLevelIsDebug() {

  std::map<std::string, ros::console::levels::Level> loggers;
  bool ret = ros::console::get_loggers(loggers);
  std::string node_logger = ROSCONSOLE_DEFAULT_NAME;
  node_logger += "." + ros::this_node::getName();
  if (loggers.count(node_logger) > 0) {
    if (loggers[node_logger] == ros::console::levels::Level::Debug) return true;
  }
  std::string nodelet_logger = "ros.nodelet." + ros::this_node::getName();
  if (loggers.count(nodelet_logger) > 0) {
    if (loggers[nodelet_logger] == ros::console::levels::Level::Debug) return true;
  }
  return false;
}


void Converter::onInit() {

  private_node_handle_ = this->getMTPrivateNodeHandle();

  this->loadParameters();
  this->setup();
}


void Converter::loadParameters() {

  std::vector<std::string> known_etsi_types = {"auto", "cam"};
  if (!private_node_handle_.param<std::string>("etsi_type", etsi_type_, "auto")) {
    NODELET_WARN("Parameter '%s' is not set, defaulting to '%s'", "etsi_type", "auto");
  }
  if (std::find(known_etsi_types.begin(), known_etsi_types.end(), etsi_type_) == known_etsi_types.end()) {
    NODELET_WARN("Invalid value for parameter '%s', defaulting to '%s'", "etsi_type", "auto");
  }
}


void Converter::setup() {

  // create subscribers and publishers
  publisher_udp_ = private_node_handle_.advertise<udp_msgs::UdpPacket>(kOutputTopicUdp, 1);
  publishers_["cam"] = private_node_handle_.advertise<etsi_its_cam_msgs::CAM>(kOutputTopicCam, 1);
  subscriber_udp_ = private_node_handle_.subscribe(kInputTopicUdp, 1, &Converter::udpCallback, this);
  subscribers_["cam"] = private_node_handle_.subscribe(kInputTopicCam, 1, &Converter::rosCallbackCam, this);
  
  NODELET_INFO("Converting UDP messages of type '%s' on '%s' to native ROS messages on '%s'", etsi_type_.c_str(), subscriber_udp_.getTopic().c_str(), publishers_["cam"].getTopic().c_str());
  NODELET_INFO("Converting native ROS CAM messages on '%s' to UDP messages on '%s'", subscribers_["cam"].getTopic().c_str(), publisher_udp_.getTopic().c_str());
}


void Converter::udpCallback(const udp_msgs::UdpPacket::ConstPtr udp_msg) {

  NODELET_DEBUG("Received CAM bitstring");

  // decode BTP-Header, if type detection is enabled
  std::string detected_etsi_type = etsi_type_;
  int offset = 0;
  if (etsi_type_ == "auto") {
    offset = 4;
    const uint16_t* btp_header = reinterpret_cast<const uint16_t*>(&udp_msg->data[0]);
    uint16_t destination_port = ntohs(btp_header[0]);
    if (destination_port == 2001) detected_etsi_type = "cam";
    else if (destination_port == 2002) detected_etsi_type = "denm";
    else if (destination_port == 2003) detected_etsi_type = "map";
    else if (destination_port == 2004) detected_etsi_type = "spat";
    else if (destination_port == 2006) detected_etsi_type = "ivi";
    else if (destination_port == 2009) detected_etsi_type = "cpm";
    else detected_etsi_type = "unknown";
  }

  if (detected_etsi_type == "cam") {

    // decode ASN1 bitstring to struct
    CAM_t* asn1_struct = nullptr;
    asn_dec_rval_t ret = asn_decode(0, ATS_UNALIGNED_BASIC_PER, &asn_DEF_CAM, (void **)&asn1_struct, &udp_msg->data[offset], udp_msg->data.size() - offset);
    if (ret.code != RC_OK) {
      NODELET_ERROR("Failed to decode message");
      return;
    }
    if (logLevelIsDebug()) asn_fprint(stdout, &asn_DEF_CAM, asn1_struct);

    // convert struct to ROS msg and publish
    etsi_its_cam_msgs::CAM msg;
    etsi_its_cam_conversion::toRos_CAM(*asn1_struct, msg);

    // publish msg
    publishers_["cam"].publish(msg);
    NODELET_DEBUG("Published CAM");

  } else {
    NODELET_ERROR("Detected ETSI message type '%s' not yet supported, dropping message", detected_etsi_type.c_str());
    return;
  }
}


void Converter::rosCallbackCam(const etsi_its_cam_msgs::CAM::ConstPtr msg) {

  NODELET_DEBUG("Received CAM");

  // convert ROS msg to struct
  CAM_t asn1_struct;
  etsi_its_cam_conversion::toStruct_CAM(*msg, asn1_struct);
  if (logLevelIsDebug()) asn_fprint(stdout, &asn_DEF_CAM, &asn1_struct);

  // encode struct to ASN1 bitstring
  char error_buffer[1024];
  size_t error_length = sizeof(error_buffer);
  int check_ret = asn_check_constraints(&asn_DEF_CAM, &asn1_struct, error_buffer, &error_length);
  if (check_ret != 0) {
    NODELET_ERROR("Check of struct failed: %s", error_buffer);
    return;
  }
  asn_encode_to_new_buffer_result_t ret = asn_encode_to_new_buffer(0, ATS_UNALIGNED_BASIC_PER, &asn_DEF_CAM, &asn1_struct);
  if (ret.result.encoded == -1) {
    NODELET_ERROR("Failed to encode message: %s", ret.result.failed_type->xml_tag);
    return;
  }

  // copy bitstring to ROS UDP msg
  udp_msgs::UdpPacket udp_msg;
  if (etsi_type_ == "auto") {
    // add BTP-Header, if type detection is enabled
    uint16_t destination_port = htons(2001);
    uint16_t destination_port_info = 0;
    uint16_t* btp_header = new uint16_t[2] {destination_port, destination_port_info};
    uint8_t* btp_header_uint8 = reinterpret_cast<uint8_t*>(btp_header);
    udp_msg.data.insert(udp_msg.data.end(), btp_header_uint8, btp_header_uint8 + 2 * sizeof(uint16_t));
    delete[] btp_header;
  }
  udp_msg.data.insert(udp_msg.data.end(), (uint8_t*)ret.buffer, (uint8_t*)ret.buffer + (int)ret.result.encoded);

  // publish UDP msg
  publisher_udp_.publish(udp_msg);
  NODELET_DEBUG("Published CAM bitstring");
}


}  // end of namespace