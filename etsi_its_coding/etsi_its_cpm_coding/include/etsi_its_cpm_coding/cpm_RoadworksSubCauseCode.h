/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_RoadworksSubCauseCode_H_
#define	_cpm_RoadworksSubCauseCode_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_RoadworksSubCauseCode {
	cpm_RoadworksSubCauseCode_unavailable	= 0,
	cpm_RoadworksSubCauseCode_majorRoadworks	= 1,
	cpm_RoadworksSubCauseCode_roadMarkingWork	= 2,
	cpm_RoadworksSubCauseCode_slowMovingRoadMaintenance	= 3,
	cpm_RoadworksSubCauseCode_shortTermStationaryRoadworks	= 4,
	cpm_RoadworksSubCauseCode_streetCleaning	= 5,
	cpm_RoadworksSubCauseCode_winterService	= 6
} e_cpm_RoadworksSubCauseCode;

/* cpm_RoadworksSubCauseCode */
typedef long	 cpm_RoadworksSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_RoadworksSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_RoadworksSubCauseCode;
asn_struct_free_f cpm_RoadworksSubCauseCode_free;
asn_struct_print_f cpm_RoadworksSubCauseCode_print;
asn_constr_check_f cpm_RoadworksSubCauseCode_constraint;
per_type_decoder_f cpm_RoadworksSubCauseCode_decode_uper;
per_type_encoder_f cpm_RoadworksSubCauseCode_encode_uper;
per_type_decoder_f cpm_RoadworksSubCauseCode_decode_aper;
per_type_encoder_f cpm_RoadworksSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_RoadworksSubCauseCode_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>