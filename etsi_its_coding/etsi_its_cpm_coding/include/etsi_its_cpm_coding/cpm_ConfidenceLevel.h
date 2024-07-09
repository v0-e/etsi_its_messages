/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ConfidenceLevel_H_
#define	_cpm_ConfidenceLevel_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ConfidenceLevel {
	cpm_ConfidenceLevel_unavailable	= 101
} e_cpm_ConfidenceLevel;

/* cpm_ConfidenceLevel */
typedef long	 cpm_ConfidenceLevel_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ConfidenceLevel_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ConfidenceLevel;
asn_struct_free_f cpm_ConfidenceLevel_free;
asn_struct_print_f cpm_ConfidenceLevel_print;
asn_constr_check_f cpm_ConfidenceLevel_constraint;
per_type_decoder_f cpm_ConfidenceLevel_decode_uper;
per_type_encoder_f cpm_ConfidenceLevel_encode_uper;
per_type_decoder_f cpm_ConfidenceLevel_decode_aper;
per_type_encoder_f cpm_ConfidenceLevel_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ConfidenceLevel_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>