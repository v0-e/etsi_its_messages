#pragma once

#include <etsi_its_cam_coding/RoadworksSubCauseCode.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>
#include <etsi_its_cam_msgs/RoadworksSubCauseCode.h>


namespace etsi_its_cam_conversion {

void toRos_RoadworksSubCauseCode(const RoadworksSubCauseCode_t& in, etsi_its_cam_msgs::RoadworksSubCauseCode& out) {

  toRos_INTEGER(in, out.value);
}

void toStruct_RoadworksSubCauseCode(const etsi_its_cam_msgs::RoadworksSubCauseCode& in, RoadworksSubCauseCode_t& out) {
    
  memset(&out, 0, sizeof(RoadworksSubCauseCode_t));
  toStruct_INTEGER(in.value, out);
}

}