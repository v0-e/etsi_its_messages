/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_DangerousGoodsBasic_H_
#define	_denm_DangerousGoodsBasic_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_DangerousGoodsBasic {
	denm_DangerousGoodsBasic_explosives1	= 0,
	denm_DangerousGoodsBasic_explosives2	= 1,
	denm_DangerousGoodsBasic_explosives3	= 2,
	denm_DangerousGoodsBasic_explosives4	= 3,
	denm_DangerousGoodsBasic_explosives5	= 4,
	denm_DangerousGoodsBasic_explosives6	= 5,
	denm_DangerousGoodsBasic_flammableGases	= 6,
	denm_DangerousGoodsBasic_nonFlammableGases	= 7,
	denm_DangerousGoodsBasic_toxicGases	= 8,
	denm_DangerousGoodsBasic_flammableLiquids	= 9,
	denm_DangerousGoodsBasic_flammableSolids	= 10,
	denm_DangerousGoodsBasic_substancesLiableToSpontaneousCombustion	= 11,
	denm_DangerousGoodsBasic_substancesEmittingFlammableGasesUponContactWithWater	= 12,
	denm_DangerousGoodsBasic_oxidizingSubstances	= 13,
	denm_DangerousGoodsBasic_organicPeroxides	= 14,
	denm_DangerousGoodsBasic_toxicSubstances	= 15,
	denm_DangerousGoodsBasic_infectiousSubstances	= 16,
	denm_DangerousGoodsBasic_radioactiveMaterial	= 17,
	denm_DangerousGoodsBasic_corrosiveSubstances	= 18,
	denm_DangerousGoodsBasic_miscellaneousDangerousSubstances	= 19
} e_denm_DangerousGoodsBasic;

/* denm_DangerousGoodsBasic */
typedef long	 denm_DangerousGoodsBasic_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_DangerousGoodsBasic_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_DangerousGoodsBasic;
extern const asn_INTEGER_specifics_t asn_SPC_denm_DangerousGoodsBasic_specs_1;
asn_struct_free_f denm_DangerousGoodsBasic_free;
asn_struct_print_f denm_DangerousGoodsBasic_print;
asn_constr_check_f denm_DangerousGoodsBasic_constraint;
per_type_decoder_f denm_DangerousGoodsBasic_decode_uper;
per_type_encoder_f denm_DangerousGoodsBasic_encode_uper;
per_type_decoder_f denm_DangerousGoodsBasic_decode_aper;
per_type_encoder_f denm_DangerousGoodsBasic_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_DangerousGoodsBasic_H_ */
#include <etsi_its_denm_coding/asn_internal.h>