/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_HeadingValue_H_
#define	_cpm_HeadingValue_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_HeadingValue {
	cpm_HeadingValue_wgs84North	= 0,
	cpm_HeadingValue_wgs84East	= 900,
	cpm_HeadingValue_wgs84South	= 1800,
	cpm_HeadingValue_wgs84West	= 2700,
	cpm_HeadingValue_doNotUse	= 3600,
	cpm_HeadingValue_unavailable	= 3601
} e_cpm_HeadingValue;

/* cpm_HeadingValue */
typedef long	 cpm_HeadingValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_HeadingValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_HeadingValue;
asn_struct_free_f cpm_HeadingValue_free;
asn_struct_print_f cpm_HeadingValue_print;
asn_constr_check_f cpm_HeadingValue_constraint;
per_type_decoder_f cpm_HeadingValue_decode_uper;
per_type_encoder_f cpm_HeadingValue_encode_uper;
per_type_decoder_f cpm_HeadingValue_decode_aper;
per_type_encoder_f cpm_HeadingValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_HeadingValue_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>