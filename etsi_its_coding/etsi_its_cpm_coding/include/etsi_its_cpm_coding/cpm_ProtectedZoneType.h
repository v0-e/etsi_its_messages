/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ProtectedZoneType_H_
#define	_cpm_ProtectedZoneType_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ProtectedZoneType {
	cpm_ProtectedZoneType_permanentCenDsrcTolling	= 0,
	/*
	 * Enumeration is extensible
	 */
	cpm_ProtectedZoneType_temporaryCenDsrcTolling	= 1
} e_cpm_ProtectedZoneType;

/* cpm_ProtectedZoneType */
typedef long	 cpm_ProtectedZoneType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ProtectedZoneType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ProtectedZoneType;
extern const asn_INTEGER_specifics_t asn_SPC_cpm_ProtectedZoneType_specs_1;
asn_struct_free_f cpm_ProtectedZoneType_free;
asn_struct_print_f cpm_ProtectedZoneType_print;
asn_constr_check_f cpm_ProtectedZoneType_constraint;
per_type_decoder_f cpm_ProtectedZoneType_decode_uper;
per_type_encoder_f cpm_ProtectedZoneType_encode_uper;
per_type_decoder_f cpm_ProtectedZoneType_decode_aper;
per_type_encoder_f cpm_ProtectedZoneType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ProtectedZoneType_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>