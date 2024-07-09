/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_cpm_coding/cpm_OriginatingVehicleContainer.h>
#include <etsi_its_cpm_conversion/convertCartesianAngle.h>
#include <etsi_its_cpm_conversion/convertTrailerDataSet.h>
#include <etsi_its_cpm_conversion/convertWgs84Angle.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/OriginatingVehicleContainer.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/originating_vehicle_container.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_OriginatingVehicleContainer(const cpm_OriginatingVehicleContainer_t& in, cpm_msgs::OriginatingVehicleContainer& out) {
  toRos_Wgs84Angle(in.orientationAngle, out.orientation_angle);
  if (in.pitchAngle) {
    toRos_CartesianAngle(*in.pitchAngle, out.pitch_angle);
    out.pitch_angle_is_present = true;
  }
  if (in.rollAngle) {
    toRos_CartesianAngle(*in.rollAngle, out.roll_angle);
    out.roll_angle_is_present = true;
  }
  if (in.trailerDataSet) {
    toRos_TrailerDataSet(*in.trailerDataSet, out.trailer_data_set);
    out.trailer_data_set_is_present = true;
  }
}

void toStruct_OriginatingVehicleContainer(const cpm_msgs::OriginatingVehicleContainer& in, cpm_OriginatingVehicleContainer_t& out) {
  memset(&out, 0, sizeof(cpm_OriginatingVehicleContainer_t));

  toStruct_Wgs84Angle(in.orientation_angle, out.orientationAngle);
  if (in.pitch_angle_is_present) {
    out.pitchAngle = (cpm_CartesianAngle_t*) calloc(1, sizeof(cpm_CartesianAngle_t));
    toStruct_CartesianAngle(in.pitch_angle, *out.pitchAngle);
  }
  if (in.roll_angle_is_present) {
    out.rollAngle = (cpm_CartesianAngle_t*) calloc(1, sizeof(cpm_CartesianAngle_t));
    toStruct_CartesianAngle(in.roll_angle, *out.rollAngle);
  }
  if (in.trailer_data_set_is_present) {
    out.trailerDataSet = (cpm_TrailerDataSet_t*) calloc(1, sizeof(cpm_TrailerDataSet_t));
    toStruct_TrailerDataSet(in.trailer_data_set, *out.trailerDataSet);
  }
}

}