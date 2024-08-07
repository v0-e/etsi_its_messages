# ==============================================================================
# MIT License
#
# Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
# Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
# ==============================================================================

# --- Auto-generated by asn1ToRosMsg.py ----------------------------------------

# --- ASN.1 Definition ---------------------------------------------------------
# VruProfileAndSubprofile ::= CHOICE {
#    pedestrian                     VruSubProfilePedestrian,
#    bicyclistAndLightVruVehicle    VruSubProfileBicyclist,
#    motorcyclist                   VruSubProfileMotorcyclist,
#    animal                         VruSubProfileAnimal,
#    ...
# }
# ------------------------------------------------------------------------------
# *
# * This DF indicates the profile of a VRU including sub-profile information
# * It identifies four options corresponding to the four types of VRU profiles specified in ETSI TS 103 300-2 [18]:
# *
# * @field pedestrian: VRU Profile 1 - Pedestrian.
# *
# * @field bicyclistAndLightVruVehicle: VRU Profile  2 - Bicyclist.
# *
# * @field motorcyclist: VRU Profile 3  - Motorcyclist.
# *
# * @field animal: VRU Profile  4 -  Animal.
# *
# * @category: VRU information
# * @revision: Created in V2.1.1
# 

uint8 choice

VruSubProfilePedestrian pedestrian
uint8 CHOICE_PEDESTRIAN = 0

VruSubProfileBicyclist bicyclist_and_light_vru_vehicle
uint8 CHOICE_BICYCLIST_AND_LIGHT_VRU_VEHICLE = 1

VruSubProfileMotorcyclist motorcyclist
uint8 CHOICE_MOTORCYCLIST = 2

VruSubProfileAnimal animal
uint8 CHOICE_ANIMAL = 3

