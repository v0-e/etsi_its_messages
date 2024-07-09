/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_AccelerationComponent_H_
#define	_cpm_AccelerationComponent_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_coding/cpm_AccelerationValue.h"
#include "etsi_its_cpm_coding/cpm_AccelerationConfidence.h"
#include <etsi_its_cpm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_AccelerationComponent */
typedef struct cpm_AccelerationComponent {
	cpm_AccelerationValue_t	 value;
	cpm_AccelerationConfidence_t	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_AccelerationComponent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_AccelerationComponent;
extern asn_SEQUENCE_specifics_t asn_SPC_cpm_AccelerationComponent_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_AccelerationComponent_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_AccelerationComponent_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>