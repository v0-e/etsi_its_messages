/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_LongitudinalAcceleration_H_
#define	_cpm_LongitudinalAcceleration_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_coding/cpm_LongitudinalAccelerationValue.h"
#include "etsi_its_cpm_coding/cpm_AccelerationConfidence.h"
#include <etsi_its_cpm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_LongitudinalAcceleration */
typedef struct cpm_LongitudinalAcceleration {
	cpm_LongitudinalAccelerationValue_t	 longitudinalAccelerationValue;
	cpm_AccelerationConfidence_t	 longitudinalAccelerationConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_LongitudinalAcceleration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_LongitudinalAcceleration;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_LongitudinalAcceleration_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>