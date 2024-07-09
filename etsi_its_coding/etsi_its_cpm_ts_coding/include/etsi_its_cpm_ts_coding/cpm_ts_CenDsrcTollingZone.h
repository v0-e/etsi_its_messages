/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_CenDsrcTollingZone_H_
#define	_cpm_ts_CenDsrcTollingZone_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_ts_coding/cpm_ts_Latitude.h"
#include "etsi_its_cpm_ts_coding/cpm_ts_Longitude.h"
#include "etsi_its_cpm_ts_coding/cpm_ts_ProtectedZoneId.h"
#include <etsi_its_cpm_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_ts_CenDsrcTollingZone */
typedef struct cpm_ts_CenDsrcTollingZone {
	cpm_ts_Latitude_t	 protectedZoneLatitude;
	cpm_ts_Longitude_t	 protectedZoneLongitude;
	cpm_ts_ProtectedZoneId_t	*cenDsrcTollingZoneId;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_ts_CenDsrcTollingZone_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_CenDsrcTollingZone;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_CenDsrcTollingZone_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>