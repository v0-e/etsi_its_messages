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
# PosConfidenceEllipse ::= SEQUENCE {
#     semiMajorConfidence     SemiAxisLength,
#     semiMinorConfidence     SemiAxisLength,
#     semiMajorOrientation    HeadingValue
# }
# ------------------------------------------------------------------------------
# *
# * This DF indicates the horizontal position confidence ellipse which represents the estimated accuracy with a 
# * confidence level of 95  %. The centre of the ellipse shape corresponds to the reference
# * position point for which the position accuracy is evaluated.
# *
# * It shall include the following components: 
# *
# * @field semiMajorConfidence: half of length of the major axis, i.e. distance between the centre point
# * and major axis point of the position accuracy ellipse. 
# *
# * @field semiMinorConfidence: half of length of the minor axis, i.e. distance between the centre point
# * and minor axis point of the position accuracy ellipse. 
# *
# * @field semiMajorOrientation: orientation direction of the ellipse major axis of the position accuracy
# * ellipse with regards to the WGS84 north. 
# * The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# *
# *
# * @category GeoReference information
# * @revision: V1.3.1
# 

SemiAxisLength semi_major_confidence

SemiAxisLength semi_minor_confidence

HeadingValue semi_major_orientation

