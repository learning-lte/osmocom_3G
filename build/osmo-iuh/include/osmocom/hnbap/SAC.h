/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SAC_H_
#define	_SAC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SAC */
typedef OCTET_STRING_t	 SAC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SAC;
asn_struct_free_f SAC_free;
asn_struct_print_f SAC_print;
asn_constr_check_f SAC_constraint;
ber_type_decoder_f SAC_decode_ber;
der_type_encoder_f SAC_encode_der;
xer_type_decoder_f SAC_decode_xer;
xer_type_encoder_f SAC_encode_xer;
per_type_decoder_f SAC_decode_uper;
per_type_encoder_f SAC_encode_uper;
per_type_decoder_f SAC_decode_aper;
per_type_encoder_f SAC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SAC_H_ */
#include <asn_internal.h>