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
# InterferenceManagementInfoPerChannel ::= SEQUENCE {
#     interferenceManagementChannel           InterferenceManagementChannel,
#     interferenceManagementZoneType          InterferenceManagementZoneType,
#     interferenceManagementMitigationType    MitigationForTechnologies OPTIONAL,
#     expiryTime                              TimestampIts OPTIONAL, 
#     ...
# }
# ------------------------------------------------------------------------------
# *
# * This DF contains interference management information for one affected frequency channel.
# *
# * It shall include the following components: 
# *
# * @field interferenceManagementChannel: frequency channel for which the zone should be applied interference management 
# *
# * @field interferenceManagementZoneType: type of the interference management zone. 
# *
# * @field interferenceManagementMitigationType: optional type of the mitigation to be used in the interference management zone. 
# * In the case where no mitigation should be applied by the ITS-S, this is indicated by the field interferenceManagementMitigationType being absent.
# *
# * @field expiryTime: optional time at which the validity of the interference management communication zone will expire. 
# * This component is present when the interference management is temporarily valid
# *
# * @category: Communication information
# * @revision: created in V2.1.1
# 

InterferenceManagementChannel interference_management_channel

InterferenceManagementZoneType interference_management_zone_type

MitigationForTechnologies interference_management_mitigation_type
bool interference_management_mitigation_type_is_present

TimestampIts expiry_time
bool expiry_time_is_present

