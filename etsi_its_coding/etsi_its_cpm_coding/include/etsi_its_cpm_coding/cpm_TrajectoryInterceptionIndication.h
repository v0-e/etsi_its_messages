/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_TrajectoryInterceptionIndication_H_
#define	_cpm_TrajectoryInterceptionIndication_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_coding/cpm_StationId.h"
#include "etsi_its_cpm_coding/cpm_TrajectoryInterceptionProbability.h"
#include "etsi_its_cpm_coding/cpm_TrajectoryInterceptionConfidence.h"
#include <etsi_its_cpm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_TrajectoryInterceptionIndication */
typedef struct cpm_TrajectoryInterceptionIndication {
	cpm_StationId_t	*subjectStation;	/* OPTIONAL */
	cpm_TrajectoryInterceptionProbability_t	 trajectoryInterceptionProbability;
	cpm_TrajectoryInterceptionConfidence_t	*trajectoryInterceptionConfidence;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_TrajectoryInterceptionIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_TrajectoryInterceptionIndication;
extern asn_SEQUENCE_specifics_t asn_SPC_cpm_TrajectoryInterceptionIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_TrajectoryInterceptionIndication_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_TrajectoryInterceptionIndication_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>