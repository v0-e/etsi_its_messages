#pragma once

#include <etsi_its_cam_coding/PtActivation.h>
#include <etsi_its_cam_conversion/convertPtActivationType.h>
#include <etsi_its_cam_conversion/convertPtActivationData.h>
#include <etsi_its_cam_msgs/PtActivation.h>


namespace etsi_its_cam_conversion {

void toRos_PtActivation(const PtActivation_t& in, etsi_its_cam_msgs::PtActivation& out) {

  toRos_PtActivationType(in.ptActivationType, out.ptActivationType);
  toRos_PtActivationData(in.ptActivationData, out.ptActivationData);
}

void toStruct_PtActivation(const etsi_its_cam_msgs::PtActivation& in, PtActivation_t& out) {
    
  memset(&out, 0, sizeof(PtActivation_t));

  toStruct_PtActivationType(in.ptActivationType, out.ptActivationType);
  toStruct_PtActivationData(in.ptActivationData, out.ptActivationData);
}

}