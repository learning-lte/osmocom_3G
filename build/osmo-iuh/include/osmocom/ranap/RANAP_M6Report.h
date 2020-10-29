/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_M6Report_H_
#define	_RANAP_M6Report_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_M6-Period.h>
#include <osmocom/ranap/RANAP_Links-to-log.h>
#include <osmocom/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_M6Report */
typedef struct RANAP_M6Report {
	RANAP_M6_Period_t	 m6_period;
	RANAP_Links_to_log_t	 m6_links_to_log;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_M6Report_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_M6Report;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_M6Report_H_ */
#include <asn_internal.h>