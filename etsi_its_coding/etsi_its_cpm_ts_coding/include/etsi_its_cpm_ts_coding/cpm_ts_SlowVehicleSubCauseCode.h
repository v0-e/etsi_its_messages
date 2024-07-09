/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_SlowVehicleSubCauseCode_H_
#define	_cpm_ts_SlowVehicleSubCauseCode_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_SlowVehicleSubCauseCode {
	cpm_ts_SlowVehicleSubCauseCode_unavailable	= 0,
	cpm_ts_SlowVehicleSubCauseCode_maintenanceVehicle	= 1,
	cpm_ts_SlowVehicleSubCauseCode_vehiclesSlowingToLookAtAccident	= 2,
	cpm_ts_SlowVehicleSubCauseCode_abnormalLoad	= 3,
	cpm_ts_SlowVehicleSubCauseCode_abnormalWideLoad	= 4,
	cpm_ts_SlowVehicleSubCauseCode_convoy	= 5,
	cpm_ts_SlowVehicleSubCauseCode_snowplough	= 6,
	cpm_ts_SlowVehicleSubCauseCode_deicing	= 7,
	cpm_ts_SlowVehicleSubCauseCode_saltingVehicles	= 8
} e_cpm_ts_SlowVehicleSubCauseCode;

/* cpm_ts_SlowVehicleSubCauseCode */
typedef long	 cpm_ts_SlowVehicleSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ts_SlowVehicleSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_SlowVehicleSubCauseCode;
asn_struct_free_f cpm_ts_SlowVehicleSubCauseCode_free;
asn_struct_print_f cpm_ts_SlowVehicleSubCauseCode_print;
asn_constr_check_f cpm_ts_SlowVehicleSubCauseCode_constraint;
per_type_decoder_f cpm_ts_SlowVehicleSubCauseCode_decode_uper;
per_type_encoder_f cpm_ts_SlowVehicleSubCauseCode_encode_uper;
per_type_decoder_f cpm_ts_SlowVehicleSubCauseCode_decode_aper;
per_type_encoder_f cpm_ts_SlowVehicleSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_SlowVehicleSubCauseCode_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>