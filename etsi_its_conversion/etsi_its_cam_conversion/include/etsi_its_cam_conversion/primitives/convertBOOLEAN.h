#pragma once

#include <etsi_its_cam_coding/BOOLEAN.h>

namespace etsi_its_cam_conversion {

  void toRos_BOOLEAN(const BOOLEAN_t& _BOOLEAN_in, uint8_t& BOOLEAN_out) {
    BOOLEAN_out = _BOOLEAN_in;
  }

  void toStruct_BOOLEAN(const uint8_t& _BOOLEAN_in, BOOLEAN_t& BOOLEAN_out) {
    BOOLEAN_out = _BOOLEAN_in;
  }

}