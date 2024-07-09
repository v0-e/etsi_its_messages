/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_Ext1_H_
#define	_cpm_Ext1_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>
#include "etsi_its_cpm_coding/cpm_Ext2.h"
#include <etsi_its_cpm_coding/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_Ext1_PR {
	cpm_Ext1_PR_NOTHING,	/* No components present */
	cpm_Ext1_PR_content,
	cpm_Ext1_PR_extension
} cpm_Ext1_PR;

/* cpm_Ext1 */
typedef struct cpm_Ext1 {
	cpm_Ext1_PR present;
	union cpm_Ext1_u {
		long	 content;
		cpm_Ext2_t	 extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_Ext1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_Ext1;
extern asn_CHOICE_specifics_t asn_SPC_cpm_Ext1_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_Ext1_1[2];
extern asn_per_constraints_t asn_PER_type_cpm_Ext1_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_Ext1_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>