#pragma once

#include <etsi_its_denm_coding/DeltaAltitude.h>
#include <etsi_its_denm_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/DeltaAltitude.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/delta_altitude.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_DeltaAltitude(const DeltaAltitude_t& in, denm_msgs::DeltaAltitude& out) {

  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_DeltaAltitude(const denm_msgs::DeltaAltitude& in, DeltaAltitude_t& out) {

  memset(&out, 0, sizeof(DeltaAltitude_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}