/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_AccelerationControl_H_
#define	_cpm_AccelerationControl_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_AccelerationControl {
	cpm_AccelerationControl_brakePedalEngaged	= 0,
	cpm_AccelerationControl_gasPedalEngaged	= 1,
	cpm_AccelerationControl_emergencyBrakeEngaged	= 2,
	cpm_AccelerationControl_collisionWarningEngaged	= 3,
	cpm_AccelerationControl_accEngaged	= 4,
	cpm_AccelerationControl_cruiseControlEngaged	= 5,
	cpm_AccelerationControl_speedLimiterEngaged	= 6
} e_cpm_AccelerationControl;

/* cpm_AccelerationControl */
typedef BIT_STRING_t	 cpm_AccelerationControl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_AccelerationControl;
asn_struct_free_f cpm_AccelerationControl_free;
asn_struct_print_f cpm_AccelerationControl_print;
asn_constr_check_f cpm_AccelerationControl_constraint;
per_type_decoder_f cpm_AccelerationControl_decode_uper;
per_type_encoder_f cpm_AccelerationControl_encode_uper;
per_type_decoder_f cpm_AccelerationControl_decode_aper;
per_type_encoder_f cpm_AccelerationControl_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_AccelerationControl_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>