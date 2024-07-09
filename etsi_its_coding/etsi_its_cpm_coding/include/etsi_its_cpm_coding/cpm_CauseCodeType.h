/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_CauseCodeType_H_
#define	_cpm_CauseCodeType_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_CauseCodeType {
	cpm_CauseCodeType_trafficCondition	= 1,
	cpm_CauseCodeType_accident	= 2,
	cpm_CauseCodeType_roadworks	= 3,
	cpm_CauseCodeType_impassability	= 5,
	cpm_CauseCodeType_adverseWeatherCondition_Adhesion	= 6,
	cpm_CauseCodeType_aquaplaning	= 7,
	cpm_CauseCodeType_hazardousLocation_SurfaceCondition	= 9,
	cpm_CauseCodeType_hazardousLocation_ObstacleOnTheRoad	= 10,
	cpm_CauseCodeType_hazardousLocation_AnimalOnTheRoad	= 11,
	cpm_CauseCodeType_humanPresenceOnTheRoad	= 12,
	cpm_CauseCodeType_wrongWayDriving	= 14,
	cpm_CauseCodeType_rescueAndRecoveryWorkInProgress	= 15,
	cpm_CauseCodeType_adverseWeatherCondition_ExtremeWeatherCondition	= 17,
	cpm_CauseCodeType_adverseWeatherCondition_Visibility	= 18,
	cpm_CauseCodeType_adverseWeatherCondition_Precipitation	= 19,
	cpm_CauseCodeType_violence	= 20,
	cpm_CauseCodeType_slowVehicle	= 26,
	cpm_CauseCodeType_dangerousEndOfQueue	= 27,
	cpm_CauseCodeType_vehicleBreakdown	= 91,
	cpm_CauseCodeType_postCrash	= 92,
	cpm_CauseCodeType_humanProblem	= 93,
	cpm_CauseCodeType_stationaryVehicle	= 94,
	cpm_CauseCodeType_emergencyVehicleApproaching	= 95,
	cpm_CauseCodeType_hazardousLocation_DangerousCurve	= 96,
	cpm_CauseCodeType_collisionRisk	= 97,
	cpm_CauseCodeType_signalViolation	= 98,
	cpm_CauseCodeType_dangerousSituation	= 99,
	cpm_CauseCodeType_railwayLevelCrossing	= 100
} e_cpm_CauseCodeType;

/* cpm_CauseCodeType */
typedef long	 cpm_CauseCodeType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_CauseCodeType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_CauseCodeType;
asn_struct_free_f cpm_CauseCodeType_free;
asn_struct_print_f cpm_CauseCodeType_print;
asn_constr_check_f cpm_CauseCodeType_constraint;
per_type_decoder_f cpm_CauseCodeType_decode_uper;
per_type_encoder_f cpm_CauseCodeType_encode_uper;
per_type_decoder_f cpm_CauseCodeType_decode_aper;
per_type_encoder_f cpm_CauseCodeType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_CauseCodeType_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>