#pragma once

#include <etsi_its_cam_coding/BasicVehicleContainerHighFrequency.h>
#include <etsi_its_cam_conversion/convertHeading.h>
#include <etsi_its_cam_conversion/convertSpeed.h>
#include <etsi_its_cam_conversion/convertDriveDirection.h>
#include <etsi_its_cam_conversion/convertVehicleLength.h>
#include <etsi_its_cam_conversion/convertVehicleWidth.h>
#include <etsi_its_cam_conversion/convertLongitudinalAcceleration.h>
#include <etsi_its_cam_conversion/convertCurvature.h>
#include <etsi_its_cam_conversion/convertCurvatureCalculationMode.h>
#include <etsi_its_cam_conversion/convertYawRate.h>
#include <etsi_its_cam_conversion/convertAccelerationControl.h>
#include <etsi_its_cam_conversion/convertLanePosition.h>
#include <etsi_its_cam_conversion/convertSteeringWheelAngle.h>
#include <etsi_its_cam_conversion/convertLateralAcceleration.h>
#include <etsi_its_cam_conversion/convertVerticalAcceleration.h>
#include <etsi_its_cam_conversion/convertPerformanceClass.h>
#include <etsi_its_cam_conversion/convertCenDsrcTollingZone.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/BasicVehicleContainerHighFrequency.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/basic_vehicle_container_high_frequency.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_BasicVehicleContainerHighFrequency(const BasicVehicleContainerHighFrequency_t& in, cam_msgs::BasicVehicleContainerHighFrequency& out) {

  toRos_Heading(in.heading, out.heading);
  toRos_Speed(in.speed, out.speed);
  toRos_DriveDirection(in.driveDirection, out.drive_direction);
  toRos_VehicleLength(in.vehicleLength, out.vehicle_length);
  toRos_VehicleWidth(in.vehicleWidth, out.vehicle_width);
  toRos_LongitudinalAcceleration(in.longitudinalAcceleration, out.longitudinal_acceleration);
  toRos_Curvature(in.curvature, out.curvature);
  toRos_CurvatureCalculationMode(in.curvatureCalculationMode, out.curvature_calculation_mode);
  toRos_YawRate(in.yawRate, out.yaw_rate);
  if (in.accelerationControl) {
    toRos_AccelerationControl(*in.accelerationControl, out.acceleration_control);
    out.acceleration_control_is_present = true;
  }

  if (in.lanePosition) {
    toRos_LanePosition(*in.lanePosition, out.lane_position);
    out.lane_position_is_present = true;
  }

  if (in.steeringWheelAngle) {
    toRos_SteeringWheelAngle(*in.steeringWheelAngle, out.steering_wheel_angle);
    out.steering_wheel_angle_is_present = true;
  }

  if (in.lateralAcceleration) {
    toRos_LateralAcceleration(*in.lateralAcceleration, out.lateral_acceleration);
    out.lateral_acceleration_is_present = true;
  }

  if (in.verticalAcceleration) {
    toRos_VerticalAcceleration(*in.verticalAcceleration, out.vertical_acceleration);
    out.vertical_acceleration_is_present = true;
  }

  if (in.performanceClass) {
    toRos_PerformanceClass(*in.performanceClass, out.performance_class);
    out.performance_class_is_present = true;
  }

  if (in.cenDsrcTollingZone) {
    toRos_CenDsrcTollingZone(*in.cenDsrcTollingZone, out.cen_dsrc_tolling_zone);
    out.cen_dsrc_tolling_zone_is_present = true;
  }

}

void toStruct_BasicVehicleContainerHighFrequency(const cam_msgs::BasicVehicleContainerHighFrequency& in, BasicVehicleContainerHighFrequency_t& out) {

  memset(&out, 0, sizeof(BasicVehicleContainerHighFrequency_t));

  toStruct_Heading(in.heading, out.heading);
  toStruct_Speed(in.speed, out.speed);
  toStruct_DriveDirection(in.drive_direction, out.driveDirection);
  toStruct_VehicleLength(in.vehicle_length, out.vehicleLength);
  toStruct_VehicleWidth(in.vehicle_width, out.vehicleWidth);
  toStruct_LongitudinalAcceleration(in.longitudinal_acceleration, out.longitudinalAcceleration);
  toStruct_Curvature(in.curvature, out.curvature);
  toStruct_CurvatureCalculationMode(in.curvature_calculation_mode, out.curvatureCalculationMode);
  toStruct_YawRate(in.yaw_rate, out.yawRate);
  if (in.acceleration_control_is_present) {
    AccelerationControl_t acceleration_control;
    toStruct_AccelerationControl(in.acceleration_control, acceleration_control);
    out.accelerationControl = new AccelerationControl_t(acceleration_control);
  }

  if (in.lane_position_is_present) {
    LanePosition_t lane_position;
    toStruct_LanePosition(in.lane_position, lane_position);
    out.lanePosition = new LanePosition_t(lane_position);
  }

  if (in.steering_wheel_angle_is_present) {
    SteeringWheelAngle_t steering_wheel_angle;
    toStruct_SteeringWheelAngle(in.steering_wheel_angle, steering_wheel_angle);
    out.steeringWheelAngle = new SteeringWheelAngle_t(steering_wheel_angle);
  }

  if (in.lateral_acceleration_is_present) {
    LateralAcceleration_t lateral_acceleration;
    toStruct_LateralAcceleration(in.lateral_acceleration, lateral_acceleration);
    out.lateralAcceleration = new LateralAcceleration_t(lateral_acceleration);
  }

  if (in.vertical_acceleration_is_present) {
    VerticalAcceleration_t vertical_acceleration;
    toStruct_VerticalAcceleration(in.vertical_acceleration, vertical_acceleration);
    out.verticalAcceleration = new VerticalAcceleration_t(vertical_acceleration);
  }

  if (in.performance_class_is_present) {
    PerformanceClass_t performance_class;
    toStruct_PerformanceClass(in.performance_class, performance_class);
    out.performanceClass = new PerformanceClass_t(performance_class);
  }

  if (in.cen_dsrc_tolling_zone_is_present) {
    CenDsrcTollingZone_t cen_dsrc_tolling_zone;
    toStruct_CenDsrcTollingZone(in.cen_dsrc_tolling_zone, cen_dsrc_tolling_zone);
    out.cenDsrcTollingZone = new CenDsrcTollingZone_t(cen_dsrc_tolling_zone);
  }

}

}