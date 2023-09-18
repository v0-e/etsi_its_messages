#include <cmath>
#include <limits>
#include <random>

#include <gtest/gtest.h>

std::default_random_engine random_engine;


double randomDouble(double min, double max) {
  std::uniform_real_distribution<double> uniform_distribution_double(min, max);
  return uniform_distribution_double(random_engine);
}

int randomInt(int min, int max) {
  std::uniform_int_distribution<int> uniform_distribution_int(min, max);
  return uniform_distribution_int(random_engine);
}

TEST(etsi_its_cam_msgs, test_set_get_cam) {

  CAM cam;

  int station_id = randomInt(StationID::MIN,StationID::MAX);
  int protocol_version = randomInt(ItsPduHeader::PROTOCOL_VERSION_MIN,ItsPduHeader::PROTOCOL_VERSION_MAX);
  setItsPduHeader(cam, station_id, protocol_version);
  EXPECT_EQ(ItsPduHeader::MESSAGE_I_D_CAM, cam.header.message_id);
  EXPECT_EQ(protocol_version, cam.header.protocol_version);
  EXPECT_EQ(station_id, getStationID(cam));

  int stationType_val = randomInt(StationType::MIN, StationType::MAX);
  setStationType(cam, stationType_val);
  EXPECT_EQ(stationType_val, getStationType(cam));

  double latitude = randomDouble(-90.0, 90.0);
  double longitude = randomDouble(-180.0, 180.0);
  setReferencePosition(cam, latitude, longitude);
  EXPECT_NEAR(latitude, getLatitude(cam), 1e-7);
  EXPECT_NEAR(longitude, getLongitude(cam), 1e-7);
  latitude = randomDouble(-90.0, 90.0);
  longitude = randomDouble(-180.0, 180.0);
  double altitude = randomDouble(-1000.0, 8000.0);
  setReferencePosition(cam, latitude, longitude, altitude);
  EXPECT_NEAR(latitude, getLatitude(cam), 1e-7);
  EXPECT_NEAR(longitude, getLongitude(cam), 1e-7);
  EXPECT_NEAR(altitude, getAltitude(cam), 1e-2);

  double heading_val = randomDouble(0.0, 360.0);
  setHeading(cam, heading_val);
  EXPECT_NEAR(heading_val, getHeading(cam), 1e-1);

  double length = randomDouble(0.0, 102.2);
  double width = randomDouble(0.0, 6.2);
  setVehicleDimensions(cam, length, width);
  EXPECT_NEAR(length, getVehicleLength(cam), 1e-1);
  EXPECT_NEAR(width, getVehicleWidth(cam), 1e-1);

  double speed_val = randomDouble(0.0, 163.82);
  setSpeed(cam, speed_val);
  EXPECT_NEAR(speed_val, getSpeed(cam), 1e-2);

  double lon_accel = randomDouble(-16.0, 16.0);
  double lat_accel = randomDouble(-16.0, 16.0);
  setLongitudinalAcceleration(cam, lon_accel);
  EXPECT_NEAR(lon_accel, getLongitudinalAcceleration(cam), 1e-1);
  setLateralAcceleration(cam, lat_accel);
  EXPECT_NEAR(lat_accel, getLateralAcceleration(cam), 1e-1);

  std::vector<bool> exterior_lights(ExteriorLights::SIZE_BITS);
  for (int i = 0; i < ExteriorLights::SIZE_BITS; i++) {
    exterior_lights.at(i) = randomInt(0, 1);
  }
  cam.cam.cam_parameters.low_frequency_container_is_present = true;
  cam.cam.cam_parameters.low_frequency_container.choice = LowFrequencyContainer::CHOICE_BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY;
  setExteriorLights(cam, exterior_lights);
  EXPECT_EQ(exterior_lights, getExteriorLights(cam));
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}