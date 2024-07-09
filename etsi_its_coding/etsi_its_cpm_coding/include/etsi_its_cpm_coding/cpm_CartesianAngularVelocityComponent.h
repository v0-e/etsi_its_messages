/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_CartesianAngularVelocityComponent_H_
#define	_cpm_CartesianAngularVelocityComponent_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_coding/cpm_CartesianAngularVelocityComponentValue.h"
#include "etsi_its_cpm_coding/cpm_AngularSpeedConfidence.h"
#include <etsi_its_cpm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_CartesianAngularVelocityComponent */
typedef struct cpm_CartesianAngularVelocityComponent {
	cpm_CartesianAngularVelocityComponentValue_t	 value;
	cpm_AngularSpeedConfidence_t	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_CartesianAngularVelocityComponent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_CartesianAngularVelocityComponent;
extern asn_SEQUENCE_specifics_t asn_SPC_cpm_CartesianAngularVelocityComponent_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_CartesianAngularVelocityComponent_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_CartesianAngularVelocityComponent_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>