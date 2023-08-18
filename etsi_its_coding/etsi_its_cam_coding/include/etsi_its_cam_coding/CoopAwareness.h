/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/input/CAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#ifndef	_CoopAwareness_H_
#define	_CoopAwareness_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_coding/GenerationDeltaTime.h"
#include "etsi_its_cam_coding/CamParameters.h"
#include <etsi_its_cam_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CoopAwareness */
typedef struct CoopAwareness {
	GenerationDeltaTime_t	 generationDeltaTime;
	CamParameters_t	 camParameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CoopAwareness_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CoopAwareness;
extern asn_SEQUENCE_specifics_t asn_SPC_CoopAwareness_specs_1;
extern asn_TYPE_member_t asn_MBR_CoopAwareness_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CoopAwareness_H_ */
#include <etsi_its_cam_coding/asn_internal.h>