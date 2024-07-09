/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_PosCentMass_H_
#define	_cpm_PosCentMass_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_PosCentMass {
	cpm_PosCentMass_tenCentimetres	= 1,
	cpm_PosCentMass_outOfRange	= 62,
	cpm_PosCentMass_unavailable	= 63
} e_cpm_PosCentMass;

/* cpm_PosCentMass */
typedef long	 cpm_PosCentMass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_PosCentMass;
asn_struct_free_f cpm_PosCentMass_free;
asn_struct_print_f cpm_PosCentMass_print;
asn_constr_check_f cpm_PosCentMass_constraint;
per_type_decoder_f cpm_PosCentMass_decode_uper;
per_type_encoder_f cpm_PosCentMass_encode_uper;
per_type_decoder_f cpm_PosCentMass_decode_aper;
per_type_encoder_f cpm_PosCentMass_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_PosCentMass_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>