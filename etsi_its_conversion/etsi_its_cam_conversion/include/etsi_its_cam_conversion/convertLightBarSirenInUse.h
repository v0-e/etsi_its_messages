#pragma once

#include <etsi_its_cam_coding/LightBarSirenInUse.h>
#include <etsi_its_cam_conversion/primitives/convertBIT_STRING.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/light_bar_siren_in_use.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/LightBarSirenInUse.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_LightBarSirenInUse(const LightBarSirenInUse_t& in, cam_msgs::LightBarSirenInUse& out) {

  toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_LightBarSirenInUse(const cam_msgs::LightBarSirenInUse& in, LightBarSirenInUse_t& out) {

  memset(&out, 0, sizeof(LightBarSirenInUse_t));
  toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}