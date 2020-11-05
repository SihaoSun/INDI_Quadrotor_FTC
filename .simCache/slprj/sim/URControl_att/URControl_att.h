#include "__cf_URControl_att.h"
#ifndef RTW_HEADER_URControl_att_h_
#define RTW_HEADER_URControl_att_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef URControl_att_COMMON_INCLUDES_
#define URControl_att_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "URControl_att_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
typedef struct { real_T eig5bdpkbc [ 3 ] ; } n24t031ugl ; typedef struct {
daqBus kigq4xfkv4 ; pigtktepdx erynhppbfv ; pigtktepdx a2c5xm3bcm ;
pigtktepdx odupd5wvzp ; pigtktepdx h4yg2vasfg ; h3mk4fjkod dtlyzboj2u ;
mmgj3pj2nk duhmkytvnb ; real_T gun3mm4dej [ 3 ] ; real_T d4phfsngrv [ 3 ] ;
real_T en3asgirkf [ 4 ] ; real_T kb1lksw5ci [ 4 ] ; real_T gdaaooi1ul [ 3 ] ;
real_T iydhdgpa2t [ 4 ] ; real_T osqjt3ca0p [ 3 ] ; real_T c2gqxoq3yv [ 5 ] ;
struct { void * AQHandles ; void * SlioLTF ; } jz33kzeqpn ; struct { void *
AQHandles [ 22 ] ; void * SlioLTF ; } iysy320vjl ; boolean_T bkm4axbd4m ;
boolean_T jzaw0ruggn ; boolean_T mcs1xl24pu ; boolean_T le1pffvliz ;
boolean_T dvbok3ukse ; boolean_T azu2vr5fp0 ; boolean_T nmro3iid1y ; }
cq2d5gococ ; struct lzq4u2chxjt_ { daqBus P_2 ; real_T P_3 [ 9 ] ; real_T P_4
[ 9 ] ; real_T P_5 [ 3 ] ; real_T P_6 ; } ; struct fe04wjlv5g { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
2 ] ; int32_T * vardimsAddress [ 2 ] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ;
sysRanDType * systemRan [ 6 ] ; int_T systemTid [ 6 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct {
n24t031ugl rtb ; cq2d5gococ rtdw ; np1m13vojf rtm ; } n1on0q44qbp ; extern
struct_I1MFrEjvpMwyFfAGGP9FCC rtP_par ; extern URControlParamsType
rtP_URControlParams ; extern void bhacg1jiy0 ( SimStruct * _mdlRefSfcnS ,
int_T mdlref_TID0 , np1m13vojf * const p4pqnuzidr , n24t031ugl * localB ,
cq2d5gococ * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_URControl_att_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_URControl_att_GetDWork ( const
n1on0q44qbp * mdlrefDW ) ; extern void mr_URControl_att_SetDWork (
n1on0q44qbp * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_URControl_att_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_URControl_att_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * URControl_att_GetCAPIStaticMap ( void ) ;
extern void l41sn0mktw ( np1m13vojf * const p4pqnuzidr , cq2d5gococ * localDW
) ; extern void bs1wowywlh ( cq2d5gococ * localDW ) ; extern void ikfy2u5s1t
( cq2d5gococ * localDW ) ; extern void m5kmj2htr4 ( np1m13vojf * const
p4pqnuzidr , cq2d5gococ * localDW ) ; extern void gtauznb10g ( cq2d5gococ *
localDW ) ; extern void f1hstsqruw ( const real_T olifiqy3cq [ 3 ] ,
n24t031ugl * localB , cq2d5gococ * localDW ) ; extern void URControl_att (
np1m13vojf * const p4pqnuzidr , const real_T daaclllufb [ 3 ] , const real_T
gf3t5sjyzs [ 3 ] , const real_T lb1mw1k42v [ 3 ] , const real_T ap3cagihqr [
3 ] , const real_T g0asaio1li [ 3 ] , const real_T n42nrkaxgn [ 3 ] , const
real_T eylxdjepax [ 3 ] , const real_T pppjosc5nk [ 3 ] , const real_T
hsfhdegm4y [ 3 ] , const real_T n0gzdjo2gd [ 3 ] , const real_T etv3v35ur5 [
3 ] , const real_T aidvbdjavx [ 4 ] , const real_T lbzrfuspim [ 3 ] , const
real_T p4khm4vfx3 [ 3 ] , const real_T eougsutge5 [ 4 ] , const real_T
e5btfsatai [ 4 ] , const real_T * mexrwskojr , const real_T * o4kajfybva ,
const real_T mj5vbpekow [ 2 ] , const real_T pebnkfmdhv [ 2 ] , const real_T
erpnuiz0pe [ 2 ] , const real_T fagqrqvcur [ 2 ] , const real_T olifiqy3cq [
3 ] , const real_T * mb5sye31qg , const real_T * c34ibfughu , real_T
nju4dz31ac [ 4 ] , n24t031ugl * localB , cq2d5gococ * localDW ) ; extern void
m0okbdf3gm ( np1m13vojf * const p4pqnuzidr ) ;
#endif
