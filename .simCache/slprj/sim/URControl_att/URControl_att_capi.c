#include "__cf_URControl_att.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "URControl_att_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "URControl_att.h"
#include "URControl_att_capi.h"
#include "URControl_att_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 22 , 0 } , { "acc" , 0 , - 1 } , { "accf" , 0 , - 1 } , { "vel" , 0 , - 1 }
, { "velf" , 0 , - 1 } , { "velB" , 0 , - 1 } , { "pos" , 0 , - 1 } , {
"posf" , 0 , - 1 } , { "omega" , 0 , - 1 } , { "omegaf" , 0 , - 1 } , { "att"
, 0 , - 1 } , { "n" , 0 , - 1 } , { "wRotor" , 0 , - 1 } , { "omegaUV" , 0 ,
- 1 } , { "omegafUV" , 0 , - 1 } , { "FMax" , 0 , - 1 } , { "FMin" , 0 , - 1
} , { "fail_id" , 0 , - 1 } , { "fail_id_quick" , 0 , - 1 } , { "uvDot_max" ,
0 , - 1 } , { "uvDot_min" , 0 , - 1 } , { "uv_max" , 0 , - 1 } , { "uv_min" ,
0 , - 1 } } ; static const uint_T rtSigHierLoggingChildIdxs [ ] = { 1 , 2 , 3
, 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 ,
20 , 21 , 22 } ; static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States
rtBlockStates [ ] = { { 0 , - 1 , TARGET_STRING (
"URControl_att/attitude controlller/Discrete State-Space" ) , TARGET_STRING (
"DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING ( "URControl_att/attitude controlller/Discrete Derivative/UD" )
, TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 ,
- 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void URControl_att_InitializeDataAddr ( void * dataAddr [ ] ,
cq2d5gococ * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
gun3mm4dej [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> d4phfsngrv [
0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void URControl_att_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void URControl_att_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 3 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.2 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 6 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 6 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 23 , rtSigHierLoggingInfo , rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , (
NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockStates , 2 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 395137876U
, 1460704353U , 3277793470U , 2113101908U } , & mmiStaticInfoLogging , 0 , 0
} ; const rtwCAPI_ModelMappingStaticInfo * URControl_att_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void URControl_att_InitializeSystemRan ( np1m13vojf * const p4pqnuzidr
, sysRanDType * systemRan [ ] , cq2d5gococ * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( p4pqnuzidr ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemTid [ 1 ] = p4pqnuzidr -> Timing . mdlref_GlobalTID [ 0 ] ;
systemTid [ 2 ] = p4pqnuzidr -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
3 ] = p4pqnuzidr -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] =
p4pqnuzidr -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = p4pqnuzidr
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [
2 ] = 0 ; rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ;
rtContextSystems [ 5 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void URControl_att_InitializeDataMapInfo ( np1m13vojf * const p4pqnuzidr ,
cq2d5gococ * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( p4pqnuzidr -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( p4pqnuzidr -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( p4pqnuzidr -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; URControl_att_InitializeDataAddr ( p4pqnuzidr ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
p4pqnuzidr -> DataMapInfo . mmi , p4pqnuzidr -> DataMapInfo . dataAddress ) ;
URControl_att_InitializeVarDimsAddr ( p4pqnuzidr -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( p4pqnuzidr -> DataMapInfo .
mmi , p4pqnuzidr -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
p4pqnuzidr -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
p4pqnuzidr -> DataMapInfo . mmi , ( NULL ) ) ;
URControl_att_InitializeLoggingFunctions ( p4pqnuzidr -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( p4pqnuzidr -> DataMapInfo . mmi ,
p4pqnuzidr -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
p4pqnuzidr -> DataMapInfo . mmi , & p4pqnuzidr -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( p4pqnuzidr -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( p4pqnuzidr -> DataMapInfo .
mmi , 0 ) ; URControl_att_InitializeSystemRan ( p4pqnuzidr , p4pqnuzidr ->
DataMapInfo . systemRan , localDW , p4pqnuzidr -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( p4pqnuzidr -> DataMapInfo .
mmi , p4pqnuzidr -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
p4pqnuzidr -> DataMapInfo . mmi , p4pqnuzidr -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( p4pqnuzidr -> DataMapInfo . mmi , & p4pqnuzidr ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void URControl_att_host_InitializeDataMapInfo (
URControl_att_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
