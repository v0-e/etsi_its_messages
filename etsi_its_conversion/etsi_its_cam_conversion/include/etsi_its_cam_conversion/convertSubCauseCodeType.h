#pragma once

#include <etsi_its_cam_coding/SubCauseCodeType.h>
#include <etsi_its_cam_msgs/SubCauseCodeType.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>

namespace etsi_its_cam_conversion {
  
void toRos_SubCauseCodeType(const SubCauseCodeType_t& in, etsi_its_cam_msgs::SubCauseCodeType& out) {
  toRos_INTEGER(in, out.value);

}

void toStruct_SubCauseCodeType(const etsi_its_cam_msgs::SubCauseCodeType& in, SubCauseCodeType_t& out) {
  memset(&out, 0, sizeof(SubCauseCodeType_t));
  toStruct_INTEGER(in.value, out);

}

}