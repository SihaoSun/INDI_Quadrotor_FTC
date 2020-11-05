#include "__cf_URControl_att.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME URControl_att_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "URControl_att_types.h"
#include "URControl_att.h"
#include "URControl_att_private.h"
struct_I1MFrEjvpMwyFfAGGP9FCC rtP_par = { 500.0 , 9.81 , 1200.0 , 0.0 ,
1256.0 , 300.0 , 0.374 , 4.0 , 0.0 , { { 0.0 , 0.0 , - 1.0 } , {
0.0014476067249728415 , 0.0 , 2.30441852439024e-5 , 0.0 ,
0.0012553745877489874 , 0.0 , 2.30441852439024e-5 , 0.0 ,
0.0025202784367571356 } , { 4.2e-6 , 0.0 , 0.0 , 0.0 , 4.2e-6 , 0.0 , 0.0 ,
0.0 , 8.0e-6 } , 0.07 , 0.4 , 4.0 , 0.0 , - 1.0 , { 1.0 , 0.52631578947368418
, { 0.8 , 0.8 , 0.0 } , 4.0 , { 10.0 , 10.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } ,
1.0 } , { 1.0 , 1.0 , 4.0 , 10.0 , 20.0 , 1.0 , 0.52631578947368418 ,
1.2280701754385965 , 1600.0 , 4000.0 } , { 1.0 , 0.5 , 2.0 } } , { 1.9035e-6
, 1.9202951e-8 , 0.115 , 0.0875 , 0.0014 , 0.0013 , 0.0025 ,
0.00191049731745428 , 0.00191049731745428 , 0.14450346016618426 , 0.374 ,
9.81 , 0.0 , 300.0 , 1200.0 , 300.0 , - 1.0 , { 0.70710678118654768 ,
0.70710678118654768 , - 0.53801602916367752 , 0.53801602916367752 } , 0.0 ,
0.0 , 0.75 , 0.5 , 0.5 , 0.85 , 1.0 , { 0.01 , 0.01 , 0.01 , 0.1 , 0.1 , 0.1
, 0.001 , 0.001 , 0.001 , 0.001 } , { 0.1 , 0.1 , 0.1 , 0.2 , 0.2 , 0.2 , 0.2
} , 1.0 , 0.61403508771929827 , 0.26315789473684209 , { 1.5 , 1.5 , 1.5 } ,
4.0 , { 2.0 , 2.0 , 2.0 } , { 1.0 , 1.0 , 1.0 } , 0.2 , 0.7 , - 2.0 , 1.0 ,
2.0 , 4.0 , 0.8 , 15.0 , 15.0 , 0.5 , 0.52631578947368418 ,
1.2280701754385965 , 1.0 , 5.0 , 2.0 , 20.0 , 0.0 , 0.0 , 50.0 , - 0.5 , -
0.1 , 0.0 , { 0.0 , 0.0 , - 1.0 } , 0.0 , - 10.0 , 15.0 , 200.0 ,
1.2217304763960306 , 0.2 , 4.0 , 0.01 , 10.0 , 2.0 , - 3.0 , 2.0 , 1.0 , {
15.0 , 15.0 , 3.0 } , { 0.0 , 0.0 , 0.0 } , { 0.3 , 0.3 , 0.01 } , 0.8 , 0.8
, 0.5 , 1.0 , { 0.4 , 0.4 , 0.045 } , 10000.0 , 10000.0 , 100.0 , 4.0 , 0.0 ,
100000.0 , 10.0 , 1.0 , 0.1 , 5.0 , 0.0 , 0.13 , 0.0 , 300.0 , 0.0 , 0.0 ,
0.3 , 4.0 , 2.0 , 0.0 , - 1.0 , { 150.0 , 150.0 , 100.0 , - 8.0 , - 150.0 ,
150.0 , - 100.0 , - 8.0 , - 150.0 , - 150.0 , 100.0 , - 8.0 , 150.0 , - 150.0
, - 100.0 , - 8.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , - 1.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , - 1.0 , 0.0 } , { 30.0 , 30.0 , 3.0 } , 0.98 ,
0.9 , 600.0 , { 40.0 , 40.0 , 2.0 } , 0.9 , { 20.0 , 20.0 , 1.0 } , 150.0 ,
150.0 , - 100.0 , 5.0 , { 0.0 , 1.0 , - 1.0 , - 1.0 , - 1.0 , 0.0 , 1.0 , -
1.0 , 0.0 , - 1.0 , - 1.0 , - 1.0 , 1.0 , 0.0 , 1.0 , - 1.0 } , { 10000.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 100.0 } , { 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 } , 200.0 , { 100.0 ,
100.0 , 50.0 , 20.0 } , { 30.0 , 30.0 , 10.0 , 2.0 } , 0.2 } , {
1277.5810124598493 , 314.15926535897933 } } ; URControlParamsType
rtP_URControlParams = { 1.9035e-6 , 1.9202951e-8 , 0.115 , 0.0875 , 0.0014 ,
0.0013 , 0.0025 , 0.00191049731745428 , 0.00191049731745428 ,
0.14450346016618426 , 0.374 , 9.81 , 0.0 , 300.0 , 1200.0 , 300.0 , - 1.0 , {
0.70710678118654768 , 0.70710678118654768 , - 0.53801602916367752 ,
0.53801602916367752 } , 0.0 , 0.0 , 0.75 , 0.5 , 0.5 , 0.85 , 1.0 , { 0.01 ,
0.01 , 0.01 , 0.1 , 0.1 , 0.1 , 0.001 , 0.001 , 0.001 , 0.001 } , { 0.1 , 0.1
, 0.1 , 0.2 , 0.2 , 0.2 , 0.2 } , 1.0 , 0.61403508771929827 ,
0.26315789473684209 , { 1.5 , 1.5 , 1.5 } , 4.0 , { 2.0 , 2.0 , 2.0 } , { 1.0
, 1.0 , 1.0 } , 0.2 , 0.7 , - 2.0 , 1.0 , 2.0 , 4.0 , 0.8 , 15.0 , 15.0 , 0.5
, 0.52631578947368418 , 1.2280701754385965 , 1.0 , 5.0 , 2.0 , 20.0 , 0.0 ,
0.0 , 50.0 , - 0.5 , - 0.1 , 0.0 , { 0.0 , 0.0 , - 1.0 } , 0.0 , - 10.0 ,
15.0 , 200.0 , 1.2217304763960306 , 0.2 , 4.0 , 0.01 , 10.0 , 2.0 , - 3.0 ,
2.0 , 1.0 , { 15.0 , 15.0 , 3.0 } , { 0.0 , 0.0 , 0.0 } , { 0.3 , 0.3 , 0.01
} , 0.8 , 0.8 , 0.5 , 1.0 , { 0.4 , 0.4 , 0.045 } , 10000.0 , 10000.0 , 100.0
, 4.0 , 0.0 , 100000.0 , 10.0 , 1.0 , 0.1 , 5.0 , 0.0 , 0.13 , 0.0 , 300.0 ,
0.0 , 0.0 , 0.3 , 4.0 , 2.0 , 0.0 , - 1.0 , { 150.0 , 150.0 , 100.0 , - 8.0 ,
- 150.0 , 150.0 , - 100.0 , - 8.0 , - 150.0 , - 150.0 , 100.0 , - 8.0 , 150.0
, - 150.0 , - 100.0 , - 8.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , - 1.0 , 0.0
, 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , - 1.0 , 0.0 } , { 30.0 , 30.0 , 3.0 } ,
0.98 , 0.9 , 600.0 , { 40.0 , 40.0 , 2.0 } , 0.9 , { 20.0 , 20.0 , 1.0 } ,
150.0 , 150.0 , - 100.0 , 5.0 , { 0.0 , 1.0 , - 1.0 , - 1.0 , - 1.0 , 0.0 ,
1.0 , - 1.0 , 0.0 , - 1.0 , - 1.0 , - 1.0 , 1.0 , 0.0 , 1.0 , - 1.0 } , {
10000.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 0.0 , 100.0 } , { 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 } , 200.0 , {
100.0 , 100.0 , 50.0 , 20.0 } , { 30.0 , 30.0 , 10.0 , 2.0 } , 0.2 } ; const
char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const char *
rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( SimStruct * S , void * diag ) { if ( !
_ssIsErrorStatusAslErrMsg ( S ) ) { _ssSet_slErrMsg ( S , diag ) ; } else {
_ssDiscardDiagnostic ( S , diag ) ; } } void rt_ssReportDiagnosticAsWarning (
SimStruct * S , void * diag ) { _ssReportDiagnosticAsWarning ( S , diag ) ; }
const char * rt_CreateFullPathToTop ( const char * toppath , const char *
subpath ) { char * fullpath = NULL ; slmrCreateFullPathToTop ( toppath ,
subpath , & fullpath ) ; return fullpath ; } boolean_T
slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) {
struct_I1MFrEjvpMwyFfAGGP9FCC * GlobalPrm_0 = ( struct_I1MFrEjvpMwyFfAGGP9FCC
* ) NULL ; URControlParamsType * GlobalPrm_1 = ( URControlParamsType * ) NULL
; if ( ! ssGetModelRefGlobalParamData ( S , 0 , ( void * * ) ( & GlobalPrm_0
) ) ) return ; if ( GlobalPrm_0 != NULL ) { ( void ) memcpy ( & ( rtP_par ) ,
GlobalPrm_0 , sizeof ( struct_I1MFrEjvpMwyFfAGGP9FCC ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 1 , ( void * * ) ( & GlobalPrm_1 ) ) )
return ; if ( GlobalPrm_1 != NULL ) { ( void ) memcpy ( & (
rtP_URControlParams ) , GlobalPrm_1 , sizeof ( URControlParamsType ) ) ; } }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { n1on0q44qbp * dw = (
n1on0q44qbp * ) ssGetDWork ( S , 0 ) ; bs1wowywlh ( & ( dw -> rtdw ) ) ; }
static void mdlReset ( SimStruct * S ) { n1on0q44qbp * dw = ( n1on0q44qbp * )
ssGetDWork ( S , 0 ) ; ikfy2u5s1t ( & ( dw -> rtdw ) ) ; } static void
mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { n1on0q44qbp * dw = (
n1on0q44qbp * ) ssGetDWork ( S , 0 ) ; const real_T * i_ROOT_U0 = ( real_T *
) ssGetInputPortSignal ( S , 0 ) ; const real_T * i_ROOT_U1 = ( real_T * )
ssGetInputPortSignal ( S , 1 ) ; const real_T * i_ROOT_U2 = ( real_T * )
ssGetInputPortSignal ( S , 2 ) ; const real_T * i_ROOT_U3 = ( real_T * )
ssGetInputPortSignal ( S , 3 ) ; const real_T * i_ROOT_U4 = ( real_T * )
ssGetInputPortSignal ( S , 4 ) ; const real_T * i_ROOT_U5 = ( real_T * )
ssGetInputPortSignal ( S , 5 ) ; const real_T * i_ROOT_U6 = ( real_T * )
ssGetInputPortSignal ( S , 6 ) ; const real_T * i_ROOT_U7 = ( real_T * )
ssGetInputPortSignal ( S , 7 ) ; const real_T * i_ROOT_U8 = ( real_T * )
ssGetInputPortSignal ( S , 8 ) ; const real_T * i_ROOT_U9 = ( real_T * )
ssGetInputPortSignal ( S , 9 ) ; const real_T * i_ROOT_U10 = ( real_T * )
ssGetInputPortSignal ( S , 10 ) ; const real_T * i_ROOT_U11 = ( real_T * )
ssGetInputPortSignal ( S , 11 ) ; const real_T * i_ROOT_U12 = ( real_T * )
ssGetInputPortSignal ( S , 12 ) ; const real_T * i_ROOT_U13 = ( real_T * )
ssGetInputPortSignal ( S , 13 ) ; const real_T * i_ROOT_U14 = ( real_T * )
ssGetInputPortSignal ( S , 14 ) ; const real_T * i_ROOT_U15 = ( real_T * )
ssGetInputPortSignal ( S , 15 ) ; const real_T * i_l1yv2tm2bc = ( real_T * )
ssGetInputPortSignal ( S , 16 ) ; const real_T * i_jtus4fwwlh = ( real_T * )
ssGetInputPortSignal ( S , 17 ) ; const real_T * i_ROOT_U18 = ( real_T * )
ssGetInputPortSignal ( S , 18 ) ; const real_T * i_ROOT_U19 = ( real_T * )
ssGetInputPortSignal ( S , 19 ) ; const real_T * i_ROOT_U20 = ( real_T * )
ssGetInputPortSignal ( S , 20 ) ; const real_T * i_ROOT_U21 = ( real_T * )
ssGetInputPortSignal ( S , 21 ) ; const real_T * i_i_ifu3dtfjvm = ( real_T *
) ssGetInputPortSignal ( S , 22 ) ; const real_T * i_midjagfjkn = ( real_T *
) ssGetInputPortSignal ( S , 23 ) ; const real_T * i_fajvlfbc00 = ( real_T *
) ssGetInputPortSignal ( S , 24 ) ; real_T * o_B_5_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; if ( tid == 0 ) { URControl_att ( & ( dw ->
rtm ) , i_ROOT_U0 , i_ROOT_U1 , i_ROOT_U2 , i_ROOT_U3 , i_ROOT_U4 , i_ROOT_U5
, i_ROOT_U6 , i_ROOT_U7 , i_ROOT_U8 , i_ROOT_U9 , i_ROOT_U10 , i_ROOT_U11 ,
i_ROOT_U12 , i_ROOT_U13 , i_ROOT_U14 , i_ROOT_U15 , i_l1yv2tm2bc ,
i_jtus4fwwlh , i_ROOT_U18 , i_ROOT_U19 , i_ROOT_U20 , i_ROOT_U21 ,
i_i_ifu3dtfjvm , i_midjagfjkn , i_fajvlfbc00 , o_B_5_1 , & ( dw -> rtb ) , &
( dw -> rtdw ) ) ; f1hstsqruw ( i_i_ifu3dtfjvm , & ( dw -> rtb ) , & ( dw ->
rtdw ) ) ; } } static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S ->
mdlInfo -> genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S
, GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ;
} ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetSymbolicDimsSupport ( S , true ) ;
slmrInitializeIOPortDataVectors ( S , 25 , 1 ) ; if ( ! ssSetNumInputPorts (
S , 25 ) ) return ; if ( ! ssSetInputPortMatrixDimensions ( S , 0 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 1 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 1 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 2 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 3 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 3 ,
false ) ; ssSetInputPortSampleTime ( S , 3 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 3 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 4 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 4 ,
false ) ; ssSetInputPortSampleTime ( S , 4 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 4 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 5 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 5 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 5 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 5 , 1 ) ; ssSetInputPortOptimOpts ( S
, 5 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 5 ,
false ) ; ssSetInputPortSampleTime ( S , 5 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 5 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 6 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 6 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 6 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 6 , 1 ) ; ssSetInputPortOptimOpts ( S
, 6 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 6 ,
false ) ; ssSetInputPortSampleTime ( S , 6 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 6 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 7 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 7 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 7 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 7 , 1 ) ; ssSetInputPortOptimOpts ( S
, 7 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 7 ,
false ) ; ssSetInputPortSampleTime ( S , 7 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 7 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 8 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 8 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 8 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 8 , 1 ) ; ssSetInputPortOptimOpts ( S
, 8 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 8 ,
false ) ; ssSetInputPortSampleTime ( S , 8 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 8 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 9 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 9 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 9 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 9 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 9 , 1 ) ; ssSetInputPortOptimOpts ( S
, 9 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 9 ,
false ) ; ssSetInputPortSampleTime ( S , 9 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 9 , 0.0 ) ; if ( ! ssSetInputPortMatrixDimensions ( S , 10 , 1 , 3 ) )
return ; ssSetInputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 10 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 10 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 10 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 10 , 1 ) ; ssSetInputPortOptimOpts ( S
, 10 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 10 ,
false ) ; ssSetInputPortSampleTime ( S , 10 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 10 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 11 , 1 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 11 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 11 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 11 , 1 ) ; ssSetInputPortOptimOpts ( S
, 11 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 11 ,
false ) ; ssSetInputPortSampleTime ( S , 11 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 11 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 12 , 1 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 12 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 12 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 12 , 1 ) ; ssSetInputPortOptimOpts ( S
, 12 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 12 ,
false ) ; ssSetInputPortSampleTime ( S , 12 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 12 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 13 , 1 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 13 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 13 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 13 , 1 ) ; ssSetInputPortOptimOpts ( S
, 13 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 13 ,
false ) ; ssSetInputPortSampleTime ( S , 13 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 13 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 14 , 1 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 14 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 14 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 14 , 1 ) ; ssSetInputPortOptimOpts ( S
, 14 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 14 ,
false ) ; ssSetInputPortSampleTime ( S , 14 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 14 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 15 , 1 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 15 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 15 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 15 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 15 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 15 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 15 , 1 ) ; ssSetInputPortOptimOpts ( S
, 15 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 15 ,
false ) ; ssSetInputPortSampleTime ( S , 15 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 15 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 16 , 1 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 16 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 16 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 16 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 16 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 16 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 16 , 1 ) ; ssSetInputPortOptimOpts ( S
, 16 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 16 ,
false ) ; ssSetInputPortSampleTime ( S , 16 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 16 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 17 , 1 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 17 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 17 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 17 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 17 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 17 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 17 , 1 ) ; ssSetInputPortOptimOpts ( S
, 17 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 17 ,
false ) ; ssSetInputPortSampleTime ( S , 17 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 17 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 18 , 2 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 18 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 18 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 18 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 18 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 18 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 18 , 1 ) ; ssSetInputPortOptimOpts ( S
, 18 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 18 ,
false ) ; ssSetInputPortSampleTime ( S , 18 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 18 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 19 , 2 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 19 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 19 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 19 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 19 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 19 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 19 , 1 ) ; ssSetInputPortOptimOpts ( S
, 19 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 19 ,
false ) ; ssSetInputPortSampleTime ( S , 19 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 19 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 20 , 2 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 20 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 20 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 20 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 20 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 20 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 20 , 1 ) ; ssSetInputPortOptimOpts ( S
, 20 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 20 ,
false ) ; ssSetInputPortSampleTime ( S , 20 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 20 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 21 , 2 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 21 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 21 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 21 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 21 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 21 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 21 , 1 ) ; ssSetInputPortOptimOpts ( S
, 21 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 21 ,
false ) ; ssSetInputPortSampleTime ( S , 21 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 21 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 22 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 22 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 22 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 22 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 22 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 22 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 22 , 1 ) ; ssSetInputPortOptimOpts ( S
, 22 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 22 ,
false ) ; ssSetInputPortSampleTime ( S , 22 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 22 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 23 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 23 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 23 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 23 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 23 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 23 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 23 , 1 ) ; ssSetInputPortOptimOpts ( S
, 23 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 23 ,
false ) ; ssSetInputPortSampleTime ( S , 23 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 23 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 24 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 24 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 24 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 24 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 24 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 24 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 24 , 1 ) ; ssSetInputPortOptimOpts ( S
, 24 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 24 ,
false ) ; ssSetInputPortSampleTime ( S , 24 , 0.2 ) ;
ssSetInputPortOffsetTime ( S , 24 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S ,
1 ) ) return ; if ( ! ssSetOutputPortVectorDimension ( S , 0 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.2 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_URControl_att_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S ,
PORT_BASED_SAMPLE_TIMES ) ; ssSetParameterTuningCompliance ( S , true ) ;
ssSetNumRWork ( S , 0 ) ; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ;
ssSetNumModes ( S , 0 ) ; { int_T zcsIdx = 0 ; }
ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 5 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 6 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 7 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 8 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 9 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 10 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 11 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 12 , 1 ) ; ssSetInputPortIsNotDerivPort (
S , 13 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 14 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 15 , 1 ) ; ssSetInputPortIsNotDerivPort (
S , 16 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 17 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 18 , 1 ) ; ssSetInputPortIsNotDerivPort (
S , 19 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 20 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 21 , 1 ) ; ssSetInputPortIsNotDerivPort (
S , 22 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 23 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 24 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetRuntimeThreadSafetyCompliance ( S ,
RUNTIME_THREAD_SAFETY_COMPLIANCE_TRUE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:LoggingBlockDoesNotSupportMultiExecInstancesWithCustomMsg\" pr=\"d\"><arguments><arg type=\"encoded\">VQBSAEMAbwBuAHQAcgBvAGwAXwBhAHQAdAAvAHMAdABhAHQAZQAAAA==</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments><hs><h>AAAACADivEAA</h></hs><causes><diag id=\"Simulink:logLoadBlocks:SigLogMultiExecInsNoBusSupportMsg\" pr=\"d\"><msg encoded=\"yes\">TwBuAGwAeQAgAG4AbwBuAC0AYgB1AHMAIABzAGkAZwBuAGEAbABzACAAYwBhAG4AIABiAGUAIABsAG8AZwBnAGUAZAAgAGkAbgBzAGkAZABlACAARgBvAHIAIABFAGEAYwBoACAAcwB1AGIAcwB5AHMAdABlAG0AcwAuAAAA</msg></diag></causes></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME
| SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_URControl_att_MdlInfoRegFcn ( S , "URControl_att" , & retVal ) ; if ( !
retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( n1on0q44qbp ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "9.3" ) ; ssSetNeedAbsoluteTime ( S , 1
) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) { return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { n1on0q44qbp * dw = (
n1on0q44qbp * ) ssGetDWork ( S , 0 ) ; void * sysRanPtr = ( NULL ) ; int
sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid
( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } bhacg1jiy0
( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) , & ( dw -> rtm ) , &
( dw -> rtb ) , & ( dw -> rtdw ) , sysRanPtr , sysTid , ( NULL ) , ( NULL ) ,
0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo . mmi
) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; } l41sn0mktw ( & ( dw -> rtm ) , & ( dw -> rtdw ) ) ;
}
#define MDL_START
static void mdlStart ( SimStruct * S ) { n1on0q44qbp * dw = ( n1on0q44qbp * )
ssGetDWork ( S , 0 ) ; mdlProcessParameters ( S ) ; gtauznb10g ( & ( dw ->
rtdw ) ) ; } static void mdlOutputs ( SimStruct * S , int_T tid ) {
n1on0q44qbp * dw = ( n1on0q44qbp * ) ssGetDWork ( S , 0 ) ; const real_T *
i_ROOT_U0 = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; const real_T *
i_ROOT_U1 = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; const real_T *
i_ROOT_U2 = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; const real_T *
i_ROOT_U3 = ( real_T * ) ssGetInputPortSignal ( S , 3 ) ; const real_T *
i_ROOT_U4 = ( real_T * ) ssGetInputPortSignal ( S , 4 ) ; const real_T *
i_ROOT_U5 = ( real_T * ) ssGetInputPortSignal ( S , 5 ) ; const real_T *
i_ROOT_U6 = ( real_T * ) ssGetInputPortSignal ( S , 6 ) ; const real_T *
i_ROOT_U7 = ( real_T * ) ssGetInputPortSignal ( S , 7 ) ; const real_T *
i_ROOT_U8 = ( real_T * ) ssGetInputPortSignal ( S , 8 ) ; const real_T *
i_ROOT_U9 = ( real_T * ) ssGetInputPortSignal ( S , 9 ) ; const real_T *
i_ROOT_U10 = ( real_T * ) ssGetInputPortSignal ( S , 10 ) ; const real_T *
i_ROOT_U11 = ( real_T * ) ssGetInputPortSignal ( S , 11 ) ; const real_T *
i_ROOT_U12 = ( real_T * ) ssGetInputPortSignal ( S , 12 ) ; const real_T *
i_ROOT_U13 = ( real_T * ) ssGetInputPortSignal ( S , 13 ) ; const real_T *
i_ROOT_U14 = ( real_T * ) ssGetInputPortSignal ( S , 14 ) ; const real_T *
i_ROOT_U15 = ( real_T * ) ssGetInputPortSignal ( S , 15 ) ; const real_T *
i_l1yv2tm2bc = ( real_T * ) ssGetInputPortSignal ( S , 16 ) ; const real_T *
i_jtus4fwwlh = ( real_T * ) ssGetInputPortSignal ( S , 17 ) ; const real_T *
i_ROOT_U18 = ( real_T * ) ssGetInputPortSignal ( S , 18 ) ; const real_T *
i_ROOT_U19 = ( real_T * ) ssGetInputPortSignal ( S , 19 ) ; const real_T *
i_ROOT_U20 = ( real_T * ) ssGetInputPortSignal ( S , 20 ) ; const real_T *
i_ROOT_U21 = ( real_T * ) ssGetInputPortSignal ( S , 21 ) ; const real_T *
i_i_ifu3dtfjvm = ( real_T * ) ssGetInputPortSignal ( S , 22 ) ; const real_T
* i_midjagfjkn = ( real_T * ) ssGetInputPortSignal ( S , 23 ) ; const real_T
* i_fajvlfbc00 = ( real_T * ) ssGetInputPortSignal ( S , 24 ) ; real_T *
o_B_5_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; if ( tid !=
CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { URControl_att ( & ( dw -> rtm
) , i_ROOT_U0 , i_ROOT_U1 , i_ROOT_U2 , i_ROOT_U3 , i_ROOT_U4 , i_ROOT_U5 ,
i_ROOT_U6 , i_ROOT_U7 , i_ROOT_U8 , i_ROOT_U9 , i_ROOT_U10 , i_ROOT_U11 ,
i_ROOT_U12 , i_ROOT_U13 , i_ROOT_U14 , i_ROOT_U15 , i_l1yv2tm2bc ,
i_jtus4fwwlh , i_ROOT_U18 , i_ROOT_U19 , i_ROOT_U20 , i_ROOT_U21 ,
i_i_ifu3dtfjvm , i_midjagfjkn , i_fajvlfbc00 , o_B_5_1 , & ( dw -> rtb ) , &
( dw -> rtdw ) ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n1on0q44qbp * dw = (
n1on0q44qbp * ) ssGetDWork ( S , 0 ) ; const real_T * i_i_ifu3dtfjvm = (
real_T * ) ssGetInputPortSignal ( S , 22 ) ; f1hstsqruw ( i_i_ifu3dtfjvm , &
( dw -> rtb ) , & ( dw -> rtdw ) ) ; return ; } static void mdlTerminate (
SimStruct * S ) { n1on0q44qbp * dw = ( n1on0q44qbp * ) ssGetDWork ( S , 0 ) ;
m0okbdf3gm ( & ( dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { n1on0q44qbp * dw =
( n1on0q44qbp * ) ssGetDWork ( S , 0 ) ; m5kmj2htr4 ( & ( dw -> rtm ) , & (
dw -> rtdw ) ) ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
simStateFieldNames ) ; { mxArray * mdlrefDW = mr_URControl_att_GetDWork (
ssGetDWork ( S , 0 ) ) ; mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } {
mxArray * data = mr_URControl_att_GetSimStateDisallowedBlocks ( ) ;
mxSetFieldByNumber ( ss , 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 ,
3 , mxCreateDoubleScalar ( ( double ) ssGetTNext ( S ) ) ) ;
mxSetFieldByNumber ( ss , 0 , 4 , mxCreateDoubleScalar ( ( double )
ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) {
mr_URControl_att_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss ,
0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss
, 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
