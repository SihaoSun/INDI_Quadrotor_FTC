/*
 * URControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1958
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jun 30 13:52:46 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_URControl_private_h_
#define RTW_HEADER_URControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "URControl.h"

extern const real_T rtCP_pooled_FEWufo6vVHrj[9];
extern const real_T rtCP_pooled_9dldz3nawzPz[49];
extern const real_T rtCP_pooled_z3AazAnnYHH8[100];
extern const real_T rtCP_pooled_YUgjdB5rd6zW[100];
extern const real_T rtCP_pooled_fxye1Z3RBBeI[10];

#define rtCP_Bias1_Bias                rtCP_pooled_FEWufo6vVHrj  /* Expression: -eye(3)
                                                                  * Referenced by: '<S88>/Bias1'
                                                                  */
#define rtCP_R1_Value                  rtCP_pooled_9dldz3nawzPz  /* Expression: p.R{1}
                                                                  * Referenced by: '<S24>/R1'
                                                                  */
#define rtCP_Q_Value                   rtCP_pooled_z3AazAnnYHH8  /* Expression: p.Q
                                                                  * Referenced by: '<S24>/Q'
                                                                  */
#define rtCP_DataStoreMemoryP_InitialVa rtCP_pooled_YUgjdB5rd6zW /* Expression: p.InitialCovariance
                                                                  * Referenced by: '<S24>/DataStoreMemory - P'
                                                                  */
#define rtCP_DataStoreMemoryx_InitialVa rtCP_pooled_fxye1Z3RBBeI /* Expression: p.InitialState
                                                                  * Referenced by: '<S24>/DataStoreMemory - x'
                                                                  */

extern void URControl_IfActionSubsystem2(real_T rtu_In, real_T *rty_OutOrig);
extern void URControl_enableMeas_Init(DW_enableMeas_URControl_T *localDW);
extern void URControl_enableMeas(const real_T rtu_att[3],
  B_enableMeas_URControl_T *localB, DW_enableMeas_URControl_T *localDW);
extern void URControl_PositiveTrace(real_T rtu_traceDCM, const real_T rtu_DCM[9],
  real_T *rty_qwqxqyqz, real_T rty_qwqxqyqz_o[3]);
extern void URControl_NegativeTrace(const real_T rtu_DCM[9], real_T
  rty_qwqxqyqz[4]);
extern void URControl_IfWarningError(const real_T rtu_dcm[9], real_T rtp_action,
  real_T rtp_tolerance);
extern void URControl_MATLABFunction2(B_MATLABFunction2_URControl_T *localB);
extern void URControl_MATLABFunction3(real_T rtu_u,
  B_MATLABFunction3_URControl_T *localB);

#endif                                 /* RTW_HEADER_URControl_private_h_ */
