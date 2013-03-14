/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_ReferenceTime_H_
#define	_ReferenceTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GPSTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GSMTime;
struct GPSTOWAssist;

/* ReferenceTime */
typedef struct ReferenceTime {
	GPSTime_t	 gpsTime;
	struct GSMTime	*gsmTime	/* OPTIONAL */;
	struct GPSTOWAssist	*gpsTowAssist	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferenceTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferenceTime;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GSMTime.h"
#include "GPSTOWAssist.h"

#endif	/* _ReferenceTime_H_ */
#include <asn_internal.h>
