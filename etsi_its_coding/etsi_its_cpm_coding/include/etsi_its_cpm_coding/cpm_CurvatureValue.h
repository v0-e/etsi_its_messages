/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_CurvatureValue_H_
#define	_cpm_CurvatureValue_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_CurvatureValue {
	cpm_CurvatureValue_outOfRangeNegative	= -1023,
	cpm_CurvatureValue_straight	= 0,
	cpm_CurvatureValue_outOfRangePositive	= 1022,
	cpm_CurvatureValue_unavailable	= 1023
} e_cpm_CurvatureValue;

/* cpm_CurvatureValue */
typedef long	 cpm_CurvatureValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_CurvatureValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_CurvatureValue;
asn_struct_free_f cpm_CurvatureValue_free;
asn_struct_print_f cpm_CurvatureValue_print;
asn_constr_check_f cpm_CurvatureValue_constraint;
per_type_decoder_f cpm_CurvatureValue_decode_uper;
per_type_encoder_f cpm_CurvatureValue_encode_uper;
per_type_decoder_f cpm_CurvatureValue_decode_aper;
per_type_encoder_f cpm_CurvatureValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_CurvatureValue_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>