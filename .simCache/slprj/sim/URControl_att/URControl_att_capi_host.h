#include "__cf_URControl_att.h"
#ifndef RTW_HEADER_URControl_att_cap_host_h_
#define RTW_HEADER_URControl_att_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
URControl_att_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void URControl_att_host_InitializeDataMapInfo (
URControl_att_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
