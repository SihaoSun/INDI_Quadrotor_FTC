#include "__cf_URControl_att.h"
#include "URControl_att_capi.h"
#include "URControl_att.h"
#include "URControl_att_private.h"
#include "URTrajCalc_6eliAit3.h"
#include "abs_zZTxck9n.h"
#include "eps_0ubcMMgU.h"
#include "norm_BC4t9Zak.h"
#include "norm_MbiXjGcc.h"
#include "pinv_9fLArOC2.h"
#include "sqrt_QJe0JoyR.h"
#include "sum_n7Ci4vKg.h"
static RegMdlInfo rtMdlInfo_URControl_att [ 60 ] = { { "n1on0q44qbp" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "URControl_att" } , {
"dhxz1u0wp0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "jw15zyqmfd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "lkruvpmgwx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"effv1rm5ya" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "prooiqgl1f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "hxce04jmqf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"njj4bwsmvm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "ntri0wwp4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "lzswkvdrv3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"cq2d5gococ" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "n24t031ugl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "luvfta1l2i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"m0okbdf3gm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "m5kmj2htr4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "f1hstsqruw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"ikfy2u5s1t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "bs1wowywlh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "bhacg1jiy0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"gtauznb10g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "l41sn0mktw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "URControl_att" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "axmuo5ebnlu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"bvu2u2r5qw1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "kdqpl0pjmv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "mcammwvno3x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"kmq54thgpfo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "i0e31xqe3y5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "URControl_att" } , { "axmuo5ebnl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"bvu2u2r5qw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "mcammwvno3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "URControl_att" } , { "fe04wjlv5g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "URControl_att" } , {
"np1m13vojf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"URControl_att" } , { "c7_LPFilter_2" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "c7_LPFilter_1" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } ,
{ "c7_SimpleDerivative" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"URControlParamsType" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_I1MFrEjvpMwyFfAGGP9FCC" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_KZWRH8wmRo8gScyf5zlwCH" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_AUMqH5Id4VIkVlIxHJ9GiC" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_AHd68odqz51NWDIFKWnLKG" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_0fFeTh16K9OlBqn6rz4Bo" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_7LbCBzsZMvrHROoJfHBYLD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_Kb4703fKot5WPhaNoNlej" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "stateBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"daqBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_URControl_att_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "URControl_att" } , { "mr_URControl_att_cacheDataAsMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "URControl_att" } , { "mr_URControl_att_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "URControl_att" } , {
"mr_URControl_att_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "URControl_att" } , { "URControl_att.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1
, ( NULL ) } , { "URControl_att.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "URControl_att" } } ; lzq4u2chxjt lzq4u2chxj = { { { 0.0 , 0.0 , 0.0
} , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 }
, { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 } , { 0.0 , 0.0 } , { 0.0 , 0.0 } , { 0.0 ,
0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , {
0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , { 0.0 , 0.0 } , { 0.0 , 0.0 } , { 0.0 , 0.0 ,
0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , {
0.0 , 0.0 } , { 0.0 , 0.0 } , { 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 } , {
0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0
, 0.0 } , 0.0 , { 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0
, 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0
} , { 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 } } , { 1.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 1.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , - 1.0 } , 5.0 } ; static void
kaic05nza1 ( daqBus * daq , const real_T nd_i [ 3 ] , const real_T primAxis [
3 ] , const stateBus * state , const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par ,
const URControlParamsType * URpar , real_T uv_attCtrl [ 2 ] ) ; static
mmgj3pj2nk * osjdnkeb31 ( mmgj3pj2nk * obj , real_T filterT ) ; static
pigtktepdx * jfgjwtbyys ( pigtktepdx * obj , real_T filterT , const real_T
initValue [ 3 ] , real_T maxLim , real_T minLim ) ; static void if55mwg1nh (
pigtktepdx * obj , const real_T newValue [ 3 ] , real_T dt ) ; static void
ggltymhhim ( const real_T state_omegaUV [ 3 ] , const real_T state_omegafUV [
3 ] , daqBus * daq , const real_T uvr_des [ 3 ] , real_T URpar_Iz , real_T
URpar_Iu , real_T URpar_Iv , const real_T URpar_rate_MPID_rateDotKp [ 3 ] ,
const real_T URpar_rate_MPID_rateDotKi [ 3 ] , const real_T
URpar_rate_MPID_rateDotKd [ 3 ] , real_T URpar_rate_MPID_derFilterT , real_T
URpar_rate_MPID_uvrdesderFilterT , real_T URpar_rate_MPID_maxInt , real_T
URpar_rate_MPID_precGain , const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par ,
real_T M_uvr [ 3 ] , cq2d5gococ * localDW ) ; static void frmvotolru ( const
real_T state_wRotor [ 4 ] , const real_T state_omegaUV [ 3 ] , const real_T
state_omegafUV [ 3 ] , daqBus * daq , const real_T uvr_des [ 3 ] , real_T
URpar_k0 , real_T URpar_t0 , real_T URpar_s , real_T URpar_est_omegaFilterT ,
const real_T URpar_rate_MINDI_rateDotKp [ 3 ] , real_T
URpar_rate_MINDI_derFilterT , const real_T URpar_rate_MINDI_MKp [ 3 ] , const
struct_I1MFrEjvpMwyFfAGGP9FCC * b_par , real_T M_uvr [ 3 ] , cq2d5gococ *
localDW ) ; static real_T gqia5ya45p ( int32_T n , const real_T x_data [ ] ,
int32_T ix0 ) ; static int32_T jbjjybpqou ( int32_T n , const real_T x_data [
] , int32_T ix0 ) ; static void ge1clxmtis ( int32_T n , real_T x_data [ ] ,
int32_T ix0 , int32_T iy0 ) ; static real_T mgttfimgbn ( int32_T n , real_T *
alpha1 , real_T x_data [ ] , int32_T ix0 ) ; static void bfoedy2v3e ( int32_T
m , int32_T n , int32_T iv0 , real_T tau , real_T C_data [ ] , int32_T ic0 ,
int32_T ldc , real_T work_data [ ] ) ; static void eaqpnzyo15 ( real_T A_data
[ ] , int32_T A_size [ 2 ] , real_T tau_data [ ] , int32_T * tau_size ,
int32_T jpvt_data [ ] , int32_T jpvt_size [ 2 ] ) ; static void oetne1teg2 (
const real_T A_data [ ] , const int32_T A_size [ 2 ] , const real_T B_data [
] , const int32_T * B_size , real_T Y_data [ ] , int32_T * Y_size ) ; static
void ebouijlb1c ( int32_T m , int32_T n , real_T A_data [ ] , int32_T A_size
[ 2 ] , int32_T lda , int32_T ipiv_data [ ] , int32_T ipiv_size [ 2 ] ,
int32_T * info ) ; static void hwkrnvwbkc ( const real_T A_data [ ] , const
int32_T A_size [ 2 ] , const real_T B_data [ ] , const int32_T * B_size ,
real_T Y_data [ ] , int32_T * Y_size ) ; static void dijvlmzmna ( real_T
refStruct_MuRef , real_T refStruct_MvRef , real_T refStruct_MzRef , real_T
refStruct_FtotRef , const real_T FMax [ 4 ] , const real_T FMin [ 4 ] ,
real_T gainStruct_MuGain , real_T gainStruct_MvGain , real_T
gainStruct_MzGain , real_T gainStruct_FGain , real_T gainStruct_FtotGain ,
real_T y_state_init [ 4 ] , const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par ,
real_T URpar_rate_maxIter , real_T x [ 4 ] , real_T * iterSteps , real_T *
optimal ) ; static void ddjw3qbpuq ( const real_T H [ 25 ] , const real_T c [
5 ] , const real_T A [ 50 ] , const real_T b [ 10 ] , real_T x0 [ 5 ] ,
real_T maxItr , real_T y_state [ 10 ] , real_T * iter , real_T * optimal ) ;
static void e5kulktxfz ( real_T refStruct_MuRef , real_T refStruct_MvRef ,
real_T refStruct_MzRef , real_T refStruct_FtotRef , const real_T state_omegaf
[ 3 ] , const real_T state_FMax [ 4 ] , const real_T state_FMin [ 4 ] ,
real_T state_fail_id , real_T gainStruct_MuGain , real_T gainStruct_MvGain ,
real_T gainStruct_MzGain , real_T gainStruct_FtotGain , const
struct_I1MFrEjvpMwyFfAGGP9FCC * b_par , const URControlParamsType * URpar ,
real_T output [ 4 ] , real_T * iter , real_T * optimal , cq2d5gococ * localDW
) ; static void a255ev1jku ( real_T act_fail_id , const real_T Omega_f_dot [
3 ] , real_T accel_z_f , const real_T v [ 4 ] , real_T G [ 32 ] , const
real_T w_f [ 4 ] , const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par , real_T w_cmd
[ 4 ] , cq2d5gococ * localDW ) ; static void a2kk3tsidk ( const real_T inp [
4 ] , const real_T G [ 16 ] , const real_T K [ 16 ] , const real_T K2 [ 16 ]
, const real_T lowBound [ 4 ] , const real_T highBound [ 4 ] , real_T
y_state_init [ 4 ] , real_T URpar_rate_maxIter , real_T x [ 4 ] , real_T *
iterSteps , real_T * optimal ) ; static void kaic05nza1 ( daqBus * daq ,
const real_T nd_i [ 3 ] , const real_T primAxis [ 3 ] , const stateBus *
state , const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par , const
URControlParamsType * URpar , real_T uv_attCtrl [ 2 ] ) { real_T h [ 3 ] ;
real_T totAngle ; real_T speedAroundVec ; real_T rotAction ; real_T vAngle ;
int32_T signt ; boolean_T y ; boolean_T x [ 3 ] ; real_T h_uv [ 3 ] ; real_T
tmp [ 9 ] ; real_T b_par_p ; real_T h_uv_idx_0 ; real_T rotVec_idx_0 ; real_T
rotVec_idx_1 ; real_T totAngle_tmp ; real_T h_uv_tmp_tmp ; real_T
totAngle_tmp_p ; boolean_T exitg1 ; vAngle = muDoubleScalarCos ( state -> att
[ 1 ] ) ; h_uv_idx_0 = muDoubleScalarCos ( state -> att [ 2 ] ) ; tmp [ 0 ] =
vAngle * h_uv_idx_0 ; b_par_p = muDoubleScalarSin ( state -> att [ 2 ] ) ;
tmp [ 3 ] = vAngle * b_par_p ; totAngle = muDoubleScalarSin ( state -> att [
1 ] ) ; tmp [ 6 ] = - totAngle ; speedAroundVec = muDoubleScalarSin ( state
-> att [ 0 ] ) ; rotAction = speedAroundVec * totAngle ; rotVec_idx_0 =
muDoubleScalarCos ( state -> att [ 0 ] ) ; tmp [ 1 ] = rotAction * h_uv_idx_0
- rotVec_idx_0 * b_par_p ; tmp [ 4 ] = rotAction * b_par_p + rotVec_idx_0 *
h_uv_idx_0 ; tmp [ 7 ] = speedAroundVec * vAngle ; totAngle *= rotVec_idx_0 ;
tmp [ 2 ] = totAngle * h_uv_idx_0 + speedAroundVec * b_par_p ; tmp [ 5 ] =
totAngle * b_par_p - speedAroundVec * h_uv_idx_0 ; tmp [ 8 ] = rotVec_idx_0 *
vAngle ; for ( signt = 0 ; signt < 3 ; signt ++ ) { h [ signt ] = tmp [ signt
+ 6 ] * nd_i [ 2 ] + ( tmp [ signt + 3 ] * nd_i [ 1 ] + tmp [ signt ] * nd_i
[ 0 ] ) ; } h_uv_idx_0 = b_par -> URC . R_xy_uv [ 0 ] * h [ 0 ] + b_par ->
URC . R_xy_uv [ 2 ] * h [ 1 ] ; b_par_p = b_par -> URC . R_xy_uv [ 1 ] * h [
0 ] + b_par -> URC . R_xy_uv [ 3 ] * h [ 1 ] ; daq -> h_uv [ 0 ] = h_uv_idx_0
; daq -> n_uv [ 0 ] = primAxis [ 0 ] ; daq -> h_uv [ 1 ] = b_par_p ; daq ->
n_uv [ 1 ] = primAxis [ 1 ] ; daq -> h_uv [ 2 ] = h [ 2 ] ; daq -> n_uv [ 2 ]
= primAxis [ 2 ] ; rotVec_idx_0 = b_par_p * primAxis [ 2 ] ; speedAroundVec =
rotVec_idx_0 - h [ 2 ] * primAxis [ 1 ] ; h_uv [ 0 ] = speedAroundVec ;
rotVec_idx_1 = h_uv_idx_0 * primAxis [ 2 ] ; h_uv [ 1 ] = h [ 2 ] * primAxis
[ 0 ] - rotVec_idx_1 ; rotAction = b_par_p * primAxis [ 0 ] ; h_uv_tmp_tmp =
h_uv_idx_0 * primAxis [ 1 ] ; vAngle = h_uv_tmp_tmp - rotAction ; h_uv [ 2 ]
= vAngle ; totAngle_tmp = b_par_p * primAxis [ 1 ] ; totAngle_tmp_p =
h_uv_idx_0 * primAxis [ 0 ] ; totAngle = muDoubleScalarAtan2 ( norm_MbiXjGcc
( h_uv ) , ( totAngle_tmp_p + totAngle_tmp ) + h [ 2 ] * primAxis [ 2 ] ) ;
if ( URpar -> attitude_mode == 1.0 ) { h [ 0 ] = speedAroundVec ; h [ 1 ] = h
[ 2 ] * primAxis [ 0 ] - rotVec_idx_1 ; h [ 2 ] = vAngle ; rotAction =
muDoubleScalarMax ( muDoubleScalarAbs ( norm_MbiXjGcc ( h ) ) , 0.001 ) ;
rotVec_idx_0 = speedAroundVec / rotAction ; rotVec_idx_1 = h [ 1 ] /
rotAction ; speedAroundVec = ( state -> omegaUV [ 0 ] * ( speedAroundVec /
rotAction ) + state -> omegaUV [ 1 ] * rotVec_idx_1 ) + vAngle / rotAction *
0.0 ; if ( totAngle > b_par -> URC . attitude_trajThreshold ) { vAngle =
URTrajCalc_6eliAit3 ( totAngle , - speedAroundVec , URpar ->
attitude_rotSpeedComp ) ; speedAroundVec = URTrajCalc_6eliAit3 (
6.2831853071795862 - totAngle , speedAroundVec , URpar ->
attitude_rotSpeedComp ) ; if ( ( vAngle > 0.0 ) && ( speedAroundVec > 0.0 )
&& ( vAngle > speedAroundVec ) ) { rotVec_idx_0 = - rotVec_idx_0 ;
rotVec_idx_1 = - rotVec_idx_1 ; } } vAngle = muDoubleScalarAbs ( totAngle ) *
URpar -> attitude_rotKp ; uv_attCtrl [ 0 ] = rotVec_idx_0 * vAngle ;
uv_attCtrl [ 1 ] = rotVec_idx_1 * vAngle ; } else if ( URpar -> attitude_mode
== 2.0 ) { h [ 0 ] = rotVec_idx_0 - h [ 2 ] * primAxis [ 1 ] ; h [ 1 ] = h [
2 ] * primAxis [ 0 ] - rotVec_idx_1 ; h [ 2 ] = vAngle ; speedAroundVec =
muDoubleScalarMax ( muDoubleScalarAbs ( norm_MbiXjGcc ( h ) ) , 0.001 ) ;
rotVec_idx_0 = h [ 0 ] / speedAroundVec ; rotVec_idx_1 = h [ 1 ] /
speedAroundVec ; h [ 0 ] /= speedAroundVec ; speedAroundVec = ( state ->
omegaUV [ 0 ] * h [ 0 ] + state -> omegaUV [ 1 ] * rotVec_idx_1 ) + vAngle /
speedAroundVec * 0.0 ; if ( totAngle > b_par -> URC . attitude_trajThreshold
) { vAngle = URTrajCalc_6eliAit3 ( totAngle , - speedAroundVec , URpar ->
attitude_rotSpeedComp ) ; speedAroundVec = URTrajCalc_6eliAit3 (
6.2831853071795862 - totAngle , speedAroundVec , URpar ->
attitude_rotSpeedComp ) ; if ( ( vAngle > 0.0 ) && ( speedAroundVec > 0.0 )
&& ( vAngle > speedAroundVec ) ) { rotVec_idx_0 = - rotVec_idx_0 ;
rotVec_idx_1 = - rotVec_idx_1 ; } } if ( ( state -> fail_id == 1.0 ) || (
state -> fail_id == 3.0 ) ) { speedAroundVec = 0.1 * muDoubleScalarAbs (
state -> omegaUV [ 2 ] ) ; rotVec_idx_1 = muDoubleScalarMax (
muDoubleScalarMin ( rotVec_idx_1 , speedAroundVec ) , - speedAroundVec ) ; }
else { if ( ( state -> fail_id == 2.0 ) || ( state -> fail_id == 4.0 ) ) {
vAngle = 0.1 * muDoubleScalarAbs ( state -> omegaUV [ 2 ] ) ; rotVec_idx_0 =
muDoubleScalarMax ( muDoubleScalarMin ( rotVec_idx_0 , vAngle ) , - vAngle )
; } } vAngle = muDoubleScalarAbs ( totAngle ) * URpar -> attitude_rotKp ;
uv_attCtrl [ 0 ] = rotVec_idx_0 * vAngle ; uv_attCtrl [ 1 ] = rotVec_idx_1 *
vAngle ; } else if ( URpar -> attitude_mode == 3.0 ) { if ( ( h [ 2 ] > URpar
-> attitude_mode3Lim ) && ( state -> fail_id > 0.0 ) ) { h_uv [ 0 ] =
rotVec_idx_0 - h [ 2 ] * primAxis [ 1 ] ; h_uv [ 1 ] = h [ 2 ] * primAxis [ 0
] - 0.0 * primAxis [ 2 ] ; h_uv [ 2 ] = 0.0 * primAxis [ 1 ] - rotAction ;
rotAction = muDoubleScalarAtan2 ( norm_MbiXjGcc ( h_uv ) , ( 0.0 * primAxis [
0 ] + totAngle_tmp ) + h [ 2 ] * primAxis [ 2 ] ) ; h_uv [ 0 ] = 0.0 *
primAxis [ 2 ] - h [ 2 ] * primAxis [ 1 ] ; h_uv [ 1 ] = h [ 2 ] * primAxis [
0 ] - rotVec_idx_1 ; h_uv [ 2 ] = h_uv_tmp_tmp - 0.0 * primAxis [ 0 ] ;
vAngle = muDoubleScalarAtan2 ( norm_MbiXjGcc ( h_uv ) , ( totAngle_tmp_p +
0.0 * primAxis [ 1 ] ) + h [ 2 ] * primAxis [ 2 ] ) ; if ( rotAction /
muDoubleScalarMin ( muDoubleScalarMax ( state -> uvDot_max [ 0 ] , 5.0 ) , -
muDoubleScalarMin ( state -> uvDot_min [ 0 ] , - 5.0 ) ) < vAngle /
muDoubleScalarMin ( muDoubleScalarMax ( state -> uvDot_max [ 1 ] , 5.0 ) , -
muDoubleScalarMin ( state -> uvDot_min [ 1 ] , - 5.0 ) ) ) { x [ 0 ] = (
rotVec_idx_0 - h [ 2 ] * primAxis [ 1 ] < 0.0 ) ; x [ 1 ] = false ; x [ 2 ] =
false ; y = false ; signt = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && (
signt < 3 ) ) { if ( x [ signt ] ) { y = true ; exitg1 = true ; } else {
signt ++ ; } } if ( y ) { signt = - 1 ; } else { signt = 1 ; } rotVec_idx_0 =
signt ; rotVec_idx_1 = 0.0 * ( real_T ) signt ; vAngle = rotAction ; } else {
x [ 0 ] = false ; x [ 1 ] = ( h [ 2 ] * primAxis [ 0 ] - rotVec_idx_1 < 0.0 )
; x [ 2 ] = false ; y = false ; signt = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( signt < 3 ) ) { if ( x [ signt ] ) { y = true ; exitg1 = true ;
} else { signt ++ ; } } if ( y ) { signt = - 1 ; } else { signt = 1 ; }
rotVec_idx_0 = 0.0 * ( real_T ) signt ; rotVec_idx_1 = signt ; } h [ 0 ] =
rotVec_idx_0 ; h [ 1 ] = rotVec_idx_1 ; h [ 2 ] = 0.0 ; rotAction =
muDoubleScalarAbs ( vAngle ) * URpar -> attitude_rotKp ; } else { h [ 0 ] =
rotVec_idx_0 - h [ 2 ] * primAxis [ 1 ] ; h [ 1 ] = h [ 2 ] * primAxis [ 0 ]
- rotVec_idx_1 ; h [ 2 ] = vAngle ; rotAction = muDoubleScalarMax (
muDoubleScalarAbs ( norm_MbiXjGcc ( h ) ) , 0.001 ) ; rotVec_idx_0 = h [ 0 ]
/ rotAction ; rotVec_idx_1 = h [ 1 ] / rotAction ; h [ 0 ] /= rotAction ; h [
1 ] /= rotAction ; h [ 2 ] = vAngle / rotAction ; rotAction =
muDoubleScalarAbs ( totAngle ) * URpar -> attitude_rotKp ; } speedAroundVec =
( state -> omegaUV [ 0 ] * h [ 0 ] + state -> omegaUV [ 1 ] * h [ 1 ] ) + 0.0
* h [ 2 ] ; if ( totAngle > b_par -> URC . attitude_trajThreshold ) { vAngle
= URTrajCalc_6eliAit3 ( totAngle , - speedAroundVec , URpar ->
attitude_rotSpeedComp ) ; speedAroundVec = URTrajCalc_6eliAit3 (
6.2831853071795862 - totAngle , speedAroundVec , URpar ->
attitude_rotSpeedComp ) ; if ( ( vAngle > 0.0 ) && ( speedAroundVec > 0.0 )
&& ( vAngle > speedAroundVec ) ) { rotVec_idx_0 = - rotVec_idx_0 ;
rotVec_idx_1 = - rotVec_idx_1 ; } } uv_attCtrl [ 0 ] = rotVec_idx_0 *
rotAction ; uv_attCtrl [ 1 ] = rotVec_idx_1 * rotAction ; } else { h [ 0 ] =
rotVec_idx_0 - h [ 2 ] * primAxis [ 1 ] ; h [ 1 ] = h [ 2 ] * primAxis [ 0 ]
- rotVec_idx_1 ; h [ 2 ] = vAngle ; vAngle = muDoubleScalarMax (
muDoubleScalarAbs ( norm_MbiXjGcc ( h ) ) , 0.001 ) ; speedAroundVec =
muDoubleScalarAbs ( totAngle ) * URpar -> attitude_rotKp ; uv_attCtrl [ 0 ] =
h [ 0 ] / vAngle * speedAroundVec ; uv_attCtrl [ 1 ] = h [ 1 ] / vAngle *
speedAroundVec ; } uv_attCtrl [ 0 ] += - h_uv_idx_0 * state -> omegaUV [ 2 ]
* URpar -> attitude_yrcComp ; uv_attCtrl [ 1 ] += - b_par_p * state ->
omegaUV [ 2 ] * URpar -> attitude_yrcComp ; } static mmgj3pj2nk * osjdnkeb31
( mmgj3pj2nk * obj , real_T filterT ) { mmgj3pj2nk * b_obj ; b_obj = obj ;
obj -> filterT = filterT ; obj -> value = 0.0 ; obj -> maxLim = 30.0 ; obj ->
minLim = - 30.0 ; return b_obj ; } static pigtktepdx * jfgjwtbyys (
pigtktepdx * obj , real_T filterT , const real_T initValue [ 3 ] , real_T
maxLim , real_T minLim ) { pigtktepdx * b_obj ; b_obj = obj ; obj ->
filterHandle . filterT = filterT ; obj -> filterHandle . value [ 0 ] =
initValue [ 0 ] ; obj -> filterHandle . value [ 1 ] = initValue [ 1 ] ; obj
-> filterHandle . value [ 2 ] = initValue [ 2 ] ; obj -> filterHandle .
maxLim = maxLim ; obj -> filterHandle . minLim = minLim ; obj -> prevValue [
0 ] = initValue [ 0 ] ; obj -> prevValue [ 1 ] = initValue [ 1 ] ; obj ->
prevValue [ 2 ] = initValue [ 2 ] ; return b_obj ; } static void if55mwg1nh (
pigtktepdx * obj , const real_T newValue [ 3 ] , real_T dt ) { real_T b ;
real_T b_b ; real_T derRaw_idx_1 ; real_T a_idx_1 ; real_T derRaw_idx_2 ;
real_T a_idx_2 ; derRaw_idx_1 = ( newValue [ 1 ] - obj -> prevValue [ 1 ] ) /
dt ; a_idx_1 = obj -> filterHandle . value [ 1 ] ; derRaw_idx_2 = ( newValue
[ 2 ] - obj -> prevValue [ 2 ] ) / dt ; a_idx_2 = obj -> filterHandle . value
[ 2 ] ; b = obj -> filterHandle . filterT ; b_b = 1.0 - obj -> filterHandle .
filterT ; obj -> filterHandle . value [ 0 ] = ( newValue [ 0 ] - obj ->
prevValue [ 0 ] ) / dt * ( 1.0 - obj -> filterHandle . filterT ) + obj ->
filterHandle . value [ 0 ] * obj -> filterHandle . filterT ; obj ->
filterHandle . value [ 1 ] = a_idx_1 * b + derRaw_idx_1 * b_b ; obj ->
filterHandle . value [ 2 ] = a_idx_2 * b + derRaw_idx_2 * b_b ; a_idx_1 =
muDoubleScalarMin ( obj -> filterHandle . value [ 1 ] , obj -> filterHandle .
maxLim ) ; a_idx_2 = muDoubleScalarMin ( obj -> filterHandle . value [ 2 ] ,
obj -> filterHandle . maxLim ) ; b = obj -> filterHandle . minLim ; obj ->
filterHandle . value [ 0 ] = muDoubleScalarMax ( muDoubleScalarMin ( obj ->
filterHandle . value [ 0 ] , obj -> filterHandle . maxLim ) , obj ->
filterHandle . minLim ) ; obj -> derValue [ 0 ] = obj -> filterHandle . value
[ 0 ] ; obj -> prevValue [ 0 ] = newValue [ 0 ] ; obj -> filterHandle . value
[ 1 ] = muDoubleScalarMax ( a_idx_1 , b ) ; obj -> derValue [ 1 ] = obj ->
filterHandle . value [ 1 ] ; obj -> prevValue [ 1 ] = newValue [ 1 ] ; obj ->
filterHandle . value [ 2 ] = muDoubleScalarMax ( a_idx_2 , b ) ; obj ->
derValue [ 2 ] = obj -> filterHandle . value [ 2 ] ; obj -> prevValue [ 2 ] =
newValue [ 2 ] ; } static void ggltymhhim ( const real_T state_omegaUV [ 3 ]
, const real_T state_omegafUV [ 3 ] , daqBus * daq , const real_T uvr_des [ 3
] , real_T URpar_Iz , real_T URpar_Iu , real_T URpar_Iv , const real_T
URpar_rate_MPID_rateDotKp [ 3 ] , const real_T URpar_rate_MPID_rateDotKi [ 3
] , const real_T URpar_rate_MPID_rateDotKd [ 3 ] , real_T
URpar_rate_MPID_derFilterT , real_T URpar_rate_MPID_uvrdesderFilterT , real_T
URpar_rate_MPID_maxInt , real_T URpar_rate_MPID_precGain , const
struct_I1MFrEjvpMwyFfAGGP9FCC * b_par , real_T M_uvr [ 3 ] , cq2d5gococ *
localDW ) { real_T intLim ; real_T uvr_des_p [ 3 ] ; real_T errorf ; real_T
errorf_idx_0 ; real_T errorf_idx_1 ; if ( ! localDW -> mcs1xl24pu ) { localDW
-> a2c5xm3bcm . filterHandle . filterT = URpar_rate_MPID_derFilterT ; localDW
-> a2c5xm3bcm . filterHandle . maxLim = 200.0 ; localDW -> a2c5xm3bcm .
filterHandle . minLim = - 200.0 ; localDW -> a2c5xm3bcm . filterHandle .
value [ 0 ] = 0.0 ; localDW -> a2c5xm3bcm . prevValue [ 0 ] = 0.0 ; localDW
-> a2c5xm3bcm . filterHandle . value [ 1 ] = 0.0 ; localDW -> a2c5xm3bcm .
prevValue [ 1 ] = 0.0 ; localDW -> a2c5xm3bcm . filterHandle . value [ 2 ] =
0.0 ; localDW -> a2c5xm3bcm . prevValue [ 2 ] = 0.0 ; localDW -> mcs1xl24pu =
true ; } if ( ! localDW -> le1pffvliz ) { localDW -> odupd5wvzp .
filterHandle . filterT = URpar_rate_MPID_uvrdesderFilterT ; localDW ->
odupd5wvzp . filterHandle . maxLim = 200.0 ; localDW -> odupd5wvzp .
filterHandle . minLim = - 200.0 ; localDW -> odupd5wvzp . filterHandle .
value [ 0 ] = 0.0 ; localDW -> odupd5wvzp . prevValue [ 0 ] = 0.0 ; localDW
-> odupd5wvzp . filterHandle . value [ 1 ] = 0.0 ; localDW -> odupd5wvzp .
prevValue [ 1 ] = 0.0 ; localDW -> odupd5wvzp . filterHandle . value [ 2 ] =
0.0 ; localDW -> odupd5wvzp . prevValue [ 2 ] = 0.0 ; localDW -> le1pffvliz =
true ; } intLim = URpar_rate_MPID_maxInt * 0.001 ; localDW -> a2c5xm3bcm .
filterHandle . filterT = URpar_rate_MPID_derFilterT ; errorf = uvr_des [ 0 ]
- state_omegafUV [ 0 ] ; localDW -> osqjt3ca0p [ 0 ] += errorf / b_par ->
freq ; localDW -> osqjt3ca0p [ 0 ] = muDoubleScalarMax ( muDoubleScalarMin (
localDW -> osqjt3ca0p [ 0 ] , intLim ) , - intLim ) ; uvr_des_p [ 0 ] =
uvr_des [ 0 ] - state_omegaUV [ 0 ] ; errorf_idx_0 = errorf ; errorf =
uvr_des [ 1 ] - state_omegafUV [ 1 ] ; localDW -> osqjt3ca0p [ 1 ] += errorf
/ b_par -> freq ; localDW -> osqjt3ca0p [ 1 ] = muDoubleScalarMax (
muDoubleScalarMin ( localDW -> osqjt3ca0p [ 1 ] , intLim ) , - intLim ) ;
uvr_des_p [ 1 ] = uvr_des [ 1 ] - state_omegaUV [ 1 ] ; errorf_idx_1 = errorf
; errorf = uvr_des [ 2 ] - state_omegafUV [ 2 ] ; localDW -> osqjt3ca0p [ 2 ]
+= errorf / b_par -> freq ; localDW -> osqjt3ca0p [ 2 ] = muDoubleScalarMax (
muDoubleScalarMin ( localDW -> osqjt3ca0p [ 2 ] , intLim ) , - intLim ) ;
uvr_des_p [ 2 ] = uvr_des [ 2 ] - state_omegaUV [ 2 ] ; if55mwg1nh ( &
localDW -> a2c5xm3bcm , uvr_des_p , 1.0 / b_par -> freq ) ; localDW ->
odupd5wvzp . filterHandle . filterT = URpar_rate_MPID_uvrdesderFilterT ;
if55mwg1nh ( & localDW -> odupd5wvzp , uvr_des , 1.0 / b_par -> freq ) ;
intLim = ( ( errorf_idx_0 * URpar_rate_MPID_rateDotKp [ 0 ] + localDW ->
osqjt3ca0p [ 0 ] * URpar_rate_MPID_rateDotKi [ 0 ] ) + localDW -> a2c5xm3bcm
. derValue [ 0 ] * URpar_rate_MPID_rateDotKd [ 0 ] ) + localDW -> odupd5wvzp
. derValue [ 0 ] ; M_uvr [ 0 ] = intLim * URpar_Iu - state_omegafUV [ 1 ] *
state_omegafUV [ 2 ] * ( URpar_Iv - URpar_Iz ) * URpar_rate_MPID_precGain ;
daq -> uvrDot_des [ 0 ] = intLim ; intLim = ( ( errorf_idx_1 *
URpar_rate_MPID_rateDotKp [ 1 ] + localDW -> osqjt3ca0p [ 1 ] *
URpar_rate_MPID_rateDotKi [ 1 ] ) + localDW -> a2c5xm3bcm . derValue [ 1 ] *
URpar_rate_MPID_rateDotKd [ 1 ] ) + localDW -> odupd5wvzp . derValue [ 1 ] ;
M_uvr [ 1 ] = intLim * URpar_Iv - state_omegafUV [ 0 ] * state_omegafUV [ 2 ]
* ( URpar_Iz - URpar_Iu ) * URpar_rate_MPID_precGain ; daq -> uvrDot_des [ 1
] = intLim ; intLim = ( ( errorf * URpar_rate_MPID_rateDotKp [ 2 ] + localDW
-> osqjt3ca0p [ 2 ] * URpar_rate_MPID_rateDotKi [ 2 ] ) + localDW ->
a2c5xm3bcm . derValue [ 2 ] * URpar_rate_MPID_rateDotKd [ 2 ] ) + localDW ->
odupd5wvzp . derValue [ 2 ] ; M_uvr [ 2 ] = intLim * URpar_Iz -
URpar_rate_MPID_precGain * 0.0 ; daq -> uvrDot_des [ 2 ] = intLim ; } static
void frmvotolru ( const real_T state_wRotor [ 4 ] , const real_T
state_omegaUV [ 3 ] , const real_T state_omegafUV [ 3 ] , daqBus * daq ,
const real_T uvr_des [ 3 ] , real_T URpar_k0 , real_T URpar_t0 , real_T
URpar_s , real_T URpar_est_omegaFilterT , const real_T
URpar_rate_MINDI_rateDotKp [ 3 ] , real_T URpar_rate_MINDI_derFilterT , const
real_T URpar_rate_MINDI_MKp [ 3 ] , const struct_I1MFrEjvpMwyFfAGGP9FCC *
b_par , real_T M_uvr [ 3 ] , cq2d5gococ * localDW ) { real_T Fset ; real_T
Fset_idx_1 ; real_T Fset_idx_0 ; real_T Fset_idx_2 ; if ( ! localDW ->
dvbok3ukse ) { localDW -> h4yg2vasfg . filterHandle . filterT =
URpar_rate_MINDI_derFilterT ; localDW -> h4yg2vasfg . filterHandle . maxLim =
300.0 ; localDW -> h4yg2vasfg . filterHandle . minLim = - 300.0 ; localDW ->
h4yg2vasfg . filterHandle . value [ 0 ] = 0.0 ; localDW -> h4yg2vasfg .
prevValue [ 0 ] = 0.0 ; localDW -> h4yg2vasfg . filterHandle . value [ 1 ] =
0.0 ; localDW -> h4yg2vasfg . prevValue [ 1 ] = 0.0 ; localDW -> h4yg2vasfg .
filterHandle . value [ 2 ] = 0.0 ; localDW -> h4yg2vasfg . prevValue [ 2 ] =
0.0 ; localDW -> dvbok3ukse = true ; } if ( ! localDW -> azu2vr5fp0 ) {
localDW -> dtlyzboj2u . filterT = URpar_est_omegaFilterT ; localDW ->
dtlyzboj2u . value [ 0 ] = 0.0 ; localDW -> dtlyzboj2u . value [ 1 ] = 0.0 ;
localDW -> dtlyzboj2u . value [ 2 ] = 0.0 ; localDW -> dtlyzboj2u . value [ 3
] = 0.0 ; localDW -> dtlyzboj2u . maxLim = 1200.0 ; localDW -> dtlyzboj2u .
minLim = 0.0 ; localDW -> azu2vr5fp0 = true ; } localDW -> dtlyzboj2u .
filterT = URpar_rate_MINDI_derFilterT ; localDW -> dtlyzboj2u . value [ 0 ] =
( 1.0 - localDW -> dtlyzboj2u . filterT ) * state_wRotor [ 0 ] + localDW ->
dtlyzboj2u . value [ 0 ] * localDW -> dtlyzboj2u . filterT ; localDW ->
dtlyzboj2u . value [ 0 ] = muDoubleScalarMax ( muDoubleScalarMin ( localDW ->
dtlyzboj2u . value [ 0 ] , localDW -> dtlyzboj2u . maxLim ) , localDW ->
dtlyzboj2u . minLim ) ; Fset_idx_0 = localDW -> dtlyzboj2u . value [ 0 ] *
localDW -> dtlyzboj2u . value [ 0 ] * URpar_k0 ; localDW -> dtlyzboj2u .
value [ 1 ] = ( 1.0 - localDW -> dtlyzboj2u . filterT ) * state_wRotor [ 1 ]
+ localDW -> dtlyzboj2u . value [ 1 ] * localDW -> dtlyzboj2u . filterT ;
localDW -> dtlyzboj2u . value [ 1 ] = muDoubleScalarMax ( muDoubleScalarMin (
localDW -> dtlyzboj2u . value [ 1 ] , localDW -> dtlyzboj2u . maxLim ) ,
localDW -> dtlyzboj2u . minLim ) ; Fset_idx_1 = localDW -> dtlyzboj2u . value
[ 1 ] * localDW -> dtlyzboj2u . value [ 1 ] * URpar_k0 ; localDW ->
dtlyzboj2u . value [ 2 ] = ( 1.0 - localDW -> dtlyzboj2u . filterT ) *
state_wRotor [ 2 ] + localDW -> dtlyzboj2u . value [ 2 ] * localDW ->
dtlyzboj2u . filterT ; localDW -> dtlyzboj2u . value [ 2 ] =
muDoubleScalarMax ( muDoubleScalarMin ( localDW -> dtlyzboj2u . value [ 2 ] ,
localDW -> dtlyzboj2u . maxLim ) , localDW -> dtlyzboj2u . minLim ) ;
Fset_idx_2 = localDW -> dtlyzboj2u . value [ 2 ] * localDW -> dtlyzboj2u .
value [ 2 ] * URpar_k0 ; localDW -> dtlyzboj2u . value [ 3 ] = ( 1.0 -
localDW -> dtlyzboj2u . filterT ) * state_wRotor [ 3 ] + localDW ->
dtlyzboj2u . value [ 3 ] * localDW -> dtlyzboj2u . filterT ; localDW ->
dtlyzboj2u . value [ 3 ] = muDoubleScalarMax ( muDoubleScalarMin ( localDW ->
dtlyzboj2u . value [ 3 ] , localDW -> dtlyzboj2u . maxLim ) , localDW ->
dtlyzboj2u . minLim ) ; Fset = localDW -> dtlyzboj2u . value [ 3 ] * localDW
-> dtlyzboj2u . value [ 3 ] * URpar_k0 ; M_uvr [ 0 ] = ( Fset - Fset_idx_1 )
* URpar_s ; M_uvr [ 1 ] = ( Fset_idx_0 - Fset_idx_2 ) * URpar_s ; M_uvr [ 2 ]
= ( ( ( Fset_idx_0 - Fset_idx_1 ) + Fset_idx_2 ) - Fset ) * URpar_t0 /
URpar_k0 ; Fset_idx_0 = ( uvr_des [ 0 ] - state_omegafUV [ 0 ] ) *
URpar_rate_MINDI_rateDotKp [ 0 ] ; Fset_idx_1 = ( uvr_des [ 1 ] -
state_omegafUV [ 1 ] ) * URpar_rate_MINDI_rateDotKp [ 1 ] ; Fset_idx_2 = (
uvr_des [ 2 ] - state_omegafUV [ 2 ] ) * URpar_rate_MINDI_rateDotKp [ 2 ] ;
localDW -> h4yg2vasfg . filterHandle . filterT = URpar_rate_MINDI_derFilterT
; if55mwg1nh ( & localDW -> h4yg2vasfg , state_omegaUV , 1.0 / b_par -> freq
) ; Fset = ( Fset_idx_0 - localDW -> h4yg2vasfg . derValue [ 0 ] ) *
URpar_rate_MINDI_MKp [ 0 ] * 0.0001 ; daq -> uvrDot_des [ 0 ] = Fset_idx_0 ;
daq -> omegaDot [ 0 ] = localDW -> h4yg2vasfg . derValue [ 0 ] ; daq -> dM [
0 ] = Fset ; M_uvr [ 0 ] += Fset ; Fset = ( Fset_idx_1 - localDW ->
h4yg2vasfg . derValue [ 1 ] ) * URpar_rate_MINDI_MKp [ 1 ] * 0.0001 ; daq ->
uvrDot_des [ 1 ] = Fset_idx_1 ; daq -> omegaDot [ 1 ] = localDW -> h4yg2vasfg
. derValue [ 1 ] ; daq -> dM [ 1 ] = Fset ; M_uvr [ 1 ] += Fset ; Fset = (
Fset_idx_2 - localDW -> h4yg2vasfg . derValue [ 2 ] ) * URpar_rate_MINDI_MKp
[ 2 ] * 0.0001 ; daq -> uvrDot_des [ 2 ] = Fset_idx_2 ; daq -> omegaDot [ 2 ]
= localDW -> h4yg2vasfg . derValue [ 2 ] ; daq -> dM [ 2 ] = Fset ; M_uvr [ 2
] += Fset ; } static real_T gqia5ya45p ( int32_T n , const real_T x_data [ ]
, int32_T ix0 ) { real_T y ; real_T scale ; int32_T kend ; real_T absxk ;
real_T t ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n == 1 ) { y =
muDoubleScalarAbs ( x_data [ ix0 - 1 ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= kend
; k ++ ) { absxk = muDoubleScalarAbs ( x_data [ k - 1 ] ) ; if ( absxk >
scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else {
t = absxk / scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; }
} return y ; } static int32_T jbjjybpqou ( int32_T n , const real_T x_data [
] , int32_T ix0 ) { int32_T idxmax ; int32_T ix ; real_T smax ; real_T s ;
int32_T k ; if ( n < 1 ) { idxmax = 0 ; } else { idxmax = 1 ; if ( n > 1 ) {
ix = ix0 - 1 ; smax = muDoubleScalarAbs ( x_data [ ix0 - 1 ] ) ; for ( k = 2
; k <= n ; k ++ ) { ix ++ ; s = muDoubleScalarAbs ( x_data [ ix ] ) ; if ( s
> smax ) { idxmax = k ; smax = s ; } } } } return idxmax ; } static void
ge1clxmtis ( int32_T n , real_T x_data [ ] , int32_T ix0 , int32_T iy0 ) {
int32_T ix ; int32_T iy ; real_T temp ; int32_T k ; ix = ix0 - 1 ; iy = iy0 -
1 ; for ( k = 0 ; k < n ; k ++ ) { temp = x_data [ ix ] ; x_data [ ix ] =
x_data [ iy ] ; x_data [ iy ] = temp ; ix ++ ; iy ++ ; } } static real_T
mgttfimgbn ( int32_T n , real_T * alpha1 , real_T x_data [ ] , int32_T ix0 )
{ real_T tau ; real_T xnorm ; int32_T knt ; int32_T b_k ; int32_T c_k ; tau =
0.0 ; if ( n > 0 ) { xnorm = gqia5ya45p ( n - 1 , x_data , ix0 ) ; if ( xnorm
!= 0.0 ) { xnorm = muDoubleScalarHypot ( * alpha1 , xnorm ) ; if ( * alpha1
>= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm ) <
1.0020841800044864E-292 ) { knt = - 1 ; b_k = ( ix0 + n ) - 2 ; do { knt ++ ;
for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x_data [ c_k - 1 ] *=
9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; * alpha1 *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( * alpha1 ,
gqia5ya45p ( n - 1 , x_data , ix0 ) ) ; if ( * alpha1 >= 0.0 ) { xnorm = -
xnorm ; } tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1 = 1.0 / ( * alpha1 -
xnorm ) ; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x_data [ c_k - 1 ] *= *
alpha1 ; } for ( b_k = 0 ; b_k <= knt ; b_k ++ ) { xnorm *=
1.0020841800044864E-292 ; } * alpha1 = xnorm ; } else { tau = ( xnorm - *
alpha1 ) / xnorm ; * alpha1 = 1.0 / ( * alpha1 - xnorm ) ; knt = ( ix0 + n )
- 2 ; for ( b_k = ix0 ; b_k <= knt ; b_k ++ ) { x_data [ b_k - 1 ] *= *
alpha1 ; } * alpha1 = xnorm ; } } } return tau ; } static void bfoedy2v3e (
int32_T m , int32_T n , int32_T iv0 , real_T tau , real_T C_data [ ] ,
int32_T ic0 , int32_T ldc , real_T work_data [ ] ) { int32_T lastv ; int32_T
lastc ; int32_T coltop ; int32_T ix ; real_T c ; int32_T iac ; int32_T d ;
int32_T b_ia ; int32_T jy ; int32_T exitg1 ; boolean_T exitg2 ; if ( tau !=
0.0 ) { lastv = m ; lastc = iv0 + m ; while ( ( lastv > 0 ) && ( C_data [
lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc = n - 1 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = lastc * ldc +
ic0 ; jy = coltop ; do { exitg1 = 0 ; if ( jy <= ( coltop + lastv ) - 1 ) {
if ( C_data [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else {
lastc -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) {
exitg2 = true ; } } } else { lastv = 0 ; lastc = - 1 ; } if ( lastv > 0 ) {
if ( lastc + 1 != 0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++ ) {
work_data [ coltop ] = 0.0 ; } coltop = 0 ; jy = ldc * lastc + ic0 ; iac =
ic0 ; while ( ( ( ldc > 0 ) && ( iac <= jy ) ) || ( ( ldc < 0 ) && ( iac >=
jy ) ) ) { ix = iv0 ; c = 0.0 ; d = ( iac + lastv ) - 1 ; for ( b_ia = iac ;
b_ia <= d ; b_ia ++ ) { c += C_data [ b_ia - 1 ] * C_data [ ix - 1 ] ; ix ++
; } work_data [ coltop ] += c ; coltop ++ ; iac += ldc ; } } if ( ! ( - tau
== 0.0 ) ) { coltop = ic0 - 1 ; jy = 0 ; for ( iac = 0 ; iac <= lastc ; iac
++ ) { if ( work_data [ jy ] != 0.0 ) { c = work_data [ jy ] * - tau ; ix =
iv0 ; d = lastv + coltop ; for ( b_ia = coltop ; b_ia < d ; b_ia ++ ) {
C_data [ b_ia ] += C_data [ ix - 1 ] * c ; ix ++ ; } } jy ++ ; coltop += ldc
; } } } } static void eaqpnzyo15 ( real_T A_data [ ] , int32_T A_size [ 2 ] ,
real_T tau_data [ ] , int32_T * tau_size , int32_T jpvt_data [ ] , int32_T
jpvt_size [ 2 ] ) { int32_T m ; int32_T n ; int32_T mn ; real_T work_data [
15 ] ; real_T vn1_data [ 15 ] ; real_T vn2_data [ 15 ] ; int32_T i_i ;
int32_T nmi ; int32_T pvt ; int32_T itemp ; real_T temp2 ; real_T b_atmp ;
int32_T b_n ; int32_T yk ; int8_T c_idx_0 ; m = A_size [ 0 ] ; n = A_size [ 1
] ; mn = muIntScalarMin_sint32 ( A_size [ 0 ] , A_size [ 1 ] ) ; * tau_size =
( int8_T ) mn ; if ( A_size [ 1 ] < 1 ) { b_n = 0 ; } else { b_n = A_size [ 1
] ; } jpvt_size [ 0 ] = 1 ; jpvt_size [ 1 ] = b_n ; if ( b_n > 0 ) {
jpvt_data [ 0 ] = 1 ; yk = 1 ; for ( i_i = 2 ; i_i <= b_n ; i_i ++ ) { yk ++
; jpvt_data [ i_i - 1 ] = yk ; } } if ( A_size [ 1 ] != 0 ) { c_idx_0 = (
int8_T ) A_size [ 1 ] ; b_n = c_idx_0 ; for ( yk = 0 ; yk < b_n ; yk ++ ) {
work_data [ yk ] = 0.0 ; } b_n = 1 ; for ( yk = 0 ; yk < n ; yk ++ ) {
vn1_data [ yk ] = gqia5ya45p ( m , A_data , b_n ) ; vn2_data [ yk ] =
vn1_data [ yk ] ; b_n += m ; } for ( b_n = 0 ; b_n < mn ; b_n ++ ) { i_i =
b_n * m + b_n ; nmi = n - b_n ; yk = m - b_n ; pvt = ( jbjjybpqou ( nmi ,
vn1_data , b_n + 1 ) + b_n ) - 1 ; if ( pvt + 1 != b_n + 1 ) { ge1clxmtis ( m
, A_data , 1 + m * pvt , 1 + m * b_n ) ; itemp = jpvt_data [ pvt ] ;
jpvt_data [ pvt ] = jpvt_data [ b_n ] ; jpvt_data [ b_n ] = itemp ; vn1_data
[ pvt ] = vn1_data [ b_n ] ; vn2_data [ pvt ] = vn2_data [ b_n ] ; } if ( b_n
+ 1 < m ) { b_atmp = A_data [ i_i ] ; tau_data [ b_n ] = mgttfimgbn ( yk , &
b_atmp , A_data , i_i + 2 ) ; A_data [ i_i ] = b_atmp ; } else { tau_data [
b_n ] = 0.0 ; } if ( b_n + 1 < n ) { b_atmp = A_data [ i_i ] ; A_data [ i_i ]
= 1.0 ; bfoedy2v3e ( yk , nmi - 1 , i_i + 1 , tau_data [ b_n ] , A_data , (
b_n + ( b_n + 1 ) * m ) + 1 , m , work_data ) ; A_data [ i_i ] = b_atmp ; }
for ( i_i = b_n + 1 ; i_i < n ; i_i ++ ) { if ( vn1_data [ i_i ] != 0.0 ) {
nmi = A_size [ 0 ] * i_i + b_n ; b_atmp = muDoubleScalarAbs ( A_data [ nmi ]
) / vn1_data [ i_i ] ; b_atmp = 1.0 - b_atmp * b_atmp ; if ( b_atmp < 0.0 ) {
b_atmp = 0.0 ; } temp2 = vn1_data [ i_i ] / vn2_data [ i_i ] ; temp2 = temp2
* temp2 * b_atmp ; if ( temp2 <= 1.4901161193847656E-8 ) { if ( b_n + 1 < m )
{ vn1_data [ i_i ] = gqia5ya45p ( yk - 1 , A_data , nmi + 2 ) ; vn2_data [
i_i ] = vn1_data [ i_i ] ; } else { vn1_data [ i_i ] = 0.0 ; vn2_data [ i_i ]
= 0.0 ; } } else { vn1_data [ i_i ] *= muDoubleScalarSqrt ( b_atmp ) ; } } }
} } } static void oetne1teg2 ( const real_T A_data [ ] , const int32_T A_size
[ 2 ] , const real_T B_data [ ] , const int32_T * B_size , real_T Y_data [ ]
, int32_T * Y_size ) { real_T b_A_data [ 225 ] ; real_T tau_data [ 15 ] ;
int32_T jpvt_data [ 15 ] ; int32_T rankR ; int32_T minmn ; int32_T maxmn ;
real_T b_B_data [ 15 ] ; real_T wj ; int32_T c_i ; int32_T loop_ub ; int32_T
b_A_size [ 2 ] ; int32_T jpvt_size [ 2 ] ; int8_T b_idx_0 ; b_A_size [ 0 ] =
A_size [ 0 ] ; b_A_size [ 1 ] = A_size [ 1 ] ; loop_ub = A_size [ 0 ] *
A_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memcpy ( & b_A_data [ 0 ] , & A_data
[ 0 ] , ( loop_ub + 1 ) * sizeof ( real_T ) ) ; } eaqpnzyo15 ( b_A_data ,
b_A_size , tau_data , & loop_ub , jpvt_data , jpvt_size ) ; rankR = 0 ; if (
b_A_size [ 0 ] < b_A_size [ 1 ] ) { minmn = b_A_size [ 0 ] ; maxmn = b_A_size
[ 1 ] ; } else { minmn = b_A_size [ 1 ] ; maxmn = b_A_size [ 0 ] ; } if (
minmn > 0 ) { while ( ( rankR < minmn ) && ( ! ( muDoubleScalarAbs ( b_A_data
[ b_A_size [ 0 ] * rankR + rankR ] ) <= 2.2204460492503131E-15 * ( real_T )
maxmn * muDoubleScalarAbs ( b_A_data [ 0 ] ) ) ) ) { rankR ++ ; } } b_idx_0 =
( int8_T ) b_A_size [ 1 ] ; * Y_size = b_idx_0 ; loop_ub = b_idx_0 ; for (
minmn = 0 ; minmn < loop_ub ; minmn ++ ) { Y_data [ minmn ] = 0.0 ; } if ( 0
<= * B_size - 1 ) { memcpy ( & b_B_data [ 0 ] , & B_data [ 0 ] , * B_size *
sizeof ( real_T ) ) ; } minmn = b_A_size [ 0 ] ; maxmn =
muIntScalarMin_sint32 ( b_A_size [ 0 ] , b_A_size [ 1 ] ) - 1 ; for ( loop_ub
= 0 ; loop_ub <= maxmn ; loop_ub ++ ) { if ( tau_data [ loop_ub ] != 0.0 ) {
wj = b_B_data [ loop_ub ] ; for ( c_i = loop_ub + 1 ; c_i < minmn ; c_i ++ )
{ wj += b_A_data [ b_A_size [ 0 ] * loop_ub + c_i ] * b_B_data [ c_i ] ; } wj
*= tau_data [ loop_ub ] ; if ( wj != 0.0 ) { b_B_data [ loop_ub ] -= wj ; for
( c_i = loop_ub + 1 ; c_i < minmn ; c_i ++ ) { b_B_data [ c_i ] -= b_A_data [
b_A_size [ 0 ] * loop_ub + c_i ] * wj ; } } } } for ( maxmn = 0 ; maxmn <
rankR ; maxmn ++ ) { Y_data [ jpvt_data [ maxmn ] - 1 ] = b_B_data [ maxmn ]
; } for ( rankR -- ; rankR + 1 > 0 ; rankR -- ) { minmn = b_A_size [ 0 ] *
rankR ; Y_data [ jpvt_data [ rankR ] - 1 ] /= b_A_data [ minmn + rankR ] ;
for ( loop_ub = 0 ; loop_ub < rankR ; loop_ub ++ ) { Y_data [ jpvt_data [
loop_ub ] - 1 ] -= b_A_data [ minmn + loop_ub ] * Y_data [ jpvt_data [ rankR
] - 1 ] ; } } } static void ebouijlb1c ( int32_T m , int32_T n , real_T
A_data [ ] , int32_T A_size [ 2 ] , int32_T lda , int32_T ipiv_data [ ] ,
int32_T ipiv_size [ 2 ] , int32_T * info ) { int32_T mmj ; int32_T b_n ;
int32_T yk ; int32_T b_c ; int32_T ix ; real_T smax ; real_T s ; int32_T iy ;
int32_T jA ; int32_T c_ix ; int32_T b_j ; int32_T e ; int32_T ijA ; b_n =
muIntScalarMin_sint32 ( m , n ) ; if ( b_n < 1 ) { b_n = 0 ; } ipiv_size [ 0
] = 1 ; ipiv_size [ 1 ] = b_n ; if ( b_n > 0 ) { ipiv_data [ 0 ] = 1 ; yk = 1
; for ( mmj = 2 ; mmj <= b_n ; mmj ++ ) { yk ++ ; ipiv_data [ mmj - 1 ] = yk
; } } * info = 0 ; if ( ( m >= 1 ) && ( n >= 1 ) ) { b_n = m - 1 ; b_n =
muIntScalarMin_sint32 ( b_n , n ) ; for ( yk = 0 ; yk < b_n ; yk ++ ) { mmj =
m - yk ; b_c = ( lda + 1 ) * yk ; if ( mmj < 1 ) { jA = - 1 ; } else { jA = 0
; if ( mmj > 1 ) { ix = b_c ; smax = muDoubleScalarAbs ( A_data [ b_c ] ) ;
for ( iy = 2 ; iy <= mmj ; iy ++ ) { ix ++ ; s = muDoubleScalarAbs ( A_data [
ix ] ) ; if ( s > smax ) { jA = iy - 1 ; smax = s ; } } } } if ( A_data [ b_c
+ jA ] != 0.0 ) { if ( jA != 0 ) { iy = yk + jA ; ipiv_data [ yk ] = iy + 1 ;
ix = yk ; for ( jA = 0 ; jA < n ; jA ++ ) { smax = A_data [ ix ] ; A_data [
ix ] = A_data [ iy ] ; A_data [ iy ] = smax ; ix += lda ; iy += lda ; } } iy
= b_c + mmj ; for ( jA = b_c + 1 ; jA < iy ; jA ++ ) { A_data [ jA ] /=
A_data [ b_c ] ; } } else { * info = yk + 1 ; } iy = n - yk ; ix = b_c + lda
; jA = ix + 1 ; for ( b_j = 0 ; b_j <= iy - 2 ; b_j ++ ) { smax = A_data [ ix
] ; if ( A_data [ ix ] != 0.0 ) { c_ix = b_c + 1 ; e = mmj + jA ; for ( ijA =
jA ; ijA < e - 1 ; ijA ++ ) { A_data [ ijA ] += A_data [ c_ix ] * - smax ;
c_ix ++ ; } } ix += lda ; jA += lda ; } } if ( ( * info == 0 ) && ( m <= n )
&& ( ! ( A_data [ ( ( m - 1 ) * A_size [ 0 ] + m ) - 1 ] != 0.0 ) ) ) { *
info = m ; } } } static void hwkrnvwbkc ( const real_T A_data [ ] , const
int32_T A_size [ 2 ] , const real_T B_data [ ] , const int32_T * B_size ,
real_T Y_data [ ] , int32_T * Y_size ) { int32_T n ; real_T temp ; real_T
b_A_data [ 225 ] ; int32_T ipiv_data [ 15 ] ; int32_T b_kAcol ; int32_T b_i ;
int32_T loop_ub ; int32_T b_A_size [ 2 ] ; int32_T ipiv_size [ 2 ] ; if (
A_size [ 1 ] == 0 ) { * Y_size = 0 ; } else if ( A_size [ 0 ] == A_size [ 1 ]
) { n = A_size [ 1 ] ; b_A_size [ 0 ] = A_size [ 0 ] ; b_A_size [ 1 ] =
A_size [ 1 ] ; loop_ub = A_size [ 0 ] * A_size [ 1 ] - 1 ; if ( 0 <= loop_ub
) { memcpy ( & b_A_data [ 0 ] , & A_data [ 0 ] , ( loop_ub + 1 ) * sizeof (
real_T ) ) ; } ebouijlb1c ( A_size [ 1 ] , A_size [ 1 ] , b_A_data , b_A_size
, A_size [ 1 ] , ipiv_data , ipiv_size , & loop_ub ) ; * Y_size = * B_size ;
if ( 0 <= * B_size - 1 ) { memcpy ( & Y_data [ 0 ] , & B_data [ 0 ] , *
B_size * sizeof ( real_T ) ) ; } for ( loop_ub = 0 ; loop_ub <= n - 2 ;
loop_ub ++ ) { if ( loop_ub + 1 != ipiv_data [ loop_ub ] ) { temp = Y_data [
loop_ub ] ; Y_data [ loop_ub ] = Y_data [ ipiv_data [ loop_ub ] - 1 ] ;
Y_data [ ipiv_data [ loop_ub ] - 1 ] = temp ; } } for ( loop_ub = 0 ; loop_ub
< n ; loop_ub ++ ) { b_kAcol = n * loop_ub ; if ( Y_data [ loop_ub ] != 0.0 )
{ for ( b_i = loop_ub + 1 ; b_i < n ; b_i ++ ) { Y_data [ b_i ] -= b_A_data [
b_i + b_kAcol ] * Y_data [ loop_ub ] ; } } } for ( loop_ub = A_size [ 1 ] - 1
; loop_ub + 1 > 0 ; loop_ub -- ) { b_kAcol = n * loop_ub ; if ( Y_data [
loop_ub ] != 0.0 ) { Y_data [ loop_ub ] /= b_A_data [ loop_ub + b_kAcol ] ;
for ( b_i = 0 ; b_i < loop_ub ; b_i ++ ) { Y_data [ b_i ] -= b_A_data [ b_i +
b_kAcol ] * Y_data [ loop_ub ] ; } } } } else { oetne1teg2 ( A_data , A_size
, B_data , B_size , Y_data , Y_size ) ; } } static void dijvlmzmna ( real_T
refStruct_MuRef , real_T refStruct_MvRef , real_T refStruct_MzRef , real_T
refStruct_FtotRef , const real_T FMax [ 4 ] , const real_T FMin [ 4 ] ,
real_T gainStruct_MuGain , real_T gainStruct_MvGain , real_T
gainStruct_MzGain , real_T gainStruct_FGain , real_T gainStruct_FtotGain ,
real_T y_state_init [ 4 ] , const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par ,
real_T URpar_rate_maxIter , real_T x [ 4 ] , real_T * iterSteps , real_T *
optimal ) { real_T H [ 16 ] ; real_T b [ 8 ] ; int32_T solution ; boolean_T
indices [ 8 ] ; int8_T A_eq_data [ 32 ] ; int8_T AT_eq_data [ 32 ] ; real_T
constraintError [ 8 ] ; real_T count ; int32_T iter ; int8_T f_data [ 8 ] ;
int8_T g_data [ 8 ] ; int32_T trueCount ; boolean_T empty_non_axis_sizes ;
real_T varargin_1_data [ 48 ] ; iczkfuyogx reshapes [ 2 ] ; int32_T idx ;
static const int8_T A [ 32 ] = { 1 , 0 , 0 , 0 , - 1 , 0 , 0 , 0 , 0 , 1 , 0
, 0 , 0 , - 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , - 1 } ; real_T h_data [ 15 ] ; real_T varargin_1_data_p [ 225 ] ;
real_T c_data [ 12 ] ; int8_T A_eq_data_p [ 150 ] ; int32_T h_size ; int32_T
varargin_1_size [ 2 ] ; real_T c_idx_0 ; real_T c_idx_1 ; real_T c_idx_2 ;
real_T c_idx_3 ; int32_T f_size_idx_1 ; real_T z1_idx_1 ; real_T z1_idx_2 ;
real_T z1_idx_3 ; int8_T l2_idx_0 ; int8_T l1_idx_1 ; real_T c_idx_0_tmp ;
int32_T AT_eq_data_tmp ; int32_T loop_ub_tmp ; boolean_T guard1 = false ;
boolean_T exitg1 ; boolean_T exitg2 ; x [ 0 ] = 0.0 ; count =
muDoubleScalarMax ( FMax [ 0 ] , 0.001 ) ; x [ 1 ] = 0.0 ; z1_idx_1 =
muDoubleScalarMax ( FMax [ 1 ] , 0.001 ) ; x [ 2 ] = 0.0 ; z1_idx_2 =
muDoubleScalarMax ( FMax [ 2 ] , 0.001 ) ; x [ 3 ] = 0.0 ; z1_idx_3 =
muDoubleScalarMax ( FMax [ 3 ] , 0.001 ) ; c_idx_0 = b_par -> URC . t0 /
b_par -> URC . k0 ; c_idx_1 = b_par -> URC . s * b_par -> URC . s ; c_idx_2 =
c_idx_1 * gainStruct_MvGain ; H [ 0 ] = ( ( ( c_idx_2 + c_idx_0 * c_idx_0 *
gainStruct_MzGain ) + gainStruct_FtotGain ) + gainStruct_FGain / count ) *
2.0 ; H [ 4 ] = - 2.0 * gainStruct_MzGain * ( c_idx_0 * c_idx_0 ) +
gainStruct_FtotGain * 2.0 ; H [ 1 ] = - 2.0 * gainStruct_MzGain * ( c_idx_0 *
c_idx_0 ) + gainStruct_FtotGain * 2.0 ; H [ 8 ] = ( - 2.0 * gainStruct_MvGain
* c_idx_1 + gainStruct_MzGain * 2.0 * ( c_idx_0 * c_idx_0 ) ) +
gainStruct_FtotGain * 2.0 ; H [ 2 ] = H [ 8 ] ; H [ 12 ] = - 2.0 *
gainStruct_MzGain * ( c_idx_0 * c_idx_0 ) + gainStruct_FtotGain * 2.0 ; H [ 3
] = - 2.0 * gainStruct_MzGain * ( c_idx_0 * c_idx_0 ) + gainStruct_FtotGain *
2.0 ; H [ 5 ] = ( ( ( c_idx_1 * gainStruct_MuGain + c_idx_0 * c_idx_0 *
gainStruct_MzGain ) + gainStruct_FtotGain ) + gainStruct_FGain / z1_idx_1 ) *
2.0 ; H [ 9 ] = - 2.0 * gainStruct_MzGain * ( c_idx_0 * c_idx_0 ) +
gainStruct_FtotGain * 2.0 ; H [ 6 ] = - 2.0 * gainStruct_MzGain * ( c_idx_0 *
c_idx_0 ) + gainStruct_FtotGain * 2.0 ; H [ 13 ] = ( - 2.0 *
gainStruct_MuGain * c_idx_1 + gainStruct_MzGain * 2.0 * ( c_idx_0 * c_idx_0 )
) + 2.0 * gainStruct_FtotGain ; H [ 7 ] = H [ 13 ] ; H [ 10 ] = ( ( ( c_idx_2
+ c_idx_0 * c_idx_0 * gainStruct_MzGain ) + gainStruct_FtotGain ) +
gainStruct_FGain / z1_idx_2 ) * 2.0 ; H [ 14 ] = - 2.0 * gainStruct_MzGain *
( c_idx_0 * c_idx_0 ) + gainStruct_FtotGain * 2.0 ; H [ 11 ] = - 2.0 *
gainStruct_MzGain * ( c_idx_0 * c_idx_0 ) + gainStruct_FtotGain * 2.0 ; H [
15 ] = ( ( ( b_par -> URC . s * b_par -> URC . s * gainStruct_MuGain +
c_idx_0 * c_idx_0 * gainStruct_MzGain ) + gainStruct_FtotGain ) +
gainStruct_FGain / z1_idx_3 ) * 2.0 ; c_idx_3 = 2.0 * b_par -> URC . t0 /
b_par -> URC . k0 * refStruct_MzRef * gainStruct_MzGain ; c_idx_0_tmp = 2.0 *
gainStruct_FtotGain * refStruct_FtotRef ; c_idx_0 = ( - 2.0 *
gainStruct_MvGain * refStruct_MvRef * b_par -> URC . s - c_idx_3 ) -
c_idx_0_tmp ; c_idx_1 = ( c_idx_3 + 2.0 * gainStruct_MuGain * refStruct_MuRef
* b_par -> URC . s ) - c_idx_0_tmp ; c_idx_2 = ( 2.0 * gainStruct_MvGain *
refStruct_MvRef * b_par -> URC . s - c_idx_3 ) - c_idx_0_tmp ; c_idx_3 = (
c_idx_3 + - 2.0 * gainStruct_MuGain * refStruct_MuRef * b_par -> URC . s ) -
c_idx_0_tmp ; b [ 0 ] = count ; b [ 1 ] = z1_idx_1 ; b [ 2 ] = z1_idx_2 ; b [
3 ] = z1_idx_3 ; b [ 4 ] = - FMin [ 0 ] ; b [ 5 ] = - FMin [ 1 ] ; b [ 6 ] =
- FMin [ 2 ] ; b [ 7 ] = - FMin [ 3 ] ; solution = 0 ; * iterSteps = 0.0 ;
iter = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( iter <= ( int32_T )
URpar_rate_maxIter - 1 ) ) { ( * iterSteps ) ++ ; indices [ 0 ] = (
y_state_init [ 0 ] == 1.0 ) ; indices [ 4 ] = ( y_state_init [ 0 ] == - 1.0 )
; indices [ 1 ] = ( y_state_init [ 1 ] == 1.0 ) ; indices [ 5 ] = (
y_state_init [ 1 ] == - 1.0 ) ; indices [ 2 ] = ( y_state_init [ 2 ] == 1.0 )
; indices [ 6 ] = ( y_state_init [ 2 ] == - 1.0 ) ; indices [ 3 ] = (
y_state_init [ 3 ] == 1.0 ) ; indices [ 7 ] = ( y_state_init [ 3 ] == - 1.0 )
; trueCount = 0 ; for ( h_size = 0 ; h_size < 8 ; h_size ++ ) { if ( indices
[ h_size ] ) { trueCount ++ ; } } f_size_idx_1 = trueCount ; trueCount = 0 ;
for ( h_size = 0 ; h_size < 8 ; h_size ++ ) { if ( indices [ h_size ] ) {
f_data [ trueCount ] = ( int8_T ) ( h_size + 1 ) ; trueCount ++ ; } } for (
loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) { A_eq_data [
loop_ub_tmp ] = A [ f_data [ loop_ub_tmp ] - 1 ] ; } for ( loop_ub_tmp = 0 ;
loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) { A_eq_data [ loop_ub_tmp +
f_size_idx_1 ] = A [ f_data [ loop_ub_tmp ] + 7 ] ; } for ( loop_ub_tmp = 0 ;
loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) { A_eq_data [ loop_ub_tmp + (
f_size_idx_1 << 1 ) ] = A [ f_data [ loop_ub_tmp ] + 15 ] ; } for (
loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) { A_eq_data [
loop_ub_tmp + f_size_idx_1 * 3 ] = A [ f_data [ loop_ub_tmp ] + 23 ] ; } for
( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) {
AT_eq_data_tmp = loop_ub_tmp << 2 ; AT_eq_data [ AT_eq_data_tmp ] = A_eq_data
[ loop_ub_tmp ] ; AT_eq_data [ 1 + AT_eq_data_tmp ] = A_eq_data [ loop_ub_tmp
+ f_size_idx_1 ] ; AT_eq_data [ 2 + AT_eq_data_tmp ] = A_eq_data [ (
f_size_idx_1 << 1 ) + loop_ub_tmp ] ; AT_eq_data [ 3 + AT_eq_data_tmp ] =
A_eq_data [ f_size_idx_1 * 3 + loop_ub_tmp ] ; } if ( f_size_idx_1 == 0 ) {
l2_idx_0 = 0 ; l1_idx_1 = 0 ; } else { l1_idx_1 = ( int8_T ) f_size_idx_1 ;
l2_idx_0 = ( int8_T ) f_size_idx_1 ; } if ( f_size_idx_1 != 0 ) { trueCount =
f_size_idx_1 ; } else if ( ( l2_idx_0 != 0 ) && ( l1_idx_1 != 0 ) ) {
trueCount = l2_idx_0 ; } else { trueCount = 0 ; if ( l2_idx_0 > 0 ) {
trueCount = l2_idx_0 ; } } empty_non_axis_sizes = ( trueCount == 0 ) ; if (
empty_non_axis_sizes || ( f_size_idx_1 != 0 ) ) { h_size = 4 ; } else {
h_size = 0 ; } if ( empty_non_axis_sizes || ( ( l2_idx_0 != 0 ) && ( l1_idx_1
!= 0 ) ) ) { idx = l1_idx_1 ; } else { idx = 0 ; } AT_eq_data_tmp = 4 +
f_size_idx_1 ; f_size_idx_1 = ( f_size_idx_1 << 2 ) - 1 ; memcpy ( &
varargin_1_data [ 0 ] , & H [ 0 ] , sizeof ( real_T ) << 4U ) ; for (
loop_ub_tmp = 0 ; loop_ub_tmp <= f_size_idx_1 ; loop_ub_tmp ++ ) {
varargin_1_data [ loop_ub_tmp + 16 ] = AT_eq_data [ loop_ub_tmp ] ; }
loop_ub_tmp = trueCount * h_size ; if ( 0 <= loop_ub_tmp - 1 ) { memcpy ( &
A_eq_data_p [ 0 ] , & A_eq_data [ 0 ] , loop_ub_tmp * sizeof ( int8_T ) ) ; }
f_size_idx_1 = trueCount * idx ; if ( 0 <= f_size_idx_1 - 1 ) { memset ( &
A_eq_data_p [ loop_ub_tmp ] , 0 , ( ( f_size_idx_1 + loop_ub_tmp ) -
loop_ub_tmp ) * sizeof ( int8_T ) ) ; } if ( ( trueCount != 0 ) && ( h_size +
idx != 0 ) ) { idx = trueCount ; } else { idx = 0 ; } f_size_idx_1 = idx *
AT_eq_data_tmp ; for ( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ;
loop_ub_tmp ++ ) { reshapes [ 1 ] . f1 . data [ loop_ub_tmp ] = A_eq_data_p [
loop_ub_tmp ] ; } trueCount = 0 ; for ( h_size = 0 ; h_size < 8 ; h_size ++ )
{ if ( indices [ h_size ] ) { trueCount ++ ; } } f_size_idx_1 = trueCount ;
trueCount = 0 ; for ( h_size = 0 ; h_size < 8 ; h_size ++ ) { if ( indices [
h_size ] ) { g_data [ trueCount ] = ( int8_T ) ( h_size + 1 ) ; trueCount ++
; } } varargin_1_size [ 0 ] = 4 + idx ; varargin_1_size [ 1 ] =
AT_eq_data_tmp ; for ( loop_ub_tmp = 0 ; loop_ub_tmp < AT_eq_data_tmp ;
loop_ub_tmp ++ ) { trueCount = loop_ub_tmp << 2 ; h_size = varargin_1_size [
0 ] * loop_ub_tmp ; varargin_1_data_p [ h_size ] = varargin_1_data [
trueCount ] ; varargin_1_data_p [ 1 + h_size ] = varargin_1_data [ trueCount
+ 1 ] ; varargin_1_data_p [ 2 + h_size ] = varargin_1_data [ trueCount + 2 ]
; varargin_1_data_p [ 3 + h_size ] = varargin_1_data [ trueCount + 3 ] ; }
for ( loop_ub_tmp = 0 ; loop_ub_tmp < AT_eq_data_tmp ; loop_ub_tmp ++ ) { for
( trueCount = 0 ; trueCount < idx ; trueCount ++ ) { varargin_1_data_p [ (
trueCount + varargin_1_size [ 0 ] * loop_ub_tmp ) + 4 ] = reshapes [ 1 ] . f1
. data [ idx * loop_ub_tmp + trueCount ] ; } } trueCount = 4 + f_size_idx_1 ;
c_data [ 0 ] = - c_idx_0 ; c_data [ 1 ] = - c_idx_1 ; c_data [ 2 ] = -
c_idx_2 ; c_data [ 3 ] = - c_idx_3 ; for ( loop_ub_tmp = 0 ; loop_ub_tmp <
f_size_idx_1 ; loop_ub_tmp ++ ) { c_data [ loop_ub_tmp + 4 ] = b [ g_data [
loop_ub_tmp ] - 1 ] ; } hwkrnvwbkc ( varargin_1_data_p , varargin_1_size ,
c_data , & trueCount , h_data , & h_size ) ; x [ 0 ] = h_data [ 0 ] ; x [ 1 ]
= h_data [ 1 ] ; x [ 2 ] = h_data [ 2 ] ; x [ 3 ] = h_data [ 3 ] ; if ( 5 >
h_size ) { trueCount = 0 ; h_size = 0 ; } else { trueCount = 4 ; } for (
loop_ub_tmp = 0 ; loop_ub_tmp < 8 ; loop_ub_tmp ++ ) { constraintError [
loop_ub_tmp ] = ( ( ( ( real_T ) A [ loop_ub_tmp + 8 ] * x [ 1 ] + ( real_T )
A [ loop_ub_tmp ] * x [ 0 ] ) + ( real_T ) A [ loop_ub_tmp + 16 ] * x [ 2 ] )
+ ( real_T ) A [ loop_ub_tmp + 24 ] * x [ 3 ] ) - b [ loop_ub_tmp ] ; } if (
! muDoubleScalarIsNaN ( constraintError [ 0 ] ) ) { idx = 1 ; } else { idx =
0 ; AT_eq_data_tmp = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && (
AT_eq_data_tmp < 9 ) ) { if ( ! muDoubleScalarIsNaN ( constraintError [
AT_eq_data_tmp - 1 ] ) ) { idx = AT_eq_data_tmp ; exitg2 = true ; } else {
AT_eq_data_tmp ++ ; } } } if ( idx == 0 ) { count = constraintError [ 0 ] ; }
else { count = constraintError [ idx - 1 ] ; while ( idx + 1 < 9 ) { if (
count < constraintError [ idx ] ) { count = constraintError [ idx ] ; } idx
++ ; } } loop_ub_tmp = h_size - trueCount ; if ( loop_ub_tmp == 0 ) {
empty_non_axis_sizes = true ; } else { if ( loop_ub_tmp <= 2 ) { if (
loop_ub_tmp == 1 ) { z1_idx_1 = h_data [ trueCount ] ; } else { z1_idx_1 =
h_data [ trueCount + 1 ] ; if ( ( h_data [ trueCount ] > z1_idx_1 ) || (
muDoubleScalarIsNaN ( h_data [ trueCount ] ) && ( ! muDoubleScalarIsNaN (
z1_idx_1 ) ) ) ) { } else { z1_idx_1 = h_data [ trueCount ] ; } } } else { if
( ! muDoubleScalarIsNaN ( h_data [ trueCount ] ) ) { idx = 1 ; } else { idx =
0 ; AT_eq_data_tmp = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && (
AT_eq_data_tmp <= loop_ub_tmp ) ) { if ( ! muDoubleScalarIsNaN ( h_data [ (
trueCount + AT_eq_data_tmp ) - 1 ] ) ) { idx = AT_eq_data_tmp ; exitg2 = true
; } else { AT_eq_data_tmp ++ ; } } } if ( idx == 0 ) { z1_idx_1 = h_data [
trueCount ] ; } else { z1_idx_1 = h_data [ ( trueCount + idx ) - 1 ] ; while
( idx + 1 <= loop_ub_tmp ) { z1_idx_2 = h_data [ trueCount + idx ] ; if (
z1_idx_1 > z1_idx_2 ) { z1_idx_1 = z1_idx_2 ; } idx ++ ; } } } if ( z1_idx_1
>= 0.0 ) { empty_non_axis_sizes = true ; } else { empty_non_axis_sizes =
false ; } } if ( ( count <= 0.001 ) && empty_non_axis_sizes ) { solution = 1
; exitg1 = true ; } else { guard1 = false ; if ( loop_ub_tmp == 0 ) { guard1
= true ; } else { if ( loop_ub_tmp <= 2 ) { if ( loop_ub_tmp == 1 ) { count =
h_data [ trueCount ] ; } else if ( ( h_data [ trueCount ] > h_data [
trueCount + 1 ] ) || ( muDoubleScalarIsNaN ( h_data [ trueCount ] ) && ( !
muDoubleScalarIsNaN ( h_data [ trueCount + 1 ] ) ) ) ) { count = h_data [
trueCount + 1 ] ; } else { count = h_data [ trueCount ] ; } } else { if ( !
muDoubleScalarIsNaN ( h_data [ trueCount ] ) ) { idx = 1 ; } else { idx = 0 ;
AT_eq_data_tmp = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && (
AT_eq_data_tmp <= loop_ub_tmp ) ) { if ( ! muDoubleScalarIsNaN ( h_data [ (
trueCount + AT_eq_data_tmp ) - 1 ] ) ) { idx = AT_eq_data_tmp ; exitg2 = true
; } else { AT_eq_data_tmp ++ ; } } } if ( idx == 0 ) { count = h_data [
trueCount ] ; } else { count = h_data [ ( trueCount + idx ) - 1 ] ; while (
idx + 1 <= loop_ub_tmp ) { z1_idx_2 = h_data [ trueCount + idx ] ; if ( count
> z1_idx_2 ) { count = z1_idx_2 ; } idx ++ ; } } } if ( count >= 0.0 ) {
guard1 = true ; } else { if ( loop_ub_tmp <= 2 ) { if ( loop_ub_tmp == 1 ) {
idx = 1 ; } else if ( ( h_data [ trueCount ] > h_data [ trueCount + 1 ] ) ||
( muDoubleScalarIsNaN ( h_data [ trueCount ] ) && ( ! muDoubleScalarIsNaN (
h_data [ trueCount + 1 ] ) ) ) ) { idx = 2 ; } else { idx = 1 ; } } else { if
( ! muDoubleScalarIsNaN ( h_data [ trueCount ] ) ) { idx = 1 ; } else { idx =
0 ; AT_eq_data_tmp = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && (
AT_eq_data_tmp <= loop_ub_tmp ) ) { if ( ! muDoubleScalarIsNaN ( h_data [ (
trueCount + AT_eq_data_tmp ) - 1 ] ) ) { idx = AT_eq_data_tmp ; exitg2 = true
; } else { AT_eq_data_tmp ++ ; } } } if ( idx == 0 ) { idx = 1 ; } else {
count = h_data [ ( trueCount + idx ) - 1 ] ; for ( AT_eq_data_tmp = idx ;
AT_eq_data_tmp < loop_ub_tmp ; AT_eq_data_tmp ++ ) { z1_idx_2 = h_data [
trueCount + AT_eq_data_tmp ] ; if ( count > z1_idx_2 ) { count = z1_idx_2 ;
idx = AT_eq_data_tmp + 1 ; } } } } count = muDoubleScalarAbs ( y_state_init [
0 ] ) ; if ( count == idx ) { y_state_init [ 0 ] = 0.0 ; } count +=
muDoubleScalarAbs ( y_state_init [ 1 ] ) ; if ( count == idx ) { y_state_init
[ 1 ] = 0.0 ; } count += muDoubleScalarAbs ( y_state_init [ 2 ] ) ; if (
count == idx ) { y_state_init [ 2 ] = 0.0 ; } count += muDoubleScalarAbs (
y_state_init [ 3 ] ) ; if ( count == idx ) { y_state_init [ 3 ] = 0.0 ; } } }
if ( guard1 ) { if ( ! muDoubleScalarIsNaN ( constraintError [ 0 ] ) ) {
trueCount = 1 ; } else { trueCount = 0 ; h_size = 2 ; exitg2 = false ; while
( ( ! exitg2 ) && ( h_size < 9 ) ) { if ( ! muDoubleScalarIsNaN (
constraintError [ h_size - 1 ] ) ) { trueCount = h_size ; exitg2 = true ; }
else { h_size ++ ; } } } if ( trueCount == 0 ) { trueCount = 1 ; } else {
count = constraintError [ trueCount - 1 ] ; for ( h_size = trueCount ; h_size
+ 1 < 9 ; h_size ++ ) { if ( count < constraintError [ h_size ] ) { count =
constraintError [ h_size ] ; trueCount = h_size + 1 ; } } } if ( trueCount <
5 ) { y_state_init [ trueCount - 1 ] = 1.0 ; } else { y_state_init [
trueCount - 5 ] = - 1.0 ; } } iter ++ ; } } * optimal = solution ; } static
void ddjw3qbpuq ( const real_T H [ 25 ] , const real_T c [ 5 ] , const real_T
A [ 50 ] , const real_T b [ 10 ] , real_T x0 [ 5 ] , real_T maxItr , real_T
y_state [ 10 ] , real_T * iter , real_T * optimal ) { real_T constraint [ 10
] ; real_T A_eq_data [ 50 ] ; real_T D_data [ 225 ] ; real_T d_xy_data [ 15 ]
; real_T d_k [ 5 ] ; int32_T p ; real_T tmp ; real_T dis ; int8_T f_data [ 10
] ; int8_T g_data [ 10 ] ; real_T result_data [ 150 ] ; boolean_T
empty_non_axis_sizes ; int32_T d_result ; real_T varargin_1_data [ 75 ] ;
real_T H_data [ 15 ] ; int32_T loop_ub ; int32_T loop_ub_p ; real_T A_p ;
int32_T c_i ; int32_T i ; int32_T D_size [ 2 ] ; int32_T d_xy_size ; int32_T
f_size_idx_1 ; int8_T l2_idx_0 ; int8_T l1_idx_1 ; real_T A_tmp ; boolean_T
exitg1 ; boolean_T exitg2 ; boolean_T guard1 = false ; for ( c_i = 0 ; c_i <
10 ; c_i ++ ) { constraint [ c_i ] = 0.0 ; for ( i = 0 ; i < 5 ; i ++ ) {
constraint [ c_i ] += A [ 10 * i + c_i ] * x0 [ i ] ; } y_state [ c_i ] = 0.0
; if ( constraint [ c_i ] - b [ c_i ] >= 0.0 ) { y_state [ c_i ] = 1.0 ; } }
* iter = 0.0 ; * optimal = 0.0 ; c_i = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( c_i <= ( int32_T ) maxItr - 1 ) ) { ( * iter ) ++ ; p = 0 ; for
( d_xy_size = 0 ; d_xy_size < 10 ; d_xy_size ++ ) { if ( ( int8_T ) y_state [
d_xy_size ] == 1 ) { p ++ ; } } f_size_idx_1 = p ; p = 0 ; for ( d_xy_size =
0 ; d_xy_size < 10 ; d_xy_size ++ ) { if ( ( int8_T ) y_state [ d_xy_size ]
== 1 ) { f_data [ p ] = ( int8_T ) ( d_xy_size + 1 ) ; p ++ ; } } for ( i = 0
; i < 5 ; i ++ ) { for ( loop_ub = 0 ; loop_ub < f_size_idx_1 ; loop_ub ++ )
{ A_eq_data [ loop_ub + f_size_idx_1 * i ] = A [ ( 10 * i + f_data [ loop_ub
] ) - 1 ] ; } } if ( f_size_idx_1 == 0 ) { l2_idx_0 = 0 ; l1_idx_1 = 0 ; }
else { l1_idx_1 = ( int8_T ) f_size_idx_1 ; l2_idx_0 = ( int8_T )
f_size_idx_1 ; } if ( f_size_idx_1 != 0 ) { p = f_size_idx_1 ; } else if ( (
l2_idx_0 != 0 ) && ( l1_idx_1 != 0 ) ) { p = l2_idx_0 ; } else { p =
muIntScalarMax_sint32 ( f_size_idx_1 , 0 ) ; if ( l2_idx_0 > p ) { p =
l2_idx_0 ; } } empty_non_axis_sizes = ( p == 0 ) ; if ( empty_non_axis_sizes
|| ( f_size_idx_1 != 0 ) ) { d_xy_size = 5 ; } else { d_xy_size = 0 ; } if (
empty_non_axis_sizes || ( ( l2_idx_0 != 0 ) && ( l1_idx_1 != 0 ) ) ) {
d_result = l1_idx_1 ; } else { d_result = 0 ; } loop_ub = p * d_xy_size ;
loop_ub_p = p * d_result - 1 ; if ( 0 <= loop_ub - 1 ) { memcpy ( &
result_data [ 0 ] , & A_eq_data [ 0 ] , loop_ub * sizeof ( real_T ) ) ; } for
( i = 0 ; i <= loop_ub_p ; i ++ ) { result_data [ i + loop_ub ] = 0.0 ; }
loop_ub_p = 5 + f_size_idx_1 ; for ( i = 0 ; i < 5 ; i ++ ) { for ( loop_ub =
0 ; loop_ub < 5 ; loop_ub ++ ) { varargin_1_data [ loop_ub + 5 * i ] = H [ 5
* i + loop_ub ] ; } } for ( i = 0 ; i < f_size_idx_1 ; i ++ ) { for ( loop_ub
= 0 ; loop_ub < 5 ; loop_ub ++ ) { varargin_1_data [ loop_ub + 5 * ( i + 5 )
] = A_eq_data [ f_size_idx_1 * loop_ub + i ] ; } } if ( ( p == 0 ) || (
d_xy_size + d_result == 0 ) ) { p = 0 ; } D_size [ 0 ] = 5 + p ; D_size [ 1 ]
= loop_ub_p ; for ( i = 0 ; i < loop_ub_p ; i ++ ) { for ( loop_ub = 0 ;
loop_ub < 5 ; loop_ub ++ ) { D_data [ loop_ub + D_size [ 0 ] * i ] =
varargin_1_data [ 5 * i + loop_ub ] ; } } for ( i = 0 ; i < loop_ub_p ; i ++
) { for ( loop_ub = 0 ; loop_ub < p ; loop_ub ++ ) { D_data [ ( loop_ub +
D_size [ 0 ] * i ) + 5 ] = result_data [ p * i + loop_ub ] ; } } p = 5 +
f_size_idx_1 ; for ( i = 0 ; i < 5 ; i ++ ) { tmp = 0.0 ; for ( loop_ub = 0 ;
loop_ub < 5 ; loop_ub ++ ) { tmp += H [ 5 * loop_ub + i ] * x0 [ loop_ub ] ;
} H_data [ i ] = - ( tmp + c [ i ] ) ; } for ( i = 0 ; i < f_size_idx_1 ; i
++ ) { H_data [ i + 5 ] = 0.0 ; } hwkrnvwbkc ( D_data , D_size , H_data , & p
, d_xy_data , & d_xy_size ) ; for ( i = 0 ; i < 5 ; i ++ ) { d_k [ i ] =
d_xy_data [ i ] ; } guard1 = false ; if ( norm_BC4t9Zak ( d_k ) < 0.0001 ) {
p = 0 ; for ( d_xy_size = 0 ; d_xy_size < 10 ; d_xy_size ++ ) { if ( ( int8_T
) y_state [ d_xy_size ] == 1 ) { p ++ ; } } f_size_idx_1 = p ; p = 0 ; for (
d_xy_size = 0 ; d_xy_size < 10 ; d_xy_size ++ ) { if ( ( int8_T ) y_state [
d_xy_size ] == 1 ) { g_data [ p ] = ( int8_T ) ( d_xy_size + 1 ) ; p ++ ; } }
loop_ub = 5 + f_size_idx_1 ; for ( i = 0 ; i < 5 ; i ++ ) { H_data [ i ] = -
c [ i ] ; } for ( i = 0 ; i < f_size_idx_1 ; i ++ ) { H_data [ i + 5 ] = b [
g_data [ i ] - 1 ] ; } hwkrnvwbkc ( D_data , D_size , H_data , & loop_ub ,
d_xy_data , & d_xy_size ) ; for ( i = 0 ; i < 5 ; i ++ ) { x0 [ i ] =
d_xy_data [ i ] ; } if ( 6 > d_xy_size ) { p = 0 ; d_xy_size = 0 ; } else { p
= 5 ; } f_size_idx_1 = d_xy_size - p ; for ( i = 0 ; i < f_size_idx_1 ; i ++
) { H_data [ i ] = d_xy_data [ p + i ] ; } if ( 0 <= f_size_idx_1 - 1 ) {
memcpy ( & d_xy_data [ 0 ] , & H_data [ 0 ] , f_size_idx_1 * sizeof ( real_T
) ) ; } for ( i = 0 ; i < 10 ; i ++ ) { tmp = 0.0 ; for ( loop_ub = 0 ;
loop_ub < 5 ; loop_ub ++ ) { tmp += A [ 10 * loop_ub + i ] * x0 [ loop_ub ] ;
} constraint [ i ] = tmp - b [ i ] ; } if ( ! muDoubleScalarIsNaN (
constraint [ 0 ] ) ) { p = 1 ; } else { p = 0 ; d_xy_size = 2 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( d_xy_size < 11 ) ) { if ( !
muDoubleScalarIsNaN ( constraint [ d_xy_size - 1 ] ) ) { p = d_xy_size ;
exitg2 = true ; } else { d_xy_size ++ ; } } } if ( p == 0 ) { tmp =
constraint [ 0 ] ; } else { tmp = constraint [ p - 1 ] ; while ( p + 1 < 11 )
{ if ( tmp < constraint [ p ] ) { tmp = constraint [ p ] ; } p ++ ; } } if (
f_size_idx_1 == 0 ) { empty_non_axis_sizes = true ; } else { if (
f_size_idx_1 <= 2 ) { if ( f_size_idx_1 == 1 ) { dis = d_xy_data [ 0 ] ; }
else if ( ( d_xy_data [ 0 ] > d_xy_data [ 1 ] ) || ( muDoubleScalarIsNaN (
d_xy_data [ 0 ] ) && ( ! muDoubleScalarIsNaN ( d_xy_data [ 1 ] ) ) ) ) { dis
= d_xy_data [ 1 ] ; } else { dis = d_xy_data [ 0 ] ; } } else { if ( !
muDoubleScalarIsNaN ( d_xy_data [ 0 ] ) ) { p = 1 ; } else { p = 0 ;
d_xy_size = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && ( d_xy_size <=
f_size_idx_1 ) ) { if ( ! muDoubleScalarIsNaN ( d_xy_data [ d_xy_size - 1 ] )
) { p = d_xy_size ; exitg2 = true ; } else { d_xy_size ++ ; } } } if ( p == 0
) { dis = d_xy_data [ 0 ] ; } else { dis = d_xy_data [ p - 1 ] ; while ( p +
1 <= f_size_idx_1 ) { if ( dis > d_xy_data [ p ] ) { dis = d_xy_data [ p ] ;
} p ++ ; } } } if ( dis >= - 0.0001 ) { empty_non_axis_sizes = true ; } else
{ empty_non_axis_sizes = false ; } } if ( ( tmp <= 0.0001 ) &&
empty_non_axis_sizes ) { * optimal = 1.0 ; exitg1 = true ; } else if (
f_size_idx_1 == 0 ) { guard1 = true ; } else { if ( f_size_idx_1 <= 2 ) { if
( f_size_idx_1 == 1 ) { tmp = d_xy_data [ 0 ] ; } else if ( ( d_xy_data [ 0 ]
> d_xy_data [ 1 ] ) || ( muDoubleScalarIsNaN ( d_xy_data [ 0 ] ) && ( !
muDoubleScalarIsNaN ( d_xy_data [ 1 ] ) ) ) ) { tmp = d_xy_data [ 1 ] ; }
else { tmp = d_xy_data [ 0 ] ; } } else { if ( ! muDoubleScalarIsNaN (
d_xy_data [ 0 ] ) ) { p = 1 ; } else { p = 0 ; d_xy_size = 2 ; exitg2 = false
; while ( ( ! exitg2 ) && ( d_xy_size <= f_size_idx_1 ) ) { if ( !
muDoubleScalarIsNaN ( d_xy_data [ d_xy_size - 1 ] ) ) { p = d_xy_size ;
exitg2 = true ; } else { d_xy_size ++ ; } } } if ( p == 0 ) { tmp = d_xy_data
[ 0 ] ; } else { tmp = d_xy_data [ p - 1 ] ; while ( p + 1 <= f_size_idx_1 )
{ if ( tmp > d_xy_data [ p ] ) { tmp = d_xy_data [ p ] ; } p ++ ; } } } if (
tmp >= - 0.0001 ) { guard1 = true ; } else { if ( f_size_idx_1 <= 2 ) { if (
f_size_idx_1 == 1 ) { p = 1 ; } else if ( ( d_xy_data [ 0 ] > d_xy_data [ 1 ]
) || ( muDoubleScalarIsNaN ( d_xy_data [ 0 ] ) && ( ! muDoubleScalarIsNaN (
d_xy_data [ 1 ] ) ) ) ) { p = 2 ; } else { p = 1 ; } } else { if ( !
muDoubleScalarIsNaN ( d_xy_data [ 0 ] ) ) { p = 1 ; } else { p = 0 ;
d_xy_size = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && ( d_xy_size <=
f_size_idx_1 ) ) { if ( ! muDoubleScalarIsNaN ( d_xy_data [ d_xy_size - 1 ] )
) { p = d_xy_size ; exitg2 = true ; } else { d_xy_size ++ ; } } } if ( p == 0
) { p = 1 ; } else { tmp = d_xy_data [ p - 1 ] ; for ( d_xy_size = p ;
d_xy_size < f_size_idx_1 ; d_xy_size ++ ) { if ( tmp > d_xy_data [ d_xy_size
] ) { tmp = d_xy_data [ d_xy_size ] ; p = d_xy_size + 1 ; } } } } tmp = 0.0 ;
for ( d_xy_size = 0 ; d_xy_size < 10 ; d_xy_size ++ ) { dis = y_state [
d_xy_size ] ; tmp += ( real_T ) ( int8_T ) y_state [ d_xy_size ] ; if ( tmp
== p ) { dis = 0.0 ; } y_state [ d_xy_size ] = dis ; } c_i ++ ; } } } else {
tmp = ( rtInf ) ; p = 0 ; for ( d_xy_size = 0 ; d_xy_size < 10 ; d_xy_size ++
) { dis = 0.0 ; for ( i = 0 ; i < 5 ; i ++ ) { dis += A [ 10 * i + d_xy_size
] * d_k [ i ] ; } if ( dis > 0.0001 ) { dis = 0.0 ; A_p = 0.0 ; for ( i = 0 ;
i < 5 ; i ++ ) { A_tmp = A [ 10 * i + d_xy_size ] ; dis += A_tmp * x0 [ i ] ;
A_p += A_tmp * d_k [ i ] ; } dis = ( b [ d_xy_size ] - dis ) / A_p ; if ( dis
< tmp ) { tmp = dis ; p = d_xy_size ; } } } dis = muDoubleScalarMin ( tmp ,
1.0 ) ; for ( i = 0 ; i < 5 ; i ++ ) { x0 [ i ] += dis * d_k [ i ] ; } if (
tmp < 1.0 ) { y_state [ p ] = 1.0 ; } c_i ++ ; } if ( guard1 ) { if ( !
muDoubleScalarIsNaN ( constraint [ 0 ] ) ) { p = 0 ; } else { p = - 1 ;
d_xy_size = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && ( d_xy_size < 11 ) )
{ if ( ! muDoubleScalarIsNaN ( constraint [ d_xy_size - 1 ] ) ) { p =
d_xy_size - 1 ; exitg2 = true ; } else { d_xy_size ++ ; } } } if ( p + 1 == 0
) { p = 0 ; } else { tmp = constraint [ p ] ; for ( d_xy_size = p + 1 ;
d_xy_size + 1 < 11 ; d_xy_size ++ ) { if ( tmp < constraint [ d_xy_size ] ) {
tmp = constraint [ d_xy_size ] ; p = d_xy_size ; } } } y_state [ p ] = 1.0 ;
c_i ++ ; } } } static void e5kulktxfz ( real_T refStruct_MuRef , real_T
refStruct_MvRef , real_T refStruct_MzRef , real_T refStruct_FtotRef , const
real_T state_omegaf [ 3 ] , const real_T state_FMax [ 4 ] , const real_T
state_FMin [ 4 ] , real_T state_fail_id , real_T gainStruct_MuGain , real_T
gainStruct_MvGain , real_T gainStruct_MzGain , real_T gainStruct_FtotGain ,
const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par , const URControlParamsType *
URpar , real_T output [ 4 ] , real_T * iter , real_T * optimal , cq2d5gococ *
localDW ) { real_T r ; real_T b ; real_T w ; real_T PHI [ 4 ] ; real_T Q1 [ 4
] ; real_T Gv [ 4 ] ; real_T Gz [ 4 ] ; real_T x [ 5 ] ; real_T unusedU0 [ 10
] ; real_T y [ 25 ] ; real_T b_y [ 25 ] ; real_T c_y [ 25 ] ; real_T absxk ;
real_T t ; static const int8_T c [ 5 ] = { 0 , 1 , 0 , 1 , 0 } ; static const
int8_T d [ 5 ] = { 1 , 0 , 1 , 0 , 0 } ; static const int8_T c_b [ 8 ] = { 1
, 1 , - 1 , 1 , - 1 , - 1 , 1 , - 1 } ; static const int8_T e [ 20 ] = { 1 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 } ;
static const int8_T f [ 20 ] = { - 1 , 0 , 0 , 0 , 0 , - 1 , 0 , 0 , 0 , 0 ,
- 1 , 0 , 0 , 0 , 0 , - 1 , 0 , 0 , 0 , 0 } ; static const int8_T g [ 5 ] = {
0 , 0 , 0 , 0 , - 1 } ; static const int8_T g_b [ 25 ] = { 1 , 1 , 1 , 1 , 0
, 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 } ; static const int8_T h_b [ 25 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } ; int32_T i ;
real_T tmp [ 25 ] ; real_T tmp_p [ 5 ] ; real_T e_p [ 50 ] ; real_T
state_FMax_p [ 10 ] ; real_T URpar_p [ 4 ] ; real_T tmp_e [ 2 ] ; real_T
URpar_e [ 8 ] ; real_T tmp_i [ 5 ] ; real_T tmp_m [ 5 ] ; real_T tmp_g [ 5 ]
; real_T tmp_j [ 5 ] ; real_T r_tmp ; real_T tmp_f ; int32_T Q1_tmp ; int32_T
URpar_tmp ; int32_T URpar_tmp_tmp ; int32_T e_tmp ; r = state_omegaf [ 2 ] ;
if ( ! localDW -> nmro3iid1y ) { if ( state_fail_id == 0.0 ) { for ( i = 0 ;
i < 5 ; i ++ ) { localDW -> c2gqxoq3yv [ i ] = 0.0 ; } localDW -> nmro3iid1y
= true ; } else if ( ( state_fail_id == 2.0 ) || ( state_fail_id == 4.0 ) ) {
for ( i = 0 ; i < 5 ; i ++ ) { localDW -> c2gqxoq3yv [ i ] = d [ i ] ; }
localDW -> nmro3iid1y = true ; } else { for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> c2gqxoq3yv [ i ] = c [ i ] ; } localDW -> nmro3iid1y = true ; } }
if ( muDoubleScalarAbs ( state_omegaf [ 2 ] ) < 0.001 ) { r = 0.001 ; } b = (
URpar -> Iz - URpar -> Ix ) / URpar -> Iy * r ; w = muDoubleScalarSqrt (
muDoubleScalarAbs ( ( URpar -> Iy - URpar -> Iz ) / URpar -> Ix * r ) *
muDoubleScalarAbs ( b ) ) ; r = b * state_omegaf [ 0 ] / w ; switch ( (
int32_T ) state_fail_id ) { case 1 : absxk = w * URpar -> envp_timeHoriz ; t
= w / b ; r_tmp = muDoubleScalarCos ( absxk ) ; absxk = muDoubleScalarSin (
absxk ) ; r = ( ( absxk * - state_omegaf [ 1 ] * t + r_tmp * r * t ) * ( 0.0
* URpar -> R_xy_uv [ 0 ] + URpar -> R_xy_uv [ 1 ] ) + ( r_tmp * state_omegaf
[ 1 ] + absxk * r ) * ( 0.0 * URpar -> R_xy_uv [ 2 ] + URpar -> R_xy_uv [ 3 ]
) ) + URpar -> envp_maxOmega ; t = - 0.0 * URpar -> R_xy_uv [ 0 ] + - URpar
-> R_xy_uv [ 1 ] ; tmp_f = - 0.0 * URpar -> R_xy_uv [ 2 ] + - URpar ->
R_xy_uv [ 3 ] ; absxk *= 1.0 / w ; Q1 [ 0 ] = absxk ; Q1 [ 2 ] = 1.0 / b *
r_tmp - 1.0 / b ; Q1 [ 1 ] = - b / w / w * r_tmp + b / w / w ; Q1 [ 3 ] =
absxk ; URpar_p [ 0 ] = URpar -> b / URpar -> Ix ; URpar_p [ 2 ] = 0.0 ;
URpar_p [ 1 ] = 0.0 ; URpar_p [ 3 ] = URpar -> l / URpar -> Iy ; for ( i = 0
; i < 2 ; i ++ ) { Q1_tmp = i << 1 ; for ( e_tmp = 0 ; e_tmp < 4 ; e_tmp ++ )
{ URpar_tmp_tmp = e_tmp << 1 ; URpar_tmp = i + URpar_tmp_tmp ; URpar_e [
URpar_tmp ] = 0.0 ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp ]
* URpar_p [ i ] ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp + 1
] * URpar_p [ i + 2 ] ; } tmp_e [ i ] = Q1 [ Q1_tmp + 1 ] * tmp_f + Q1 [
Q1_tmp ] * t ; } for ( i = 0 ; i < 4 ; i ++ ) { Q1_tmp = i << 1 ; Q1 [ i ] =
URpar_e [ Q1_tmp + 1 ] * tmp_e [ 1 ] + URpar_e [ Q1_tmp ] * tmp_e [ 0 ] ; }
break ; case 2 : r = ( ( muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) *
- state_omegaf [ 1 ] * ( w / b ) + muDoubleScalarCos ( w * URpar ->
envp_timeHoriz ) * r * ( w / b ) ) * ( 0.0 * URpar -> R_xy_uv [ 1 ] + - URpar
-> R_xy_uv [ 0 ] ) + ( muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) *
state_omegaf [ 1 ] + muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) * r )
* ( 0.0 * URpar -> R_xy_uv [ 3 ] + - URpar -> R_xy_uv [ 2 ] ) ) + URpar ->
envp_maxOmega ; t = 0.0 * URpar -> R_xy_uv [ 1 ] + URpar -> R_xy_uv [ 0 ] ;
tmp_f = 0.0 * URpar -> R_xy_uv [ 3 ] + URpar -> R_xy_uv [ 2 ] ; Q1 [ 0 ] =
1.0 / w * muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) ; Q1 [ 2 ] = 1.0
/ b * muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) - 1.0 / b ; Q1 [ 1 ]
= - b / w / w * muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) + b / w / w
; Q1 [ 3 ] = 1.0 / w * muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) ;
URpar_p [ 0 ] = URpar -> b / URpar -> Ix ; URpar_p [ 2 ] = 0.0 ; URpar_p [ 1
] = 0.0 ; URpar_p [ 3 ] = URpar -> l / URpar -> Iy ; for ( i = 0 ; i < 2 ; i
++ ) { Q1_tmp = i << 1 ; for ( e_tmp = 0 ; e_tmp < 4 ; e_tmp ++ ) {
URpar_tmp_tmp = e_tmp << 1 ; URpar_tmp = i + URpar_tmp_tmp ; URpar_e [
URpar_tmp ] = 0.0 ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp ]
* URpar_p [ i ] ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp + 1
] * URpar_p [ i + 2 ] ; } tmp_e [ i ] = Q1 [ Q1_tmp + 1 ] * tmp_f + Q1 [
Q1_tmp ] * t ; } for ( i = 0 ; i < 4 ; i ++ ) { Q1_tmp = i << 1 ; Q1 [ i ] =
URpar_e [ Q1_tmp + 1 ] * tmp_e [ 1 ] + URpar_e [ Q1_tmp ] * tmp_e [ 0 ] ; }
break ; case 3 : r = ( ( muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) *
- state_omegaf [ 1 ] * ( w / b ) + muDoubleScalarCos ( w * URpar ->
envp_timeHoriz ) * r * ( w / b ) ) * ( - 0.0 * URpar -> R_xy_uv [ 0 ] + -
URpar -> R_xy_uv [ 1 ] ) + ( muDoubleScalarCos ( w * URpar -> envp_timeHoriz
) * state_omegaf [ 1 ] + muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) *
r ) * ( - 0.0 * URpar -> R_xy_uv [ 2 ] + - URpar -> R_xy_uv [ 3 ] ) ) + URpar
-> envp_maxOmega ; t = 0.0 * URpar -> R_xy_uv [ 0 ] + URpar -> R_xy_uv [ 1 ]
; tmp_f = 0.0 * URpar -> R_xy_uv [ 2 ] + URpar -> R_xy_uv [ 3 ] ; Q1 [ 0 ] =
1.0 / w * muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) ; Q1 [ 2 ] = 1.0
/ b * muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) - 1.0 / b ; Q1 [ 1 ]
= - b / w / w * muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) + b / w / w
; Q1 [ 3 ] = 1.0 / w * muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) ;
URpar_p [ 0 ] = URpar -> b / URpar -> Ix ; URpar_p [ 2 ] = 0.0 ; URpar_p [ 1
] = 0.0 ; URpar_p [ 3 ] = URpar -> l / URpar -> Iy ; for ( i = 0 ; i < 2 ; i
++ ) { Q1_tmp = i << 1 ; for ( e_tmp = 0 ; e_tmp < 4 ; e_tmp ++ ) {
URpar_tmp_tmp = e_tmp << 1 ; URpar_tmp = i + URpar_tmp_tmp ; URpar_e [
URpar_tmp ] = 0.0 ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp ]
* URpar_p [ i ] ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp + 1
] * URpar_p [ i + 2 ] ; } tmp_e [ i ] = Q1 [ Q1_tmp + 1 ] * tmp_f + Q1 [
Q1_tmp ] * t ; } for ( i = 0 ; i < 4 ; i ++ ) { Q1_tmp = i << 1 ; Q1 [ i ] =
URpar_e [ Q1_tmp + 1 ] * tmp_e [ 1 ] + URpar_e [ Q1_tmp ] * tmp_e [ 0 ] ; }
break ; case 4 : r = ( ( muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) *
- state_omegaf [ 1 ] * ( w / b ) + muDoubleScalarCos ( w * URpar ->
envp_timeHoriz ) * r * ( w / b ) ) * ( 0.0 * URpar -> R_xy_uv [ 1 ] + URpar
-> R_xy_uv [ 0 ] ) + ( muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) *
state_omegaf [ 1 ] + muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) * r )
* ( 0.0 * URpar -> R_xy_uv [ 3 ] + URpar -> R_xy_uv [ 2 ] ) ) + URpar ->
envp_maxOmega ; t = 0.0 * URpar -> R_xy_uv [ 1 ] + - URpar -> R_xy_uv [ 0 ] ;
tmp_f = 0.0 * URpar -> R_xy_uv [ 3 ] + - URpar -> R_xy_uv [ 2 ] ; Q1 [ 0 ] =
1.0 / w * muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) ; Q1 [ 2 ] = 1.0
/ b * muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) - 1.0 / b ; Q1 [ 1 ]
= - b / w / w * muDoubleScalarCos ( w * URpar -> envp_timeHoriz ) + b / w / w
; Q1 [ 3 ] = 1.0 / w * muDoubleScalarSin ( w * URpar -> envp_timeHoriz ) ;
URpar_p [ 0 ] = URpar -> b / URpar -> Ix ; URpar_p [ 2 ] = 0.0 ; URpar_p [ 1
] = 0.0 ; URpar_p [ 3 ] = URpar -> l / URpar -> Iy ; for ( i = 0 ; i < 2 ; i
++ ) { Q1_tmp = i << 1 ; for ( e_tmp = 0 ; e_tmp < 4 ; e_tmp ++ ) {
URpar_tmp_tmp = e_tmp << 1 ; URpar_tmp = i + URpar_tmp_tmp ; URpar_e [
URpar_tmp ] = 0.0 ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp ]
* URpar_p [ i ] ; URpar_e [ URpar_tmp ] += ( real_T ) c_b [ URpar_tmp_tmp + 1
] * URpar_p [ i + 2 ] ; } tmp_e [ i ] = Q1 [ Q1_tmp + 1 ] * tmp_f + Q1 [
Q1_tmp ] * t ; } for ( i = 0 ; i < 4 ; i ++ ) { Q1_tmp = i << 1 ; Q1 [ i ] =
URpar_e [ Q1_tmp + 1 ] * tmp_e [ 1 ] + URpar_e [ Q1_tmp ] * tmp_e [ 0 ] ; }
break ; default : r = 10000.0 ; Q1 [ 0 ] = 1.0 ; Q1 [ 1 ] = 1.0 ; Q1 [ 2 ] =
1.0 ; Q1 [ 3 ] = 1.0 ; break ; } b = URpar -> t0 / URpar -> k0 ; r_tmp =
b_par -> URC . s * 0.0 ; PHI [ 0 ] = r_tmp ; Gv [ 0 ] = b_par -> URC . s ; Gz
[ 0 ] = b ; PHI [ 1 ] = - b_par -> URC . s ; Gv [ 1 ] = r_tmp ; Gz [ 1 ] = -
b ; PHI [ 2 ] = r_tmp ; Gv [ 2 ] = - b_par -> URC . s ; Gz [ 2 ] = b ; PHI [
3 ] = b_par -> URC . s ; Gv [ 3 ] = r_tmp ; Gz [ 3 ] = - b ; for ( i = 0 ; i
< 25 ; i ++ ) { y [ i ] = 0.0 ; } for ( i = 0 ; i < 4 ; i ++ ) { y [ i ] =
PHI [ i ] * r_tmp ; y [ i + 5 ] = PHI [ i ] * PHI [ 1 ] ; y [ i + 10 ] = PHI
[ i ] * r_tmp ; y [ i + 15 ] = PHI [ i ] * PHI [ 3 ] ; } y [ 24 ] = 0.0 ; for
( i = 0 ; i < 25 ; i ++ ) { b_y [ i ] = 0.0 ; } for ( i = 0 ; i < 4 ; i ++ )
{ b_y [ i ] = Gv [ i ] * Gv [ 0 ] ; b_y [ i + 5 ] = Gv [ i ] * r_tmp ; b_y [
i + 10 ] = Gv [ i ] * Gv [ 2 ] ; b_y [ i + 15 ] = Gv [ i ] * r_tmp ; } b_y [
24 ] = 0.0 ; for ( i = 0 ; i < 25 ; i ++ ) { c_y [ i ] = 0.0 ; } for ( i = 0
; i < 4 ; i ++ ) { w = Gz [ i ] * b ; c_y [ i ] = w ; c_y [ i + 5 ] = Gz [ i
] * - b ; c_y [ i + 10 ] = w ; c_y [ i + 15 ] = Gz [ i ] * - b ; } c_y [ 24 ]
= 0.0 ; w = 3.3121686421112381E-170 ; absxk = muDoubleScalarAbs (
refStruct_MuRef ) ; if ( absxk > 3.3121686421112381E-170 ) { b = 1.0 ; w =
absxk ; } else { t = absxk / 3.3121686421112381E-170 ; b = t * t ; } absxk =
muDoubleScalarAbs ( refStruct_MvRef ) ; if ( absxk > w ) { t = w / absxk ; b
= b * t * t + 1.0 ; w = absxk ; } else { t = absxk / w ; b += t * t ; } b = w
* muDoubleScalarSqrt ( b ) ; b *= URpar -> rate_envGain ; w =
gainStruct_MuGain * refStruct_MuRef ; absxk = gainStruct_MvGain *
refStruct_MvRef ; t = gainStruct_FtotGain * refStruct_FtotRef ; tmp_f =
gainStruct_MzGain * refStruct_MzRef ; for ( i = 0 ; i < 5 ; i ++ ) { x [ i ]
= localDW -> c2gqxoq3yv [ i ] ; } for ( i = 0 ; i < 25 ; i ++ ) { tmp [ i ] =
( ( ( ( gainStruct_MuGain * y [ i ] + gainStruct_MvGain * b_y [ i ] ) +
gainStruct_FtotGain * ( real_T ) g_b [ i ] ) + gainStruct_MzGain * c_y [ i ]
) + b * ( real_T ) h_b [ i ] ) * 2.0 ; } tmp_i [ 4 ] = 0.0 ; tmp_m [ 4 ] =
0.0 ; tmp_g [ 4 ] = 0.0 ; tmp_i [ 0 ] = w * r_tmp * - 2.0 ; tmp_m [ 0 ] =
absxk * b_par -> URC . s * - 2.0 ; tmp_g [ 0 ] = - 2.0 * t ; tmp_j [ 0 ] =
tmp_f * Gz [ 0 ] * - 2.0 ; tmp_i [ 1 ] = w * - b_par -> URC . s * - 2.0 ;
tmp_m [ 1 ] = absxk * r_tmp * - 2.0 ; tmp_g [ 1 ] = - 2.0 * t ; tmp_j [ 1 ] =
tmp_f * Gz [ 1 ] * - 2.0 ; tmp_i [ 2 ] = w * r_tmp * - 2.0 ; tmp_m [ 2 ] =
absxk * - b_par -> URC . s * - 2.0 ; tmp_g [ 2 ] = - 2.0 * t ; tmp_j [ 2 ] =
tmp_f * Gz [ 2 ] * - 2.0 ; tmp_i [ 3 ] = w * b_par -> URC . s * - 2.0 ; tmp_m
[ 3 ] = absxk * r_tmp * - 2.0 ; tmp_g [ 3 ] = - 2.0 * t ; tmp_j [ 3 ] = tmp_f
* Gz [ 3 ] * - 2.0 ; tmp_j [ 4 ] = 0.0 ; for ( i = 0 ; i < 5 ; i ++ ) { tmp_p
[ i ] = ( ( tmp_i [ i ] + tmp_m [ i ] ) + tmp_g [ i ] ) + tmp_j [ i ] ;
Q1_tmp = i << 2 ; e_p [ 10 * i ] = e [ Q1_tmp ] ; e_p [ 4 + 10 * i ] = f [
Q1_tmp ] ; e_tmp = Q1_tmp + 1 ; e_p [ 1 + 10 * i ] = e [ e_tmp ] ; e_p [ 5 +
10 * i ] = f [ e_tmp ] ; e_tmp = Q1_tmp + 2 ; e_p [ 2 + 10 * i ] = e [ e_tmp
] ; e_p [ 6 + 10 * i ] = f [ e_tmp ] ; Q1_tmp += 3 ; e_p [ 3 + 10 * i ] = e [
Q1_tmp ] ; e_p [ 7 + 10 * i ] = f [ Q1_tmp ] ; } e_p [ 8 ] = Q1 [ 0 ] ; e_p [
18 ] = Q1 [ 1 ] ; e_p [ 28 ] = Q1 [ 2 ] ; e_p [ 38 ] = Q1 [ 3 ] ; e_p [ 48 ]
= - 1.0 ; for ( i = 0 ; i < 5 ; i ++ ) { e_p [ 9 + 10 * i ] = g [ i ] ; }
state_FMax_p [ 0 ] = state_FMax [ 0 ] ; state_FMax_p [ 1 ] = state_FMax [ 1 ]
; state_FMax_p [ 2 ] = state_FMax [ 2 ] ; state_FMax_p [ 3 ] = state_FMax [ 3
] ; state_FMax_p [ 4 ] = - state_FMin [ 0 ] ; state_FMax_p [ 5 ] = -
state_FMin [ 1 ] ; state_FMax_p [ 6 ] = - state_FMin [ 2 ] ; state_FMax_p [ 7
] = - state_FMin [ 3 ] ; state_FMax_p [ 8 ] = r ; state_FMax_p [ 9 ] = 0.0 ;
ddjw3qbpuq ( tmp , tmp_p , e_p , state_FMax_p , x , URpar -> rate_maxIter ,
unusedU0 , iter , optimal ) ; for ( i = 0 ; i < 5 ; i ++ ) { r = x [ i ] ; if
( * optimal != 1.0 ) { r = localDW -> c2gqxoq3yv [ i ] * 0.99 ; } localDW ->
c2gqxoq3yv [ i ] = r ; x [ i ] = r ; } output [ 0 ] = x [ 0 ] ; output [ 1 ]
= x [ 1 ] ; output [ 2 ] = x [ 2 ] ; output [ 3 ] = x [ 3 ] ; } static void
a255ev1jku ( real_T act_fail_id , const real_T Omega_f_dot [ 3 ] , real_T
accel_z_f , const real_T v [ 4 ] , real_T G [ 32 ] , const real_T w_f [ 4 ] ,
const struct_I1MFrEjvpMwyFfAGGP9FCC * b_par , real_T w_cmd [ 4 ] , cq2d5gococ
* localDW ) { real_T G1 [ 16 ] ; real32_T fail_id_vec_data [ 2 ] ; real_T
G_pinv [ 16 ] ; real_T du [ 4 ] ; int8_T i_up_data [ 4 ] ; boolean_T tf ;
boolean_T x [ 4 ] ; int8_T ii_data [ 4 ] ; int32_T idx ; int32_T b_ii ;
real_T v_p [ 4 ] ; real_T v_idx_0 ; real_T v_idx_1 ; real_T v_idx_2 ; real_T
v_idx_3 ; real_T du_p ; int32_T G_tmp ; int32_T G_tmp_p ; boolean_T guard1 =
false ; boolean_T exitg1 ; for ( b_ii = 0 ; b_ii < 32 ; b_ii ++ ) { G [ b_ii
] *= 0.001 ; } for ( b_ii = 0 ; b_ii < 4 ; b_ii ++ ) { idx = b_ii << 2 ; G1 [
idx ] = G [ idx ] ; G1 [ 1 + ( b_ii << 2 ) ] = G [ idx + 1 ] ; G1 [ 2 + (
b_ii << 2 ) ] = G [ idx + 2 ] ; G1 [ 3 + ( b_ii << 2 ) ] = G [ idx + 3 ] ; }
guard1 = false ; if ( act_fail_id == 13.0 ) { G_tmp = 2 ; fail_id_vec_data [
0 ] = 1.0F ; fail_id_vec_data [ 1 ] = 3.0F ; guard1 = true ; } else if (
act_fail_id == 24.0 ) { G_tmp = 2 ; fail_id_vec_data [ 0 ] = 2.0F ;
fail_id_vec_data [ 1 ] = 4.0F ; guard1 = true ; } else { tf = false ; idx = 1
; exitg1 = false ; while ( ( ! exitg1 ) && ( idx - 1 < 4 ) ) { if (
muDoubleScalarAbs ( ( real_T ) idx - act_fail_id ) < eps_0ubcMMgU ( ( real_T
) idx / 2.0 ) ) { tf = true ; exitg1 = true ; } else { idx ++ ; } } if ( tf )
{ G_tmp = 1 ; fail_id_vec_data [ 0 ] = ( real32_T ) act_fail_id ; guard1 =
true ; } else { for ( b_ii = 0 ; b_ii < 4 ; b_ii ++ ) { idx = b_ii << 2 ;
G_tmp = ( 4 + b_ii ) << 2 ; G1 [ idx ] = G [ G_tmp ] + G [ idx ] ; G_tmp_p =
idx + 1 ; G1 [ G_tmp_p ] = G [ G_tmp + 1 ] + G [ G_tmp_p ] ; G_tmp_p = idx +
2 ; G1 [ G_tmp_p ] = G [ G_tmp + 2 ] + G [ G_tmp_p ] ; idx += 3 ; G1 [ idx ]
= G [ G_tmp + 3 ] + G [ idx ] ; } pinv_9fLArOC2 ( G1 , G_pinv ) ; du [ 0 ] =
Omega_f_dot [ 0 ] ; du [ 1 ] = Omega_f_dot [ 1 ] ; du [ 2 ] = Omega_f_dot [ 2
] ; du [ 3 ] = accel_z_f ; for ( b_ii = 0 ; b_ii < 4 ; b_ii ++ ) { v_p [ b_ii
] = ( ( ( G [ b_ii + 16 ] * localDW -> iydhdgpa2t [ 0 ] + G [ b_ii + 20 ] *
localDW -> iydhdgpa2t [ 1 ] ) + G [ b_ii + 24 ] * localDW -> iydhdgpa2t [ 2 ]
) + G [ b_ii + 28 ] * localDW -> iydhdgpa2t [ 3 ] ) + ( v [ b_ii ] - du [
b_ii ] ) ; } for ( b_ii = 0 ; b_ii < 4 ; b_ii ++ ) { du_p = G_pinv [ b_ii +
12 ] * v_p [ 3 ] + ( G_pinv [ b_ii + 8 ] * v_p [ 2 ] + ( G_pinv [ b_ii + 4 ]
* v_p [ 1 ] + G_pinv [ b_ii ] * v_p [ 0 ] ) ) ; du [ b_ii ] = du_p ; } } } if
( guard1 ) { for ( b_ii = 0 ; b_ii < G_tmp ; b_ii ++ ) { idx = ( ( int32_T )
fail_id_vec_data [ b_ii ] - 1 ) << 2 ; G1 [ idx ] = 0.0 ; G1 [ 1 + idx ] =
0.0 ; G1 [ 2 + idx ] = 0.0 ; G1 [ 3 + idx ] = 0.0 ; } G1 [ 2 ] = 0.0 ; G1 [ 6
] = 0.0 ; G1 [ 10 ] = 0.0 ; G1 [ 14 ] = 0.0 ; pinv_9fLArOC2 ( G1 , G_pinv ) ;
v_idx_0 = v [ 0 ] - Omega_f_dot [ 0 ] ; v_idx_1 = v [ 1 ] - Omega_f_dot [ 1 ]
; v_idx_2 = v [ 2 ] - Omega_f_dot [ 2 ] ; v_idx_3 = v [ 3 ] - accel_z_f ; for
( b_ii = 0 ; b_ii < 4 ; b_ii ++ ) { du_p = G_pinv [ b_ii + 12 ] * v_idx_3 + (
G_pinv [ b_ii + 8 ] * v_idx_2 + ( G_pinv [ b_ii + 4 ] * v_idx_1 + G_pinv [
b_ii ] * v_idx_0 ) ) ; du [ b_ii ] = du_p ; } } du_p = w_f [ 0 ] + du [ 0 ] ;
x [ 0 ] = ( du_p >= b_par -> w_max ) ; w_cmd [ 0 ] = du_p ; du_p = w_f [ 1 ]
+ du [ 1 ] ; x [ 1 ] = ( du_p >= b_par -> w_max ) ; w_cmd [ 1 ] = du_p ; du_p
= w_f [ 2 ] + du [ 2 ] ; x [ 2 ] = ( du_p >= b_par -> w_max ) ; w_cmd [ 2 ] =
du_p ; du_p = w_f [ 3 ] + du [ 3 ] ; x [ 3 ] = ( du_p >= b_par -> w_max ) ;
w_cmd [ 3 ] = du_p ; idx = 0 ; b_ii = 0 ; exitg1 = false ; while ( ( ! exitg1
) && ( b_ii < 4 ) ) { if ( x [ b_ii ] ) { idx ++ ; ii_data [ idx - 1 ] = (
int8_T ) ( b_ii + 1 ) ; if ( idx >= 4 ) { exitg1 = true ; } else { b_ii ++ ;
} } else { b_ii ++ ; } } if ( 1 > idx ) { idx = 0 ; } G_tmp = idx ; if ( 0 <=
idx - 1 ) { memcpy ( & i_up_data [ 0 ] , & ii_data [ 0 ] , idx * sizeof (
int8_T ) ) ; } x [ 0 ] = ( w_cmd [ 0 ] < b_par -> w_min ) ; x [ 1 ] = ( w_cmd
[ 1 ] < b_par -> w_min ) ; x [ 2 ] = ( w_cmd [ 2 ] < b_par -> w_min ) ; x [ 3
] = ( du_p < b_par -> w_min ) ; idx = 0 ; b_ii = 0 ; exitg1 = false ; while (
( ! exitg1 ) && ( b_ii < 4 ) ) { if ( x [ b_ii ] ) { idx ++ ; ii_data [ idx -
1 ] = ( int8_T ) ( b_ii + 1 ) ; if ( idx >= 4 ) { exitg1 = true ; } else {
b_ii ++ ; } } else { b_ii ++ ; } } if ( 1 > idx ) { idx = 0 ; } for ( b_ii =
0 ; b_ii < G_tmp ; b_ii ++ ) { G_tmp_p = i_up_data [ b_ii ] - 1 ; du [
G_tmp_p ] = b_par -> w_max - w_f [ G_tmp_p ] ; } for ( b_ii = 0 ; b_ii < idx
; b_ii ++ ) { G_tmp_p = ii_data [ b_ii ] - 1 ; du [ G_tmp_p ] = b_par ->
w_min - w_f [ G_tmp_p ] ; } for ( b_ii = 0 ; b_ii < G_tmp ; b_ii ++ ) { w_cmd
[ i_up_data [ b_ii ] - 1 ] = b_par -> w_max ; } for ( b_ii = 0 ; b_ii < idx ;
b_ii ++ ) { w_cmd [ ii_data [ b_ii ] - 1 ] = b_par -> w_min ; } localDW ->
iydhdgpa2t [ 0 ] = du [ 0 ] ; localDW -> iydhdgpa2t [ 1 ] = du [ 1 ] ;
localDW -> iydhdgpa2t [ 2 ] = du [ 2 ] ; localDW -> iydhdgpa2t [ 3 ] = du [ 3
] ; } static void a2kk3tsidk ( const real_T inp [ 4 ] , const real_T G [ 16 ]
, const real_T K [ 16 ] , const real_T K2 [ 16 ] , const real_T lowBound [ 4
] , const real_T highBound [ 4 ] , real_T y_state_init [ 4 ] , real_T
URpar_rate_maxIter , real_T x [ 4 ] , real_T * iterSteps , real_T * optimal )
{ real_T H [ 16 ] ; real_T c [ 4 ] ; real_T b [ 8 ] ; boolean_T indices [ 8 ]
; int8_T A_eq_data [ 32 ] ; int8_T AT_eq_data [ 32 ] ; real_T constraintError
[ 8 ] ; real_T count ; int8_T f_data [ 8 ] ; int8_T g_data [ 8 ] ; boolean_T
empty_non_axis_sizes ; real_T varargin_1_data [ 48 ] ; iczkfuyogx reshapes [
2 ] ; int32_T idx ; real_T b_ex ; static const int8_T A [ 32 ] = { 1 , 0 , 0
, 0 , - 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , - 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , - 1 } ; real_T h_data [ 15 ] ;
real_T H_tmp [ 16 ] ; int32_T i ; real_T varargin_1_data_p [ 225 ] ; real_T
c_data [ 12 ] ; real_T H_tmp_p [ 16 ] ; real_T inp_p [ 4 ] ; int8_T
A_eq_data_p [ 150 ] ; int32_T h_size ; int32_T varargin_1_size [ 2 ] ;
int32_T f_size_idx_1 ; int8_T l2_idx_0 ; int8_T l1_idx_1 ; int32_T H_tmp_tmp
; int32_T H_tmp_tmp_tmp ; int32_T H_tmp_tmp_p ; int32_T loop_ub_tmp ; real_T
tmp ; boolean_T guard1 = false ; boolean_T exitg1 ; boolean_T exitg2 ; for (
i = 0 ; i < 4 ; i ++ ) { x [ i ] = 0.0 ; for ( loop_ub_tmp = 0 ; loop_ub_tmp
< 4 ; loop_ub_tmp ++ ) { H_tmp_tmp_tmp = loop_ub_tmp << 2 ; H_tmp_tmp = i +
H_tmp_tmp_tmp ; H_tmp [ H_tmp_tmp ] = 0.0 ; H_tmp_tmp_p = i << 2 ; H_tmp [
H_tmp_tmp ] += G [ H_tmp_tmp_p ] * K [ H_tmp_tmp_tmp ] ; H_tmp [ H_tmp_tmp ]
+= G [ H_tmp_tmp_p + 1 ] * K [ H_tmp_tmp_tmp + 1 ] ; H_tmp [ H_tmp_tmp ] += G
[ H_tmp_tmp_p + 2 ] * K [ H_tmp_tmp_tmp + 2 ] ; H_tmp [ H_tmp_tmp ] += G [
H_tmp_tmp_p + 3 ] * K [ H_tmp_tmp_tmp + 3 ] ; } for ( loop_ub_tmp = 0 ;
loop_ub_tmp < 4 ; loop_ub_tmp ++ ) { H_tmp_tmp = loop_ub_tmp << 2 ;
H_tmp_tmp_p = H_tmp_tmp + i ; H_tmp_p [ H_tmp_tmp_p ] = ( ( ( G [ H_tmp_tmp +
1 ] * H_tmp [ i + 4 ] + G [ H_tmp_tmp ] * H_tmp [ i ] ) + G [ H_tmp_tmp + 2 ]
* H_tmp [ i + 8 ] ) + G [ H_tmp_tmp + 3 ] * H_tmp [ i + 12 ] ) + K2 [
H_tmp_tmp_p ] ; } } for ( loop_ub_tmp = 0 ; loop_ub_tmp < 16 ; loop_ub_tmp ++
) { H [ loop_ub_tmp ] = 2.0 * H_tmp_p [ loop_ub_tmp ] ; } for ( loop_ub_tmp =
0 ; loop_ub_tmp < 4 ; loop_ub_tmp ++ ) { H_tmp_tmp_tmp = loop_ub_tmp << 2 ;
count = K [ H_tmp_tmp_tmp + 3 ] * inp [ 3 ] + ( K [ H_tmp_tmp_tmp + 2 ] * inp
[ 2 ] + ( K [ H_tmp_tmp_tmp + 1 ] * inp [ 1 ] + K [ H_tmp_tmp_tmp ] * inp [ 0
] ) ) ; inp_p [ loop_ub_tmp ] = count ; } for ( i = 0 ; i < 4 ; i ++ ) {
H_tmp_tmp_tmp = i << 2 ; count = G [ H_tmp_tmp_tmp + 3 ] * inp_p [ 3 ] + ( G
[ H_tmp_tmp_tmp + 2 ] * inp_p [ 2 ] + ( G [ H_tmp_tmp_tmp + 1 ] * inp_p [ 1 ]
+ G [ H_tmp_tmp_tmp ] * inp_p [ 0 ] ) ) ; c [ i ] = - ( ( ( ( H_tmp [ i + 4 ]
* inp [ 1 ] + H_tmp [ i ] * inp [ 0 ] ) + H_tmp [ i + 8 ] * inp [ 2 ] ) +
H_tmp [ i + 12 ] * inp [ 3 ] ) + count ) ; b [ i ] = highBound [ i ] ; b [ i
+ 4 ] = - lowBound [ i ] ; } i = 0 ; * iterSteps = 0.0 ; H_tmp_tmp_tmp = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( H_tmp_tmp_tmp <= ( int32_T )
URpar_rate_maxIter - 1 ) ) { ( * iterSteps ) ++ ; indices [ 0 ] = (
y_state_init [ 0 ] == 1.0 ) ; indices [ 4 ] = ( y_state_init [ 0 ] == - 1.0 )
; indices [ 1 ] = ( y_state_init [ 1 ] == 1.0 ) ; indices [ 5 ] = (
y_state_init [ 1 ] == - 1.0 ) ; indices [ 2 ] = ( y_state_init [ 2 ] == 1.0 )
; indices [ 6 ] = ( y_state_init [ 2 ] == - 1.0 ) ; indices [ 3 ] = (
y_state_init [ 3 ] == 1.0 ) ; indices [ 7 ] = ( y_state_init [ 3 ] == - 1.0 )
; H_tmp_tmp_p = 0 ; for ( h_size = 0 ; h_size < 8 ; h_size ++ ) { if (
indices [ h_size ] ) { H_tmp_tmp_p ++ ; } } f_size_idx_1 = H_tmp_tmp_p ;
H_tmp_tmp_p = 0 ; for ( h_size = 0 ; h_size < 8 ; h_size ++ ) { if ( indices
[ h_size ] ) { f_data [ H_tmp_tmp_p ] = ( int8_T ) ( h_size + 1 ) ;
H_tmp_tmp_p ++ ; } } for ( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ;
loop_ub_tmp ++ ) { A_eq_data [ loop_ub_tmp ] = A [ f_data [ loop_ub_tmp ] - 1
] ; } for ( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) {
A_eq_data [ loop_ub_tmp + f_size_idx_1 ] = A [ f_data [ loop_ub_tmp ] + 7 ] ;
} for ( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) {
A_eq_data [ loop_ub_tmp + ( f_size_idx_1 << 1 ) ] = A [ f_data [ loop_ub_tmp
] + 15 ] ; } for ( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp
++ ) { A_eq_data [ loop_ub_tmp + f_size_idx_1 * 3 ] = A [ f_data [
loop_ub_tmp ] + 23 ] ; } for ( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ;
loop_ub_tmp ++ ) { H_tmp_tmp = loop_ub_tmp << 2 ; AT_eq_data [ H_tmp_tmp ] =
A_eq_data [ loop_ub_tmp ] ; AT_eq_data [ 1 + H_tmp_tmp ] = A_eq_data [
loop_ub_tmp + f_size_idx_1 ] ; AT_eq_data [ 2 + H_tmp_tmp ] = A_eq_data [ (
f_size_idx_1 << 1 ) + loop_ub_tmp ] ; AT_eq_data [ 3 + H_tmp_tmp ] =
A_eq_data [ f_size_idx_1 * 3 + loop_ub_tmp ] ; } if ( f_size_idx_1 == 0 ) {
l2_idx_0 = 0 ; l1_idx_1 = 0 ; } else { l1_idx_1 = ( int8_T ) f_size_idx_1 ;
l2_idx_0 = ( int8_T ) f_size_idx_1 ; } if ( f_size_idx_1 != 0 ) { H_tmp_tmp_p
= f_size_idx_1 ; } else if ( ( l2_idx_0 != 0 ) && ( l1_idx_1 != 0 ) ) {
H_tmp_tmp_p = l2_idx_0 ; } else { H_tmp_tmp_p = 0 ; if ( l2_idx_0 > 0 ) {
H_tmp_tmp_p = l2_idx_0 ; } } empty_non_axis_sizes = ( H_tmp_tmp_p == 0 ) ; if
( empty_non_axis_sizes || ( f_size_idx_1 != 0 ) ) { h_size = 4 ; } else {
h_size = 0 ; } if ( empty_non_axis_sizes || ( ( l2_idx_0 != 0 ) && ( l1_idx_1
!= 0 ) ) ) { idx = l1_idx_1 ; } else { idx = 0 ; } H_tmp_tmp = 4 +
f_size_idx_1 ; f_size_idx_1 = ( f_size_idx_1 << 2 ) - 1 ; memcpy ( &
varargin_1_data [ 0 ] , & H [ 0 ] , sizeof ( real_T ) << 4U ) ; for (
loop_ub_tmp = 0 ; loop_ub_tmp <= f_size_idx_1 ; loop_ub_tmp ++ ) {
varargin_1_data [ loop_ub_tmp + 16 ] = AT_eq_data [ loop_ub_tmp ] ; }
loop_ub_tmp = H_tmp_tmp_p * h_size ; if ( 0 <= loop_ub_tmp - 1 ) { memcpy ( &
A_eq_data_p [ 0 ] , & A_eq_data [ 0 ] , loop_ub_tmp * sizeof ( int8_T ) ) ; }
f_size_idx_1 = H_tmp_tmp_p * idx ; if ( 0 <= f_size_idx_1 - 1 ) { memset ( &
A_eq_data_p [ loop_ub_tmp ] , 0 , ( ( f_size_idx_1 + loop_ub_tmp ) -
loop_ub_tmp ) * sizeof ( int8_T ) ) ; } if ( ( H_tmp_tmp_p != 0 ) && ( h_size
+ idx != 0 ) ) { idx = H_tmp_tmp_p ; } else { idx = 0 ; } f_size_idx_1 = idx
* H_tmp_tmp ; for ( loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ;
loop_ub_tmp ++ ) { reshapes [ 1 ] . f1 . data [ loop_ub_tmp ] = A_eq_data_p [
loop_ub_tmp ] ; } H_tmp_tmp_p = 0 ; for ( h_size = 0 ; h_size < 8 ; h_size ++
) { if ( indices [ h_size ] ) { H_tmp_tmp_p ++ ; } } f_size_idx_1 =
H_tmp_tmp_p ; H_tmp_tmp_p = 0 ; for ( h_size = 0 ; h_size < 8 ; h_size ++ ) {
if ( indices [ h_size ] ) { g_data [ H_tmp_tmp_p ] = ( int8_T ) ( h_size + 1
) ; H_tmp_tmp_p ++ ; } } varargin_1_size [ 0 ] = 4 + idx ; varargin_1_size [
1 ] = H_tmp_tmp ; for ( loop_ub_tmp = 0 ; loop_ub_tmp < H_tmp_tmp ;
loop_ub_tmp ++ ) { H_tmp_tmp_p = loop_ub_tmp << 2 ; h_size = varargin_1_size
[ 0 ] * loop_ub_tmp ; varargin_1_data_p [ h_size ] = varargin_1_data [
H_tmp_tmp_p ] ; varargin_1_data_p [ 1 + h_size ] = varargin_1_data [
H_tmp_tmp_p + 1 ] ; varargin_1_data_p [ 2 + h_size ] = varargin_1_data [
H_tmp_tmp_p + 2 ] ; varargin_1_data_p [ 3 + h_size ] = varargin_1_data [
H_tmp_tmp_p + 3 ] ; } for ( loop_ub_tmp = 0 ; loop_ub_tmp < H_tmp_tmp ;
loop_ub_tmp ++ ) { for ( H_tmp_tmp_p = 0 ; H_tmp_tmp_p < idx ; H_tmp_tmp_p ++
) { varargin_1_data_p [ ( H_tmp_tmp_p + varargin_1_size [ 0 ] * loop_ub_tmp )
+ 4 ] = reshapes [ 1 ] . f1 . data [ idx * loop_ub_tmp + H_tmp_tmp_p ] ; } }
H_tmp_tmp = 4 + f_size_idx_1 ; c_data [ 0 ] = - c [ 0 ] ; c_data [ 1 ] = - c
[ 1 ] ; c_data [ 2 ] = - c [ 2 ] ; c_data [ 3 ] = - c [ 3 ] ; for (
loop_ub_tmp = 0 ; loop_ub_tmp < f_size_idx_1 ; loop_ub_tmp ++ ) { c_data [
loop_ub_tmp + 4 ] = b [ g_data [ loop_ub_tmp ] - 1 ] ; } hwkrnvwbkc (
varargin_1_data_p , varargin_1_size , c_data , & H_tmp_tmp , h_data , &
h_size ) ; x [ 0 ] = h_data [ 0 ] ; x [ 1 ] = h_data [ 1 ] ; x [ 2 ] = h_data
[ 2 ] ; x [ 3 ] = h_data [ 3 ] ; if ( 5 > h_size ) { H_tmp_tmp_p = 0 ; h_size
= 0 ; } else { H_tmp_tmp_p = 4 ; } for ( loop_ub_tmp = 0 ; loop_ub_tmp < 8 ;
loop_ub_tmp ++ ) { constraintError [ loop_ub_tmp ] = ( ( ( ( real_T ) A [
loop_ub_tmp + 8 ] * x [ 1 ] + ( real_T ) A [ loop_ub_tmp ] * x [ 0 ] ) + (
real_T ) A [ loop_ub_tmp + 16 ] * x [ 2 ] ) + ( real_T ) A [ loop_ub_tmp + 24
] * x [ 3 ] ) - b [ loop_ub_tmp ] ; } if ( ! muDoubleScalarIsNaN (
constraintError [ 0 ] ) ) { idx = 1 ; } else { idx = 0 ; H_tmp_tmp = 2 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( H_tmp_tmp < 9 ) ) { if ( !
muDoubleScalarIsNaN ( constraintError [ H_tmp_tmp - 1 ] ) ) { idx = H_tmp_tmp
; exitg2 = true ; } else { H_tmp_tmp ++ ; } } } if ( idx == 0 ) { count =
constraintError [ 0 ] ; } else { count = constraintError [ idx - 1 ] ; while
( idx + 1 < 9 ) { if ( count < constraintError [ idx ] ) { count =
constraintError [ idx ] ; } idx ++ ; } } loop_ub_tmp = h_size - H_tmp_tmp_p ;
if ( loop_ub_tmp == 0 ) { empty_non_axis_sizes = true ; } else { if (
loop_ub_tmp <= 2 ) { if ( loop_ub_tmp == 1 ) { b_ex = h_data [ H_tmp_tmp_p ]
; } else { b_ex = h_data [ H_tmp_tmp_p + 1 ] ; if ( ( h_data [ H_tmp_tmp_p ]
> b_ex ) || ( muDoubleScalarIsNaN ( h_data [ H_tmp_tmp_p ] ) && ( !
muDoubleScalarIsNaN ( b_ex ) ) ) ) { } else { b_ex = h_data [ H_tmp_tmp_p ] ;
} } } else { if ( ! muDoubleScalarIsNaN ( h_data [ H_tmp_tmp_p ] ) ) { idx =
1 ; } else { idx = 0 ; H_tmp_tmp = 2 ; exitg2 = false ; while ( ( ! exitg2 )
&& ( H_tmp_tmp <= loop_ub_tmp ) ) { if ( ! muDoubleScalarIsNaN ( h_data [ (
H_tmp_tmp_p + H_tmp_tmp ) - 1 ] ) ) { idx = H_tmp_tmp ; exitg2 = true ; }
else { H_tmp_tmp ++ ; } } } if ( idx == 0 ) { b_ex = h_data [ H_tmp_tmp_p ] ;
} else { b_ex = h_data [ ( H_tmp_tmp_p + idx ) - 1 ] ; while ( idx + 1 <=
loop_ub_tmp ) { tmp = h_data [ H_tmp_tmp_p + idx ] ; if ( b_ex > tmp ) { b_ex
= tmp ; } idx ++ ; } } } if ( b_ex >= 0.0 ) { empty_non_axis_sizes = true ; }
else { empty_non_axis_sizes = false ; } } if ( ( count <= 0.001 ) &&
empty_non_axis_sizes ) { i = 1 ; exitg1 = true ; } else { guard1 = false ; if
( loop_ub_tmp == 0 ) { guard1 = true ; } else { if ( loop_ub_tmp <= 2 ) { if
( loop_ub_tmp == 1 ) { count = h_data [ H_tmp_tmp_p ] ; } else if ( ( h_data
[ H_tmp_tmp_p ] > h_data [ H_tmp_tmp_p + 1 ] ) || ( muDoubleScalarIsNaN (
h_data [ H_tmp_tmp_p ] ) && ( ! muDoubleScalarIsNaN ( h_data [ H_tmp_tmp_p +
1 ] ) ) ) ) { count = h_data [ H_tmp_tmp_p + 1 ] ; } else { count = h_data [
H_tmp_tmp_p ] ; } } else { if ( ! muDoubleScalarIsNaN ( h_data [ H_tmp_tmp_p
] ) ) { idx = 1 ; } else { idx = 0 ; H_tmp_tmp = 2 ; exitg2 = false ; while (
( ! exitg2 ) && ( H_tmp_tmp <= loop_ub_tmp ) ) { if ( ! muDoubleScalarIsNaN (
h_data [ ( H_tmp_tmp_p + H_tmp_tmp ) - 1 ] ) ) { idx = H_tmp_tmp ; exitg2 =
true ; } else { H_tmp_tmp ++ ; } } } if ( idx == 0 ) { count = h_data [
H_tmp_tmp_p ] ; } else { count = h_data [ ( H_tmp_tmp_p + idx ) - 1 ] ; while
( idx + 1 <= loop_ub_tmp ) { tmp = h_data [ H_tmp_tmp_p + idx ] ; if ( count
> tmp ) { count = tmp ; } idx ++ ; } } } if ( count >= 0.0 ) { guard1 = true
; } else { if ( loop_ub_tmp <= 2 ) { if ( loop_ub_tmp == 1 ) { idx = 1 ; }
else if ( ( h_data [ H_tmp_tmp_p ] > h_data [ H_tmp_tmp_p + 1 ] ) || (
muDoubleScalarIsNaN ( h_data [ H_tmp_tmp_p ] ) && ( ! muDoubleScalarIsNaN (
h_data [ H_tmp_tmp_p + 1 ] ) ) ) ) { idx = 2 ; } else { idx = 1 ; } } else {
if ( ! muDoubleScalarIsNaN ( h_data [ H_tmp_tmp_p ] ) ) { idx = 1 ; } else {
idx = 0 ; H_tmp_tmp = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && (
H_tmp_tmp <= loop_ub_tmp ) ) { if ( ! muDoubleScalarIsNaN ( h_data [ (
H_tmp_tmp_p + H_tmp_tmp ) - 1 ] ) ) { idx = H_tmp_tmp ; exitg2 = true ; }
else { H_tmp_tmp ++ ; } } } if ( idx == 0 ) { idx = 1 ; } else { count =
h_data [ ( H_tmp_tmp_p + idx ) - 1 ] ; for ( H_tmp_tmp = idx ; H_tmp_tmp <
loop_ub_tmp ; H_tmp_tmp ++ ) { tmp = h_data [ H_tmp_tmp_p + H_tmp_tmp ] ; if
( count > tmp ) { count = tmp ; idx = H_tmp_tmp + 1 ; } } } } count =
muDoubleScalarAbs ( y_state_init [ 0 ] ) ; if ( count == idx ) { y_state_init
[ 0 ] = 0.0 ; } count += muDoubleScalarAbs ( y_state_init [ 1 ] ) ; if (
count == idx ) { y_state_init [ 1 ] = 0.0 ; } count += muDoubleScalarAbs (
y_state_init [ 2 ] ) ; if ( count == idx ) { y_state_init [ 2 ] = 0.0 ; }
count += muDoubleScalarAbs ( y_state_init [ 3 ] ) ; if ( count == idx ) {
y_state_init [ 3 ] = 0.0 ; } } } if ( guard1 ) { if ( ! muDoubleScalarIsNaN (
constraintError [ 0 ] ) ) { H_tmp_tmp_p = 1 ; } else { H_tmp_tmp_p = 0 ;
h_size = 2 ; exitg2 = false ; while ( ( ! exitg2 ) && ( h_size < 9 ) ) { if (
! muDoubleScalarIsNaN ( constraintError [ h_size - 1 ] ) ) { H_tmp_tmp_p =
h_size ; exitg2 = true ; } else { h_size ++ ; } } } if ( H_tmp_tmp_p == 0 ) {
H_tmp_tmp_p = 1 ; } else { count = constraintError [ H_tmp_tmp_p - 1 ] ; for
( h_size = H_tmp_tmp_p ; h_size + 1 < 9 ; h_size ++ ) { if ( count <
constraintError [ h_size ] ) { count = constraintError [ h_size ] ;
H_tmp_tmp_p = h_size + 1 ; } } } if ( H_tmp_tmp_p < 5 ) { y_state_init [
H_tmp_tmp_p - 1 ] = 1.0 ; } else { y_state_init [ H_tmp_tmp_p - 5 ] = - 1.0 ;
} } H_tmp_tmp_tmp ++ ; } } * optimal = i ; } void l41sn0mktw ( np1m13vojf *
const p4pqnuzidr , cq2d5gococ * localDW ) { if ( ( ssGetSimMode ( p4pqnuzidr
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( p4pqnuzidr -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( p4pqnuzidr -> DataMapInfo .
mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( p4pqnuzidr ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( p4pqnuzidr
-> _mdlRefSfcnS ) ) { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "n_des" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "n_des" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "URControl_att/n_des" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "n_des" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( p4pqnuzidr
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , p4pqnuzidr ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jz33kzeqpn . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , p4pqnuzidr -> DataMapInfo
. mmi . InstanceMap . fullPath , "658222bf-ddb3-41f4-ba01-ed8927cbe1cf" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> jz33kzeqpn . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> jz33kzeqpn . AQHandles , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ;
sdiSetRunStartTime ( localDW -> jz33kzeqpn . AQHandles , rtmGetTaskTime (
p4pqnuzidr , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
jz33kzeqpn . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> jz33kzeqpn . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> jz33kzeqpn . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } localDW ->
jz33kzeqpn . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { int_T
forEachMdlRefDimsArray [ 32 ] ; int_T forEachMdlRefDimsArraySize = 0 ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDimsArraySize =
slSigLogGetForEachDimsForRefModel ( p4pqnuzidr -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; } treeVector = rtwGetTreeVector ( ) ; { int_T
sigDimsArray [ 1 ] = { 3 } ; rtwAddLeafNode ( 0 , "n_des" , "zoh" , 0 , (
unsigned int * ) sigDimsArray , 1 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "n_des" , "" ,
p4pqnuzidr -> DataMapInfo . mmi . InstanceMap . fullPath ,
"URControl_att/n_des" , 1 , 0 , slioCatalogue , forEachMdlRefDimsArraySize ?
( const uint_T * ) forEachMdlRefDimsArray : ( NULL ) ,
forEachMdlRefDimsArraySize , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( p4pqnuzidr -> DataMapInfo . mmi . InstanceMap .
fullPath , "URControl_att/n_des" , 1 , "n_des" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( p4pqnuzidr -> _mdlRefSfcnS ->
mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval (
p4pqnuzidr -> _mdlRefSfcnS -> mdlInfo -> rtwLogInfo ) ; } else {
loggingInterval = sdiGetLoggingIntervals ( p4pqnuzidr -> DataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; localDW -> jz33kzeqpn
. SlioLTF = accessor ; } } } } if ( ( ssGetSimMode ( p4pqnuzidr ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( p4pqnuzidr -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { void *
slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( p4pqnuzidr -> DataMapInfo .
mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( p4pqnuzidr ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( p4pqnuzidr
-> _mdlRefSfcnS ) ) { { sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"URControl_att/state" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [
22 ] = { "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" } ; sdiVirtualBusLeafElementInfoU
leafElInfo [ 22 ] ; int_T childDimsArray0 [ 2 ] = { 1 , 3 } ; int_T
childDimsArray1 [ 2 ] = { 1 , 3 } ; int_T childDimsArray2 [ 2 ] = { 1 , 3 } ;
int_T childDimsArray3 [ 2 ] = { 1 , 3 } ; int_T childDimsArray4 [ 2 ] = { 1 ,
3 } ; int_T childDimsArray5 [ 2 ] = { 1 , 3 } ; int_T childDimsArray6 [ 2 ] =
{ 1 , 3 } ; int_T childDimsArray7 [ 2 ] = { 1 , 3 } ; int_T childDimsArray8 [
2 ] = { 1 , 3 } ; int_T childDimsArray9 [ 2 ] = { 1 , 3 } ; int_T
childDimsArray10 [ 2 ] = { 1 , 3 } ; int_T childDimsArray11 [ 2 ] = { 1 , 4 }
; int_T childDimsArray12 [ 2 ] = { 1 , 3 } ; int_T childDimsArray13 [ 2 ] = {
1 , 3 } ; int_T childDimsArray14 [ 2 ] = { 1 , 4 } ; int_T childDimsArray15 [
2 ] = { 1 , 4 } ; int_T childDimsArray16 [ 2 ] = { 1 , 1 } ; int_T
childDimsArray17 [ 2 ] = { 1 , 1 } ; int_T childDimsArray18 [ 2 ] = { 2 , 1 }
; int_T childDimsArray19 [ 2 ] = { 2 , 1 } ; int_T childDimsArray20 [ 2 ] = {
2 , 1 } ; int_T childDimsArray21 [ 2 ] = { 2 , 1 } ; {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( "state1.acc" ) ; leafElInfo [ 0 ] . dims
. nDims = 2 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ;
leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 0 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
"state1.accf" ) ; leafElInfo [ 1 ] . dims . nDims = 2 ; leafElInfo [ 1 ] .
dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 0 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( "state1.vel" ) ; leafElInfo [ 2 ] . dims
. nDims = 2 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 0 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
"state1.velf" ) ; leafElInfo [ 3 ] . dims . nDims = 2 ; leafElInfo [ 3 ] .
dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ; leafElInfo [ 3
] . isLinearInterp = 0 ; leafElInfo [ 3 ] . units = leafUnits [ 3 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ] . hDataType = hDT ; leafElInfo [ 4 ] .
signalName = sdiGetLabelFromChars ( "state1.velB" ) ; leafElInfo [ 4 ] . dims
. nDims = 2 ; leafElInfo [ 4 ] . dims . dimensions = childDimsArray4 ;
leafElInfo [ 4 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] .
complexity = REAL ; leafElInfo [ 4 ] . isLinearInterp = 0 ; leafElInfo [ 4 ]
. units = leafUnits [ 4 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 5 ]
. hDataType = hDT ; leafElInfo [ 5 ] . signalName = sdiGetLabelFromChars (
"state1.pos" ) ; leafElInfo [ 5 ] . dims . nDims = 2 ; leafElInfo [ 5 ] .
dims . dimensions = childDimsArray5 ; leafElInfo [ 5 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] . complexity = REAL ; leafElInfo [ 5
] . isLinearInterp = 0 ; leafElInfo [ 5 ] . units = leafUnits [ 5 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 6 ] . hDataType = hDT ; leafElInfo [ 6 ] .
signalName = sdiGetLabelFromChars ( "state1.posf" ) ; leafElInfo [ 6 ] . dims
. nDims = 2 ; leafElInfo [ 6 ] . dims . dimensions = childDimsArray6 ;
leafElInfo [ 6 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] .
complexity = REAL ; leafElInfo [ 6 ] . isLinearInterp = 0 ; leafElInfo [ 6 ]
. units = leafUnits [ 6 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ]
. hDataType = hDT ; leafElInfo [ 7 ] . signalName = sdiGetLabelFromChars (
"state1.omega" ) ; leafElInfo [ 7 ] . dims . nDims = 2 ; leafElInfo [ 7 ] .
dims . dimensions = childDimsArray7 ; leafElInfo [ 7 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 7 ] . complexity = REAL ; leafElInfo [ 7
] . isLinearInterp = 0 ; leafElInfo [ 7 ] . units = leafUnits [ 7 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 8 ] . hDataType = hDT ; leafElInfo [ 8 ] .
signalName = sdiGetLabelFromChars ( "state1.omegaf" ) ; leafElInfo [ 8 ] .
dims . nDims = 2 ; leafElInfo [ 8 ] . dims . dimensions = childDimsArray8 ;
leafElInfo [ 8 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] .
complexity = REAL ; leafElInfo [ 8 ] . isLinearInterp = 0 ; leafElInfo [ 8 ]
. units = leafUnits [ 8 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ]
. hDataType = hDT ; leafElInfo [ 9 ] . signalName = sdiGetLabelFromChars (
"state1.att" ) ; leafElInfo [ 9 ] . dims . nDims = 2 ; leafElInfo [ 9 ] .
dims . dimensions = childDimsArray9 ; leafElInfo [ 9 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] . complexity = REAL ; leafElInfo [ 9
] . isLinearInterp = 0 ; leafElInfo [ 9 ] . units = leafUnits [ 9 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ] . hDataType = hDT ; leafElInfo [ 10 ]
. signalName = sdiGetLabelFromChars ( "state1.n" ) ; leafElInfo [ 10 ] . dims
. nDims = 2 ; leafElInfo [ 10 ] . dims . dimensions = childDimsArray10 ;
leafElInfo [ 10 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 10 ] .
complexity = REAL ; leafElInfo [ 10 ] . isLinearInterp = 0 ; leafElInfo [ 10
] . units = leafUnits [ 10 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ]
. hDataType = hDT ; leafElInfo [ 11 ] . signalName = sdiGetLabelFromChars (
"state1.wRotor" ) ; leafElInfo [ 11 ] . dims . nDims = 2 ; leafElInfo [ 11 ]
. dims . dimensions = childDimsArray11 ; leafElInfo [ 11 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 11 ] . complexity = REAL ; leafElInfo [
11 ] . isLinearInterp = 0 ; leafElInfo [ 11 ] . units = leafUnits [ 11 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 12 ] . hDataType = hDT ; leafElInfo [ 12 ]
. signalName = sdiGetLabelFromChars ( "state1.omegaUV" ) ; leafElInfo [ 12 ]
. dims . nDims = 2 ; leafElInfo [ 12 ] . dims . dimensions = childDimsArray12
; leafElInfo [ 12 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 12 ] .
complexity = REAL ; leafElInfo [ 12 ] . isLinearInterp = 0 ; leafElInfo [ 12
] . units = leafUnits [ 12 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 13 ]
. hDataType = hDT ; leafElInfo [ 13 ] . signalName = sdiGetLabelFromChars (
"state1.omegafUV" ) ; leafElInfo [ 13 ] . dims . nDims = 2 ; leafElInfo [ 13
] . dims . dimensions = childDimsArray13 ; leafElInfo [ 13 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 13 ] . complexity = REAL ; leafElInfo [
13 ] . isLinearInterp = 0 ; leafElInfo [ 13 ] . units = leafUnits [ 13 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 14 ] . hDataType = hDT ; leafElInfo [ 14 ]
. signalName = sdiGetLabelFromChars ( "state1.FMax" ) ; leafElInfo [ 14 ] .
dims . nDims = 2 ; leafElInfo [ 14 ] . dims . dimensions = childDimsArray14 ;
leafElInfo [ 14 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 14 ] .
complexity = REAL ; leafElInfo [ 14 ] . isLinearInterp = 0 ; leafElInfo [ 14
] . units = leafUnits [ 14 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 15 ]
. hDataType = hDT ; leafElInfo [ 15 ] . signalName = sdiGetLabelFromChars (
"state1.FMin" ) ; leafElInfo [ 15 ] . dims . nDims = 2 ; leafElInfo [ 15 ] .
dims . dimensions = childDimsArray15 ; leafElInfo [ 15 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 15 ] . complexity = REAL ; leafElInfo [
15 ] . isLinearInterp = 0 ; leafElInfo [ 15 ] . units = leafUnits [ 15 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 16 ] . hDataType = hDT ; leafElInfo [ 16 ]
. signalName = sdiGetLabelFromChars ( "state1.fail_id" ) ; leafElInfo [ 16 ]
. dims . nDims = 2 ; leafElInfo [ 16 ] . dims . dimensions = childDimsArray16
; leafElInfo [ 16 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 16 ] .
complexity = REAL ; leafElInfo [ 16 ] . isLinearInterp = 0 ; leafElInfo [ 16
] . units = leafUnits [ 16 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 17 ]
. hDataType = hDT ; leafElInfo [ 17 ] . signalName = sdiGetLabelFromChars (
"state1.fail_id_quick" ) ; leafElInfo [ 17 ] . dims . nDims = 2 ; leafElInfo
[ 17 ] . dims . dimensions = childDimsArray17 ; leafElInfo [ 17 ] . dimsMode
= DIMENSIONS_MODE_FIXED ; leafElInfo [ 17 ] . complexity = REAL ; leafElInfo
[ 17 ] . isLinearInterp = 0 ; leafElInfo [ 17 ] . units = leafUnits [ 17 ] ;
} { sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 18 ] . hDataType = hDT ; leafElInfo [ 18 ]
. signalName = sdiGetLabelFromChars ( "state1.uvDot_max" ) ; leafElInfo [ 18
] . dims . nDims = 2 ; leafElInfo [ 18 ] . dims . dimensions =
childDimsArray18 ; leafElInfo [ 18 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 18 ] . complexity = REAL ; leafElInfo [ 18 ] . isLinearInterp =
0 ; leafElInfo [ 18 ] . units = leafUnits [ 18 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 19 ] . hDataType = hDT ; leafElInfo [ 19 ]
. signalName = sdiGetLabelFromChars ( "state1.uvDot_min" ) ; leafElInfo [ 19
] . dims . nDims = 2 ; leafElInfo [ 19 ] . dims . dimensions =
childDimsArray19 ; leafElInfo [ 19 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 19 ] . complexity = REAL ; leafElInfo [ 19 ] . isLinearInterp =
0 ; leafElInfo [ 19 ] . units = leafUnits [ 19 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 20 ] . hDataType = hDT ; leafElInfo [ 20 ]
. signalName = sdiGetLabelFromChars ( "state1.uv_max" ) ; leafElInfo [ 20 ] .
dims . nDims = 2 ; leafElInfo [ 20 ] . dims . dimensions = childDimsArray20 ;
leafElInfo [ 20 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 20 ] .
complexity = REAL ; leafElInfo [ 20 ] . isLinearInterp = 0 ; leafElInfo [ 20
] . units = leafUnits [ 20 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 21 ]
. hDataType = hDT ; leafElInfo [ 21 ] . signalName = sdiGetLabelFromChars (
"state1.uv_min" ) ; leafElInfo [ 21 ] . dims . nDims = 2 ; leafElInfo [ 21 ]
. dims . dimensions = childDimsArray21 ; leafElInfo [ 21 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 21 ] . complexity = REAL ; leafElInfo [
21 ] . isLinearInterp = 0 ; leafElInfo [ 21 ] . units = leafUnits [ 21 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , p4pqnuzidr
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"7fc0034d-beba-4839-a6c6-947ffbd26817" , 22 , leafElInfo , & localDW ->
iysy320vjl . AQHandles [ 0 ] , 1 , 0 , "state1" , "state1" , "" ) ; if (
localDW -> iysy320vjl . AQHandles [ 0 ] ) { sdiLabelU loggedName =
sdiGetLabelFromChars ( "state1" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "state1" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 0
] , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime (
localDW -> iysy320vjl . AQHandles [ 0 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 1 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 1 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 1 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 2 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 2 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 2 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 3 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 3 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 3 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 4 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 4 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 4 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 5 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 5 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 5 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 6 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 6 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 6 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 6 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 7 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 7 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 7 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 8 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 8 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 8 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 8 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 9 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 9 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 9 ]
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 10 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 10 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 10
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 10 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 11 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 11 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 11
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 11 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 12 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 12 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 12
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 12 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 13 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 13 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 13
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 13 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 14 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 14 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 14
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 14 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 15 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 15 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 15
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 15 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 16 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 16 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 16
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 16 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 17 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 17 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 17
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 17 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 18 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 18 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 18
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 18 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 19 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 19 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 19
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 19 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 20 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 20 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 20
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 20 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iysy320vjl . AQHandles [ 21 ] ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) ) ; sdiSetRunStartTime ( localDW ->
iysy320vjl . AQHandles [ 21 ] , rtmGetTaskTime ( p4pqnuzidr , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iysy320vjl . AQHandles [ 21
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iysy320vjl .
AQHandles [ 21 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 5 ] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; sdiFreeName ( leafElInfo [ 12 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 13 ] . signalName ) ; sdiFreeName ( leafElInfo [
14 ] . signalName ) ; sdiFreeName ( leafElInfo [ 15 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 16 ] . signalName ) ; sdiFreeName ( leafElInfo [
17 ] . signalName ) ; sdiFreeName ( leafElInfo [ 18 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 19 ] . signalName ) ; sdiFreeName ( leafElInfo [
20 ] . signalName ) ; sdiFreeName ( leafElInfo [ 21 ] . signalName ) ; } } }
localDW -> iysy320vjl . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ;
void * accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void
* loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if
( slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { int_T
forEachMdlRefDimsArray [ 32 ] ; int_T forEachMdlRefDimsArraySize = 0 ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDimsArraySize =
slSigLogGetForEachDimsForRefModel ( p4pqnuzidr -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; } treeVector = rtwGetTreeVector ( ) ; {
rtwAddTopBusNode ( "state1" , 22 , treeVector ) ; { int_T sigDimsArray [ 2 ]
= { 1 , 3 } ; rtwAddLeafNode ( 0 , "acc" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } { int_T sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode (
0 , "accf" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 2 , "double" , ""
, "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T
sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode ( 0 , "vel" , "zoh" , 0 , (
unsigned int * ) sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T sigDimsArray [ 2 ] = {
1 , 3 } ; rtwAddLeafNode ( 0 , "velf" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } { int_T sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode (
0 , "velB" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 2 , "double" , ""
, "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T
sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode ( 0 , "pos" , "zoh" , 0 , (
unsigned int * ) sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T sigDimsArray [ 2 ] = {
1 , 3 } ; rtwAddLeafNode ( 0 , "posf" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } { int_T sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode (
0 , "omega" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 2 , "double" , ""
, "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T
sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode ( 0 , "omegaf" , "zoh" , 0 ,
( unsigned int * ) sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T sigDimsArray [ 2 ] = {
1 , 3 } ; rtwAddLeafNode ( 0 , "att" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } { int_T sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode (
0 , "n" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 2 , "double" , "" ,
"0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T
sigDimsArray [ 2 ] = { 1 , 4 } ; rtwAddLeafNode ( 0 , "wRotor" , "zoh" , 0 ,
( unsigned int * ) sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T sigDimsArray [ 2 ] = {
1 , 3 } ; rtwAddLeafNode ( 0 , "omegaUV" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } { int_T sigDimsArray [ 2 ] = { 1 , 3 } ; rtwAddLeafNode (
0 , "omegafUV" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 2 , "double" ,
"" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T
sigDimsArray [ 2 ] = { 1 , 4 } ; rtwAddLeafNode ( 0 , "FMax" , "zoh" , 0 , (
unsigned int * ) sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T sigDimsArray [ 2 ] = {
1 , 4 } ; rtwAddLeafNode ( 0 , "FMin" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } { int_T sigDimsArray [ 2 ] = { 1 , 1 } ; rtwAddLeafNode (
0 , "fail_id" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 2 , "double" ,
"" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T
sigDimsArray [ 2 ] = { 1 , 1 } ; rtwAddLeafNode ( 0 , "fail_id_quick" , "zoh"
, 0 , ( unsigned int * ) sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T sigDimsArray [ 2 ] = {
2 , 1 } ; rtwAddLeafNode ( 0 , "uvDot_max" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } { int_T sigDimsArray [ 2 ] = { 2 , 1 } ; rtwAddLeafNode (
0 , "uvDot_min" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 2 , "double"
, "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T
sigDimsArray [ 2 ] = { 2 , 1 } ; rtwAddLeafNode ( 0 , "uv_max" , "zoh" , 0 ,
( unsigned int * ) sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 ,
rtmGetTFinal ( p4pqnuzidr ) , treeVector ) ; } { int_T sigDimsArray [ 2 ] = {
2 , 1 } ; rtwAddLeafNode ( 0 , "uv_min" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 2 , "double" , "" , "0.2" , 0.2 , rtmGetTFinal ( p4pqnuzidr )
, treeVector ) ; } rtwPopNVBusNode ( treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 22 , 1 , 0 , 1 , "state1" , "" ,
p4pqnuzidr -> DataMapInfo . mmi . InstanceMap . fullPath ,
"URControl_att/state" , 1 , 0 , slioCatalogue , forEachMdlRefDimsArraySize ?
( const uint_T * ) forEachMdlRefDimsArray : ( NULL ) ,
forEachMdlRefDimsArraySize , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( p4pqnuzidr -> DataMapInfo . mmi . InstanceMap .
fullPath , "URControl_att/state" , 1 , "state1" ) ; } if ( rtwLoggingOverride
( signalDescriptor , slioCatalogue ) ) { if ( p4pqnuzidr -> _mdlRefSfcnS ->
mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval (
p4pqnuzidr -> _mdlRefSfcnS -> mdlInfo -> rtwLogInfo ) ; } else {
loggingInterval = sdiGetLoggingIntervals ( p4pqnuzidr -> DataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; localDW -> iysy320vjl
. SlioLTF = accessor ; } } } } } void bs1wowywlh ( cq2d5gococ * localDW ) {
real_T d4phfsngrv_tmp ; localDW -> gun3mm4dej [ 0 ] = lzq4u2chxj . P_5 [ 0 ]
; d4phfsngrv_tmp = 0.0 * rtP_par . freq ; localDW -> d4phfsngrv [ 0 ] =
d4phfsngrv_tmp ; localDW -> gun3mm4dej [ 1 ] = lzq4u2chxj . P_5 [ 1 ] ;
localDW -> d4phfsngrv [ 1 ] = d4phfsngrv_tmp ; localDW -> gun3mm4dej [ 2 ] =
lzq4u2chxj . P_5 [ 2 ] ; localDW -> d4phfsngrv [ 2 ] = - rtP_par . freq ;
localDW -> bkm4axbd4m = false ; localDW -> jzaw0ruggn = false ; localDW ->
mcs1xl24pu = false ; localDW -> le1pffvliz = false ; localDW -> dvbok3ukse =
false ; localDW -> azu2vr5fp0 = false ; localDW -> nmro3iid1y = false ;
localDW -> en3asgirkf [ 0 ] = 0.0 ; localDW -> kb1lksw5ci [ 0 ] = 0.0 ;
localDW -> en3asgirkf [ 1 ] = 0.0 ; localDW -> kb1lksw5ci [ 1 ] = 0.0 ;
localDW -> en3asgirkf [ 2 ] = 0.0 ; localDW -> kb1lksw5ci [ 2 ] = 0.0 ;
localDW -> en3asgirkf [ 3 ] = 0.0 ; localDW -> kb1lksw5ci [ 3 ] = 0.0 ;
localDW -> gdaaooi1ul [ 0 ] = 0.0 ; localDW -> gdaaooi1ul [ 1 ] = 0.0 ;
localDW -> gdaaooi1ul [ 2 ] = 0.0 ; localDW -> iydhdgpa2t [ 0 ] = 0.0 ;
localDW -> iydhdgpa2t [ 1 ] = 0.0 ; localDW -> iydhdgpa2t [ 2 ] = 0.0 ;
localDW -> iydhdgpa2t [ 3 ] = 0.0 ; localDW -> osqjt3ca0p [ 0 ] = 0.0 ;
localDW -> osqjt3ca0p [ 1 ] = 0.0 ; localDW -> osqjt3ca0p [ 2 ] = 0.0 ; }
void ikfy2u5s1t ( cq2d5gococ * localDW ) { real_T d4phfsngrv_tmp ; localDW ->
gun3mm4dej [ 0 ] = lzq4u2chxj . P_5 [ 0 ] ; d4phfsngrv_tmp = 0.0 * rtP_par .
freq ; localDW -> d4phfsngrv [ 0 ] = d4phfsngrv_tmp ; localDW -> gun3mm4dej [
1 ] = lzq4u2chxj . P_5 [ 1 ] ; localDW -> d4phfsngrv [ 1 ] = d4phfsngrv_tmp ;
localDW -> gun3mm4dej [ 2 ] = lzq4u2chxj . P_5 [ 2 ] ; localDW -> d4phfsngrv
[ 2 ] = - rtP_par . freq ; localDW -> bkm4axbd4m = false ; localDW ->
jzaw0ruggn = false ; localDW -> mcs1xl24pu = false ; localDW -> le1pffvliz =
false ; localDW -> dvbok3ukse = false ; localDW -> azu2vr5fp0 = false ;
localDW -> nmro3iid1y = false ; localDW -> en3asgirkf [ 0 ] = 0.0 ; localDW
-> kb1lksw5ci [ 0 ] = 0.0 ; localDW -> en3asgirkf [ 1 ] = 0.0 ; localDW ->
kb1lksw5ci [ 1 ] = 0.0 ; localDW -> en3asgirkf [ 2 ] = 0.0 ; localDW ->
kb1lksw5ci [ 2 ] = 0.0 ; localDW -> en3asgirkf [ 3 ] = 0.0 ; localDW ->
kb1lksw5ci [ 3 ] = 0.0 ; localDW -> gdaaooi1ul [ 0 ] = 0.0 ; localDW ->
gdaaooi1ul [ 1 ] = 0.0 ; localDW -> gdaaooi1ul [ 2 ] = 0.0 ; localDW ->
iydhdgpa2t [ 0 ] = 0.0 ; localDW -> iydhdgpa2t [ 1 ] = 0.0 ; localDW ->
iydhdgpa2t [ 2 ] = 0.0 ; localDW -> iydhdgpa2t [ 3 ] = 0.0 ; localDW ->
osqjt3ca0p [ 0 ] = 0.0 ; localDW -> osqjt3ca0p [ 1 ] = 0.0 ; localDW ->
osqjt3ca0p [ 2 ] = 0.0 ; } void gtauznb10g ( cq2d5gococ * localDW ) { localDW
-> kigq4xfkv4 = lzq4u2chxj . P_2 ; } void URControl_att ( np1m13vojf * const
p4pqnuzidr , const real_T daaclllufb [ 3 ] , const real_T gf3t5sjyzs [ 3 ] ,
const real_T lb1mw1k42v [ 3 ] , const real_T ap3cagihqr [ 3 ] , const real_T
g0asaio1li [ 3 ] , const real_T n42nrkaxgn [ 3 ] , const real_T eylxdjepax [
3 ] , const real_T pppjosc5nk [ 3 ] , const real_T hsfhdegm4y [ 3 ] , const
real_T n0gzdjo2gd [ 3 ] , const real_T etv3v35ur5 [ 3 ] , const real_T
aidvbdjavx [ 4 ] , const real_T lbzrfuspim [ 3 ] , const real_T p4khm4vfx3 [
3 ] , const real_T eougsutge5 [ 4 ] , const real_T e5btfsatai [ 4 ] , const
real_T * mexrwskojr , const real_T * o4kajfybva , const real_T mj5vbpekow [ 2
] , const real_T pebnkfmdhv [ 2 ] , const real_T erpnuiz0pe [ 2 ] , const
real_T fagqrqvcur [ 2 ] , const real_T olifiqy3cq [ 3 ] , const real_T *
mb5sye31qg , const real_T * c34ibfughu , real_T nju4dz31ac [ 4 ] , n24t031ugl
* localB , cq2d5gococ * localDW ) { real_T s ; real_T Mu_max ; real_T Mu_min
; real_T Mv_max ; real_T Mv_min ; real_T uvr_des [ 3 ] ; real_T z1 [ 2 ] ;
int32_T r1 ; int32_T r2 ; real_T inp [ 4 ] ; real_T wMax [ 4 ] ; real_T
dw_lin_max [ 4 ] ; real_T dw_lin_min [ 4 ] ; real_T G [ 16 ] ; real_T K [ 16
] ; real_T b_z1 [ 4 ] ; real_T a [ 16 ] ; stateBus ffhsqxprss ; real_T
b0t4yfxz5d [ 3 ] ; real_T ji1gld0tju [ 2 ] ; real_T URpar [ 32 ] ; real_T tmp
[ 3 ] ; boolean_T Mu_min_p ; real_T tmp_p ; real_T ol2io5fxgc_idx_1 ; const
URControlParamsType * URpar_p ; { if ( ( localDW -> jz33kzeqpn . AQHandles ||
localDW -> jz33kzeqpn . SlioLTF ) && ssGetLogOutput ( p4pqnuzidr ->
_mdlRefSfcnS ) ) { sdiSlioSdiWriteSignal ( localDW -> jz33kzeqpn . AQHandles
, localDW -> jz33kzeqpn . SlioLTF , 0 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , (
char * ) & olifiqy3cq [ 0 ] + 0 ) ; } } { if ( ( localDW -> iysy320vjl .
AQHandles [ 0 ] || localDW -> iysy320vjl . SlioLTF ) && ssGetLogOutput (
p4pqnuzidr -> _mdlRefSfcnS ) ) { sdiSlioSdiWriteSignal ( localDW ->
iysy320vjl . AQHandles [ 0 ] , localDW -> iysy320vjl . SlioLTF , 0 ,
rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) & daaclllufb [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 1 ] , localDW ->
iysy320vjl . SlioLTF , 1 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
gf3t5sjyzs [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 2 ] , localDW -> iysy320vjl . SlioLTF , 2 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & lb1mw1k42v [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 3 ] , localDW ->
iysy320vjl . SlioLTF , 3 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
ap3cagihqr [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 4 ] , localDW -> iysy320vjl . SlioLTF , 4 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & g0asaio1li [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 5 ] , localDW ->
iysy320vjl . SlioLTF , 5 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
n42nrkaxgn [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 6 ] , localDW -> iysy320vjl . SlioLTF , 6 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & eylxdjepax [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 7 ] , localDW ->
iysy320vjl . SlioLTF , 7 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
pppjosc5nk [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 8 ] , localDW -> iysy320vjl . SlioLTF , 8 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & hsfhdegm4y [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 9 ] , localDW ->
iysy320vjl . SlioLTF , 9 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
n0gzdjo2gd [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 10 ] , localDW -> iysy320vjl . SlioLTF , 10 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & etv3v35ur5 [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 11 ] , localDW ->
iysy320vjl . SlioLTF , 11 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
aidvbdjavx [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 12 ] , localDW -> iysy320vjl . SlioLTF , 12 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & lbzrfuspim [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 13 ] , localDW ->
iysy320vjl . SlioLTF , 13 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
p4khm4vfx3 [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 14 ] , localDW -> iysy320vjl . SlioLTF , 14 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & eougsutge5 [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 15 ] , localDW ->
iysy320vjl . SlioLTF , 15 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
e5btfsatai [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 16 ] , localDW -> iysy320vjl . SlioLTF , 16 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) mexrwskojr + 0 ) ; sdiSlioSdiWriteSignal (
localDW -> iysy320vjl . AQHandles [ 17 ] , localDW -> iysy320vjl . SlioLTF ,
17 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) o4kajfybva + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 18 ] , localDW ->
iysy320vjl . SlioLTF , 18 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
mj5vbpekow [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 19 ] , localDW -> iysy320vjl . SlioLTF , 19 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & pebnkfmdhv [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( localDW -> iysy320vjl . AQHandles [ 20 ] , localDW ->
iysy320vjl . SlioLTF , 20 , rtmGetTaskTime ( p4pqnuzidr , 0 ) , ( char * ) &
erpnuiz0pe [ 0 ] + 0 ) ; sdiSlioSdiWriteSignal ( localDW -> iysy320vjl .
AQHandles [ 21 ] , localDW -> iysy320vjl . SlioLTF , 21 , rtmGetTaskTime (
p4pqnuzidr , 0 ) , ( char * ) & fagqrqvcur [ 0 ] + 0 ) ; } } ffhsqxprss . acc
[ 0 ] = daaclllufb [ 0 ] ; ffhsqxprss . accf [ 0 ] = gf3t5sjyzs [ 0 ] ;
ffhsqxprss . vel [ 0 ] = lb1mw1k42v [ 0 ] ; ffhsqxprss . velf [ 0 ] =
ap3cagihqr [ 0 ] ; ffhsqxprss . velB [ 0 ] = g0asaio1li [ 0 ] ; ffhsqxprss .
pos [ 0 ] = n42nrkaxgn [ 0 ] ; ffhsqxprss . posf [ 0 ] = eylxdjepax [ 0 ] ;
ffhsqxprss . omega [ 0 ] = pppjosc5nk [ 0 ] ; ffhsqxprss . omegaf [ 0 ] =
hsfhdegm4y [ 0 ] ; ffhsqxprss . att [ 0 ] = n0gzdjo2gd [ 0 ] ; ffhsqxprss . n
[ 0 ] = etv3v35ur5 [ 0 ] ; ffhsqxprss . acc [ 1 ] = daaclllufb [ 1 ] ;
ffhsqxprss . accf [ 1 ] = gf3t5sjyzs [ 1 ] ; ffhsqxprss . vel [ 1 ] =
lb1mw1k42v [ 1 ] ; ffhsqxprss . velf [ 1 ] = ap3cagihqr [ 1 ] ; ffhsqxprss .
velB [ 1 ] = g0asaio1li [ 1 ] ; ffhsqxprss . pos [ 1 ] = n42nrkaxgn [ 1 ] ;
ffhsqxprss . posf [ 1 ] = eylxdjepax [ 1 ] ; ffhsqxprss . omega [ 1 ] =
pppjosc5nk [ 1 ] ; ffhsqxprss . omegaf [ 1 ] = hsfhdegm4y [ 1 ] ; ffhsqxprss
. att [ 1 ] = n0gzdjo2gd [ 1 ] ; ffhsqxprss . n [ 1 ] = etv3v35ur5 [ 1 ] ;
ffhsqxprss . acc [ 2 ] = daaclllufb [ 2 ] ; ffhsqxprss . accf [ 2 ] =
gf3t5sjyzs [ 2 ] ; ffhsqxprss . vel [ 2 ] = lb1mw1k42v [ 2 ] ; ffhsqxprss .
velf [ 2 ] = ap3cagihqr [ 2 ] ; ffhsqxprss . velB [ 2 ] = g0asaio1li [ 2 ] ;
ffhsqxprss . pos [ 2 ] = n42nrkaxgn [ 2 ] ; ffhsqxprss . posf [ 2 ] =
eylxdjepax [ 2 ] ; ffhsqxprss . omega [ 2 ] = pppjosc5nk [ 2 ] ; ffhsqxprss .
omegaf [ 2 ] = hsfhdegm4y [ 2 ] ; ffhsqxprss . att [ 2 ] = n0gzdjo2gd [ 2 ] ;
ffhsqxprss . n [ 2 ] = etv3v35ur5 [ 2 ] ; ffhsqxprss . wRotor [ 0 ] =
aidvbdjavx [ 0 ] ; ffhsqxprss . wRotor [ 1 ] = aidvbdjavx [ 1 ] ; ffhsqxprss
. wRotor [ 2 ] = aidvbdjavx [ 2 ] ; ffhsqxprss . wRotor [ 3 ] = aidvbdjavx [
3 ] ; ffhsqxprss . omegaUV [ 0 ] = lbzrfuspim [ 0 ] ; ffhsqxprss . omegafUV [
0 ] = p4khm4vfx3 [ 0 ] ; ffhsqxprss . omegaUV [ 1 ] = lbzrfuspim [ 1 ] ;
ffhsqxprss . omegafUV [ 1 ] = p4khm4vfx3 [ 1 ] ; ffhsqxprss . omegaUV [ 2 ] =
lbzrfuspim [ 2 ] ; ffhsqxprss . omegafUV [ 2 ] = p4khm4vfx3 [ 2 ] ;
ffhsqxprss . FMax [ 0 ] = eougsutge5 [ 0 ] ; ffhsqxprss . FMin [ 0 ] =
e5btfsatai [ 0 ] ; ffhsqxprss . FMax [ 1 ] = eougsutge5 [ 1 ] ; ffhsqxprss .
FMin [ 1 ] = e5btfsatai [ 1 ] ; ffhsqxprss . FMax [ 2 ] = eougsutge5 [ 2 ] ;
ffhsqxprss . FMin [ 2 ] = e5btfsatai [ 2 ] ; ffhsqxprss . FMax [ 3 ] =
eougsutge5 [ 3 ] ; ffhsqxprss . FMin [ 3 ] = e5btfsatai [ 3 ] ; ffhsqxprss .
fail_id = * mexrwskojr ; ffhsqxprss . fail_id_quick = * o4kajfybva ;
ffhsqxprss . uvDot_max [ 0 ] = mj5vbpekow [ 0 ] ; ffhsqxprss . uvDot_min [ 0
] = pebnkfmdhv [ 0 ] ; ffhsqxprss . uv_max [ 0 ] = erpnuiz0pe [ 0 ] ;
ffhsqxprss . uv_min [ 0 ] = fagqrqvcur [ 0 ] ; ffhsqxprss . uvDot_max [ 1 ] =
mj5vbpekow [ 1 ] ; ffhsqxprss . uvDot_min [ 1 ] = pebnkfmdhv [ 1 ] ;
ffhsqxprss . uv_max [ 1 ] = erpnuiz0pe [ 1 ] ; ffhsqxprss . uv_min [ 1 ] =
fagqrqvcur [ 1 ] ; for ( r1 = 0 ; r1 < 3 ; r1 ++ ) { localB -> eig5bdpkbc [
r1 ] = ( lzq4u2chxj . P_3 [ r1 + 6 ] * localDW -> gun3mm4dej [ 2 ] + (
lzq4u2chxj . P_3 [ r1 + 3 ] * localDW -> gun3mm4dej [ 1 ] + lzq4u2chxj . P_3
[ r1 ] * localDW -> gun3mm4dej [ 0 ] ) ) * lzq4u2chxj . P_6 ; } s =
muDoubleScalarSqrt ( rtP_URControlParams . l * rtP_URControlParams . l +
rtP_URControlParams . b * rtP_URControlParams . b ) ; Mu_max = ( - e5btfsatai
[ 1 ] + eougsutge5 [ 3 ] ) * s ; Mu_min = ( - eougsutge5 [ 1 ] + e5btfsatai [
3 ] ) * s ; Mv_max = ( eougsutge5 [ 0 ] - e5btfsatai [ 2 ] ) * s ; Mv_min = (
e5btfsatai [ 0 ] - eougsutge5 [ 2 ] ) * s ; ol2io5fxgc_idx_1 =
muDoubleScalarAbs ( hsfhdegm4y [ 2 ] ) ; if ( ol2io5fxgc_idx_1 <
rtP_URControlParams . attitude_yawThreshold ) { s = muDoubleScalarSign (
hsfhdegm4y [ 2 ] ) * rtP_URControlParams . attitude_yawThreshold ;
ol2io5fxgc_idx_1 = muDoubleScalarMax ( muDoubleScalarMin ( 1.0 - (
rtP_URControlParams . attitude_yawThreshold - ol2io5fxgc_idx_1 ) /
rtP_URControlParams . attitude_yawThreshold , 1.0 ) , 0.0 ) ; if ( Mv_max <
rtP_URControlParams . attitude_MMargin ) { Mv_max = rtP_URControlParams .
attitude_MMargin - Mv_max ; } else if ( Mv_min > - rtP_URControlParams .
attitude_MMargin ) { Mv_max = - rtP_URControlParams . attitude_MMargin -
Mv_min ; } else { Mv_max = 0.0 ; } Mv_max = Mv_max / ( ( rtP_URControlParams
. Iz - muDoubleScalarSqrt ( rtP_URControlParams . Ix * rtP_URControlParams .
Ix + rtP_URControlParams . Iy * rtP_URControlParams . Iy ) ) * s ) *
ol2io5fxgc_idx_1 ; if ( Mu_max < rtP_URControlParams . attitude_MMargin ) {
Mu_max = rtP_URControlParams . attitude_MMargin - Mu_max ; } else if ( Mu_min
> - rtP_URControlParams . attitude_MMargin ) { Mu_max = - rtP_URControlParams
. attitude_MMargin - Mu_min ; } else { Mu_max = 0.0 ; } Mu_max = Mu_max / ( (
muDoubleScalarSqrt ( rtP_URControlParams . Ix * rtP_URControlParams . Ix +
rtP_URControlParams . Iy * rtP_URControlParams . Iy ) - rtP_URControlParams .
Iz ) * s ) * ol2io5fxgc_idx_1 ; } else { if ( Mv_max < rtP_URControlParams .
attitude_MMargin ) { Mv_max = rtP_URControlParams . attitude_MMargin - Mv_max
; } else if ( Mv_min > - rtP_URControlParams . attitude_MMargin ) { Mv_max =
- rtP_URControlParams . attitude_MMargin - Mv_min ; } else { Mv_max = 0.0 ; }
Mv_min = muDoubleScalarSqrt ( rtP_URControlParams . Ix * rtP_URControlParams
. Ix + rtP_URControlParams . Iy * rtP_URControlParams . Iy ) ; Mv_max /= (
rtP_URControlParams . Iz - Mv_min ) * hsfhdegm4y [ 2 ] ; if ( Mu_max <
rtP_URControlParams . attitude_MMargin ) { Mu_max = rtP_URControlParams .
attitude_MMargin - Mu_max ; } else if ( Mu_min > - rtP_URControlParams .
attitude_MMargin ) { Mu_max = - rtP_URControlParams . attitude_MMargin -
Mu_min ; } else { Mu_max = 0.0 ; } Mu_max /= ( Mv_min - rtP_URControlParams .
Iz ) * hsfhdegm4y [ 2 ] ; } Mv_max = muDoubleScalarMax ( muDoubleScalarMin (
Mv_max , rtP_URControlParams . attitude_maxPrecSpeed ) , -
rtP_URControlParams . attitude_maxPrecSpeed ) ; Mu_max = muDoubleScalarMax (
muDoubleScalarMin ( Mu_max , rtP_URControlParams . attitude_maxPrecSpeed ) ,
- rtP_URControlParams . attitude_maxPrecSpeed ) ; Mu_min = 0.0 ; s = 0.0 ; if
( rtP_URControlParams . attitude_precMode == 2.0 ) { Mu_min =
muDoubleScalarSign ( Mu_max ) * rtP_URControlParams . attitude_precAngle /
180.0 * 3.1415926535897931 ; s = muDoubleScalarSign ( Mv_max ) *
rtP_URControlParams . attitude_precAngle / 180.0 * 3.1415926535897931 ; } if
( rtP_URControlParams . attitude_precMode == 0.0 ) { Mv_max = 0.0 ; Mu_max =
0.0 ; Mu_min = 0.0 ; s = 0.0 ; } ol2io5fxgc_idx_1 = Mu_max ; localDW ->
kigq4xfkv4 . uv_prec [ 0 ] = Mv_max ; localDW -> kigq4xfkv4 . precAngle [ 0 ]
= Mu_min ; localDW -> kigq4xfkv4 . uv_prec [ 1 ] = Mu_max ; localDW ->
kigq4xfkv4 . precAngle [ 1 ] = s ; Mu_max = rtP_URControlParams . rate_MzGain
; if ( ( rtP_URControlParams . YRCFail_enable != 0.0 ) && ( * mexrwskojr >
0.0 ) ) { Mu_max = muDoubleScalarMax ( - ( ( hsfhdegm4y [ 2 ] *
muDoubleScalarPower ( - 1.0 , * mexrwskojr ) - rtP_URControlParams .
YRC_r_cmd_fail ) * muDoubleScalarMax ( muDoubleScalarMin ( ( etv3v35ur5 [ 2 ]
- rtP_URControlParams . YRCFail_nLim2 ) / ( rtP_URControlParams .
YRCFail_nLim1 - rtP_URControlParams . YRCFail_nLim2 ) , 1.0 ) , 0.0 ) ) *
rtP_URControlParams . YRCFail_Kp_dMzGain , 0.0 ) ; Mu_max = Mu_max * Mu_max +
rtP_URControlParams . rate_MzGain ; } tmp [ 0 ] = - muDoubleScalarSin ( s ) ;
tmp [ 1 ] = muDoubleScalarSin ( Mu_min ) ; tmp [ 2 ] = - muDoubleScalarCos (
Mu_min ) * muDoubleScalarCos ( s ) ; kaic05nza1 ( & localDW -> kigq4xfkv4 ,
olifiqy3cq , tmp , & ffhsqxprss , & rtP_par , & rtP_URControlParams ,
ji1gld0tju ) ; Mv_max += ji1gld0tju [ 0 ] ; Mv_min = muDoubleScalarMax (
muDoubleScalarMin ( Mv_max , rtP_URControlParams . attitude_maxuv_des ) , -
rtP_URControlParams . attitude_maxuv_des ) ; z1 [ 0 ] = muDoubleScalarMax (
muDoubleScalarMin ( Mv_max , rtP_URControlParams . attitude_maxuv_des ) , -
rtP_URControlParams . attitude_maxuv_des ) ; localDW -> kigq4xfkv4 .
uv_des_raw [ 0 ] = Mv_max ; Mv_max = ol2io5fxgc_idx_1 + ji1gld0tju [ 1 ] ;
ol2io5fxgc_idx_1 = muDoubleScalarMax ( muDoubleScalarMin ( Mv_max ,
rtP_URControlParams . attitude_maxuv_des ) , - rtP_URControlParams .
attitude_maxuv_des ) ; z1 [ 1 ] = muDoubleScalarMax ( muDoubleScalarMin (
Mv_max , rtP_URControlParams . attitude_maxuv_des ) , - rtP_URControlParams .
attitude_maxuv_des ) ; if ( muDoubleScalarAbs ( rtP_par . URC . R_xy_uv [ 1 ]
) > muDoubleScalarAbs ( rtP_par . URC . R_xy_uv [ 0 ] ) ) { r1 = 1 ; r2 = 0 ;
} else { r1 = 0 ; r2 = 1 ; } Mu_min = rtP_par . URC . R_xy_uv [ r2 ] /
rtP_par . URC . R_xy_uv [ r1 ] ; s = rtP_par . URC . R_xy_uv [ 2 + r1 ] ;
Mu_min = ( z1 [ r2 ] - z1 [ r1 ] * Mu_min ) / ( rtP_par . URC . R_xy_uv [ 2 +
r2 ] - s * Mu_min ) ; uvr_des [ 0 ] = Mv_min ; uvr_des [ 1 ] =
ol2io5fxgc_idx_1 ; uvr_des [ 2 ] = * mb5sye31qg ; s = ( z1 [ r1 ] - s *
Mu_min ) / rtP_par . URC . R_xy_uv [ r1 ] ; localDW -> kigq4xfkv4 . pqr_des [
0 ] = s ; localDW -> kigq4xfkv4 . uvr_des [ 0 ] = Mv_min ; localDW ->
kigq4xfkv4 . pqr_des [ 1 ] = Mu_min ; localDW -> kigq4xfkv4 . uvr_des [ 1 ] =
ol2io5fxgc_idx_1 ; localDW -> kigq4xfkv4 . pqr_des [ 2 ] = * mb5sye31qg ;
localDW -> kigq4xfkv4 . uvr_des [ 2 ] = * mb5sye31qg ; localDW -> kigq4xfkv4
. uv_des [ 0 ] = Mv_min ; localDW -> kigq4xfkv4 . uv_attCtrl [ 0 ] =
ji1gld0tju [ 0 ] ; localDW -> kigq4xfkv4 . uv_des_raw [ 1 ] = Mv_max ;
localDW -> kigq4xfkv4 . uv_des [ 1 ] = ol2io5fxgc_idx_1 ; localDW ->
kigq4xfkv4 . uv_attCtrl [ 1 ] = ji1gld0tju [ 1 ] ; localDW -> kigq4xfkv4 .
w_max [ 0 ] = rtP_par . wRotorMax ; localDW -> kigq4xfkv4 . w_min [ 0 ] =
rtP_par . wRotorMin ; localDW -> kigq4xfkv4 . w_max [ 1 ] = rtP_par .
wRotorMax ; localDW -> kigq4xfkv4 . w_min [ 1 ] = rtP_par . wRotorMin ;
localDW -> kigq4xfkv4 . w_max [ 2 ] = rtP_par . wRotorMax ; localDW ->
kigq4xfkv4 . w_min [ 2 ] = rtP_par . wRotorMin ; localDW -> kigq4xfkv4 .
w_max [ 3 ] = rtP_par . wRotorMax ; localDW -> kigq4xfkv4 . w_min [ 3 ] =
rtP_par . wRotorMin ; localDW -> kigq4xfkv4 . MzGain = Mu_max ; ffhsqxprss .
omega [ 0 ] = pppjosc5nk [ 0 ] ; ffhsqxprss . omegaf [ 0 ] = hsfhdegm4y [ 0 ]
; ffhsqxprss . omega [ 1 ] = pppjosc5nk [ 1 ] ; ffhsqxprss . omegaf [ 1 ] =
hsfhdegm4y [ 1 ] ; ffhsqxprss . omega [ 2 ] = pppjosc5nk [ 2 ] ; ffhsqxprss .
omegaf [ 2 ] = hsfhdegm4y [ 2 ] ; ffhsqxprss . wRotor [ 0 ] = aidvbdjavx [ 0
] ; ffhsqxprss . wRotor [ 1 ] = aidvbdjavx [ 1 ] ; ffhsqxprss . wRotor [ 2 ]
= aidvbdjavx [ 2 ] ; ffhsqxprss . wRotor [ 3 ] = aidvbdjavx [ 3 ] ;
ffhsqxprss . omegaUV [ 0 ] = lbzrfuspim [ 0 ] ; ffhsqxprss . omegafUV [ 0 ] =
p4khm4vfx3 [ 0 ] ; ffhsqxprss . omegaUV [ 1 ] = lbzrfuspim [ 1 ] ; ffhsqxprss
. omegafUV [ 1 ] = p4khm4vfx3 [ 1 ] ; ffhsqxprss . omegaUV [ 2 ] = lbzrfuspim
[ 2 ] ; ffhsqxprss . omegafUV [ 2 ] = p4khm4vfx3 [ 2 ] ; ffhsqxprss . FMax [
0 ] = eougsutge5 [ 0 ] ; ffhsqxprss . FMin [ 0 ] = e5btfsatai [ 0 ] ;
ffhsqxprss . FMax [ 1 ] = eougsutge5 [ 1 ] ; ffhsqxprss . FMin [ 1 ] =
e5btfsatai [ 1 ] ; ffhsqxprss . FMax [ 2 ] = eougsutge5 [ 2 ] ; ffhsqxprss .
FMin [ 2 ] = e5btfsatai [ 2 ] ; ffhsqxprss . FMax [ 3 ] = eougsutge5 [ 3 ] ;
ffhsqxprss . FMin [ 3 ] = e5btfsatai [ 3 ] ; URpar_p = & rtP_URControlParams
; if ( ! localDW -> bkm4axbd4m ) { tmp [ 0 ] = 0.0 ; tmp [ 1 ] = 0.0 ; tmp [
2 ] = 0.0 ; jfgjwtbyys ( & localDW -> erynhppbfv , rtP_URControlParams .
rate_INDI_omegaDotFilterT , tmp , 300.0 , - 300.0 ) ; localDW -> bkm4axbd4m =
true ; } if ( ! localDW -> jzaw0ruggn ) { osjdnkeb31 ( & localDW ->
duhmkytvnb , rtP_URControlParams . rate_INDI_accZFilterT ) ; localDW ->
jzaw0ruggn = true ; } nju4dz31ac [ 0 ] = 0.0 ; nju4dz31ac [ 1 ] = 0.0 ;
nju4dz31ac [ 2 ] = 0.0 ; nju4dz31ac [ 3 ] = 0.0 ; if ( rtP_URControlParams .
rate_mode == 1.0 ) { b0t4yfxz5d [ 0 ] = ( s - hsfhdegm4y [ 0 ] ) *
rtP_URControlParams . rate_INDI_rateDotKp [ 0 ] ; b0t4yfxz5d [ 1 ] = ( Mu_min
- hsfhdegm4y [ 1 ] ) * rtP_URControlParams . rate_INDI_rateDotKp [ 1 ] ;
Mv_min = ( * mb5sye31qg - hsfhdegm4y [ 2 ] ) * rtP_URControlParams .
rate_INDI_rateDotKp [ 2 ] ; localDW -> erynhppbfv . filterHandle . filterT =
rtP_URControlParams . rate_INDI_omegaDotFilterT ; if55mwg1nh ( & localDW ->
erynhppbfv , ffhsqxprss . omega , 1.0 / rtP_par . freq ) ; localDW ->
duhmkytvnb . filterT = rtP_URControlParams . rate_INDI_accZFilterT ; localDW
-> duhmkytvnb . value = ( 1.0 - localDW -> duhmkytvnb . filterT ) *
daaclllufb [ 2 ] + localDW -> duhmkytvnb . value * localDW -> duhmkytvnb .
filterT ; Mu_max = localDW -> duhmkytvnb . value ; Mu_min = localDW ->
duhmkytvnb . maxLim ; Mv_max = localDW -> duhmkytvnb . minLim ; localDW ->
duhmkytvnb . value = muDoubleScalarMax ( muDoubleScalarMin ( Mu_max , Mu_min
) , Mv_max ) ; tmp [ 0 ] = localDW -> erynhppbfv . derValue [ 0 ] ; tmp [ 1 ]
= localDW -> erynhppbfv . derValue [ 1 ] ; tmp [ 2 ] = localDW -> erynhppbfv
. derValue [ 2 ] ; b_z1 [ 0 ] = b0t4yfxz5d [ 0 ] ; b_z1 [ 1 ] = b0t4yfxz5d [
1 ] ; b_z1 [ 2 ] = Mv_min ; b_z1 [ 3 ] = - * c34ibfughu / rtP_URControlParams
. mass ; memcpy ( & URpar [ 0 ] , & rtP_URControlParams . rate_INDI_G [ 0 ] ,
sizeof ( real_T ) << 5U ) ; a255ev1jku ( * mexrwskojr , tmp , localDW ->
duhmkytvnb . value , b_z1 , URpar , ffhsqxprss . wRotor , & rtP_par ,
nju4dz31ac , localDW ) ; localDW -> kigq4xfkv4 . pqr_des_dot [ 0 ] =
b0t4yfxz5d [ 0 ] ; localDW -> kigq4xfkv4 . pqr_des_dot [ 1 ] = b0t4yfxz5d [ 1
] ; localDW -> kigq4xfkv4 . pqr_des_dot [ 2 ] = Mv_min ; localDW ->
kigq4xfkv4 . omegaDot [ 0 ] = localDW -> erynhppbfv . derValue [ 0 ] ;
localDW -> kigq4xfkv4 . omegaDot [ 1 ] = localDW -> erynhppbfv . derValue [ 1
] ; localDW -> kigq4xfkv4 . omegaDot [ 2 ] = localDW -> erynhppbfv . derValue
[ 2 ] ; } else if ( rtP_URControlParams . rate_mode == 2.0 ) { b0t4yfxz5d [ 0
] = 0.0 ; b0t4yfxz5d [ 1 ] = 0.0 ; b0t4yfxz5d [ 2 ] = 0.0 ; if (
rtP_URControlParams . rate_momentMode == 1.0 ) { ggltymhhim ( ffhsqxprss .
omegaUV , ffhsqxprss . omegafUV , & localDW -> kigq4xfkv4 , uvr_des ,
rtP_URControlParams . Iz , rtP_URControlParams . Iu , rtP_URControlParams .
Iv , rtP_URControlParams . rate_MPID_rateDotKp , rtP_URControlParams .
rate_MPID_rateDotKi , rtP_URControlParams . rate_MPID_rateDotKd ,
rtP_URControlParams . rate_MPID_derFilterT , rtP_URControlParams .
rate_MPID_uvrdesderFilterT , rtP_URControlParams . rate_MPID_maxInt ,
rtP_URControlParams . rate_MPID_precGain , & rtP_par , b0t4yfxz5d , localDW )
; } else { if ( rtP_URControlParams . rate_momentMode == 2.0 ) { frmvotolru (
ffhsqxprss . wRotor , ffhsqxprss . omegaUV , ffhsqxprss . omegafUV , &
localDW -> kigq4xfkv4 , uvr_des , rtP_URControlParams . k0 ,
rtP_URControlParams . t0 , rtP_URControlParams . s , rtP_URControlParams .
est_omegaFilterT , rtP_URControlParams . rate_MINDI_rateDotKp ,
rtP_URControlParams . rate_MINDI_derFilterT , rtP_URControlParams .
rate_MINDI_MKp , & rtP_par , b0t4yfxz5d , localDW ) ; } } b0t4yfxz5d [ 0 ] =
muDoubleScalarMax ( muDoubleScalarMin ( b0t4yfxz5d [ 0 ] ,
rtP_URControlParams . rate_maxMoments [ 0 ] ) , - rtP_URControlParams .
rate_maxMoments [ 0 ] ) ; b0t4yfxz5d [ 1 ] = muDoubleScalarMax (
muDoubleScalarMin ( b0t4yfxz5d [ 1 ] , rtP_URControlParams . rate_maxMoments
[ 1 ] ) , - rtP_URControlParams . rate_maxMoments [ 1 ] ) ; Mv_min =
muDoubleScalarMax ( muDoubleScalarMin ( b0t4yfxz5d [ 2 ] ,
rtP_URControlParams . rate_maxMoments [ 2 ] ) , - rtP_URControlParams .
rate_maxMoments [ 2 ] ) ; if ( rtP_URControlParams . envp_enable == 1.0 ) {
e5kulktxfz ( b0t4yfxz5d [ 0 ] , b0t4yfxz5d [ 1 ] , Mv_min , * c34ibfughu ,
ffhsqxprss . omegaf , ffhsqxprss . FMax , ffhsqxprss . FMin , * mexrwskojr ,
rtP_URControlParams . rate_MuGain , rtP_URControlParams . rate_MvGain ,
Mu_max , rtP_URControlParams . rate_FtotGain , & rtP_par , &
rtP_URControlParams , dw_lin_min , & localDW -> kigq4xfkv4 . iter , & Mu_min
, localDW ) ; localDW -> en3asgirkf [ 0 ] = 0.0 ; localDW -> en3asgirkf [ 1 ]
= 0.0 ; localDW -> en3asgirkf [ 2 ] = 0.0 ; localDW -> en3asgirkf [ 3 ] = 0.0
; } else { dijvlmzmna ( b0t4yfxz5d [ 0 ] , b0t4yfxz5d [ 1 ] , Mv_min , *
c34ibfughu , ffhsqxprss . FMax , ffhsqxprss . FMin , rtP_URControlParams .
rate_MuGain , rtP_URControlParams . rate_MvGain , Mu_max ,
rtP_URControlParams . rate_FGain , rtP_URControlParams . rate_FtotGain ,
localDW -> en3asgirkf , & rtP_par , rtP_URControlParams . rate_maxIter ,
dw_lin_min , & localDW -> kigq4xfkv4 . iter , & Mu_min ) ; } Mu_min_p = (
Mu_min != 0.0 ) ; if ( Mu_min_p ) { localDW -> kb1lksw5ci [ 0 ] = dw_lin_min
[ 0 ] ; } else { localDW -> kb1lksw5ci [ 0 ] *= 0.99 ; } nju4dz31ac [ 0 ] =
muDoubleScalarMax ( localDW -> kb1lksw5ci [ 0 ] , 0.0 ) ; nju4dz31ac [ 0 ] /=
rtP_URControlParams . k0 ; if ( Mu_min_p ) { localDW -> kb1lksw5ci [ 1 ] =
dw_lin_min [ 1 ] ; } else { localDW -> kb1lksw5ci [ 1 ] *= 0.99 ; }
nju4dz31ac [ 1 ] = muDoubleScalarMax ( localDW -> kb1lksw5ci [ 1 ] , 0.0 ) ;
nju4dz31ac [ 1 ] /= rtP_URControlParams . k0 ; if ( Mu_min_p ) { localDW ->
kb1lksw5ci [ 2 ] = dw_lin_min [ 2 ] ; } else { localDW -> kb1lksw5ci [ 2 ] *=
0.99 ; } nju4dz31ac [ 2 ] = muDoubleScalarMax ( localDW -> kb1lksw5ci [ 2 ] ,
0.0 ) ; nju4dz31ac [ 2 ] /= rtP_URControlParams . k0 ; if ( Mu_min_p ) {
localDW -> kb1lksw5ci [ 3 ] = dw_lin_min [ 3 ] ; } else { localDW ->
kb1lksw5ci [ 3 ] *= 0.99 ; } nju4dz31ac [ 3 ] = muDoubleScalarMax ( localDW
-> kb1lksw5ci [ 3 ] , 0.0 ) ; nju4dz31ac [ 3 ] /= rtP_URControlParams . k0 ;
sqrt_QJe0JoyR ( nju4dz31ac ) ; localDW -> gdaaooi1ul [ 0 ] = ( dw_lin_min [ 3
] - dw_lin_min [ 1 ] ) * rtP_URControlParams . s ; localDW -> gdaaooi1ul [ 1
] = ( dw_lin_min [ 0 ] - dw_lin_min [ 2 ] ) * rtP_URControlParams . s ;
localDW -> gdaaooi1ul [ 2 ] = ( ( ( dw_lin_min [ 0 ] - dw_lin_min [ 1 ] ) +
dw_lin_min [ 2 ] ) - dw_lin_min [ 3 ] ) * rtP_URControlParams . t0 /
rtP_URControlParams . k0 ; localDW -> kigq4xfkv4 . optimal = Mu_min ; localDW
-> kigq4xfkv4 . M_uvr_des [ 0 ] = b0t4yfxz5d [ 0 ] ; localDW -> kigq4xfkv4 .
M_uvr_set [ 0 ] = localDW -> gdaaooi1ul [ 0 ] ; localDW -> kigq4xfkv4 .
M_uvr_des [ 1 ] = b0t4yfxz5d [ 1 ] ; localDW -> kigq4xfkv4 . M_uvr_set [ 1 ]
= localDW -> gdaaooi1ul [ 1 ] ; localDW -> kigq4xfkv4 . M_uvr_des [ 2 ] =
Mv_min ; localDW -> kigq4xfkv4 . M_uvr_set [ 2 ] = localDW -> gdaaooi1ul [ 2
] ; localDW -> kigq4xfkv4 . Ftot_set = sum_n7Ci4vKg ( dw_lin_min ) ; } else {
if ( rtP_URControlParams . rate_mode == 3.0 ) { localDW -> erynhppbfv .
filterHandle . filterT = rtP_URControlParams . rate_INDI_omegaDotFilterT ;
if55mwg1nh ( & localDW -> erynhppbfv , ffhsqxprss . omegaUV , 1.0 / rtP_par .
freq ) ; localDW -> duhmkytvnb . filterT = rtP_URControlParams .
rate_INDI_accZFilterT ; localDW -> duhmkytvnb . value = ( 1.0 - localDW ->
duhmkytvnb . filterT ) * daaclllufb [ 2 ] + localDW -> duhmkytvnb . value *
localDW -> duhmkytvnb . filterT ; Mu_min = localDW -> duhmkytvnb . value ;
Mv_max = localDW -> duhmkytvnb . maxLim ; s = localDW -> duhmkytvnb . minLim
; localDW -> duhmkytvnb . value = muDoubleScalarMax ( muDoubleScalarMin (
Mu_min , Mv_max ) , s ) ; Mu_min = - localDW -> erynhppbfv . derValue [ 0 ] ;
Mv_max = - localDW -> erynhppbfv . derValue [ 1 ] ; s = - localDW ->
erynhppbfv . derValue [ 2 ] ; tmp_p = - localDW -> duhmkytvnb . value ; b_z1
[ 0 ] = muDoubleScalarMax ( muDoubleScalarMin ( ( Mv_min - p4khm4vfx3 [ 0 ] )
* rtP_URControlParams . rate_INDI_rateDotKp [ 0 ] + Mu_min , rtP_par . URC .
rate_QPINDI_maxInp [ 0 ] ) , - rtP_par . URC . rate_QPINDI_maxInp [ 0 ] ) ;
b_z1 [ 1 ] = muDoubleScalarMax ( muDoubleScalarMin ( ( ol2io5fxgc_idx_1 -
p4khm4vfx3 [ 1 ] ) * rtP_URControlParams . rate_INDI_rateDotKp [ 1 ] + Mv_max
, rtP_par . URC . rate_QPINDI_maxInp [ 1 ] ) , - rtP_par . URC .
rate_QPINDI_maxInp [ 1 ] ) ; b_z1 [ 2 ] = muDoubleScalarMax (
muDoubleScalarMin ( ( * mb5sye31qg - p4khm4vfx3 [ 2 ] ) * rtP_URControlParams
. rate_INDI_rateDotKp [ 2 ] + s , rtP_par . URC . rate_QPINDI_maxInp [ 2 ] )
, - rtP_par . URC . rate_QPINDI_maxInp [ 2 ] ) ; b_z1 [ 3 ] =
muDoubleScalarMax ( muDoubleScalarMin ( - * c34ibfughu / rtP_URControlParams
. mass + tmp_p , rtP_par . URC . rate_QPINDI_maxInp [ 3 ] ) , - rtP_par . URC
. rate_QPINDI_maxInp [ 3 ] ) ; abs_zZTxck9n ( b_z1 , dw_lin_max ) ; Mv_min =
muDoubleScalarMin ( rtP_par . wRotorMax , rtP_par . w_max ) ; wMax [ 0 ] =
muDoubleScalarMin ( Mv_min , aidvbdjavx [ 0 ] + rtP_URControlParams .
rate_QPINDI_dwMax ) ; inp [ 0 ] = muDoubleScalarMax ( muDoubleScalarMin (
dw_lin_max [ 0 ] / rtP_URControlParams . rate_QPINDI_cutoff [ 0 ] , 1.0 ) ,
rtP_URControlParams . rate_QPINDI_minGain ) * b_z1 [ 0 ] ; wMax [ 1 ] =
muDoubleScalarMin ( Mv_min , aidvbdjavx [ 1 ] + rtP_URControlParams .
rate_QPINDI_dwMax ) ; inp [ 1 ] = muDoubleScalarMax ( muDoubleScalarMin (
dw_lin_max [ 1 ] / rtP_URControlParams . rate_QPINDI_cutoff [ 1 ] , 1.0 ) ,
rtP_URControlParams . rate_QPINDI_minGain ) * b_z1 [ 1 ] ; wMax [ 2 ] =
muDoubleScalarMin ( Mv_min , aidvbdjavx [ 2 ] + rtP_URControlParams .
rate_QPINDI_dwMax ) ; inp [ 2 ] = muDoubleScalarMax ( muDoubleScalarMin (
dw_lin_max [ 2 ] / rtP_URControlParams . rate_QPINDI_cutoff [ 2 ] , 1.0 ) ,
rtP_URControlParams . rate_QPINDI_minGain ) * b_z1 [ 2 ] ; ol2io5fxgc_idx_1 =
muDoubleScalarMax ( muDoubleScalarMin ( dw_lin_max [ 3 ] /
rtP_URControlParams . rate_QPINDI_cutoff [ 3 ] , 1.0 ) , rtP_URControlParams
. rate_QPINDI_minGain ) * b_z1 [ 3 ] ; wMax [ 3 ] = muDoubleScalarMin (
Mv_min , aidvbdjavx [ 3 ] + rtP_URControlParams . rate_QPINDI_dwMax ) ; inp [
3 ] = ol2io5fxgc_idx_1 ; if ( * mexrwskojr != 0.0 ) { wMax [ ( int32_T ) *
mexrwskojr - 1 ] = rtP_par . w_min ; } Mu_min = wMax [ 0 ] / 100.0 ; s =
Mu_min * Mu_min ; Mu_min = aidvbdjavx [ 0 ] / 100.0 ; Mv_max = Mu_min *
Mu_min ; dw_lin_max [ 0 ] = s - Mv_max ; Mv_min = muDoubleScalarMax ( rtP_par
. wRotorMin , rtP_par . w_min ) ; s = muDoubleScalarMax ( Mv_min , aidvbdjavx
[ 0 ] - rtP_URControlParams . rate_QPINDI_dwMax ) / 100.0 ; a [ 0 ] = rtP_par
. URC . rate_roll_eff ; a [ 1 ] = rtP_par . URC . rate_pitch_eff ; a [ 2 ] =
rtP_par . URC . rate_yaw_eff ; a [ 3 ] = rtP_par . URC . rate_az_eff ; wMax [
0 ] = Mu_min ; dw_lin_min [ 0 ] = s * s - Mv_max ; Mu_min = wMax [ 1 ] /
100.0 ; s = Mu_min * Mu_min ; Mu_min = aidvbdjavx [ 1 ] / 100.0 ; Mv_max =
Mu_min * Mu_min ; dw_lin_max [ 1 ] = s - Mv_max ; s = muDoubleScalarMax (
Mv_min , aidvbdjavx [ 1 ] - rtP_URControlParams . rate_QPINDI_dwMax ) / 100.0
; a [ 4 ] = rtP_par . URC . rate_roll_eff ; a [ 5 ] = rtP_par . URC .
rate_pitch_eff ; a [ 6 ] = rtP_par . URC . rate_yaw_eff ; a [ 7 ] = rtP_par .
URC . rate_az_eff ; wMax [ 1 ] = Mu_min ; dw_lin_min [ 1 ] = s * s - Mv_max ;
Mu_min = wMax [ 2 ] / 100.0 ; s = Mu_min * Mu_min ; Mu_min = aidvbdjavx [ 2 ]
/ 100.0 ; Mv_max = Mu_min * Mu_min ; dw_lin_max [ 2 ] = s - Mv_max ; s =
muDoubleScalarMax ( Mv_min , aidvbdjavx [ 2 ] - rtP_URControlParams .
rate_QPINDI_dwMax ) / 100.0 ; a [ 8 ] = rtP_par . URC . rate_roll_eff ; a [ 9
] = rtP_par . URC . rate_pitch_eff ; a [ 10 ] = rtP_par . URC . rate_yaw_eff
; a [ 11 ] = rtP_par . URC . rate_az_eff ; wMax [ 2 ] = Mu_min ; dw_lin_min [
2 ] = s * s - Mv_max ; Mu_min = wMax [ 3 ] / 100.0 ; s = Mu_min * Mu_min ;
Mu_min = aidvbdjavx [ 3 ] / 100.0 ; Mv_max = Mu_min * Mu_min ; dw_lin_max [ 3
] = s - Mv_max ; s = muDoubleScalarMax ( Mv_min , aidvbdjavx [ 3 ] -
rtP_URControlParams . rate_QPINDI_dwMax ) / 100.0 ; a [ 12 ] = rtP_par . URC
. rate_roll_eff ; a [ 13 ] = rtP_par . URC . rate_pitch_eff ; a [ 14 ] =
rtP_par . URC . rate_yaw_eff ; a [ 15 ] = rtP_par . URC . rate_az_eff ;
dw_lin_min [ 3 ] = s * s - Mv_max ; for ( r1 = 0 ; r1 < 16 ; r1 ++ ) { G [ r1
] = rtP_par . URC . rate_G1_unit [ r1 ] * a [ r1 ] * 0.01 ; K [ r1 ] =
rtP_URControlParams . rate_QPINDI_K [ r1 ] ; } K [ 10 ] = Mu_max / 100.0 ;
pinv_9fLArOC2 ( G , a ) ; for ( r1 = 0 ; r1 < 4 ; r1 ++ ) { localDW ->
en3asgirkf [ r1 ] = 0.0 ; localDW -> en3asgirkf [ r1 ] += a [ r1 ] * inp [ 0
] ; localDW -> en3asgirkf [ r1 ] += a [ r1 + 4 ] * inp [ 1 ] ; localDW ->
en3asgirkf [ r1 ] += a [ r1 + 8 ] * inp [ 2 ] ; localDW -> en3asgirkf [ r1 ]
+= a [ r1 + 12 ] * ol2io5fxgc_idx_1 ; localDW -> en3asgirkf [ r1 ] = (
localDW -> en3asgirkf [ r1 ] > dw_lin_max [ r1 ] ) - ( localDW -> en3asgirkf
[ r1 ] < dw_lin_min [ r1 ] ) ; } a2kk3tsidk ( inp , G , K ,
rtP_URControlParams . rate_QPINDI_K2 , dw_lin_min , dw_lin_max , localDW ->
en3asgirkf , rtP_URControlParams . rate_maxIter , b_z1 , & localDW ->
kigq4xfkv4 . iter , & Mu_max ) ; if ( Mu_max != 0.0 ) { nju4dz31ac [ 0 ] =
muDoubleScalarMax ( wMax [ 0 ] * wMax [ 0 ] + b_z1 [ 0 ] , 0.0 ) ; nju4dz31ac
[ 0 ] = muDoubleScalarSqrt ( nju4dz31ac [ 0 ] ) ; nju4dz31ac [ 0 ] *= 100.0 ;
nju4dz31ac [ 1 ] = muDoubleScalarMax ( wMax [ 1 ] * wMax [ 1 ] + b_z1 [ 1 ] ,
0.0 ) ; nju4dz31ac [ 1 ] = muDoubleScalarSqrt ( nju4dz31ac [ 1 ] ) ;
nju4dz31ac [ 1 ] *= 100.0 ; nju4dz31ac [ 2 ] = muDoubleScalarMax ( wMax [ 2 ]
* wMax [ 2 ] + b_z1 [ 2 ] , 0.0 ) ; nju4dz31ac [ 2 ] = muDoubleScalarSqrt (
nju4dz31ac [ 2 ] ) ; nju4dz31ac [ 2 ] *= 100.0 ; nju4dz31ac [ 3 ] =
muDoubleScalarMax ( Mv_max + b_z1 [ 3 ] , 0.0 ) ; nju4dz31ac [ 3 ] =
muDoubleScalarSqrt ( nju4dz31ac [ 3 ] ) ; nju4dz31ac [ 3 ] *= 100.0 ; } else
{ nju4dz31ac [ 0 ] = aidvbdjavx [ 0 ] * 0.99 ; nju4dz31ac [ 1 ] = aidvbdjavx
[ 1 ] * 0.99 ; nju4dz31ac [ 2 ] = aidvbdjavx [ 2 ] * 0.99 ; nju4dz31ac [ 3 ]
= aidvbdjavx [ 3 ] * 0.99 ; } localDW -> kigq4xfkv4 . optimal = Mu_max ; for
( r1 = 0 ; r1 < 4 ; r1 ++ ) { localDW -> kigq4xfkv4 . inp [ r1 ] = inp [ r1 ]
; localDW -> kigq4xfkv4 . dw_lin [ r1 ] = b_z1 [ r1 ] ; localDW -> kigq4xfkv4
. inpActual [ r1 ] = 0.0 ; localDW -> kigq4xfkv4 . inpActual [ r1 ] += G [ r1
] * b_z1 [ 0 ] ; localDW -> kigq4xfkv4 . inpActual [ r1 ] += G [ r1 + 4 ] *
b_z1 [ 1 ] ; localDW -> kigq4xfkv4 . inpActual [ r1 ] += G [ r1 + 8 ] * b_z1
[ 2 ] ; localDW -> kigq4xfkv4 . inpActual [ r1 ] += G [ r1 + 12 ] * b_z1 [ 3
] ; } } } nju4dz31ac [ 0 ] = muDoubleScalarMax ( muDoubleScalarMin (
nju4dz31ac [ 0 ] , rtP_par . wRotorMax ) , rtP_par . wRotorMin ) ; nju4dz31ac
[ 1 ] = muDoubleScalarMax ( muDoubleScalarMin ( nju4dz31ac [ 1 ] , rtP_par .
wRotorMax ) , rtP_par . wRotorMin ) ; nju4dz31ac [ 2 ] = muDoubleScalarMax (
muDoubleScalarMin ( nju4dz31ac [ 2 ] , rtP_par . wRotorMax ) , rtP_par .
wRotorMin ) ; nju4dz31ac [ 3 ] = muDoubleScalarMax ( muDoubleScalarMin (
nju4dz31ac [ 3 ] , rtP_par . wRotorMax ) , rtP_par . wRotorMin ) ; localDW ->
kigq4xfkv4 . wRotorSet [ 0 ] = nju4dz31ac [ 0 ] ; localDW -> kigq4xfkv4 .
wRotorSet [ 1 ] = nju4dz31ac [ 1 ] ; localDW -> kigq4xfkv4 . wRotorSet [ 2 ]
= nju4dz31ac [ 2 ] ; localDW -> kigq4xfkv4 . wRotorSet [ 3 ] = nju4dz31ac [ 3
] ; if ( * o4kajfybva != 0.0 ) { nju4dz31ac [ ( int32_T ) * o4kajfybva - 1 ]
= URpar_p -> fail_wRot ; } } void f1hstsqruw ( const real_T olifiqy3cq [ 3 ]
, n24t031ugl * localB , cq2d5gococ * localDW ) { int_T i ; real_T xnew [ 3 ]
; real_T xnew_p ; real_T xnew_tmp_tmp ; real_T xnew_tmp ; real_T xnew_tmp_p ;
for ( i = 0 ; i < 3 ; i ++ ) { xnew_tmp_tmp = 20.0 / rtP_par . freq ;
xnew_tmp = mcammwvno3x . io4dhn332c [ i + 3 ] ; xnew_tmp_p = mcammwvno3x .
io4dhn332c [ i + 6 ] ; xnew_p = xnew_tmp_tmp * mcammwvno3x . io4dhn332c [ i ]
* olifiqy3cq [ 0 ] + ( ( 1.0 - xnew_tmp_tmp ) * xnew_tmp_p * localDW ->
gun3mm4dej [ 2 ] + ( ( 1.0 - xnew_tmp_tmp ) * xnew_tmp * localDW ->
gun3mm4dej [ 1 ] + ( 1.0 - xnew_tmp_tmp ) * mcammwvno3x . io4dhn332c [ i ] *
localDW -> gun3mm4dej [ 0 ] ) ) ; xnew_p += xnew_tmp_tmp * xnew_tmp *
olifiqy3cq [ 1 ] ; xnew_p += xnew_tmp_tmp * xnew_tmp_p * olifiqy3cq [ 2 ] ;
xnew [ i ] = xnew_p ; } localDW -> gun3mm4dej [ 0 ] = xnew [ 0 ] ; localDW ->
d4phfsngrv [ 0 ] = localB -> eig5bdpkbc [ 0 ] ; localDW -> gun3mm4dej [ 1 ] =
xnew [ 1 ] ; localDW -> d4phfsngrv [ 1 ] = localB -> eig5bdpkbc [ 1 ] ;
localDW -> gun3mm4dej [ 2 ] = xnew [ 2 ] ; localDW -> d4phfsngrv [ 2 ] =
localB -> eig5bdpkbc [ 2 ] ; } void m5kmj2htr4 ( np1m13vojf * const
p4pqnuzidr , cq2d5gococ * localDW ) { if ( ( ssGetSimMode ( p4pqnuzidr ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( p4pqnuzidr -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> jz33kzeqpn . AQHandles ) { sdiTerminateStreaming ( & localDW ->
jz33kzeqpn . AQHandles ) ; } if ( localDW -> jz33kzeqpn . SlioLTF ) {
rtwDestructAccessorPointer ( localDW -> jz33kzeqpn . SlioLTF ) ; } } if ( (
ssGetSimMode ( p4pqnuzidr -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
p4pqnuzidr -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> iysy320vjl .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl .
AQHandles [ 0 ] ) ; } if ( localDW -> iysy320vjl . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 1 ] ) ; } if (
localDW -> iysy320vjl . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & localDW
-> iysy320vjl . AQHandles [ 2 ] ) ; } if ( localDW -> iysy320vjl . AQHandles
[ 3 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 3 ] )
; } if ( localDW -> iysy320vjl . AQHandles [ 4 ] ) { sdiTerminateStreaming (
& localDW -> iysy320vjl . AQHandles [ 4 ] ) ; } if ( localDW -> iysy320vjl .
AQHandles [ 5 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl .
AQHandles [ 5 ] ) ; } if ( localDW -> iysy320vjl . AQHandles [ 6 ] ) {
sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 6 ] ) ; } if (
localDW -> iysy320vjl . AQHandles [ 7 ] ) { sdiTerminateStreaming ( & localDW
-> iysy320vjl . AQHandles [ 7 ] ) ; } if ( localDW -> iysy320vjl . AQHandles
[ 8 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 8 ] )
; } if ( localDW -> iysy320vjl . AQHandles [ 9 ] ) { sdiTerminateStreaming (
& localDW -> iysy320vjl . AQHandles [ 9 ] ) ; } if ( localDW -> iysy320vjl .
AQHandles [ 10 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl .
AQHandles [ 10 ] ) ; } if ( localDW -> iysy320vjl . AQHandles [ 11 ] ) {
sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 11 ] ) ; } if (
localDW -> iysy320vjl . AQHandles [ 12 ] ) { sdiTerminateStreaming ( &
localDW -> iysy320vjl . AQHandles [ 12 ] ) ; } if ( localDW -> iysy320vjl .
AQHandles [ 13 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl .
AQHandles [ 13 ] ) ; } if ( localDW -> iysy320vjl . AQHandles [ 14 ] ) {
sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 14 ] ) ; } if (
localDW -> iysy320vjl . AQHandles [ 15 ] ) { sdiTerminateStreaming ( &
localDW -> iysy320vjl . AQHandles [ 15 ] ) ; } if ( localDW -> iysy320vjl .
AQHandles [ 16 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl .
AQHandles [ 16 ] ) ; } if ( localDW -> iysy320vjl . AQHandles [ 17 ] ) {
sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 17 ] ) ; } if (
localDW -> iysy320vjl . AQHandles [ 18 ] ) { sdiTerminateStreaming ( &
localDW -> iysy320vjl . AQHandles [ 18 ] ) ; } if ( localDW -> iysy320vjl .
AQHandles [ 19 ] ) { sdiTerminateStreaming ( & localDW -> iysy320vjl .
AQHandles [ 19 ] ) ; } if ( localDW -> iysy320vjl . AQHandles [ 20 ] ) {
sdiTerminateStreaming ( & localDW -> iysy320vjl . AQHandles [ 20 ] ) ; } if (
localDW -> iysy320vjl . AQHandles [ 21 ] ) { sdiTerminateStreaming ( &
localDW -> iysy320vjl . AQHandles [ 21 ] ) ; } if ( localDW -> iysy320vjl .
SlioLTF ) { rtwDestructAccessorPointer ( localDW -> iysy320vjl . SlioLTF ) ;
} } } void m0okbdf3gm ( np1m13vojf * const p4pqnuzidr ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( p4pqnuzidr ->
_mdlRefSfcnS , "URControl_att" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void bhacg1jiy0 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
np1m13vojf * const p4pqnuzidr , n24t031ugl * localB , cq2d5gococ * localDW ,
void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI ,
const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
p4pqnuzidr , 0 , sizeof ( np1m13vojf ) ) ; p4pqnuzidr -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; p4pqnuzidr -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( p4pqnuzidr -> _mdlRefSfcnS , "URControl_att" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> eig5bdpkbc [ 0 ]
= 0.0 ; localB -> eig5bdpkbc [ 1 ] = 0.0 ; localB -> eig5bdpkbc [ 2 ] = 0.0 ;
} ( void ) memset ( ( void * ) localDW , 0 , sizeof ( cq2d5gococ ) ) ;
localDW -> gun3mm4dej [ 0 ] = 0.0 ; localDW -> gun3mm4dej [ 1 ] = 0.0 ;
localDW -> gun3mm4dej [ 2 ] = 0.0 ; localDW -> d4phfsngrv [ 0 ] = 0.0 ;
localDW -> d4phfsngrv [ 1 ] = 0.0 ; localDW -> d4phfsngrv [ 2 ] = 0.0 ;
localDW -> en3asgirkf [ 0 ] = 0.0 ; localDW -> en3asgirkf [ 1 ] = 0.0 ;
localDW -> en3asgirkf [ 2 ] = 0.0 ; localDW -> en3asgirkf [ 3 ] = 0.0 ;
localDW -> kb1lksw5ci [ 0 ] = 0.0 ; localDW -> kb1lksw5ci [ 1 ] = 0.0 ;
localDW -> kb1lksw5ci [ 2 ] = 0.0 ; localDW -> kb1lksw5ci [ 3 ] = 0.0 ;
localDW -> gdaaooi1ul [ 0 ] = 0.0 ; localDW -> gdaaooi1ul [ 1 ] = 0.0 ;
localDW -> gdaaooi1ul [ 2 ] = 0.0 ; localDW -> iydhdgpa2t [ 0 ] = 0.0 ;
localDW -> iydhdgpa2t [ 1 ] = 0.0 ; localDW -> iydhdgpa2t [ 2 ] = 0.0 ;
localDW -> iydhdgpa2t [ 3 ] = 0.0 ; localDW -> osqjt3ca0p [ 0 ] = 0.0 ;
localDW -> osqjt3ca0p [ 1 ] = 0.0 ; localDW -> osqjt3ca0p [ 2 ] = 0.0 ; {
int32_T i ; for ( i = 0 ; i < 5 ; i ++ ) { localDW -> c2gqxoq3yv [ i ] = 0.0
; } } URControl_att_InitializeDataMapInfo ( p4pqnuzidr , localDW , sysRanPtr
, contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != (
NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
p4pqnuzidr -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( p4pqnuzidr ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
p4pqnuzidr -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_URControl_att_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_URControl_att , 60 ) ; * retVal = 1 ; } static void
mr_URControl_att_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_URControl_att_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_URControl_att_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_URControl_att_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_URControl_att_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void mr_URControl_att_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( double )
bitVal ) ) ; } static uint_T mr_URControl_att_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_URControl_att_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_URControl_att_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_URControl_att_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_URControl_att_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_URControl_att_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_URControl_att_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_URControl_att_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_URControl_att_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_URControl_att_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_URControl_att_GetDWork ( const
n1on0q44qbp * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = { "rtb"
, "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_URControl_att_cacheDataAsMxArray ( ssDW , 0 , 0 ,
& ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 22 ] = { "mdlrefDW->rtdw.kigq4xfkv4" ,
"mdlrefDW->rtdw.erynhppbfv" , "mdlrefDW->rtdw.a2c5xm3bcm" ,
"mdlrefDW->rtdw.odupd5wvzp" , "mdlrefDW->rtdw.h4yg2vasfg" ,
"mdlrefDW->rtdw.dtlyzboj2u" , "mdlrefDW->rtdw.duhmkytvnb" ,
"mdlrefDW->rtdw.gun3mm4dej" , "mdlrefDW->rtdw.d4phfsngrv" ,
"mdlrefDW->rtdw.en3asgirkf" , "mdlrefDW->rtdw.kb1lksw5ci" ,
"mdlrefDW->rtdw.gdaaooi1ul" , "mdlrefDW->rtdw.iydhdgpa2t" ,
"mdlrefDW->rtdw.osqjt3ca0p" , "mdlrefDW->rtdw.c2gqxoq3yv" ,
"mdlrefDW->rtdw.bkm4axbd4m" , "mdlrefDW->rtdw.jzaw0ruggn" ,
"mdlrefDW->rtdw.mcs1xl24pu" , "mdlrefDW->rtdw.le1pffvliz" ,
"mdlrefDW->rtdw.dvbok3ukse" , "mdlrefDW->rtdw.azu2vr5fp0" ,
"mdlrefDW->rtdw.nmro3iid1y" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 22 , rtdwDataFieldNames ) ; mr_URControl_att_cacheDataAsMxArray (
rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw . kigq4xfkv4 ) , sizeof ( mdlrefDW ->
rtdw . kigq4xfkv4 ) ) ; mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 ,
1 , & ( mdlrefDW -> rtdw . erynhppbfv ) , sizeof ( mdlrefDW -> rtdw .
erynhppbfv ) ) ; mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 2 , & (
mdlrefDW -> rtdw . a2c5xm3bcm ) , sizeof ( mdlrefDW -> rtdw . a2c5xm3bcm ) )
; mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW ->
rtdw . odupd5wvzp ) , sizeof ( mdlrefDW -> rtdw . odupd5wvzp ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw
. h4yg2vasfg ) , sizeof ( mdlrefDW -> rtdw . h4yg2vasfg ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW -> rtdw
. dtlyzboj2u ) , sizeof ( mdlrefDW -> rtdw . dtlyzboj2u ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW -> rtdw
. duhmkytvnb ) , sizeof ( mdlrefDW -> rtdw . duhmkytvnb ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW -> rtdw
. gun3mm4dej ) , sizeof ( mdlrefDW -> rtdw . gun3mm4dej ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW -> rtdw
. d4phfsngrv ) , sizeof ( mdlrefDW -> rtdw . d4phfsngrv ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW -> rtdw
. en3asgirkf ) , sizeof ( mdlrefDW -> rtdw . en3asgirkf ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW ->
rtdw . kb1lksw5ci ) , sizeof ( mdlrefDW -> rtdw . kb1lksw5ci ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW ->
rtdw . gdaaooi1ul ) , sizeof ( mdlrefDW -> rtdw . gdaaooi1ul ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW ->
rtdw . iydhdgpa2t ) , sizeof ( mdlrefDW -> rtdw . iydhdgpa2t ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 13 , & ( mdlrefDW ->
rtdw . osqjt3ca0p ) , sizeof ( mdlrefDW -> rtdw . osqjt3ca0p ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 14 , & ( mdlrefDW ->
rtdw . c2gqxoq3yv ) , sizeof ( mdlrefDW -> rtdw . c2gqxoq3yv ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 15 , & ( mdlrefDW ->
rtdw . bkm4axbd4m ) , sizeof ( mdlrefDW -> rtdw . bkm4axbd4m ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 16 , & ( mdlrefDW ->
rtdw . jzaw0ruggn ) , sizeof ( mdlrefDW -> rtdw . jzaw0ruggn ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 17 , & ( mdlrefDW ->
rtdw . mcs1xl24pu ) , sizeof ( mdlrefDW -> rtdw . mcs1xl24pu ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 18 , & ( mdlrefDW ->
rtdw . le1pffvliz ) , sizeof ( mdlrefDW -> rtdw . le1pffvliz ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 19 , & ( mdlrefDW ->
rtdw . dvbok3ukse ) , sizeof ( mdlrefDW -> rtdw . dvbok3ukse ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 20 , & ( mdlrefDW ->
rtdw . azu2vr5fp0 ) , sizeof ( mdlrefDW -> rtdw . azu2vr5fp0 ) ) ;
mr_URControl_att_cacheDataAsMxArray ( rtdwData , 0 , 21 , & ( mdlrefDW ->
rtdw . nmro3iid1y ) , sizeof ( mdlrefDW -> rtdw . nmro3iid1y ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_URControl_att_SetDWork ( n1on0q44qbp * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_URControl_att_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 ,
0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_URControl_att_restoreDataFromMxArray
( & ( mdlrefDW -> rtdw . kigq4xfkv4 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW
-> rtdw . kigq4xfkv4 ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . erynhppbfv ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW ->
rtdw . erynhppbfv ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . a2c5xm3bcm ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . a2c5xm3bcm ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . odupd5wvzp ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . odupd5wvzp ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . h4yg2vasfg ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW ->
rtdw . h4yg2vasfg ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . dtlyzboj2u ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW ->
rtdw . dtlyzboj2u ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . duhmkytvnb ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW ->
rtdw . duhmkytvnb ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . gun3mm4dej ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW ->
rtdw . gun3mm4dej ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . d4phfsngrv ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW ->
rtdw . d4phfsngrv ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . en3asgirkf ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW ->
rtdw . en3asgirkf ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . kb1lksw5ci ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW ->
rtdw . kb1lksw5ci ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . gdaaooi1ul ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW ->
rtdw . gdaaooi1ul ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . iydhdgpa2t ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW ->
rtdw . iydhdgpa2t ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . osqjt3ca0p ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW ->
rtdw . osqjt3ca0p ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . c2gqxoq3yv ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW ->
rtdw . c2gqxoq3yv ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . bkm4axbd4m ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW ->
rtdw . bkm4axbd4m ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . jzaw0ruggn ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW ->
rtdw . jzaw0ruggn ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . mcs1xl24pu ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW ->
rtdw . mcs1xl24pu ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . le1pffvliz ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW ->
rtdw . le1pffvliz ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . dvbok3ukse ) , rtdwData , 0 , 19 , sizeof ( mdlrefDW ->
rtdw . dvbok3ukse ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . azu2vr5fp0 ) , rtdwData , 0 , 20 , sizeof ( mdlrefDW ->
rtdw . azu2vr5fp0 ) ) ; mr_URControl_att_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . nmro3iid1y ) , rtdwData , 0 , 21 , sizeof ( mdlrefDW ->
rtdw . nmro3iid1y ) ) ; } } void mr_URControl_att_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3831770221U , 2784027292U ,
3663121148U , 457289543U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"URControl_att" , & chksum [ 0 ] ) ; } mxArray *
mr_URControl_att_GetSimStateDisallowedBlocks ( ) { return NULL ; }
