/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_Temperature_H_
#define	_cpm_Temperature_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_Temperature {
	cpm_Temperature_equalOrSmallerThanMinus60Deg	= -60,
	cpm_Temperature_equalOrGreaterThan67Deg	= 67
} e_cpm_Temperature;

/* cpm_Temperature */
typedef long	 cpm_Temperature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_Temperature;
asn_struct_free_f cpm_Temperature_free;
asn_struct_print_f cpm_Temperature_print;
asn_constr_check_f cpm_Temperature_constraint;
per_type_decoder_f cpm_Temperature_decode_uper;
per_type_encoder_f cpm_Temperature_encode_uper;
per_type_decoder_f cpm_Temperature_decode_aper;
per_type_encoder_f cpm_Temperature_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_Temperature_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>