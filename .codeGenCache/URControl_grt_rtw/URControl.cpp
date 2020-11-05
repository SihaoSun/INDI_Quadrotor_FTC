/*
 * URControl.cpp
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

#include "URControl.h"
#include "URControl_private.h"
#include "ekf_state_jacob_WRvyoYwd.h"
#include "mrdivide_helper_D6MymrEr.h"
#include "norm_2e9Xj4lM.h"
#include "norm_wXO8gvHp.h"
#include "rt_atan2d_snf.h"
#include "rt_powd_snf.h"

const daqBus URControl_rtZdaqBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* att */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* attRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* accRaw */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omega */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaUV */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegafUV */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotor */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMax */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMin */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_max */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_min */

  {
    0.0, 0.0 }
  ,                                    /* uv_max */

  {
    0.0, 0.0 }
  ,                                    /* uv_min */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posTarget */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velTarget */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* a_ref */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n_des */
  0.0,                                 /* Ftot_ref */
  0.0,                                 /* r_cmd */

  {
    0.0, 0.0 }
  ,                                    /* uv_prec */

  {
    0.0, 0.0 }
  ,                                    /* precAngle */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* h_uv */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n_uv */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pqr_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* uvr_des */

  {
    0.0, 0.0 }
  ,                                    /* uv_des_raw */

  {
    0.0, 0.0 }
  ,                                    /* uv_des */

  {
    0.0, 0.0 }
  ,                                    /* uv_attCtrl */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* w_max */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* w_min */
  0.0,                                 /* MzGain */
  0.0,                                 /* iter */
  0.0,                                 /* optimal */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* M_uvr_set */
  0.0,                                 /* Ftot_set */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotorSet */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* uvrDot_des */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pqr_des_dot */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaDot */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* dM */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* inp */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* dw_lin */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* inpActual */

  {
    0.0, 0.0 }
  /* Y_indi */
} ;                                    /* daqBus ground */

const stateBus URControl_rtZstateBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* acc */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* accf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* velB */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* pos */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* posf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omega */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaf */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* att */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* n */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* wRotor */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegaUV */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* omegafUV */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMax */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* FMin */
  0.0,                                 /* fail_id */
  0.0,                                 /* fail_id_quick */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_max */

  {
    0.0, 0.0 }
  ,                                    /* uvDot_min */

  {
    0.0, 0.0 }
  ,                                    /* uv_max */

  {
    0.0, 0.0 }
  ,                                    /* uv_min */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* vel_ref */

  {
    0.0, 0.0, 0.0 }
  /* pos_ref */
} ;                                    /* stateBus ground */

/* Exported block parameters */
URControlParamsType URControlParams = {
  1.9035e-6,
  1.9202951e-8,
  0.115,
  0.0875,
  0.0014,
  0.0013,
  0.0025,
  0.00191049731745428,
  0.00191049731745428,
  0.14450346016618426,
  0.4,
  8.0e-6,
  500.0,
  9.81,
  0.0,
  0.0,
  1200.0,
  0.0,
  -1.0,
  30.0,

  { 0.70710678118654768, 0.70710678118654768, -0.53801602916367752,
    0.53801602916367752 },
  1.0,
  0.0,
  0.0,
  0.75,
  0.5,
  0.5,
  0.85,
  1.0,

  { 0.01, 0.01, 0.01, 0.1, 0.1, 0.1, 0.001, 0.001, 0.001, 0.001 },

  { 0.1, 0.1, 0.1, 0.2, 0.2, 0.2, 0.2 },
  1.0,
  1.0,
  0.0433,
  -0.1828,
  0.4628,
  1.6,
  1.0,

  { 0.3, 0.0, 0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.3 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  0.0,

  { 0.0, 0.0, 0.0 },
  1.0,
  0.0,
  1.22,
  1.0,
  0.61403508771929827,
  1.0526315789473684,

  { 1.5, 1.5, 1.5 },
  10.0,

  { 2.0, 2.0, 2.0 },

  { 1.0, 1.0, 1.0 },
  5.0,
  1.0,
  -2.0,
  1.0,
  2.0,
  4.0,
  0.8,
  15.0,
  15.0,
  0.5,
  0.52631578947368418,
  1.2280701754385965,
  1.0,
  5.0,
  5.0,
  20.0,
  0.0,
  0.0,
  50.0,
  -0.5,
  -0.1,
  0.0,

  { 0.0, 0.0, -1.0 },
  0.0,
  -10.0,
  15.0,
  200.0,
  1.2217304763960306,
  0.2,
  4.0,
  0.01,
  10.0,
  2.0,
  3.0,
  2.0,
  1.0,

  { 15.0, 15.0, 3.0 },

  { 0.0, 0.0, 0.0 },

  { 0.3, 0.3, 0.01 },
  0.8,
  0.8,
  0.5,
  1.0,

  { 0.4, 0.4, 0.045 },
  10000.0,
  10000.0,
  100.0,
  4.0,
  0.0,
  100000.0,
  10.0,
  0.0,
  0.1,
  10.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.75, 0.0, 0.0, 0.75 },

  { 0.19811131965247775, 2.8342066787853377e-17, -1.0165342382768014e-16,
    0.19811131965247789, -2.7869268972958258e-16, 3.6514837167011081,
    -3.6514837167011072, -9.9912669948377843e-16, 1.8130197776532382,
    -1.388080314940088e-15, 2.0544394602449696e-16, 1.8130197776532346 },

  { 0.17346480776637335, 0.011638708082819534, -0.011638708082820054,
    0.17346480776637438, -2.8694106005361446, 2.2582772502206723,
    -2.2582772502206385, -2.8694106005361477, 1.6557563908415029,
    -3.650136775918412e-15, -1.4596530217581814e-15, 1.6557563908415138 },

  { 0.17346480776637416, -0.011638708082819776, 0.011638708082819523,
    0.17346480776637427, 2.8694106005361419, 2.2582772502206714,
    -2.2582772502206661, 2.8694106005361442, 1.6557563908415149,
    -4.1316651907037211e-15, -2.4188837817697247e-15, 1.6557563908415136 },

  { 0.17346480776637335, 0.011638708082819534, -0.011638708082820054,
    0.17346480776637438, -2.8694106005361446, 2.2582772502206723,
    -2.2582772502206385, -2.8694106005361477, 1.6557563908415029,
    -3.650136775918412e-15, -1.4596530217581814e-15, 1.6557563908415138 },

  { 0.17346480776637416, -0.011638708082819776, 0.011638708082819523,
    0.17346480776637427, 2.8694106005361419, 2.2582772502206714,
    -2.2582772502206661, 2.8694106005361442, 1.6557563908415149,
    -4.1316651907037211e-15, -2.4188837817697247e-15, 1.6557563908415136 },

  { 0.18322977796793122, -4.7929438575854431e-17, 0.14637274861744229,
    -1.3682235713191006e-17, -1.4850566840624193, 6.4513248258638267e-16,
    -4.945833934918185, 3.676646086184468e-16, 1.7191524306826353,
    -5.3410286572689639e-16, -2.3465826316580146e-17, -5.6186241010007274e-31 },

  { 0.0, 0.14637274861744196, 0.0, 0.18322977796793033, 0.0, 4.9458339349182072,
    0.0, 1.4850566840624069, 0.0, 3.6383638389562227e-17, 0.0,
    1.7191524306826149 },
  0.0,
  0.0,
  105.0,
  5.0,
  3.0,
  0.0,
  0.0,
  0.02,
  0.0,
  0.13,
  0.0,
  300.0,
  0.0,
  0.0,
  0.3,
  4.0,
  2.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  10.0,
  1.0,
  10.0,

  { 150.0, 150.0, 100.0, -8.0, -150.0, 150.0, -100.0, -8.0, -150.0, -150.0,
    100.0, -8.0, 150.0, -150.0, -100.0, -8.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0 },

  { 30.0, 30.0, 3.0 },
  0.98,
  0.9,
  600.0,

  { 40.0, 40.0, 2.0 },
  0.9,

  { 20.0, 20.0, 1.0 },
  150.0,
  150.0,
  -100.0,
  5.0,

  { 0.0, 1.0, -1.0, -1.0, -1.0, 0.0, 1.0, -1.0, 0.0, -1.0, -1.0, -1.0, 1.0, 0.0,
    1.0, -1.0 },

  { 10000.0, 0.0, 0.0, 0.0, 0.0, 10000.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 100.0 },

  { 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0,
    0.0, 0.0, 0.0001 },
  200.0,

  { 100.0, 100.0, 50.0, 20.0 },

  { 30.0, 30.0, 10.0, 2.0 },
  0.2
} ;                                    /* Variable: URControlParams
                                        * Referenced by:
                                        *   '<Root>/delay'
                                        *   '<S3>/MATLAB Function'
                                        *   '<S4>/altitude control'
                                        *   '<S4>/position control'
                                        *   '<S4>/yaw rate control'
                                        *   '<S5>/URControl_att_indi_simple'
                                        *   '<S7>/basic estimators'
                                        *   '<S21>/MATLAB Function'
                                        *   '<S21>/MATLAB Function11'
                                        *   '<S21>/Gain2'
                                        *   '<S22>/MATLAB Function'
                                        */

/* Exported block states */
boolean_T _URControl_SharedDataInit_ = false;/* synthesized block */

/* data stores shared across model instances */
SharedDSM_URControl_T URControlModelClass::URControl_SharedDSM;

/*
 * Output and update for action system:
 *    '<S36>/If Action Subsystem2'
 *    '<S103>/If Action Subsystem2'
 *    '<S111>/If Action Subsystem2'
 *    '<S177>/If Action Subsystem2'
 *    '<S185>/If Action Subsystem2'
 */
void URControl_IfActionSubsystem2(real_T rtu_In, real_T *rty_OutOrig)
{
  /* Inport: '<S39>/In' */
  *rty_OutOrig = rtu_In;
}

/*
 * System initialize for atomic system:
 *    '<S20>/enableMeas'
 *    '<S21>/enableMeas'
 */
void URControl_enableMeas_Init(DW_enableMeas_URControl_T *localDW)
{
  /* :  attPrev = [0;0;0]; */
  localDW->attPrev[0] = 0.0;
  localDW->attPrev[1] = 0.0;
  localDW->attPrev[2] = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S20>/enableMeas'
 *    '<S21>/enableMeas'
 */
void URControl_enableMeas(const real_T rtu_att[3], B_enableMeas_URControl_T
  *localB, DW_enableMeas_URControl_T *localDW)
{
  /* :  if isempty(attPrev) */
  /* :  enableMeas = 1; */
  localB->enableMeas = 1.0;

  /* :  tol = 1e-3; */
  /* :  errorSum = sum(abs((attPrev - att))); */
  localDW->attPrev[0] -= rtu_att[0];
  localDW->attPrev[1] -= rtu_att[1];
  localDW->attPrev[2] -= rtu_att[2];

  /* :  if errorSum < tol */
  if ((std::abs(localDW->attPrev[0]) + std::abs(localDW->attPrev[1])) + std::abs
      (localDW->attPrev[2]) < 0.001) {
    /* :  enableMeas = 0; */
    localB->enableMeas = 0.0;
  }

  /* :  attPrev = att; */
  localDW->attPrev[0] = rtu_att[0];
  localDW->attPrev[1] = rtu_att[1];
  localDW->attPrev[2] = rtu_att[2];
}

/*
 * Output and update for action system:
 *    '<S42>/Positive Trace'
 *    '<S118>/Positive Trace'
 */
void URControl_PositiveTrace(real_T rtu_traceDCM, const real_T rtu_DCM[9],
  real_T *rty_qwqxqyqz, real_T rty_qwqxqyqz_o[3])
{
  real_T rtb_Gain1_d;

  /* Sqrt: '<S60>/sqrt' incorporates:
   *  Constant: '<S60>/Constant'
   *  Sum: '<S60>/Sum'
   */
  rtb_Gain1_d = std::sqrt(rtu_traceDCM + 1.0);

  /* Gain: '<S60>/Gain' */
  *rty_qwqxqyqz = 0.5 * rtb_Gain1_d;

  /* Gain: '<S60>/Gain1' */
  rtb_Gain1_d *= 2.0;

  /* Product: '<S60>/Product' incorporates:
   *  Sum: '<S82>/Add'
   *  Sum: '<S83>/Add'
   *  Sum: '<S84>/Add'
   */
  rty_qwqxqyqz_o[0] = (rtu_DCM[7] - rtu_DCM[5]) / rtb_Gain1_d;
  rty_qwqxqyqz_o[1] = (rtu_DCM[2] - rtu_DCM[6]) / rtb_Gain1_d;
  rty_qwqxqyqz_o[2] = (rtu_DCM[3] - rtu_DCM[1]) / rtb_Gain1_d;
}

/*
 * Output and update for action system:
 *    '<S42>/Negative Trace'
 *    '<S118>/Negative Trace'
 */
void URControl_NegativeTrace(const real_T rtu_DCM[9], real_T rty_qwqxqyqz[4])
{
  real_T rtb_Product_on;
  real_T rtb_Switch_idx_0;

  /* If: '<S59>/Find Maximum Diagonal Value' */
  if ((rtu_DCM[4] > rtu_DCM[0]) && (rtu_DCM[4] > rtu_DCM[8])) {
    /* Outputs for IfAction SubSystem: '<S59>/Maximum Value at DCM(2,2)' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    /* Sqrt: '<S64>/sqrt' incorporates:
     *  Constant: '<S76>/Constant'
     *  Sum: '<S76>/Add'
     */
    rtb_Product_on = std::sqrt(((rtu_DCM[4] - rtu_DCM[0]) - rtu_DCM[8]) + 1.0);

    /* Gain: '<S64>/Gain' */
    rty_qwqxqyqz[2] = 0.5 * rtb_Product_on;

    /* Switch: '<S75>/Switch' incorporates:
     *  Constant: '<S75>/Constant1'
     */
    if (rtb_Product_on != 0.0) {
      rtb_Switch_idx_0 = 0.5;
    } else {
      rtb_Switch_idx_0 = 0.0;
      rtb_Product_on = 1.0;
    }

    /* End of Switch: '<S75>/Switch' */

    /* Product: '<S75>/Product' */
    rtb_Product_on = rtb_Switch_idx_0 / rtb_Product_on;

    /* Gain: '<S64>/Gain1' incorporates:
     *  Product: '<S64>/Product'
     *  Sum: '<S74>/Add'
     */
    rty_qwqxqyqz[1] = (rtu_DCM[1] + rtu_DCM[3]) * rtb_Product_on;

    /* Gain: '<S64>/Gain3' incorporates:
     *  Product: '<S64>/Product'
     *  Sum: '<S73>/Add'
     */
    rty_qwqxqyqz[3] = (rtu_DCM[5] + rtu_DCM[7]) * rtb_Product_on;

    /* Gain: '<S64>/Gain4' incorporates:
     *  Product: '<S64>/Product'
     *  Sum: '<S72>/Add'
     */
    rty_qwqxqyqz[0] = (rtu_DCM[2] - rtu_DCM[6]) * rtb_Product_on;

    /* End of Outputs for SubSystem: '<S59>/Maximum Value at DCM(2,2)' */
  } else if (rtu_DCM[8] > rtu_DCM[0]) {
    /* Outputs for IfAction SubSystem: '<S59>/Maximum Value at DCM(3,3)' incorporates:
     *  ActionPort: '<S65>/Action Port'
     */
    /* Sqrt: '<S65>/sqrt' incorporates:
     *  Constant: '<S81>/Constant'
     *  Sum: '<S81>/Add'
     */
    rtb_Product_on = std::sqrt(((rtu_DCM[8] - rtu_DCM[0]) - rtu_DCM[4]) + 1.0);

    /* Gain: '<S65>/Gain' */
    rty_qwqxqyqz[3] = 0.5 * rtb_Product_on;

    /* Switch: '<S80>/Switch' incorporates:
     *  Constant: '<S80>/Constant1'
     */
    if (rtb_Product_on != 0.0) {
      rtb_Switch_idx_0 = 0.5;
    } else {
      rtb_Switch_idx_0 = 0.0;
      rtb_Product_on = 1.0;
    }

    /* End of Switch: '<S80>/Switch' */

    /* Product: '<S80>/Product' */
    rtb_Product_on = rtb_Switch_idx_0 / rtb_Product_on;

    /* Gain: '<S65>/Gain1' incorporates:
     *  Product: '<S65>/Product'
     *  Sum: '<S77>/Add'
     */
    rty_qwqxqyqz[1] = (rtu_DCM[2] + rtu_DCM[6]) * rtb_Product_on;

    /* Gain: '<S65>/Gain2' incorporates:
     *  Product: '<S65>/Product'
     *  Sum: '<S78>/Add'
     */
    rty_qwqxqyqz[2] = (rtu_DCM[5] + rtu_DCM[7]) * rtb_Product_on;

    /* Gain: '<S65>/Gain3' incorporates:
     *  Product: '<S65>/Product'
     *  Sum: '<S79>/Add'
     */
    rty_qwqxqyqz[0] = (rtu_DCM[3] - rtu_DCM[1]) * rtb_Product_on;

    /* End of Outputs for SubSystem: '<S59>/Maximum Value at DCM(3,3)' */
  } else {
    /* Outputs for IfAction SubSystem: '<S59>/Maximum Value at DCM(1,1)' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    /* Sqrt: '<S63>/sqrt' incorporates:
     *  Constant: '<S71>/Constant'
     *  Sum: '<S71>/Add'
     */
    rtb_Product_on = std::sqrt(((rtu_DCM[0] - rtu_DCM[4]) - rtu_DCM[8]) + 1.0);

    /* Gain: '<S63>/Gain' */
    rty_qwqxqyqz[1] = 0.5 * rtb_Product_on;

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S70>/Constant1'
     */
    if (rtb_Product_on != 0.0) {
      rtb_Switch_idx_0 = 0.5;
    } else {
      rtb_Switch_idx_0 = 0.0;
      rtb_Product_on = 1.0;
    }

    /* End of Switch: '<S70>/Switch' */

    /* Product: '<S70>/Product' */
    rtb_Product_on = rtb_Switch_idx_0 / rtb_Product_on;

    /* Gain: '<S63>/Gain1' incorporates:
     *  Product: '<S63>/Product'
     *  Sum: '<S69>/Add'
     */
    rty_qwqxqyqz[2] = (rtu_DCM[1] + rtu_DCM[3]) * rtb_Product_on;

    /* Gain: '<S63>/Gain2' incorporates:
     *  Product: '<S63>/Product'
     *  Sum: '<S67>/Add'
     */
    rty_qwqxqyqz[3] = (rtu_DCM[2] + rtu_DCM[6]) * rtb_Product_on;

    /* Gain: '<S63>/Gain3' incorporates:
     *  Product: '<S63>/Product'
     *  Sum: '<S68>/Add'
     */
    rty_qwqxqyqz[0] = (rtu_DCM[7] - rtu_DCM[5]) * rtb_Product_on;

    /* End of Outputs for SubSystem: '<S59>/Maximum Value at DCM(1,1)' */
  }

  /* End of If: '<S59>/Find Maximum Diagonal Value' */
}

/*
 * Output and update for action system:
 *    '<S61>/If Warning//Error'
 *    '<S135>/If Warning//Error'
 */
void URControl_IfWarningError(const real_T rtu_dcm[9], real_T rtp_action, real_T
  rtp_tolerance)
{
  boolean_T tmp;
  boolean_T rtb_Compare_p[9];
  real_T rtu_dcm_0[9];
  int32_T i;
  int32_T i_0;
  int32_T rtu_dcm_tmp;

  /* Bias: '<S88>/Bias1' incorporates:
   *  Math: '<S88>/Math Function'
   *  Product: '<S88>/Product'
   */
  for (i = 0; i < 3; i++) {
    for (i_0 = 0; i_0 < 3; i_0++) {
      rtu_dcm_tmp = 3 * i_0 + i;
      rtu_dcm_0[rtu_dcm_tmp] = ((rtu_dcm[3 * i + 1] * rtu_dcm[3 * i_0 + 1] +
        rtu_dcm[3 * i] * rtu_dcm[3 * i_0]) + rtu_dcm[3 * i + 2] * rtu_dcm[3 *
        i_0 + 2]) + rtCP_Bias1_Bias[rtu_dcm_tmp];
    }
  }

  for (i = 0; i < 9; i++) {
    /* RelationalOperator: '<S94>/Compare' incorporates:
     *  Abs: '<S88>/Abs2'
     *  Bias: '<S88>/Bias1'
     *  Constant: '<S94>/Constant'
     */
    rtb_Compare_p[i] = (std::abs(rtu_dcm_0[i]) > rtp_tolerance);
  }

  /* Logic: '<S88>/Logical Operator1' */
  tmp = rtb_Compare_p[0];
  for (i = 0; i < 8; i++) {
    tmp = (tmp || rtb_Compare_p[i + 1]);
  }

  /* If: '<S85>/If' incorporates:
   *  Abs: '<S89>/Abs1'
   *  Bias: '<S89>/Bias'
   *  Constant: '<S96>/Constant'
   *  Logic: '<S88>/Logical Operator1'
   *  Product: '<S95>/Product'
   *  Product: '<S95>/Product1'
   *  Product: '<S95>/Product2'
   *  Product: '<S95>/Product3'
   *  Product: '<S95>/Product4'
   *  Product: '<S95>/Product5'
   *  RelationalOperator: '<S96>/Compare'
   *  Sum: '<S95>/Sum'
   */
  if (std::abs((((((rtu_dcm[0] * rtu_dcm[4] * rtu_dcm[8] - rtu_dcm[0] * rtu_dcm
                    [5] * rtu_dcm[7]) - rtu_dcm[1] * rtu_dcm[3] * rtu_dcm[8]) +
                  rtu_dcm[2] * rtu_dcm[3] * rtu_dcm[7]) + rtu_dcm[1] * rtu_dcm[5]
                 * rtu_dcm[6]) - rtu_dcm[2] * rtu_dcm[4] * rtu_dcm[6]) + -1.0) >
      rtp_tolerance) {
    /* Outputs for IfAction SubSystem: '<S85>/If Not Proper' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    /* If: '<S87>/If' incorporates:
     *  Constant: '<S87>/Constant'
     */
    if (rtp_action == 2.0) {
      /* Outputs for IfAction SubSystem: '<S87>/Warning' incorporates:
       *  ActionPort: '<S93>/Action Port'
       */
      /* Assertion: '<S93>/Assertion' incorporates:
       *  Constant: '<S87>/Constant1'
       */
      utAssert(false);

      /* End of Outputs for SubSystem: '<S87>/Warning' */
    } else {
      if (rtp_action == 3.0) {
        /* Outputs for IfAction SubSystem: '<S87>/Error' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* Assertion: '<S92>/Assertion' incorporates:
         *  Constant: '<S87>/Constant1'
         */
        utAssert(false);

        /* End of Outputs for SubSystem: '<S87>/Error' */
      }
    }

    /* End of If: '<S87>/If' */
    /* End of Outputs for SubSystem: '<S85>/If Not Proper' */
  } else {
    if (tmp) {
      /* Outputs for IfAction SubSystem: '<S85>/Else If Not Orthogonal' incorporates:
       *  ActionPort: '<S86>/Action Port'
       */
      /* If: '<S86>/If' incorporates:
       *  Constant: '<S86>/Constant'
       */
      if (rtp_action == 2.0) {
        /* Outputs for IfAction SubSystem: '<S86>/Warning' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        /* Assertion: '<S91>/Assertion' incorporates:
         *  Constant: '<S86>/Constant1'
         */
        utAssert(false);

        /* End of Outputs for SubSystem: '<S86>/Warning' */
      } else {
        if (rtp_action == 3.0) {
          /* Outputs for IfAction SubSystem: '<S86>/Error' incorporates:
           *  ActionPort: '<S90>/Action Port'
           */
          /* Assertion: '<S90>/Assertion' incorporates:
           *  Constant: '<S86>/Constant1'
           */
          utAssert(false);

          /* End of Outputs for SubSystem: '<S86>/Error' */
        }
      }

      /* End of If: '<S86>/If' */
      /* End of Outputs for SubSystem: '<S85>/Else If Not Orthogonal' */
    }
  }

  /* End of If: '<S85>/If' */
}

/*
 * Output and update for atomic system:
 *    '<S21>/MATLAB Function2'
 *    '<S22>/MATLAB Function2'
 */
void URControl_MATLABFunction2(B_MATLABFunction2_URControl_T *localB)
{
  real_T psi_data;
  boolean_T positiveInput_data;
  boolean_T b_data;
  boolean_T d;
  boolean_T e;
  int32_T trueCount;
  real_T x_data;
  real_T r;
  boolean_T rEQ0;
  real_T q;

  /* :  q = (lambda < -pi) | (pi < lambda); */
  d = (localB->lambda < -3.1415926535897931);
  e = (3.1415926535897931 < localB->lambda);

  /* :  psi = lambda(q) + pi; */
  trueCount = 0;
  if (d || e) {
    trueCount = 1;
  }

  if (0 <= trueCount - 1) {
    psi_data = localB->lambda + 3.1415926535897931;
    positiveInput_data = (psi_data > 0.0);
  }

  /* :  positiveInput = (psi > 0); */
  /* :  psi = mod(psi, 2*pi); */
  if (0 <= trueCount - 1) {
    x_data = psi_data;
  }

  if (0 <= static_cast<int8_T>(trueCount) - 1) {
    r = psi_data;
  }

  if (0 <= static_cast<int8_T>(trueCount) - 1) {
    if (rtIsNaN(x_data) || rtIsInf(x_data)) {
      r = (rtNaN);
    } else if (x_data == 0.0) {
      r = 0.0;
    } else {
      r = std::fmod(x_data, 6.2831853071795862);
      rEQ0 = (r == 0.0);
      if (!rEQ0) {
        q = std::abs(x_data / 6.2831853071795862);
        rEQ0 = (std::abs(q - std::floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        r = 0.0;
      } else {
        if (x_data < 0.0) {
          r += 6.2831853071795862;
        }
      }
    }
  }

  if (0 <= static_cast<int8_T>(trueCount) - 1) {
    psi_data = r;
    b_data = (r == 0.0);
  }

  /* :  psi((psi == 0) & positiveInput) = 2*pi; */
  if ((0 <= static_cast<int8_T>(trueCount) - 1) && (b_data && positiveInput_data))
  {
    psi_data = 6.2831853071795862;
  }

  /* :  lambda(q) = psi - pi; */
  if (d || e) {
    localB->lambda = psi_data - 3.1415926535897931;
  }
}

/*
 * Output and update for atomic system:
 *    '<S21>/MATLAB Function3'
 *    '<S21>/MATLAB Function4'
 *    '<S22>/MATLAB Function3'
 *    '<S22>/MATLAB Function4'
 */
void URControl_MATLABFunction3(real_T rtu_u, B_MATLABFunction3_URControl_T
  *localB)
{
  /* :  if isnan(u) */
  if (rtIsNaN(rtu_u)) {
    /* :  y = 0; */
    localB->y = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
    localB->y = rtu_u;
  }
}

/*
 * Function for MATLAB Function: '<S7>/basic estimators'
 * function update(obj,newValue)
 */
void URControlModelClass::URControl_LPFilter_update(LPFilter_URControl_T *obj,
  const real_T newValue[3])
{
  real_T tmp;
  real_T z1;

  /* 'LPFilter:21' obj.value = obj.value*obj.filterT + newValue*(1 - obj.filterT); */
  tmp = 1.0 - obj->filterT;

  /* 'LPFilter:22' obj.value = max(min(obj.value,obj.maxLim),obj.minLim); */
  obj->value[0] = (1.0 - obj->filterT) * newValue[0] + obj->value[0] *
    obj->filterT;
  if ((obj->value[0] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[0];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[0] = z1;
  } else {
    obj->value[0] = obj->minLim;
  }

  obj->value[1] = obj->value[1] * obj->filterT + newValue[1] * tmp;
  if ((obj->value[1] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[1];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[1] = z1;
  } else {
    obj->value[1] = obj->minLim;
  }

  obj->value[2] = obj->value[2] * obj->filterT + newValue[2] * tmp;
  if ((obj->value[2] < obj->maxLim) || rtIsNaN(obj->maxLim)) {
    z1 = obj->value[2];
  } else {
    z1 = obj->maxLim;
  }

  if ((z1 > obj->minLim) || rtIsNaN(obj->minLim)) {
    obj->value[2] = z1;
  } else {
    obj->value[2] = obj->minLim;
  }
}

/* Model step function */
void URControlModelClass::step()
{
  /* local block i/o variables */
  stateBus rtb_stateOut;
  real_T rtb_acc[3];
  real_T rtb_Integrator[3];
  real_T rtb_Integrator_g;
  real_T rtb_manual[5];
  real_T rtb_w_cmd[4];
  real_T rtb_accs_filter[3];
  real_T rtb_r_cmd;
  real_T rtb_n_des[3];
  real_T rtb_Ftot_ref;
  real_T km[9];
  real_T R_E[9];
  real_T Rc[9];
  real_T scale;
  real_T absxk;
  real_T t;
  real_T b_scale;
  static const int8_T b_a[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  real_T FMin[4];
  boolean_T rEQ0;
  static const int8_T b_a_0[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  real_T y[7];
  real_T dHdx[70];
  real_T qconj[4];
  real_T gain[70];
  static const int8_T b[10] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };

  static const int8_T c[10] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const int8_T d[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };

  static const int8_T e[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  real_T Jacobian[100];
  real_T rtb_pos[3];
  real_T rtb_omega[3];
  real_T rtb_att[3];
  real_T rtb_u2[3];
  real_T rtb_DataStoreRead_k[10];
  real_T rtb_Product1_h;
  real_T rtb_Gain3_d[3];
  real_T rtb_fcn3;
  real_T rtb_fcn5;
  boolean_T rtb_Compare_p2;
  real_T rtb_Delay1[3];
  real_T rtb_xNew[10];
  real_T rtb_TmpSignalConversionAtSFunct[6];
  real_T rtb_errorVel[3];
  real_T y_tmp[9];
  real_T dHdx_0[49];
  real_T rtb_TmpSignalConversionAtSFun_0[4];
  real_T rtb_TmpSignalConversionAtSFun_1[4];
  real_T tmp[9];
  real_T rtb_pos_0[7];
  real_T dHdx_1[70];
  real_T km_0[9];
  real_T tmp_0[3];
  real_T km_1[3];
  real_T rtb_fcn3_0[16];
  real_T b_a_1[16];
  real_T Jacobian_0[100];
  uint32_T tmp_1;
  real_T rtb_sincos_o2_idx_2;
  boolean_T b_b_idx_1;
  boolean_T b_b_idx_0;
  real_T rtb_TmpSignalConversionAtSFun_2;
  real_T rtb_TmpSignalConversionAtSFun_3;
  real_T rtb_TmpSignalConversionAtSFun_4;
  real_T rtb_TmpSignalConversionAtSFun_5;
  real_T rtb_sincos_o2_idx_4;
  real_T rtb_sincos_o2_idx_3;
  real_T rtb_Merge_c_tmp;
  real_T dHdx_tmp;
  real_T R_E_tmp;
  real_T R_E_tmp_0;
  int32_T Rc_tmp;
  int32_T gain_tmp;
  real_T rtb_Delay1_tmp;
  int32_T km_tmp;
  real_T rtb_Gain3_p_tmp;
  real_T rtb_Gain3_p_tmp_0;
  int32_T qconj_tmp;
  boolean_T tmp_2;
  boolean_T tmp_3;
  real_T tmp_4;
  real_T tmp_5;
  real_T tmp_6;
  real_T rtb_u2_tmp;
  real_T rtb_u2_tmp_0;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[0] = URControl_U.accs[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[0] = URControl_U.pos[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[0] = URControl_U.rates[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[0] = URControl_U.att[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[1] = URControl_U.accs[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[1] = URControl_U.pos[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[1] = URControl_U.rates[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[1] = URControl_U.att[1];

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/accs'
   */
  rtb_acc[2] = URControl_U.accs[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/pos'
   */
  rtb_pos[2] = URControl_U.pos[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/rates'
   */
  rtb_omega[2] = URControl_U.rates[2];

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/att'
   */
  rtb_att[2] = URControl_U.att[2];

  /* Gain: '<S27>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Gain: '<S130>/1//2'
   *  Inport: '<Root>/att'
   */
  rtb_sincos_o2_idx_2 = 0.5 * URControl_U.att[2];

  /* Trigonometry: '<S27>/sincos' incorporates:
   *  Gain: '<S27>/1//2'
   */
  rtb_Product1_h = std::cos(rtb_sincos_o2_idx_2);

  /* Fcn: '<S27>/q0' incorporates:
   *  Gain: '<S27>/1//2'
   *  Trigonometry: '<S27>/sincos'
   */
  rtb_sincos_o2_idx_3 = rtb_Product1_h;
  rtb_TmpSignalConversionAtSFun_3 = std::sin(rtb_sincos_o2_idx_2);

  /* Trigonometry: '<S27>/sincos' */
  rtb_Gain3_d[0] = rtb_Product1_h;

  /* Gain: '<S27>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Gain: '<S130>/1//2'
   *  Inport: '<Root>/att'
   */
  rtb_u2_tmp = 0.5 * URControl_U.att[1];

  /* Trigonometry: '<S27>/sincos' incorporates:
   *  Gain: '<S27>/1//2'
   */
  rtb_Product1_h = std::cos(rtb_u2_tmp);

  /* Fcn: '<S27>/q0' incorporates:
   *  Gain: '<S27>/1//2'
   *  Trigonometry: '<S27>/sincos'
   */
  rtb_sincos_o2_idx_4 = rtb_Product1_h;
  rtb_TmpSignalConversionAtSFun_2 = std::sin(rtb_u2_tmp);

  /* Trigonometry: '<S27>/sincos' */
  rtb_Gain3_d[1] = rtb_Product1_h;

  /* Gain: '<S27>/1//2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Gain: '<S130>/1//2'
   *  Inport: '<Root>/att'
   */
  rtb_u2_tmp_0 = 0.5 * URControl_U.att[0];

  /* Trigonometry: '<S27>/sincos' incorporates:
   *  Gain: '<S27>/1//2'
   */
  rtb_fcn3 = std::sin(rtb_u2_tmp_0);
  rtb_Product1_h = std::cos(rtb_u2_tmp_0);

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S27>/q0'
   *  Fcn: '<S27>/q1'
   *  MATLAB Function: '<S20>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_5 = rtb_sincos_o2_idx_3 * rtb_sincos_o2_idx_4 *
    rtb_Product1_h + rtb_TmpSignalConversionAtSFun_3 *
    rtb_TmpSignalConversionAtSFun_2 * rtb_fcn3;
  rtb_TmpSignalConversionAtSFun_4 = rtb_Gain3_d[0] * rtb_Gain3_d[1] * rtb_fcn3 -
    rtb_TmpSignalConversionAtSFun_3 * rtb_TmpSignalConversionAtSFun_2 *
    rtb_Product1_h;

  /* Fcn: '<S27>/q2' incorporates:
   *  Fcn: '<S27>/q1'
   *  Fcn: '<S27>/q3'
   */
  rtb_sincos_o2_idx_3 = rtb_TmpSignalConversionAtSFun_3 * rtb_Gain3_d[1];
  rtb_TmpSignalConversionAtSFun_2 *= rtb_Gain3_d[0];

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Fcn: '<S27>/q2'
   *  Fcn: '<S27>/q3'
   *  MATLAB Function: '<S20>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_2 *
    rtb_Product1_h + rtb_sincos_o2_idx_3 * rtb_fcn3;
  rtb_TmpSignalConversionAtSFun_2 = rtb_sincos_o2_idx_3 * rtb_Product1_h -
    rtb_TmpSignalConversionAtSFun_2 * rtb_fcn3;

  /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
   *  Memory: '<S20>/Memory'
   */
  /* :  error1 = norm(qMeas - qState); */
  /* :  error2 = norm(-qMeas - qState); */
  /* :  if error1 > error2 */
  rtb_TmpSignalConversionAtSFun_0[0] = rtb_TmpSignalConversionAtSFun_5 -
    URControl_DW.Memory_PreviousInput[0];
  rtb_TmpSignalConversionAtSFun_1[0] = -rtb_TmpSignalConversionAtSFun_5 -
    URControl_DW.Memory_PreviousInput[0];
  rtb_TmpSignalConversionAtSFun_0[1] = rtb_TmpSignalConversionAtSFun_4 -
    URControl_DW.Memory_PreviousInput[1];
  rtb_TmpSignalConversionAtSFun_1[1] = -rtb_TmpSignalConversionAtSFun_4 -
    URControl_DW.Memory_PreviousInput[1];
  rtb_TmpSignalConversionAtSFun_0[2] = rtb_TmpSignalConversionAtSFun_3 -
    URControl_DW.Memory_PreviousInput[2];
  rtb_TmpSignalConversionAtSFun_1[2] = -rtb_TmpSignalConversionAtSFun_3 -
    URControl_DW.Memory_PreviousInput[2];
  rtb_TmpSignalConversionAtSFun_0[3] = rtb_TmpSignalConversionAtSFun_2 -
    URControl_DW.Memory_PreviousInput[3];
  rtb_TmpSignalConversionAtSFun_1[3] = -rtb_TmpSignalConversionAtSFun_2 -
    URControl_DW.Memory_PreviousInput[3];
  if (norm_wXO8gvHp(rtb_TmpSignalConversionAtSFun_0) > norm_wXO8gvHp
      (rtb_TmpSignalConversionAtSFun_1)) {
    /* :  q = -qMeas; */
    rtb_TmpSignalConversionAtSFun_5 = -rtb_TmpSignalConversionAtSFun_5;
    rtb_TmpSignalConversionAtSFun_4 = -rtb_TmpSignalConversionAtSFun_4;
    rtb_TmpSignalConversionAtSFun_3 = -rtb_TmpSignalConversionAtSFun_3;
    rtb_TmpSignalConversionAtSFun_2 = -rtb_TmpSignalConversionAtSFun_2;
  } else {
    /* :  else */
    /* :  q = qMeas; */
  }

  /* MATLAB Function: '<S20>/enableMeas' */
  URControl_enableMeas(rtb_att, &URControl_B.sf_enableMeas,
                       &URControl_DW.sf_enableMeas);

  /* Outputs for Enabled SubSystem: '<S24>/Correct1' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* DataTypeConversion: '<S24>/DataTypeConversion_Enable1' */
  if (URControl_B.sf_enableMeas.enableMeas != 0.0) {
    /* MATLAB Function: '<S29>/Correct' incorporates:
     *  DataStoreRead: '<S29>/Data Store ReadX'
     */
    /* :  if pM.IsSimulinkFcn */
    /* :  else */
    /* :  MeasurementFcnH = str2func(pM.FcnName); */
    /* :  if pM.HasJacobian */
    /* :  MeasurementJacobianFcnH = str2func(pM.JacobianFcnName); */
    /* :  switch pM.NumberOfExtraArgumentInports */
    /* :  case 1 */
    /* :  extraArgs = {uMeas}; */
    /* :  if pM.HasAdditiveNoise */
    /* :  ekfCorrector = matlabshared.tracking.internal.EKFCorrectorAdditive(); */
    /* :  xNew = zeros(size(x),'like',x); */
    /* :  [xNew,P] = ekfCorrector.correct(... */
    /* :          yMeas,R,x,P,MeasurementFcnH,MeasurementJacobianFcnH,extraArgs{:}); */
    /* 'ekf_meas_jacob:13' posx = x(1); */
    /* 'ekf_meas_jacob:14' posy = x(2); */
    /* 'ekf_meas_jacob:15' posz = x(3); */
    /* 'ekf_meas_jacob:17' q1 = x(7); */
    /* 'ekf_meas_jacob:18' q2 = x(8); */
    /* 'ekf_meas_jacob:19' q3 = x(9); */
    /* 'ekf_meas_jacob:20' q4 = x(10); */
    /* 'ekf_meas_jacob:22' dx = u(1); */
    /* 'ekf_meas_jacob:23' dy = u(2); */
    /* 'ekf_meas_jacob:24' dz = u(3); */
    /* 'ekf_meas_jacob:26' B = ... */
    /* 'ekf_meas_jacob:27' [ 1, 0, 0, 0, 0, 0, 2*dx*q1 - 2*dy*q4 + 2*dz*q3, 2*dx*q2 + 2*dy*q3 + 2*dz*q4, 2*dy*q2 - 2*dx*q3 + 2*dz*q1, 2*dz*q2 - 2*dy*q1 - 2*dx*q4; */
    /* 'ekf_meas_jacob:28'  0, 1, 0, 0, 0, 0, 2*dx*q4 + 2*dy*q1 - 2*dz*q2, 2*dx*q3 - 2*dy*q2 - 2*dz*q1, 2*dx*q2 + 2*dy*q3 + 2*dz*q4, 2*dx*q1 - 2*dy*q4 + 2*dz*q3; */
    /* 'ekf_meas_jacob:29'  0, 0, 1, 0, 0, 0, 2*dy*q2 - 2*dx*q3 + 2*dz*q1, 2*dx*q4 + 2*dy*q1 - 2*dz*q2, 2*dy*q4 - 2*dx*q1 - 2*dz*q3, 2*dx*q2 + 2*dy*q3 + 2*dz*q4; */
    /* 'ekf_meas_jacob:30'  0, 0, 0, 0, 0, 0,                           1,                           0,                           0,                           0; */
    /* 'ekf_meas_jacob:31'  0, 0, 0, 0, 0, 0,                           0,                           1,                           0,                           0; */
    /* 'ekf_meas_jacob:32'  0, 0, 0, 0, 0, 0,                           0,                           0,                           1,                           0; */
    /* 'ekf_meas_jacob:33'  0, 0, 0, 0, 0, 0,                           0,                           0,                           0,                           1]; */
    dHdx[0] = 1.0;
    dHdx[7] = 0.0;
    dHdx[14] = 0.0;
    dHdx[21] = 0.0;
    dHdx[28] = 0.0;
    dHdx[35] = 0.0;
    rtb_fcn3 = (0.0 * URControl_DW.x[6] - 0.0 * URControl_DW.x[9]) + 0.0 *
      URControl_DW.x[8];
    dHdx[42] = rtb_fcn3;
    rtb_sincos_o2_idx_3 = (0.0 * URControl_DW.x[7] + 0.0 * URControl_DW.x[8]) +
      0.0 * URControl_DW.x[9];
    dHdx[49] = rtb_sincos_o2_idx_3;
    rtb_sincos_o2_idx_4 = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[8]) +
      0.0 * URControl_DW.x[6];
    dHdx[56] = rtb_sincos_o2_idx_4;
    dHdx[63] = (0.0 * URControl_DW.x[7] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[9];
    dHdx[1] = 0.0;
    dHdx[8] = 1.0;
    dHdx[15] = 0.0;
    dHdx[22] = 0.0;
    dHdx[29] = 0.0;
    dHdx[36] = 0.0;
    dHdx_tmp = (0.0 * URControl_DW.x[9] + 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[7];
    dHdx[43] = dHdx_tmp;
    dHdx[50] = (0.0 * URControl_DW.x[8] - 0.0 * URControl_DW.x[7]) - 0.0 *
      URControl_DW.x[6];
    dHdx[57] = rtb_sincos_o2_idx_3;
    dHdx[64] = rtb_fcn3;
    dHdx[2] = 0.0;
    dHdx[9] = 0.0;
    dHdx[16] = 1.0;
    dHdx[23] = 0.0;
    dHdx[30] = 0.0;
    dHdx[37] = 0.0;
    dHdx[44] = rtb_sincos_o2_idx_4;
    dHdx[51] = dHdx_tmp;
    dHdx[58] = (0.0 * URControl_DW.x[9] - 0.0 * URControl_DW.x[6]) - 0.0 *
      URControl_DW.x[8];
    dHdx[65] = rtb_sincos_o2_idx_3;
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      dHdx[3 + 7 * qconj_tmp] = b[qconj_tmp];
      dHdx[4 + 7 * qconj_tmp] = c[qconj_tmp];
      dHdx[5 + 7 * qconj_tmp] = d[qconj_tmp];
      dHdx[6 + 7 * qconj_tmp] = e[qconj_tmp];
    }

    /* 'ekf_meas_func:3' y = zeros(7,1); */
    /* 'ekf_meas_func:5' posx = x(1); */
    /* 'ekf_meas_func:6' posy = x(2); */
    /* 'ekf_meas_func:7' posz = x(3); */
    /* 'ekf_meas_func:9' q = x(7:10); */
    /* 'ekf_meas_func:11' dx = u(1); */
    /* 'ekf_meas_func:12' dy = u(2); */
    /* 'ekf_meas_func:13' dz = u(3); */
    /* 'ekf_meas_func:15' dPos = quatRot(q', [dx, dy, dz]); */
    /* 'quatRot:3' qconj = [ q(:,1)  -q(:,2:4) ]; */
    /* 'quatRot:5' dummy = HProduct(HProduct(q,[0,vector]),qconj); */
    /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
    /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
    /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
    /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
    /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
    /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
    /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
    /* 'quatRot:25' qout = [scalar  vec]; */
    FMin[0] = ((URControl_DW.x[6] * 0.0 - URControl_DW.x[7] * 0.0) -
               URControl_DW.x[8] * 0.0) - URControl_DW.x[9] * 0.0;
    FMin[1] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[7]) +
      (URControl_DW.x[8] * 0.0 - URControl_DW.x[9] * 0.0);
    FMin[2] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[8]) +
      (URControl_DW.x[9] * 0.0 - URControl_DW.x[7] * 0.0);
    FMin[3] = (URControl_DW.x[6] * 0.0 + 0.0 * URControl_DW.x[9]) +
      (URControl_DW.x[7] * 0.0 - URControl_DW.x[8] * 0.0);

    /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
    /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
    /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
    /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
    /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
    /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
    /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
    /* 'quatRot:25' qout = [scalar  vec]; */
    /* 'quatRot:6' r = dummy(2:4); */
    /* 'ekf_meas_func:17' y(1) = posx + dPos(1); */
    y[0] = ((FMin[0] * -URControl_DW.x[7] + URControl_DW.x[6] * FMin[1]) +
            (FMin[2] * -URControl_DW.x[9] - FMin[3] * -URControl_DW.x[8])) +
      URControl_DW.x[0];

    /* 'ekf_meas_func:18' y(2) = posy + dPos(2); */
    y[1] = ((FMin[0] * -URControl_DW.x[8] + URControl_DW.x[6] * FMin[2]) +
            (FMin[3] * -URControl_DW.x[7] - FMin[1] * -URControl_DW.x[9])) +
      URControl_DW.x[1];

    /* 'ekf_meas_func:19' y(3) = posz + dPos(3); */
    y[2] = ((FMin[0] * -URControl_DW.x[9] + URControl_DW.x[6] * FMin[3]) +
            (FMin[1] * -URControl_DW.x[8] - FMin[2] * -URControl_DW.x[7])) +
      URControl_DW.x[2];

    /* 'ekf_meas_func:21' y(4:7) = q; */
    y[3] = URControl_DW.x[6];
    y[4] = URControl_DW.x[7];
    y[5] = URControl_DW.x[8];
    y[6] = URControl_DW.x[9];

    /* SignalConversion: '<S32>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion4'
     *  Inport: '<Root>/pos'
     *  MATLAB Function: '<S29>/Correct'
     */
    rtb_pos_0[0] = URControl_U.pos[0];
    rtb_pos_0[1] = URControl_U.pos[1];
    rtb_pos_0[2] = URControl_U.pos[2];
    rtb_pos_0[3] = rtb_TmpSignalConversionAtSFun_5;
    rtb_pos_0[4] = rtb_TmpSignalConversionAtSFun_4;
    rtb_pos_0[5] = rtb_TmpSignalConversionAtSFun_3;
    rtb_pos_0[6] = rtb_TmpSignalConversionAtSFun_2;

    /* MATLAB Function: '<S29>/Correct' incorporates:
     *  Constant: '<S24>/R1'
     *  DataStoreRead: '<S29>/Data Store ReadP'
     *  SignalConversion: '<S32>/TmpSignal ConversionAt SFunction Inport3'
     */
    for (qconj_tmp = 0; qconj_tmp < 7; qconj_tmp++) {
      y[qconj_tmp] = rtb_pos_0[qconj_tmp] - y[qconj_tmp];
    }

    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      for (km_tmp = 0; km_tmp < 7; km_tmp++) {
        gain_tmp = qconj_tmp + 10 * km_tmp;
        gain[gain_tmp] = 0.0;
        for (Rc_tmp = 0; Rc_tmp < 10; Rc_tmp++) {
          gain[gain_tmp] += URControl_DW.P[10 * Rc_tmp + qconj_tmp] * dHdx[7 *
            Rc_tmp + km_tmp];
        }
      }
    }

    for (qconj_tmp = 0; qconj_tmp < 7; qconj_tmp++) {
      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        gain_tmp = qconj_tmp + 7 * km_tmp;
        dHdx_1[gain_tmp] = 0.0;
        for (Rc_tmp = 0; Rc_tmp < 10; Rc_tmp++) {
          dHdx_1[gain_tmp] += dHdx[7 * Rc_tmp + qconj_tmp] * URControl_DW.P[10 *
            km_tmp + Rc_tmp];
        }
      }

      for (km_tmp = 0; km_tmp < 7; km_tmp++) {
        rtb_sincos_o2_idx_3 = 0.0;
        for (Rc_tmp = 0; Rc_tmp < 10; Rc_tmp++) {
          rtb_sincos_o2_idx_3 += dHdx_1[7 * Rc_tmp + qconj_tmp] * dHdx[7 *
            Rc_tmp + km_tmp];
        }

        gain_tmp = 7 * km_tmp + qconj_tmp;
        dHdx_0[gain_tmp] = rtCP_R1_Value[gain_tmp] + rtb_sincos_o2_idx_3;
      }
    }

    mrdivide_helper_D6MymrEr(gain, dHdx_0);
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        gain_tmp = qconj_tmp + 10 * km_tmp;
        Jacobian[gain_tmp] = 0.0;
        for (Rc_tmp = 0; Rc_tmp < 7; Rc_tmp++) {
          Jacobian[gain_tmp] += gain[10 * Rc_tmp + qconj_tmp] * dHdx[7 * km_tmp
            + Rc_tmp];
        }
      }

      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        rtb_sincos_o2_idx_3 = 0.0;
        for (Rc_tmp = 0; Rc_tmp < 10; Rc_tmp++) {
          rtb_sincos_o2_idx_3 += Jacobian[10 * Rc_tmp + qconj_tmp] *
            URControl_DW.P[10 * km_tmp + Rc_tmp];
        }

        Rc_tmp = 10 * km_tmp + qconj_tmp;
        Jacobian_0[Rc_tmp] = URControl_DW.P[Rc_tmp] - rtb_sincos_o2_idx_3;
      }
    }

    /* DataStoreWrite: '<S29>/Data Store WriteP' */
    memcpy(&URControl_DW.P[0], &Jacobian_0[0], 100U * sizeof(real_T));

    /* DataStoreWrite: '<S29>/Data Store WriteX' incorporates:
     *  DataStoreRead: '<S29>/Data Store ReadX'
     *  MATLAB Function: '<S29>/Correct'
     */
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      rtb_sincos_o2_idx_3 = 0.0;
      for (km_tmp = 0; km_tmp < 7; km_tmp++) {
        rtb_sincos_o2_idx_3 += gain[10 * km_tmp + qconj_tmp] * y[km_tmp];
      }

      URControl_DW.x[qconj_tmp] += rtb_sincos_o2_idx_3;
    }

    /* End of DataStoreWrite: '<S29>/Data Store WriteX' */
  }

  /* End of DataTypeConversion: '<S24>/DataTypeConversion_Enable1' */
  /* End of Outputs for SubSystem: '<S24>/Correct1' */

  /* Outputs for Atomic SubSystem: '<S24>/Output' */
  /* DataStoreRead: '<S30>/Data Store Read' */
  memcpy(&rtb_DataStoreRead_k[0], &URControl_DW.x[0], 10U * sizeof(real_T));

  /* Sqrt: '<S40>/sqrt' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   *  Product: '<S41>/Product'
   *  Product: '<S41>/Product1'
   *  Product: '<S41>/Product2'
   *  Product: '<S41>/Product3'
   *  Sum: '<S41>/Sum'
   */
  rtb_TmpSignalConversionAtSFun_3 = std::sqrt(((URControl_DW.x[6] *
    URControl_DW.x[6] + URControl_DW.x[7] * URControl_DW.x[7]) + URControl_DW.x
    [8] * URControl_DW.x[8]) + URControl_DW.x[9] * URControl_DW.x[9]);

  /* Product: '<S35>/Product' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_TmpSignalConversionAtSFun_5 = URControl_DW.x[6] /
    rtb_TmpSignalConversionAtSFun_3;

  /* Product: '<S35>/Product1' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_Product1_h = URControl_DW.x[7] / rtb_TmpSignalConversionAtSFun_3;

  /* Product: '<S35>/Product2' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_TmpSignalConversionAtSFun_4 = URControl_DW.x[8] /
    rtb_TmpSignalConversionAtSFun_3;

  /* Product: '<S35>/Product3' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read'
   */
  rtb_TmpSignalConversionAtSFun_3 = URControl_DW.x[9] /
    rtb_TmpSignalConversionAtSFun_3;

  /* End of Outputs for SubSystem: '<S24>/Output' */

  /* Fcn: '<S26>/fcn2' incorporates:
   *  Fcn: '<S26>/fcn5'
   */
  b_scale = rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_5;
  rtb_Merge_c_tmp = rtb_Product1_h * rtb_Product1_h;
  rtb_sincos_o2_idx_3 = rtb_TmpSignalConversionAtSFun_4 *
    rtb_TmpSignalConversionAtSFun_4;
  rtb_sincos_o2_idx_4 = rtb_TmpSignalConversionAtSFun_3 *
    rtb_TmpSignalConversionAtSFun_3;
  rtb_TmpSignalConversionAtSFun_2 = ((b_scale + rtb_Merge_c_tmp) -
    rtb_sincos_o2_idx_3) - rtb_sincos_o2_idx_4;

  /* Trigonometry: '<S34>/Trigonometric Function1' incorporates:
   *  Fcn: '<S26>/fcn1'
   */
  rtb_Gain3_d[0] = rt_atan2d_snf((rtb_Product1_h *
    rtb_TmpSignalConversionAtSFun_4 + rtb_TmpSignalConversionAtSFun_5 *
    rtb_TmpSignalConversionAtSFun_3) * 2.0, rtb_TmpSignalConversionAtSFun_2);

  /* Fcn: '<S26>/fcn3' */
  rtb_fcn3 = (rtb_Product1_h * rtb_TmpSignalConversionAtSFun_3 -
              rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_4)
    * -2.0;

  /* If: '<S36>/If' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   */
  if (rtb_fcn3 > 1.0) {
    /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    rtb_TmpSignalConversionAtSFun_2 = 1.0;

    /* End of Outputs for SubSystem: '<S36>/If Action Subsystem' */
  } else if (rtb_fcn3 < -1.0) {
    /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    rtb_TmpSignalConversionAtSFun_2 = 1.0;

    /* End of Outputs for SubSystem: '<S36>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_fcn3, &rtb_TmpSignalConversionAtSFun_2);

    /* End of Outputs for SubSystem: '<S36>/If Action Subsystem2' */
  }

  /* End of If: '<S36>/If' */

  /* Trigonometry: '<S34>/trigFcn' */
  if (rtb_TmpSignalConversionAtSFun_2 > 1.0) {
    rtb_TmpSignalConversionAtSFun_2 = 1.0;
  } else {
    if (rtb_TmpSignalConversionAtSFun_2 < -1.0) {
      rtb_TmpSignalConversionAtSFun_2 = -1.0;
    }
  }

  rtb_Gain3_d[1] = std::asin(rtb_TmpSignalConversionAtSFun_2);

  /* End of Trigonometry: '<S34>/trigFcn' */

  /* DSPFlip: '<S20>/Flip1' incorporates:
   *  Fcn: '<S26>/fcn4'
   *  Fcn: '<S26>/fcn5'
   *  Trigonometry: '<S34>/Trigonometric Function3'
   */
  URControl_B.Euler_flip_m[0] = rt_atan2d_snf((rtb_TmpSignalConversionAtSFun_4 *
    rtb_TmpSignalConversionAtSFun_3 + rtb_TmpSignalConversionAtSFun_5 *
    rtb_Product1_h) * 2.0, ((b_scale - rtb_Merge_c_tmp) - rtb_sincos_o2_idx_3) +
    rtb_sincos_o2_idx_4);
  URControl_B.Euler_flip_m[2] = rtb_Gain3_d[0];
  URControl_B.Euler_flip_m[1] = rtb_Gain3_d[1];
  URControl_B.Euler_flip_m[1] = rtb_Gain3_d[1];

  /* MATLAB Function: '<S21>/MATLAB Function2' incorporates:
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
   */
  URControl_B.sf_MATLABFunction2.lambda =
    URControl_DW.DiscreteTimeIntegrator_DSTATE;
  URControl_MATLABFunction2(&URControl_B.sf_MATLABFunction2);

  /* Gain: '<S117>/1//2' incorporates:
   *  Delay: '<S21>/Delay2'
   *  Sum: '<S56>/Add3'
   */
  rtb_TmpSignalConversionAtSFun_3 = (URControl_B.sf_MATLABFunction2.lambda -
    URControl_B.Euler_flip[2]) * 0.5;

  /* Trigonometry: '<S117>/sincos' */
  rtb_Product1_h = std::sin(rtb_TmpSignalConversionAtSFun_3);
  rtb_TmpSignalConversionAtSFun_3 = std::cos(rtb_TmpSignalConversionAtSFun_3);

  /* Fcn: '<S117>/q0' */
  rtb_TmpSignalConversionAtSFun_2 = rtb_Product1_h * 0.0 * 0.0 +
    rtb_TmpSignalConversionAtSFun_3;

  /* MATLAB Function: '<S21>/enableMeas' */
  URControl_enableMeas(rtb_att, &URControl_B.sf_enableMeas_k,
                       &URControl_DW.sf_enableMeas_k);

  /* MATLAB Function: '<S21>/MATLAB Function11' incorporates:
   *  BusCreator: '<S21>/BusConversion_InsertedFor_MATLAB Function11_at_inport_0'
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Delay: '<S21>/Delay1'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/mag'
   *  Inport: '<Root>/pos'
   *  MATLAB Function: '<S21>/MATLAB Function6'
   *  MATLAB Function: '<S22>/MATLAB Function6'
   */
  /* :  [alpha,kk] = rateCorrectionCF(sensor,att_est,psi_mag,update_flag, URControlParams); */
  /* 'rateCorrectionCF:3' mag = sensor.mag; */
  /* 'rateCorrectionCF:4' acc = sensor.acc; */
  /* 'rateCorrectionCF:6' g = URControlParams.g; */
  /* 'rateCorrectionCF:7' mI = [URControlParams.magxI, URControlParams.magyI, URControlParams.magzI]'; */
  rtb_u2[0] = URControlParams.magxI;
  rtb_u2[1] = URControlParams.magyI;
  rtb_u2[2] = URControlParams.magzI;

  /* 'rateCorrectionCF:10' acc_norm = norm(acc); */
  scale = 3.3121686421112381E-170;
  absxk = std::abs(rtb_acc[0]);
  if (absxk > 3.3121686421112381E-170) {
    rtb_fcn3 = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    rtb_fcn3 = t * t;
  }

  absxk = std::abs(rtb_acc[1]);
  if (absxk > scale) {
    t = scale / absxk;
    rtb_fcn3 = rtb_fcn3 * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtb_fcn3 += t * t;
  }

  absxk = std::abs(rtb_acc[2]);
  if (absxk > scale) {
    t = scale / absxk;
    rtb_fcn3 = rtb_fcn3 * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtb_fcn3 += t * t;
  }

  rtb_fcn3 = scale * std::sqrt(rtb_fcn3);

  /* 'rateCorrectionCF:11' h = (1 - abs(acc_norm/g-1)*3/2); */
  /* 'rateCorrectionCF:12' h = max(h,0); */
  rtb_fcn3 = 1.0 - std::abs(rtb_fcn3 / URControlParams.g - 1.0) * 3.0 / 2.0;
  if (!(rtb_fcn3 > 0.0)) {
    rtb_fcn3 = 0.0;
  }

  /* 'rateCorrectionCF:14' ka = URControlParams.ka * h; */
  /* 'rateCorrectionCF:16' km = zeros(3,3); */
  memset(&km[0], 0, 9U * sizeof(real_T));

  /* 'rateCorrectionCF:17' if sensor.pos(3) < -0.5 */
  if (URControl_U.pos[2] < -0.5F) {
    /* 'rateCorrectionCF:18' km = URControlParams.km; */
    memcpy(&km[0], &URControlParams.km[0], 9U * sizeof(real_T));
  }

  /* 'rateCorrectionCF:20' km2 = URControlParams.km2; */
  /* 'rateCorrectionCF:23' phiE = att_est(1); */
  /* 'rateCorrectionCF:24' thetaE = att_est(2); */
  /* 'rateCorrectionCF:26' psiE = psi_mag; */
  /* 'rateCorrectionCF:29' R_E = [cos(thetaE)*cos(psiE)                             , cos(thetaE)*sin(psiE)                                      , -sin(thetaE); */
  /* 'rateCorrectionCF:30'         sin(phiE)*sin(thetaE)*cos(psiE)-cos(phiE)*sin(psiE)  , sin(phiE)*sin(thetaE)*sin(psiE)+cos(phiE)*cos(psiE)    , sin(phiE)*cos(thetaE); */
  /* 'rateCorrectionCF:31'         cos(phiE)*sin(thetaE)*cos(psiE)+sin(phiE)*sin(psiE)  , cos(phiE)*sin(thetaE)*sin(psiE)-sin(phiE)*cos(psiE)    , cos(phiE)*cos(thetaE)]; */
  /* 'rateCorrectionCF:32' R_E = R_E'; */
  rtb_sincos_o2_idx_3 = std::cos(URControl_B.Euler_flip[1]);
  rtb_TmpSignalConversionAtSFun_5 = std::cos
    (URControl_B.sf_MATLABFunction2.lambda);
  R_E[0] = rtb_sincos_o2_idx_3 * rtb_TmpSignalConversionAtSFun_5;
  rtb_TmpSignalConversionAtSFun_4 = std::sin
    (URControl_B.sf_MATLABFunction2.lambda);
  R_E[1] = rtb_sincos_o2_idx_3 * rtb_TmpSignalConversionAtSFun_4;
  rtb_sincos_o2_idx_4 = std::sin(URControl_B.Euler_flip[1]);
  R_E[2] = -rtb_sincos_o2_idx_4;
  dHdx_tmp = std::sin(URControl_B.Euler_flip[0]);
  R_E_tmp = dHdx_tmp * rtb_sincos_o2_idx_4;
  R_E_tmp_0 = std::cos(URControl_B.Euler_flip[0]);
  R_E[3] = R_E_tmp * rtb_TmpSignalConversionAtSFun_5 - R_E_tmp_0 *
    rtb_TmpSignalConversionAtSFun_4;
  R_E[4] = R_E_tmp * rtb_TmpSignalConversionAtSFun_4 + R_E_tmp_0 *
    rtb_TmpSignalConversionAtSFun_5;
  R_E[5] = dHdx_tmp * rtb_sincos_o2_idx_3;
  rtb_sincos_o2_idx_4 *= R_E_tmp_0;
  R_E[6] = rtb_sincos_o2_idx_4 * rtb_TmpSignalConversionAtSFun_5 + dHdx_tmp *
    rtb_TmpSignalConversionAtSFun_4;
  R_E[7] = rtb_sincos_o2_idx_4 * rtb_TmpSignalConversionAtSFun_4 - dHdx_tmp *
    rtb_TmpSignalConversionAtSFun_5;
  R_E[8] = R_E_tmp_0 * rtb_sincos_o2_idx_3;

  /* 'rateCorrectionCF:35' phiO    = sensor.att(1); */
  /* 'rateCorrectionCF:36' thetaO  = sensor.att(2); */
  /* 'rateCorrectionCF:37' psiO    = sensor.att(3); */
  /* 'rateCorrectionCF:39' R_O = [cos(thetaO)*cos(psiO)                             , cos(thetaO)*sin(psiO)                                      , -sin(thetaO); */
  /* 'rateCorrectionCF:40'         sin(phiO)*sin(thetaO)*cos(psiO)-cos(phiO)*sin(psiO)  , sin(phiO)*sin(thetaO)*sin(psiO)+cos(phiO)*cos(psiO)    , sin(phiO)*cos(thetaO); */
  /* 'rateCorrectionCF:41'         cos(phiO)*sin(thetaO)*cos(psiO)+sin(phiO)*sin(psiO)  , cos(phiO)*sin(thetaO)*sin(psiO)-sin(phiO)*cos(psiO)    , cos(phiO)*cos(thetaO)]; */
  /* 'rateCorrectionCF:42' R_O = R_O'; */
  /* 'rateCorrectionCF:44' Rc = R_E*R_O'; */
  rtb_sincos_o2_idx_3 = std::cos((real_T)URControl_U.att[1]);
  rtb_sincos_o2_idx_4 = std::cos((real_T)URControl_U.att[2]);
  dHdx_tmp = rtb_sincos_o2_idx_3 * rtb_sincos_o2_idx_4;
  tmp[0] = dHdx_tmp;
  rtb_Merge_c_tmp = std::sin((real_T)URControl_U.att[2]);
  R_E_tmp = rtb_sincos_o2_idx_3 * rtb_Merge_c_tmp;
  tmp[3] = R_E_tmp;
  rtb_Delay1_tmp = std::sin((real_T)URControl_U.att[1]);
  tmp[6] = -rtb_Delay1_tmp;
  rtb_fcn5 = std::sin((real_T)URControl_U.att[0]);
  R_E_tmp_0 = rtb_fcn5 * rtb_Delay1_tmp;
  b_scale = std::cos((real_T)URControl_U.att[0]);
  tmp_4 = R_E_tmp_0 * rtb_sincos_o2_idx_4 - b_scale * rtb_Merge_c_tmp;
  tmp[1] = tmp_4;
  R_E_tmp_0 = R_E_tmp_0 * rtb_Merge_c_tmp + b_scale * rtb_sincos_o2_idx_4;
  tmp[4] = R_E_tmp_0;
  tmp_5 = rtb_fcn5 * rtb_sincos_o2_idx_3;
  tmp[7] = tmp_5;
  rtb_Delay1_tmp *= b_scale;
  tmp_6 = rtb_Delay1_tmp * rtb_sincos_o2_idx_4 + rtb_fcn5 * rtb_Merge_c_tmp;
  tmp[2] = tmp_6;
  rtb_sincos_o2_idx_4 = rtb_Delay1_tmp * rtb_Merge_c_tmp - rtb_fcn5 *
    rtb_sincos_o2_idx_4;
  tmp[5] = rtb_sincos_o2_idx_4;
  rtb_sincos_o2_idx_3 *= b_scale;
  tmp[8] = rtb_sincos_o2_idx_3;

  /* 'rateCorrectionCF:47' expected_ltp = R_E([1,2],1); */
  /* 'rateCorrectionCF:49' heading_x = cos(psiE); */
  /* 'rateCorrectionCF:50' heading_y = sin(psiE); */
  /* 'rateCorrectionCF:52' residual_ltp = -[0; 0; expected_ltp(1)*heading_y - expected_ltp(2)*heading_x]; */
  /* 'rateCorrectionCF:55' a = ka / g *  cross(R_E' * [0 0 -1]', acc)' + ... */
  /* 'rateCorrectionCF:56'     + km / norm(mI)^2 * cross(R_E' * mI, mag)' + ... */
  /* 'rateCorrectionCF:57'     + km2 * R_E' * residual_ltp; */
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    for (km_tmp = 0; km_tmp < 3; km_tmp++) {
      Rc_tmp = qconj_tmp + 3 * km_tmp;
      Rc[Rc_tmp] = 0.0;
      Rc[Rc_tmp] += tmp[3 * km_tmp] * R_E[qconj_tmp];
      Rc[Rc_tmp] += tmp[3 * km_tmp + 1] * R_E[qconj_tmp + 3];
      Rc[Rc_tmp] += tmp[3 * km_tmp + 2] * R_E[qconj_tmp + 6];
      y_tmp[km_tmp + 3 * qconj_tmp] = R_E[Rc_tmp];
    }
  }

  rtb_fcn5 = 0.0;
  b_scale = 3.3121686421112381E-170;
  for (Rc_tmp = 0; Rc_tmp < 3; Rc_tmp++) {
    rtb_Delay1_tmp = y_tmp[Rc_tmp + 3];
    t = y_tmp[Rc_tmp + 6];
    scale = std::abs(rtb_u2[Rc_tmp]);
    if (scale > b_scale) {
      absxk = b_scale / scale;
      rtb_fcn5 = rtb_fcn5 * absxk * absxk + 1.0;
      b_scale = scale;
    } else {
      absxk = scale / b_scale;
      rtb_fcn5 += absxk * absxk;
    }

    rtb_Delay1[Rc_tmp] = -t + (rtb_Delay1_tmp * 0.0 + y_tmp[Rc_tmp] * 0.0);
    rtb_errorVel[Rc_tmp] = t * rtb_u2[2] + (rtb_Delay1_tmp * rtb_u2[1] +
      y_tmp[Rc_tmp] * rtb_u2[0]);
  }

  rtb_fcn5 = b_scale * std::sqrt(rtb_fcn5);
  t = rtb_fcn5 * rtb_fcn5;
  rtb_Delay1_tmp = rtb_Delay1[1] * rtb_acc[2] - rtb_Delay1[2] * rtb_acc[1];
  rtb_fcn5 = rtb_Delay1[2] * rtb_acc[0] - rtb_Delay1[0] * rtb_acc[2];
  b_scale = rtb_Delay1[0] * rtb_acc[1] - rtb_Delay1[1] * rtb_acc[0];
  for (qconj_tmp = 0; qconj_tmp < 9; qconj_tmp++) {
    tmp[qconj_tmp] = URControlParams.ka[qconj_tmp] * rtb_fcn3 /
      URControlParams.g;
    km_0[qconj_tmp] = km[qconj_tmp] / t;
  }

  rtb_fcn3 = rtb_errorVel[1] * URControl_U.mag[2] - rtb_errorVel[2] *
    URControl_U.mag[1];
  t = rtb_errorVel[2] * URControl_U.mag[0] - rtb_errorVel[0] * URControl_U.mag[2];
  scale = rtb_errorVel[0] * URControl_U.mag[1] - rtb_errorVel[1] *
    URControl_U.mag[0];
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    tmp_0[qconj_tmp] = tmp[qconj_tmp + 6] * b_scale + (tmp[qconj_tmp + 3] *
      rtb_fcn5 + tmp[qconj_tmp] * rtb_Delay1_tmp);
    km_1[qconj_tmp] = km_0[qconj_tmp + 6] * scale + (km_0[qconj_tmp + 3] * t +
      km_0[qconj_tmp] * rtb_fcn3);
  }

  rtb_fcn3 = -(R_E[0] * rtb_TmpSignalConversionAtSFun_4 - R_E[1] *
               rtb_TmpSignalConversionAtSFun_5);
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    rtb_u2[qconj_tmp] = ((y_tmp[qconj_tmp + 3] * URControlParams.km2 * -0.0 +
                          URControlParams.km2 * y_tmp[qconj_tmp] * -0.0) +
                         y_tmp[qconj_tmp + 6] * URControlParams.km2 * rtb_fcn3)
      + (tmp_0[qconj_tmp] + km_1[qconj_tmp]);
  }

  /* 'rateCorrectionCF:60' kk = R_O' * mI; */
  /* 'rateCorrectionCF:62' A = [0      -a(3)       a(2); */
  /* 'rateCorrectionCF:63'      a(3)    0         -a(1); */
  /* 'rateCorrectionCF:64'     -a(2)    a(1)       0]; */
  /* 'rateCorrectionCF:66' alphaC = A + URControlParams.ke * (Rc-Rc')/2; */
  tmp[0] = 0.0;
  tmp[3] = -rtb_u2[2];
  tmp[6] = rtb_u2[1];
  tmp[1] = rtb_u2[2];
  tmp[4] = 0.0;
  tmp[7] = -rtb_u2[0];
  tmp[2] = -rtb_u2[1];
  tmp[5] = rtb_u2[0];
  tmp[8] = 0.0;
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    km[3 * qconj_tmp] = (Rc[3 * qconj_tmp] - Rc[qconj_tmp]) * URControlParams.ke
      / 2.0 + tmp[3 * qconj_tmp];
    km_tmp = 3 * qconj_tmp + 1;
    km[km_tmp] = (Rc[km_tmp] - Rc[qconj_tmp + 3]) * URControlParams.ke / 2.0 +
      tmp[km_tmp];
    km_tmp = 3 * qconj_tmp + 2;
    km[km_tmp] = (Rc[km_tmp] - Rc[qconj_tmp + 6]) * URControlParams.ke / 2.0 +
      tmp[km_tmp];
  }

  /* 'rateCorrectionCF:67' alpha = [alphaC(3,2), alphaC(1,3), alphaC(2,1)]'; */
  rtb_u2[0] = km[5];
  rtb_u2[1] = km[6];
  rtb_u2[2] = km[1];

  /* MATLAB Function: '<S21>/MATLAB Function1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator3'
   *  Inport: '<Root>/rates'
   *  MATLAB Function: '<S21>/MATLAB Function11'
   *  Sum: '<S21>/Add2'
   */
  /* :  q_pred = updateQ(omegac, alpha, q_prev, dt); */
  /* 'updateQ:3' rate = omegac - alpha; */
  rtb_Delay1[0] = (URControl_U.rates[0] -
                   URControl_DW.DiscreteTimeIntegrator3_DSTATE[0]) - km[5];
  rtb_Delay1[1] = (URControl_U.rates[1] -
                   URControl_DW.DiscreteTimeIntegrator3_DSTATE[1]) - km[6];

  /* Gain: '<S21>/Gain1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Gain: '<S22>/Gain1'
   *  Gain: '<S7>/Gain3'
   *  Inport: '<Root>/rates'
   */
  rtb_Delay1_tmp = 1.22 * URControl_U.rates[2];

  /* MATLAB Function: '<S21>/MATLAB Function1' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Delay: '<S21>/Delay'
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator3'
   *  Gain: '<S21>/Gain1'
   *  MATLAB Function: '<S21>/MATLAB Function11'
   *  Sum: '<S21>/Add2'
   */
  rtb_Delay1[2] = (rtb_Delay1_tmp - URControl_DW.DiscreteTimeIntegrator3_DSTATE
                   [2]) - km[1];

  /* 'updateQ:5' p = rate(1); */
  /* 'updateQ:5' q = rate(2); */
  /* 'updateQ:5' r = rate(3); */
  /* 'updateQ:7' A = 0.5 * [0 -p -q -r; */
  /* 'updateQ:8'            p  0  r -q; */
  /* 'updateQ:9'            q -r  0  p; */
  /* 'updateQ:10'            r  q -p  0]; */
  /* 'updateQ:11' if norm(rate) > 0.0 */
  rtb_Merge_c_tmp = norm_2e9Xj4lM(rtb_Delay1);
  if (rtb_Merge_c_tmp > 0.0) {
    /* 'updateQ:12' q_pred = (eye(4) * cos(norm(rate)*dt/2) ... */
    /* 'updateQ:13'            + 2/norm(rate)*A * sin(norm(rate)*dt/2))*q_prev'; */
    rtb_TmpSignalConversionAtSFun_4 = rtb_Merge_c_tmp * 0.002 / 2.0;
    t = std::cos(rtb_TmpSignalConversionAtSFun_4);
    rtb_fcn3 = 2.0 / rtb_Merge_c_tmp;
    rtb_fcn5 = std::sin(rtb_TmpSignalConversionAtSFun_4);
    rtb_fcn3_0[0] = rtb_fcn3 * 0.0 * rtb_fcn5;
    b_scale = 0.5 * -rtb_Delay1[0];
    rtb_fcn3_0[4] = b_scale * rtb_fcn3 * rtb_fcn5;
    rtb_TmpSignalConversionAtSFun_5 = 0.5 * -rtb_Delay1[1];
    rtb_fcn3_0[8] = rtb_TmpSignalConversionAtSFun_5 * rtb_fcn3 * rtb_fcn5;
    rtb_TmpSignalConversionAtSFun_4 = 0.5 * -rtb_Delay1[2];
    rtb_fcn3_0[12] = rtb_TmpSignalConversionAtSFun_4 * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[1] = 0.5 * rtb_Delay1[0] * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[5] = rtb_fcn3 * 0.0 * rtb_fcn5;
    scale = 0.5 * rtb_Delay1[2] * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[9] = scale;
    rtb_fcn3_0[13] = rtb_TmpSignalConversionAtSFun_5 * rtb_fcn3 * rtb_fcn5;
    rtb_TmpSignalConversionAtSFun_5 = 0.5 * rtb_Delay1[1] * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[2] = rtb_TmpSignalConversionAtSFun_5;
    rtb_fcn3_0[6] = rtb_TmpSignalConversionAtSFun_4 * rtb_fcn3 * rtb_fcn5;
    rtb_TmpSignalConversionAtSFun_4 = rtb_fcn3 * 0.0 * rtb_fcn5;
    rtb_fcn3_0[10] = rtb_TmpSignalConversionAtSFun_4;
    rtb_fcn3_0[14] = 0.5 * rtb_Delay1[0] * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[3] = scale;
    rtb_fcn3_0[7] = rtb_TmpSignalConversionAtSFun_5;
    rtb_fcn3_0[11] = b_scale * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[15] = rtb_TmpSignalConversionAtSFun_4;
    for (qconj_tmp = 0; qconj_tmp < 16; qconj_tmp++) {
      b_a_1[qconj_tmp] = static_cast<real_T>(b_a[qconj_tmp]) * t +
        rtb_fcn3_0[qconj_tmp];
    }

    for (qconj_tmp = 0; qconj_tmp < 4; qconj_tmp++) {
      rtb_fcn3 = b_a_1[qconj_tmp + 12] * URControl_DW.Delay_DSTATE[3] +
        (b_a_1[qconj_tmp + 8] * URControl_DW.Delay_DSTATE[2] + (b_a_1[qconj_tmp
          + 4] * URControl_DW.Delay_DSTATE[1] + b_a_1[qconj_tmp] *
          URControl_DW.Delay_DSTATE[0]));
      qconj[qconj_tmp] = rtb_fcn3;
    }
  } else {
    /* 'updateQ:14' else */
    /* 'updateQ:15' q_pred = q_prev'; */
    qconj[0] = URControl_DW.Delay_DSTATE[0];
    qconj[1] = URControl_DW.Delay_DSTATE[1];
    qconj[2] = URControl_DW.Delay_DSTATE[2];
    qconj[3] = URControl_DW.Delay_DSTATE[3];
  }

  /* Fcn: '<S117>/q1' */
  rtb_TmpSignalConversionAtSFun_5 = rtb_TmpSignalConversionAtSFun_3 * 0.0 -
    rtb_Product1_h * 0.0;

  /* Fcn: '<S117>/q2' */
  rtb_TmpSignalConversionAtSFun_4 = rtb_TmpSignalConversionAtSFun_3 * 0.0 +
    rtb_Product1_h * 0.0;

  /* Fcn: '<S117>/q3' */
  t = rtb_Product1_h - rtb_TmpSignalConversionAtSFun_3 * 0.0 * 0.0;

  /* Sum: '<S97>/Sum' incorporates:
   *  Product: '<S97>/Product'
   *  Product: '<S97>/Product1'
   *  Product: '<S97>/Product2'
   *  Product: '<S97>/Product3'
   */
  b_scale = ((rtb_TmpSignalConversionAtSFun_2 * qconj[0] -
              rtb_TmpSignalConversionAtSFun_5 * qconj[1]) -
             rtb_TmpSignalConversionAtSFun_4 * qconj[2]) - t * qconj[3];

  /* Sum: '<S98>/Sum' incorporates:
   *  Product: '<S98>/Product'
   *  Product: '<S98>/Product1'
   *  Product: '<S98>/Product2'
   *  Product: '<S98>/Product3'
   */
  rtb_fcn3 = ((rtb_TmpSignalConversionAtSFun_2 * qconj[1] +
               rtb_TmpSignalConversionAtSFun_5 * qconj[0]) +
              rtb_TmpSignalConversionAtSFun_4 * qconj[3]) - t * qconj[2];

  /* Sum: '<S99>/Sum' incorporates:
   *  Product: '<S99>/Product'
   *  Product: '<S99>/Product1'
   *  Product: '<S99>/Product2'
   *  Product: '<S99>/Product3'
   */
  rtb_fcn5 = ((rtb_TmpSignalConversionAtSFun_2 * qconj[2] -
               rtb_TmpSignalConversionAtSFun_5 * qconj[3]) +
              rtb_TmpSignalConversionAtSFun_4 * qconj[0]) + t * qconj[1];

  /* Product: '<S100>/Product' */
  rtb_TmpSignalConversionAtSFun_2 *= qconj[3];

  /* Product: '<S100>/Product1' */
  rtb_TmpSignalConversionAtSFun_5 *= qconj[2];

  /* Product: '<S100>/Product2' */
  rtb_TmpSignalConversionAtSFun_4 *= qconj[1];

  /* Product: '<S100>/Product3' */
  t *= qconj[0];

  /* Sum: '<S100>/Sum' */
  rtb_TmpSignalConversionAtSFun_2 = ((rtb_TmpSignalConversionAtSFun_2 +
    rtb_TmpSignalConversionAtSFun_5) - rtb_TmpSignalConversionAtSFun_4) + t;

  /* Sqrt: '<S115>/sqrt' incorporates:
   *  Product: '<S116>/Product'
   *  Product: '<S116>/Product1'
   *  Product: '<S116>/Product2'
   *  Product: '<S116>/Product3'
   *  Sum: '<S116>/Sum'
   */
  scale = std::sqrt(((b_scale * b_scale + rtb_fcn3 * rtb_fcn3) + rtb_fcn5 *
                     rtb_fcn5) + rtb_TmpSignalConversionAtSFun_2 *
                    rtb_TmpSignalConversionAtSFun_2);

  /* Product: '<S110>/Product' */
  t = b_scale / scale;

  /* Product: '<S110>/Product1' */
  rtb_TmpSignalConversionAtSFun_5 = rtb_fcn3 / scale;

  /* Product: '<S110>/Product2' */
  rtb_Product1_h = rtb_fcn5 / scale;

  /* Product: '<S110>/Product3' */
  scale = rtb_TmpSignalConversionAtSFun_2 / scale;

  /* Fcn: '<S55>/fcn1' */
  rtb_TmpSignalConversionAtSFun_4 = (rtb_TmpSignalConversionAtSFun_5 *
    rtb_Product1_h + t * scale) * 2.0;

  /* Fcn: '<S55>/fcn2' incorporates:
   *  Fcn: '<S55>/fcn5'
   */
  rtb_TmpSignalConversionAtSFun_3 = t * t;
  rtb_Merge_c_tmp = rtb_TmpSignalConversionAtSFun_5 *
    rtb_TmpSignalConversionAtSFun_5;
  rtb_Gain3_p_tmp = rtb_Product1_h * rtb_Product1_h;
  rtb_Gain3_p_tmp_0 = scale * scale;

  /* Trigonometry: '<S109>/Trigonometric Function1' incorporates:
   *  Fcn: '<S55>/fcn2'
   */
  rtb_Gain3_d[0] = rt_atan2d_snf(rtb_TmpSignalConversionAtSFun_4,
    ((rtb_TmpSignalConversionAtSFun_3 + rtb_Merge_c_tmp) - rtb_Gain3_p_tmp) -
    rtb_Gain3_p_tmp_0);

  /* Fcn: '<S55>/fcn3' */
  absxk = (rtb_TmpSignalConversionAtSFun_5 * scale - t * rtb_Product1_h) * -2.0;

  /* If: '<S111>/If' incorporates:
   *  Constant: '<S112>/Constant'
   *  Constant: '<S113>/Constant'
   */
  if (absxk > 1.0) {
    /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    rtb_TmpSignalConversionAtSFun_4 = 1.0;

    /* End of Outputs for SubSystem: '<S111>/If Action Subsystem' */
  } else if (absxk < -1.0) {
    /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */
    rtb_TmpSignalConversionAtSFun_4 = 1.0;

    /* End of Outputs for SubSystem: '<S111>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S114>/Action Port'
     */
    URControl_IfActionSubsystem2(absxk, &rtb_TmpSignalConversionAtSFun_4);

    /* End of Outputs for SubSystem: '<S111>/If Action Subsystem2' */
  }

  /* End of If: '<S111>/If' */

  /* Trigonometry: '<S109>/trigFcn' */
  if (rtb_TmpSignalConversionAtSFun_4 > 1.0) {
    rtb_TmpSignalConversionAtSFun_4 = 1.0;
  } else {
    if (rtb_TmpSignalConversionAtSFun_4 < -1.0) {
      rtb_TmpSignalConversionAtSFun_4 = -1.0;
    }
  }

  rtb_Gain3_d[1] = std::asin(rtb_TmpSignalConversionAtSFun_4);

  /* End of Trigonometry: '<S109>/trigFcn' */

  /* DSPFlip: '<S21>/Flip' incorporates:
   *  Fcn: '<S55>/fcn4'
   *  Fcn: '<S55>/fcn5'
   *  Trigonometry: '<S109>/Trigonometric Function3'
   */
  URControl_B.Euler_flip[0] = rt_atan2d_snf((rtb_Product1_h * scale + t *
    rtb_TmpSignalConversionAtSFun_5) * 2.0, ((rtb_TmpSignalConversionAtSFun_3 -
    rtb_Merge_c_tmp) - rtb_Gain3_p_tmp) + rtb_Gain3_p_tmp_0);
  URControl_B.Euler_flip[2] = rtb_Gain3_d[0];
  URControl_B.Euler_flip[1] = rtb_Gain3_d[1];
  URControl_B.Euler_flip[1] = rtb_Gain3_d[1];

  /* Delay: '<Root>/Delay' incorporates:
   *  Constant: '<Root>/delay'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  Inport: '<Root>/fail_flag'
   */
  rtb_Merge_c_tmp = std::floor(URControlParams.fail_delay * 500.0);
  if ((rtb_Merge_c_tmp < 1.0) || rtIsNaN(rtb_Merge_c_tmp)) {
    scale = URControl_U.fail_flag;
  } else {
    if (rtb_Merge_c_tmp > 1000.0) {
      tmp_1 = 1000U;
    } else {
      if (rtIsNaN(rtb_Merge_c_tmp) || rtIsInf(rtb_Merge_c_tmp)) {
        rtb_Merge_c_tmp = 0.0;
      } else {
        rtb_Merge_c_tmp = std::fmod(rtb_Merge_c_tmp, 4.294967296E+9);
      }

      tmp_1 = rtb_Merge_c_tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
        (static_cast<uint32_T>(-rtb_Merge_c_tmp))) : static_cast<uint32_T>
        (rtb_Merge_c_tmp);
    }

    scale = URControl_DW.Delay_DSTATE_j[1000U - tmp_1];
  }

  /* End of Delay: '<Root>/Delay' */

  /* MATLAB Function: '<S7>/basic estimators' incorporates:
   *  BusCreator: '<S7>/BusConversion_InsertedFor_basic estimators_at_inport_0'
   *  DataStoreRead: '<S30>/Data Store Read'
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  DataTypeConversion: '<Root>/Data Type Conversion7'
   *  Inport: '<Root>/att'
   *  Inport: '<Root>/esc_rpm'
   *  Inport: '<Root>/fail_flag'
   *  Inport: '<Root>/pos'
   *  Inport: '<Root>/rates'
   *  Inport: '<Root>/vel'
   */
  /* :  [State, DAQ] = UREstimators(sensors, State, DAQ, pos_ekf, vel_ekf, att_ekf,att_CF, fail_id_slow, fail_id_quick, psi_mag, par, URControlParams); */
  absxk = URControl_U.fail_flag;

  /* 'UREstimators:3' if isempty(omegaFilter) */
  if (!URControl_DW.omegaFilter_not_empty) {
    /* 'UREstimators:3' omegaFilter = LPFilter(URpar.est_omegaFilterT, [0,0,0], 40, -40); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.omegaFilter.value[0] = 0.0;
    URControl_DW.omegaFilter.value[1] = 0.0;
    URControl_DW.omegaFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.omegaFilter.maxLim = 40.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.omegaFilter.minLim = -40.0;
    URControl_DW.omegaFilter_not_empty = true;
  }

  /* 'UREstimators:4' if isempty(posFilter) */
  if (!URControl_DW.posFilter_not_empty) {
    /* 'UREstimators:4' posFilter = LPFilter(URpar.est_posFilterT, [0,0,0], inf, -inf); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.posFilter.value[0] = 0.0;
    URControl_DW.posFilter.value[1] = 0.0;
    URControl_DW.posFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.posFilter.maxLim = (rtInf);

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.posFilter.minLim = (rtMinusInf);
    URControl_DW.posFilter_not_empty = true;
  }

  /* 'UREstimators:5' if isempty(velFilter) */
  if (!URControl_DW.velFilter_not_empty) {
    /* 'UREstimators:5' velFilter = LPFilter(URpar.est_velFilterT, [0,0,0], 20, -20); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.velFilter.value[0] = 0.0;
    URControl_DW.velFilter.value[1] = 0.0;
    URControl_DW.velFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.velFilter.maxLim = 20.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.velFilter.minLim = -20.0;
    URControl_DW.velFilter_not_empty = true;
  }

  /* 'UREstimators:6' if isempty(accFilter) */
  if (!URControl_DW.accFilter_not_empty) {
    /* 'UREstimators:6' accFilter = LPFilter(URpar.est_accFilterT, [0,0,0], 40, -40); */
    /* 'LPFilter:14' obj.filterT = filterT; */
    URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

    /* 'LPFilter:15' obj.value = initValue; */
    URControl_DW.accFilter.value[0] = 0.0;
    URControl_DW.accFilter.value[1] = 0.0;
    URControl_DW.accFilter.value[2] = 0.0;

    /* 'LPFilter:16' obj.maxLim = maxLim; */
    URControl_DW.accFilter.maxLim = 40.0;

    /* 'LPFilter:17' obj.minLim = minLim; */
    URControl_DW.accFilter.minLim = -40.0;
    URControl_DW.accFilter_not_empty = true;
  }

  /* 'UREstimators:7' if isempty(failProt) */
  /* 'UREstimators:9' state.acc = sensors.acc; */
  URControl_DW.State.acc[0] = rtb_acc[0];
  URControl_DW.State.acc[1] = rtb_acc[1];
  URControl_DW.State.acc[2] = rtb_acc[2];

  /* 'UREstimators:10' if URpar.est_useEKF == 1 */
  if (URControlParams.est_useEKF == 1.0) {
    /* Outputs for Atomic SubSystem: '<S24>/Output' */
    /* 'UREstimators:11' state.vel = vel_est'; */
    /* 'UREstimators:12' state.pos = pos_est'; */
    /* 'UREstimators:13' state.att = (mod(att_est + pi, 2*pi) - pi)'; */
    URControl_DW.State.vel[0] = URControl_DW.x[3];
    URControl_DW.State.pos[0] = URControl_DW.x[0];

    /* End of Outputs for SubSystem: '<S24>/Output' */
    if (rtIsNaN(URControl_B.Euler_flip_m[0] + 3.1415926535897931) || rtIsInf
        (URControl_B.Euler_flip_m[0] + 3.1415926535897931)) {
      t = (rtNaN);
    } else if (URControl_B.Euler_flip_m[0] + 3.1415926535897931 == 0.0) {
      t = 0.0;
    } else {
      t = std::fmod(URControl_B.Euler_flip_m[0] + 3.1415926535897931,
                    6.2831853071795862);
      rEQ0 = (t == 0.0);
      if (!rEQ0) {
        rtb_TmpSignalConversionAtSFun_3 = std::abs((URControl_B.Euler_flip_m[0]
          + 3.1415926535897931) / 6.2831853071795862);
        rEQ0 = (std::abs(rtb_TmpSignalConversionAtSFun_3 - std::floor
                         (rtb_TmpSignalConversionAtSFun_3 + 0.5)) <=
                2.2204460492503131E-16 * rtb_TmpSignalConversionAtSFun_3);
      }

      if (rEQ0) {
        t = 0.0;
      } else {
        if (URControl_B.Euler_flip_m[0] + 3.1415926535897931 < 0.0) {
          t += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[0] = t - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S24>/Output' */
    URControl_DW.State.vel[1] = URControl_DW.x[4];
    URControl_DW.State.pos[1] = URControl_DW.x[1];

    /* End of Outputs for SubSystem: '<S24>/Output' */
    if (rtIsNaN(URControl_B.Euler_flip_m[1] + 3.1415926535897931) || rtIsInf
        (URControl_B.Euler_flip_m[1] + 3.1415926535897931)) {
      t = (rtNaN);
    } else if (URControl_B.Euler_flip_m[1] + 3.1415926535897931 == 0.0) {
      t = 0.0;
    } else {
      t = std::fmod(URControl_B.Euler_flip_m[1] + 3.1415926535897931,
                    6.2831853071795862);
      rEQ0 = (t == 0.0);
      if (!rEQ0) {
        rtb_TmpSignalConversionAtSFun_3 = std::abs((URControl_B.Euler_flip_m[1]
          + 3.1415926535897931) / 6.2831853071795862);
        rEQ0 = (std::abs(rtb_TmpSignalConversionAtSFun_3 - std::floor
                         (rtb_TmpSignalConversionAtSFun_3 + 0.5)) <=
                2.2204460492503131E-16 * rtb_TmpSignalConversionAtSFun_3);
      }

      if (rEQ0) {
        t = 0.0;
      } else {
        if (URControl_B.Euler_flip_m[1] + 3.1415926535897931 < 0.0) {
          t += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[1] = t - 3.1415926535897931;

    /* Outputs for Atomic SubSystem: '<S24>/Output' */
    URControl_DW.State.vel[2] = URControl_DW.x[5];
    URControl_DW.State.pos[2] = URControl_DW.x[2];

    /* End of Outputs for SubSystem: '<S24>/Output' */
    if (rtIsNaN(URControl_B.Euler_flip_m[2] + 3.1415926535897931) || rtIsInf
        (URControl_B.Euler_flip_m[2] + 3.1415926535897931)) {
      t = (rtNaN);
    } else if (URControl_B.Euler_flip_m[2] + 3.1415926535897931 == 0.0) {
      t = 0.0;
    } else {
      t = std::fmod(URControl_B.Euler_flip_m[2] + 3.1415926535897931,
                    6.2831853071795862);
      rEQ0 = (t == 0.0);
      if (!rEQ0) {
        rtb_TmpSignalConversionAtSFun_3 = std::abs((URControl_B.Euler_flip_m[2]
          + 3.1415926535897931) / 6.2831853071795862);
        rEQ0 = (std::abs(rtb_TmpSignalConversionAtSFun_3 - std::floor
                         (rtb_TmpSignalConversionAtSFun_3 + 0.5)) <=
                2.2204460492503131E-16 * rtb_TmpSignalConversionAtSFun_3);
      }

      if (rEQ0) {
        t = 0.0;
      } else {
        if (URControl_B.Euler_flip_m[2] + 3.1415926535897931 < 0.0) {
          t += 6.2831853071795862;
        }
      }
    }

    URControl_DW.State.att[2] = t - 3.1415926535897931;
  } else {
    /* 'UREstimators:14' else */
    /* 'UREstimators:15' state.vel = sensors.vel; */
    /* 'UREstimators:16' state.pos = sensors.pos; */
    /* 'UREstimators:17' state.att = sensors.att; */
    URControl_DW.State.vel[0] = URControl_U.vel[0];
    URControl_DW.State.pos[0] = URControl_U.pos[0];
    URControl_DW.State.att[0] = URControl_U.att[0];
    URControl_DW.State.vel[1] = URControl_U.vel[1];
    URControl_DW.State.pos[1] = URControl_U.pos[1];
    URControl_DW.State.att[1] = URControl_U.att[1];
    URControl_DW.State.vel[2] = URControl_U.vel[2];
    URControl_DW.State.pos[2] = URControl_U.pos[2];
    URControl_DW.State.att[2] = URControl_U.att[2];
  }

  /* 'UREstimators:20' if URpar.est_useCF == 1 */
  if (URControlParams.est_useCF == 1.0) {
    /* 'UREstimators:21' state.att(1:2) = att_CF(1:2)'; */
    URControl_DW.State.att[0] = URControl_B.Euler_flip[0];
    URControl_DW.State.att[1] = URControl_B.Euler_flip[1];
  }

  /* 'UREstimators:24' if URpar.est_useMag == 1 */
  if (URControlParams.est_useMag == 1.0) {
    /* 'UREstimators:26' state.att(3) =  psi_mag; */
    URControl_DW.State.att[2] = URControl_B.sf_MATLABFunction2.lambda;
  }

  /* 'UREstimators:29' state.omega = sensors.omega; */
  URControl_DW.State.omega[0] = URControl_U.rates[0];
  URControl_DW.State.omega[1] = URControl_U.rates[1];
  URControl_DW.State.omega[2] = URControl_U.rates[2];

  /* 'UREstimators:31' omegaFilter.updateFilterT(URpar.est_omegaFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.omegaFilter.filterT = URControlParams.est_omegaFilterT;

  /* 'UREstimators:32' omegaFilter.update(sensors.omega); */
  URControl_LPFilter_update(&URControl_DW.omegaFilter, rtb_omega);

  /* 'UREstimators:33' state.omegaf = omegaFilter.value; */
  URControl_DW.State.omegaf[0] = URControl_DW.omegaFilter.value[0];
  URControl_DW.State.omegaf[1] = URControl_DW.omegaFilter.value[1];
  URControl_DW.State.omegaf[2] = URControl_DW.omegaFilter.value[2];

  /* 'UREstimators:35' posFilter.updateFilterT(URpar.est_posFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.posFilter.filterT = URControlParams.est_posFilterT;

  /* 'UREstimators:36' posFilter.update(state.pos); */
  URControl_LPFilter_update(&URControl_DW.posFilter, URControl_DW.State.pos);

  /* 'UREstimators:37' state.posf = posFilter.value; */
  URControl_DW.State.posf[0] = URControl_DW.posFilter.value[0];
  URControl_DW.State.posf[1] = URControl_DW.posFilter.value[1];
  URControl_DW.State.posf[2] = URControl_DW.posFilter.value[2];

  /* 'UREstimators:39' velFilter.updateFilterT(URpar.est_velFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.velFilter.filterT = URControlParams.est_velFilterT;

  /* 'UREstimators:40' velFilter.update(state.vel); */
  URControl_LPFilter_update(&URControl_DW.velFilter, URControl_DW.State.vel);

  /* 'UREstimators:41' state.velf = velFilter.value; */
  URControl_DW.State.velf[0] = URControl_DW.velFilter.value[0];
  URControl_DW.State.velf[1] = URControl_DW.velFilter.value[1];
  URControl_DW.State.velf[2] = URControl_DW.velFilter.value[2];

  /* 'UREstimators:43' accFilter.updateFilterT(URpar.est_accFilterT); */
  /* 'LPFilter:26' obj.filterT = filterT; */
  URControl_DW.accFilter.filterT = URControlParams.est_accFilterT;

  /* 'UREstimators:44' accFilter.update(state.acc); */
  URControl_LPFilter_update(&URControl_DW.accFilter, URControl_DW.State.acc);

  /* 'UREstimators:45' state.accf = accFilter.value; */
  URControl_DW.State.accf[0] = URControl_DW.accFilter.value[0];
  URControl_DW.State.accf[1] = URControl_DW.accFilter.value[1];
  URControl_DW.State.accf[2] = URControl_DW.accFilter.value[2];

  /* 'UREstimators:47' state.wRotor = sensors.wRotor/30*pi; */
  URControl_DW.State.wRotor[0] = static_cast<real_T>(URControl_U.esc_rpm[0]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[1] = static_cast<real_T>(URControl_U.esc_rpm[1]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[2] = static_cast<real_T>(URControl_U.esc_rpm[2]) /
    30.0 * 3.1415926535897931;
  URControl_DW.State.wRotor[3] = static_cast<real_T>(URControl_U.esc_rpm[3]) /
    30.0 * 3.1415926535897931;

  /* 'UREstimators:49' phi = state.att(1); */
  /* 'UREstimators:50' theta = state.att(2); */
  /* 'UREstimators:51' psi = state.att(3); */
  /* 'UREstimators:54' R_IB = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* 'UREstimators:55'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* 'UREstimators:56'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  /* 'UREstimators:58' state.n = (R_IB'*[0;0;-1])'; */
  rtb_Product1_h = std::cos(URControl_DW.State.att[1]);
  rtb_TmpSignalConversionAtSFun_3 = std::cos(URControl_DW.State.att[2]);
  km[0] = rtb_Product1_h * rtb_TmpSignalConversionAtSFun_3;
  t = std::sin(URControl_DW.State.att[2]);
  km[1] = rtb_Product1_h * t;
  rtb_TmpSignalConversionAtSFun_5 = std::sin(URControl_DW.State.att[1]);
  km[2] = -rtb_TmpSignalConversionAtSFun_5;
  rtb_TmpSignalConversionAtSFun_4 = std::sin(URControl_DW.State.att[0]);
  rtb_Merge_c_tmp = rtb_TmpSignalConversionAtSFun_4 *
    rtb_TmpSignalConversionAtSFun_5;
  rtb_Gain3_p_tmp = std::cos(URControl_DW.State.att[0]);
  km[3] = rtb_Merge_c_tmp * rtb_TmpSignalConversionAtSFun_3 - rtb_Gain3_p_tmp *
    t;
  km[4] = rtb_Merge_c_tmp * t + rtb_Gain3_p_tmp *
    rtb_TmpSignalConversionAtSFun_3;
  km[5] = rtb_TmpSignalConversionAtSFun_4 * rtb_Product1_h;
  rtb_TmpSignalConversionAtSFun_5 *= rtb_Gain3_p_tmp;
  km[6] = rtb_TmpSignalConversionAtSFun_5 * rtb_TmpSignalConversionAtSFun_3 +
    rtb_TmpSignalConversionAtSFun_4 * t;
  km[7] = rtb_TmpSignalConversionAtSFun_5 * t - rtb_TmpSignalConversionAtSFun_4 *
    rtb_TmpSignalConversionAtSFun_3;
  km[8] = rtb_Gain3_p_tmp * rtb_Product1_h;
  for (qconj_tmp = 0; qconj_tmp < 3; qconj_tmp++) {
    URControl_DW.State.n[qconj_tmp] = 0.0;
    URControl_DW.State.n[qconj_tmp] += km[qconj_tmp] * 0.0;
    URControl_DW.State.n[qconj_tmp] += km[qconj_tmp + 3] * 0.0;
    URControl_DW.State.n[qconj_tmp] += -km[qconj_tmp + 6];
  }

  /* 'UREstimators:63' dummy = par.URC.R_xy_uv*[state.omega(1); state.omega(2)]; */
  /* 'UREstimators:64' uRot = dummy(1); */
  /* 'UREstimators:64' vRot = dummy(2); */
  /* 'UREstimators:65' state.omegaUV = [uRot,vRot,state.omega(3)]; */
  URControl_DW.State.omegaUV[0] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[0] *
    URControl_DW.State.omega[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[2] *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[1] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[1] *
    URControl_DW.State.omega[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[3] *
    URControl_DW.State.omega[1];
  URControl_DW.State.omegaUV[2] = URControl_DW.State.omega[2];

  /* 'UREstimators:67' dummy = par.URC.R_xy_uv*[state.omegaf(1); state.omegaf(2)]; */
  /* 'UREstimators:68' uRot = dummy(1); */
  /* 'UREstimators:68' vRot = dummy(2); */
  /* 'UREstimators:69' state.omegafUV = [uRot,vRot,state.omegaf(3)]; */
  URControl_DW.State.omegafUV[0] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[0] *
    URControl_DW.State.omegaf[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[2] *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[1] =
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[1] *
    URControl_DW.State.omegaf[0] +
    URControl_ConstP.basicestimators_par.URC.R_xy_uv[3] *
    URControl_DW.State.omegaf[1];
  URControl_DW.State.omegafUV[2] = URControl_DW.State.omegaf[2];

  /* 'UREstimators:72' if URpar.fail_altProt && state.pos(3) > URpar.fail_altThresh && fail_id_slow > 0 && sum(state.wRotor) > 400*4 */
  if ((URControlParams.fail_altProt != 0.0) && (URControl_DW.State.pos[2] >
       URControlParams.fail_altThresh) && (scale > 0.0) &&
      (((URControl_DW.State.wRotor[0] + URControl_DW.State.wRotor[1]) +
        URControl_DW.State.wRotor[2]) + URControl_DW.State.wRotor[3] > 1600.0))
  {
    /* 'UREstimators:73' failProt = 1; */
    URControl_DW.failProt = 1.0;
  }

  /* 'UREstimators:76' if ~(fail_id_slow > 0) */
  if (!(scale > 0.0)) {
    /* 'UREstimators:77' failProt = 0; */
    URControl_DW.failProt = 0.0;
  }

  /* 'UREstimators:80' if failProt */
  if (URControl_DW.failProt != 0.0) {
    /* 'UREstimators:81' fail_id_slow = 0; */
    scale = 0.0;

    /* 'UREstimators:82' fail_id_quick = 0; */
    absxk = 0.0;
  }

  /* 'UREstimators:85' FMax = URpar.wMax^2*URpar.k0*ones(1,4); */
  t = URControlParams.wMax * URControlParams.wMax * URControlParams.k0;
  qconj[0] = t;
  qconj[1] = t;
  qconj[2] = t;
  qconj[3] = t;

  /* 'UREstimators:86' FMin = URpar.wMin^2*URpar.k0*ones(1,4); */
  t = URControlParams.wMin * URControlParams.wMin * URControlParams.k0;
  FMin[0] = t;
  FMin[1] = t;
  FMin[2] = t;
  FMin[3] = t;

  /* 'UREstimators:88' if fail_id_slow > 0 */
  if (scale > 0.0) {
    /* 'UREstimators:89' FMax(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    rtb_Product1_h = URControlParams.fail_wRot * URControlParams.fail_wRot *
      URControlParams.k0;
    qconj_tmp = static_cast<int32_T>(scale) - 1;
    qconj[qconj_tmp] = rtb_Product1_h;

    /* 'UREstimators:90' FMin(fail_id_slow) = URpar.fail_wRot^2*URpar.k0; */
    FMin[qconj_tmp] = rtb_Product1_h;
  }

  /* 'UREstimators:92' state.FMax = FMax; */
  /* 'UREstimators:93' state.FMin = FMin; */
  URControl_DW.State.FMax[0] = qconj[0];
  URControl_DW.State.FMin[0] = FMin[0];
  URControl_DW.State.FMax[1] = qconj[1];
  URControl_DW.State.FMin[1] = FMin[1];
  URControl_DW.State.FMax[2] = qconj[2];
  URControl_DW.State.FMin[2] = FMin[2];
  URControl_DW.State.FMax[3] = qconj[3];
  URControl_DW.State.FMin[3] = FMin[3];

  /* 'UREstimators:95' state.fail_id = fail_id_slow; */
  URControl_DW.State.fail_id = scale;

  /* 'UREstimators:96' state.fail_id_quick = fail_id_quick; */
  URControl_DW.State.fail_id_quick = absxk;

  /* 'UREstimators:99' daq.pos = state.pos; */
  /* 'UREstimators:100' daq.posRaw = sensors.pos; */
  /* 'UREstimators:101' daq.vel = state.vel; */
  /* 'UREstimators:102' daq.att = state.att; */
  /* 'UREstimators:103' daq.attRaw = sensors.att; */
  /* 'UREstimators:104' daq.acc = state.accf; */
  /* 'UREstimators:105' daq.accRaw = sensors.acc; */
  /* 'UREstimators:106' daq.n = state.n; */
  /* 'UREstimators:107' daq.omega = state.omega; */
  /* 'UREstimators:108' daq.omegaf = state.omegaf; */
  /* 'UREstimators:109' daq.omegaUV = state.omegaUV; */
  /* 'UREstimators:110' daq.omegafUV = state.omegafUV; */
  for (Rc_tmp = 0; Rc_tmp < 3; Rc_tmp++) {
    URControl_SharedDSM.DAQ.pos[Rc_tmp] = URControl_DW.State.pos[Rc_tmp];
    URControl_SharedDSM.DAQ.posRaw[Rc_tmp] = rtb_pos[Rc_tmp];
    URControl_SharedDSM.DAQ.vel[Rc_tmp] = URControl_DW.State.vel[Rc_tmp];
    URControl_SharedDSM.DAQ.att[Rc_tmp] = URControl_DW.State.att[Rc_tmp];
    URControl_SharedDSM.DAQ.attRaw[Rc_tmp] = rtb_att[Rc_tmp];
    URControl_SharedDSM.DAQ.acc[Rc_tmp] = URControl_DW.State.accf[Rc_tmp];
    URControl_SharedDSM.DAQ.accRaw[Rc_tmp] = rtb_acc[Rc_tmp];
    URControl_SharedDSM.DAQ.n[Rc_tmp] = 0.0;
    URControl_SharedDSM.DAQ.n[Rc_tmp] += km[Rc_tmp] * 0.0;
    URControl_SharedDSM.DAQ.n[Rc_tmp] += km[Rc_tmp + 3] * 0.0;
    URControl_SharedDSM.DAQ.n[Rc_tmp] += -km[Rc_tmp + 6];
    URControl_SharedDSM.DAQ.omega[Rc_tmp] = URControl_DW.State.omega[Rc_tmp];
    URControl_SharedDSM.DAQ.omegaf[Rc_tmp] = URControl_DW.State.omegaf[Rc_tmp];
    URControl_SharedDSM.DAQ.omegaUV[Rc_tmp] = URControl_DW.State.omegaUV[Rc_tmp];
    URControl_SharedDSM.DAQ.omegafUV[Rc_tmp] =
      URControl_DW.State.omegafUV[Rc_tmp];
  }

  /* 'UREstimators:111' daq.wRotor = state.wRotor; */
  /* 'UREstimators:112' daq.FMax = state.FMax; */
  /* 'UREstimators:113' daq.FMin = state.FMin; */
  URControl_SharedDSM.DAQ.wRotor[0] = URControl_DW.State.wRotor[0];
  URControl_SharedDSM.DAQ.FMax[0] = qconj[0];
  URControl_SharedDSM.DAQ.FMin[0] = FMin[0];
  URControl_SharedDSM.DAQ.wRotor[1] = URControl_DW.State.wRotor[1];
  URControl_SharedDSM.DAQ.FMax[1] = qconj[1];
  URControl_SharedDSM.DAQ.FMin[1] = FMin[1];
  URControl_SharedDSM.DAQ.wRotor[2] = URControl_DW.State.wRotor[2];
  URControl_SharedDSM.DAQ.FMax[2] = qconj[2];
  URControl_SharedDSM.DAQ.FMin[2] = FMin[2];
  URControl_SharedDSM.DAQ.wRotor[3] = URControl_DW.State.wRotor[3];
  URControl_SharedDSM.DAQ.FMax[3] = qconj[3];
  URControl_SharedDSM.DAQ.FMin[3] = FMin[3];

  /* 'UREstimators:114' daq.uvDot_max = state.uvDot_max; */
  /* 'UREstimators:115' daq.uvDot_min = state.uvDot_min; */
  /* 'UREstimators:116' daq.uv_max = state.uv_max; */
  /* 'UREstimators:117' daq.uv_min = state.uv_min; */
  URControl_SharedDSM.DAQ.uvDot_max[0] = URControl_DW.State.uvDot_max[0];
  URControl_SharedDSM.DAQ.uvDot_min[0] = URControl_DW.State.uvDot_min[0];
  URControl_SharedDSM.DAQ.uv_max[0] = URControl_DW.State.uv_max[0];
  URControl_SharedDSM.DAQ.uv_min[0] = URControl_DW.State.uv_min[0];
  URControl_SharedDSM.DAQ.uvDot_max[1] = URControl_DW.State.uvDot_max[1];
  URControl_SharedDSM.DAQ.uvDot_min[1] = URControl_DW.State.uvDot_min[1];
  URControl_SharedDSM.DAQ.uv_max[1] = URControl_DW.State.uv_max[1];
  URControl_SharedDSM.DAQ.uv_min[1] = URControl_DW.State.uv_min[1];

  /* :  stateOut = State; */
  rtb_stateOut = URControl_DW.State;

  /* End of MATLAB Function: '<S7>/basic estimators' */

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S8>/Time constant'
   *  Sum: '<S8>/Sum1'
   */
  rEQ0 = (1.0 - URControl_B.Probe[0] <= 0.0);

  /* DiscreteIntegrator: '<S11>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING != 0) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  if (rEQ0 || (URControl_DW.Integrator_PrevResetState != 0)) {
    URControl_DW.Integrator_DSTATE[0] = URControl_U.pos_sp[0];
    URControl_DW.Integrator_DSTATE[1] = URControl_U.pos_sp[1];
    URControl_DW.Integrator_DSTATE[2] = URControl_U.pos_sp[2];
  }

  rtb_Integrator[0] = URControl_DW.Integrator_DSTATE[0];
  rtb_Integrator[1] = URControl_DW.Integrator_DSTATE[1];
  rtb_Integrator[2] = URControl_DW.Integrator_DSTATE[2];

  /* End of DiscreteIntegrator: '<S11>/Integrator' */

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S12>/Time constant'
   *  Constant: '<S14>/Constant'
   *  Sum: '<S12>/Sum1'
   */
  rtb_Compare_p2 = (1.0 - URControl_B.Probe_d[0] <= 0.0);

  /* DiscreteIntegrator: '<S15>/Integrator' incorporates:
   *  Inport: '<Root>/yaw_sp'
   */
  if (URControl_DW.Integrator_IC_LOADING_a != 0) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  if (rtb_Compare_p2 || (URControl_DW.Integrator_PrevResetState_i != 0)) {
    URControl_DW.Integrator_DSTATE_i = URControl_U.yaw_sp;
  }

  rtb_Integrator_g = URControl_DW.Integrator_DSTATE_i;

  /* End of DiscreteIntegrator: '<S15>/Integrator' */

  /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
   *  Inport: '<Root>/manual'
   */
  for (Rc_tmp = 0; Rc_tmp < 5; Rc_tmp++) {
    rtb_manual[Rc_tmp] = URControl_U.manual[Rc_tmp];
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion12' */

  /* MATLAB Function: '<S4>/position control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_position control_at_inport_0'
   */
  /* :  [n_des, acc_ref, DAQ, errorInt,errorVel,velTarget] = URpositionControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URpositionControl:3' if isempty(errorInt) */
  /* 'URpositionControl:6' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URpositionControl:8' maxAngle = URpar.position_maxAngleFailure; */
    scale = URControlParams.position_maxAngleFailure;

    /* 'URpositionControl:9' overallGain = URpar.position_failGain; */
    absxk = URControlParams.position_failGain;
  } else {
    /* 'URpositionControl:10' else */
    /* 'URpositionControl:11' maxAngle = URpar.position_maxAngle; */
    scale = URControlParams.position_maxAngle;

    /* 'URpositionControl:12' overallGain = 1; */
    absxk = 1.0;
  }

  /* 'URpositionControl:16' errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.posf; */
  /* 'URpositionControl:18' velTarget = URpar.position_Kp_pos.*errorPos*overallGain; */
  rtb_Delay1[0] = (rtb_Integrator[0] - rtb_stateOut.posf[0]) *
    URControlParams.position_Kp_pos[0] * absxk;
  rtb_Delay1[1] = (rtb_Integrator[1] - rtb_stateOut.posf[1]) *
    URControlParams.position_Kp_pos[1] * absxk;
  rtb_Delay1[2] = (rtb_Integrator[2] - rtb_stateOut.posf[2]) *
    URControlParams.position_Kp_pos[2] * absxk;

  /* 'URpositionControl:19' maxVel = URpar.position_maxVel; */
  /* 'URpositionControl:20' velTarget = max(min(velTarget,maxVel),-maxVel); */
  /* 'URpositionControl:21' state.vel_ref(1:2) = velTarget(1:2); */
  /* 'URpositionControl:22' state.pos_ref = [inputs.xTarget, inputs.yTarget, inputs.zTarget]'; */
  /* 'URpositionControl:26' errorVel = velTarget - state.velf; */
  /* 'URpositionControl:27' errorInt = errorInt + errorVel/par.freq; */
  /* 'URpositionControl:28' intLim = URpar.position_intLim; */
  /* 'URpositionControl:29' errorInt = max(min(errorInt,intLim),-intLim); */
  /* 'URpositionControl:32' a_ref = URpar.position_Kp_vel.*errorVel*overallGain + URpar.position_Ki_vel.*errorInt*overallGain; */
  b_b_idx_0 = rtIsNaN(URControlParams.position_maxVel);
  if ((rtb_Delay1[0] < URControlParams.position_maxVel) || b_b_idx_0) {
    rtb_Product1_h = rtb_Delay1[0];
  } else {
    rtb_Product1_h = URControlParams.position_maxVel;
  }

  b_b_idx_1 = rtIsNaN(-URControlParams.position_maxVel);
  if ((rtb_Product1_h > -URControlParams.position_maxVel) || b_b_idx_1) {
    rtb_TmpSignalConversionAtSFun_5 = rtb_Product1_h;
  } else {
    rtb_TmpSignalConversionAtSFun_5 = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_5 -
    rtb_stateOut.velf[0];
  URControl_DW.errorInt[0] += rtb_TmpSignalConversionAtSFun_3 / 500.0;
  tmp_2 = rtIsNaN(URControlParams.position_intLim);
  if ((URControl_DW.errorInt[0] < URControlParams.position_intLim) || tmp_2) {
    rtb_Product1_h = URControl_DW.errorInt[0];
  } else {
    rtb_Product1_h = URControlParams.position_intLim;
  }

  tmp_3 = rtIsNaN(-URControlParams.position_intLim);
  if ((rtb_Product1_h > -URControlParams.position_intLim) || tmp_3) {
    URControl_DW.errorInt[0] = rtb_Product1_h;
  } else {
    URControl_DW.errorInt[0] = -URControlParams.position_intLim;
  }

  rtb_errorVel[0] = URControlParams.position_Kp_vel[0] *
    rtb_TmpSignalConversionAtSFun_3 * absxk + URControlParams.position_Ki_vel[0]
    * URControl_DW.errorInt[0] * absxk;
  rtb_Delay1[0] = rtb_TmpSignalConversionAtSFun_5;
  if ((rtb_Delay1[1] < URControlParams.position_maxVel) || b_b_idx_0) {
    rtb_Product1_h = rtb_Delay1[1];
  } else {
    rtb_Product1_h = URControlParams.position_maxVel;
  }

  if ((rtb_Product1_h > -URControlParams.position_maxVel) || b_b_idx_1) {
    rtb_TmpSignalConversionAtSFun_5 = rtb_Product1_h;
  } else {
    rtb_TmpSignalConversionAtSFun_5 = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_5 -
    rtb_stateOut.velf[1];
  URControl_DW.errorInt[1] += rtb_TmpSignalConversionAtSFun_3 / 500.0;
  if ((URControl_DW.errorInt[1] < URControlParams.position_intLim) || tmp_2) {
    rtb_Product1_h = URControl_DW.errorInt[1];
  } else {
    rtb_Product1_h = URControlParams.position_intLim;
  }

  if ((rtb_Product1_h > -URControlParams.position_intLim) || tmp_3) {
    URControl_DW.errorInt[1] = rtb_Product1_h;
  } else {
    URControl_DW.errorInt[1] = -URControlParams.position_intLim;
  }

  rtb_errorVel[1] = URControlParams.position_Kp_vel[1] *
    rtb_TmpSignalConversionAtSFun_3 * absxk + URControlParams.position_Ki_vel[1]
    * URControl_DW.errorInt[1] * absxk;
  rtb_Delay1[1] = rtb_TmpSignalConversionAtSFun_5;
  if ((rtb_Delay1[2] < URControlParams.position_maxVel) || b_b_idx_0) {
    rtb_Product1_h = rtb_Delay1[2];
  } else {
    rtb_Product1_h = URControlParams.position_maxVel;
  }

  if ((rtb_Product1_h > -URControlParams.position_maxVel) || b_b_idx_1) {
    rtb_TmpSignalConversionAtSFun_5 = rtb_Product1_h;
  } else {
    rtb_TmpSignalConversionAtSFun_5 = -URControlParams.position_maxVel;
  }

  rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_5 -
    rtb_stateOut.velf[2];
  URControl_DW.errorInt[2] += rtb_TmpSignalConversionAtSFun_3 / 500.0;
  if ((URControl_DW.errorInt[2] < URControlParams.position_intLim) || tmp_2) {
    rtb_Product1_h = URControl_DW.errorInt[2];
  } else {
    rtb_Product1_h = URControlParams.position_intLim;
  }

  if ((rtb_Product1_h > -URControlParams.position_intLim) || tmp_3) {
    URControl_DW.errorInt[2] = rtb_Product1_h;
  } else {
    URControl_DW.errorInt[2] = -URControlParams.position_intLim;
  }

  rtb_TmpSignalConversionAtSFun_3 = URControlParams.position_Kp_vel[2] *
    rtb_TmpSignalConversionAtSFun_3 * absxk + URControlParams.position_Ki_vel[2]
    * URControl_DW.errorInt[2] * absxk;

  /* 'URpositionControl:34' a_ref(3) = a_ref(3) - par.g; */
  /* 'URpositionControl:35' a_ref(3) = min(a_ref(3), par.URC.position_maxAref); */
  if (rtb_TmpSignalConversionAtSFun_3 - 9.81 < -2.0) {
    rtb_errorVel[2] = rtb_TmpSignalConversionAtSFun_3 - 9.81;
  } else {
    rtb_errorVel[2] = -2.0;
  }

  /* 'URpositionControl:37' if URpar.manual_enable == 1 */
  if (URControlParams.manual_enable == 1.0) {
    /* 'URpositionControl:38' a_ref(1) = inputs.manual(1) * URpar.manual_acc_gain; */
    rtb_errorVel[0] = rtb_manual[0] * URControlParams.manual_acc_gain;

    /* 'URpositionControl:39' a_ref(2) = inputs.manual(2) * URpar.manual_acc_gain; */
    rtb_errorVel[1] = rtb_manual[1] * URControlParams.manual_acc_gain;

    /* 'URpositionControl:40' a_ref(3) = -par.g; */
    rtb_errorVel[2] = -9.81;
  }

  /* 'URpositionControl:43' maxLateral = abs(par.g*tan(maxAngle)); */
  /* 'URpositionControl:44' latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral; */
  scale = std::sqrt(rtb_errorVel[0] * rtb_errorVel[0] + rtb_errorVel[1] *
                    rtb_errorVel[1]) / std::abs(9.81 * std::tan(scale));

  /* 'URpositionControl:45' a_ref(1) = a_ref(1)/(max(latRatio,1)); */
  if (scale > 1.0) {
    rtb_Product1_h = scale;
  } else {
    rtb_Product1_h = 1.0;
    scale = 1.0;
  }

  rtb_errorVel[0] /= rtb_Product1_h;

  /* 'URpositionControl:46' a_ref(2) = a_ref(2)/(max(latRatio,1)); */
  rtb_errorVel[1] /= scale;

  /* 'URpositionControl:52' n_des = a_ref/norm(a_ref); */
  scale = 3.3121686421112381E-170;
  absxk = std::abs(rtb_errorVel[0]);
  if (absxk > 3.3121686421112381E-170) {
    rtb_TmpSignalConversionAtSFun_3 = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    rtb_TmpSignalConversionAtSFun_3 = t * t;
  }

  absxk = std::abs(rtb_errorVel[1]);
  if (absxk > scale) {
    t = scale / absxk;
    rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_3 * t * t +
      1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtb_TmpSignalConversionAtSFun_3 += t * t;
  }

  absxk = std::abs(rtb_errorVel[2]);
  if (absxk > scale) {
    t = scale / absxk;
    rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_3 * t * t +
      1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtb_TmpSignalConversionAtSFun_3 += t * t;
  }

  rtb_TmpSignalConversionAtSFun_3 = scale * std::sqrt
    (rtb_TmpSignalConversionAtSFun_3);
  rtb_n_des[0] = rtb_errorVel[0] / rtb_TmpSignalConversionAtSFun_3;
  rtb_n_des[1] = rtb_errorVel[1] / rtb_TmpSignalConversionAtSFun_3;
  rtb_n_des[2] = rtb_errorVel[2] / rtb_TmpSignalConversionAtSFun_3;

  /* 'URpositionControl:54' if URpar.position_enable == 0 */
  if (URControlParams.position_enable == 0.0) {
    /* 'URpositionControl:55' n_des = [0, 0, -1]; */
    rtb_n_des[0] = 0.0;
    rtb_n_des[1] = 0.0;
    rtb_n_des[2] = -1.0;
  }

  /* 'URpositionControl:59' daq.posTarget = [inputs.xTarget, inputs.yTarget, inputs.zTarget]; */
  URControl_SharedDSM.DAQ.posTarget[0] = rtb_Integrator[0];
  URControl_SharedDSM.DAQ.posTarget[1] = rtb_Integrator[1];
  URControl_SharedDSM.DAQ.posTarget[2] = rtb_Integrator[2];

  /* 'URpositionControl:60' daq.velTarget = velTarget; */
  /* 'URpositionControl:61' daq.a_ref = a_ref; */
  /* 'URpositionControl:62' daq.n_des = n_des; */
  URControl_SharedDSM.DAQ.velTarget[0] = rtb_Delay1[0];
  URControl_SharedDSM.DAQ.a_ref[0] = rtb_errorVel[0];
  URControl_SharedDSM.DAQ.n_des[0] = rtb_n_des[0];
  URControl_SharedDSM.DAQ.velTarget[1] = rtb_Delay1[1];
  URControl_SharedDSM.DAQ.a_ref[1] = rtb_errorVel[1];
  URControl_SharedDSM.DAQ.n_des[1] = rtb_n_des[1];
  URControl_SharedDSM.DAQ.velTarget[2] = rtb_TmpSignalConversionAtSFun_5;
  URControl_SharedDSM.DAQ.a_ref[2] = rtb_errorVel[2];
  URControl_SharedDSM.DAQ.n_des[2] = rtb_n_des[2];

  /* End of MATLAB Function: '<S4>/position control' */

  /* MATLAB Function: '<S4>/yaw rate control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_yaw rate control_at_inport_0'
   */
  /* 'URpositionControl:64' errorint = errorInt; */
  /* :  [r_cmd, DAQ] = URYawControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URYawControl:3' psiError = inputs.yawTarget - state.att(3); */
  /* 'URYawControl:4' psi_dot_cmd = psiError*URpar.YRC_Kp_psi; */
  /* 'URYawControl:6' r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omegaf(2); */
  scale = (rtb_Integrator_g - rtb_stateOut.att[2]) * URControlParams.YRC_Kp_psi *
    std::cos(rtb_stateOut.att[0]) * std::cos(rtb_stateOut.att[1]) - std::sin
    (rtb_stateOut.att[0]) * rtb_stateOut.omegaf[1];

  /* 'URYawControl:9' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URYawControl:10' yawDirection = (-1)^(state.fail_id); */
    /* 'URYawControl:11' r_cmd = yawDirection*URpar.YRC_r_cmd_fail; */
    scale = rt_powd_snf(-1.0, rtb_stateOut.fail_id) *
      URControlParams.YRC_r_cmd_fail;
  }

  /* 'URYawControl:14' if URpar.YRC_enable == 0 */
  if (URControlParams.YRC_enable == 0.0) {
    /* 'URYawControl:16' r_cmd = URpar.YRC_rateCmd; */
    scale = URControlParams.YRC_rateCmd;
  }

  /* 'URYawControl:19' if URpar.manual_enable == 1 */
  if (URControlParams.manual_enable == 1.0) {
    /* 'URYawControl:20' r_cmd =  inputs.manual(4) * URpar.manual_yaw_gain; */
    scale = rtb_manual[3] * URControlParams.manual_yaw_gain;
  }

  /* 'URYawControl:24' daq.r_cmd = r_cmd; */
  URControl_SharedDSM.DAQ.r_cmd = scale;
  rtb_r_cmd = scale;

  /* End of MATLAB Function: '<S4>/yaw rate control' */

  /* MATLAB Function: '<S4>/altitude control' incorporates:
   *  BusCreator: '<S4>/BusConversion_InsertedFor_altitude control_at_inport_0'
   */
  /* :  [Ftot_ref, DAQ] = URAltitudeControl(inputs, state, DAQ, par, URControlParams); */
  /* 'URAltitudeControl:3' if isempty(errorInt) */
  /* 'URAltitudeControl:6' errorPos = inputs.zTarget  - state.pos(3); */
  /* 'URAltitudeControl:7' velTarget = URpar.altitude_Kp_pos.*errorPos; */
  /* 'URAltitudeControl:8' if state.fail_id > 0 */
  if (rtb_stateOut.fail_id > 0.0) {
    /* 'URAltitudeControl:9' maxVel = URpar.altitude_maxVelFail; */
    scale = URControlParams.altitude_maxVelFail;
  } else {
    /* 'URAltitudeControl:10' else */
    /* 'URAltitudeControl:11' maxVel = URpar.altitude_maxVel; */
    scale = URControlParams.altitude_maxVel;
  }

  /* 'URAltitudeControl:15' velTarget = min(velTarget,maxVel); */
  /* 'URAltitudeControl:16' state.vel_ref(3) = velTarget; */
  /* 'URAltitudeControl:19' errorVel = velTarget - state.vel(3); */
  rtb_Product1_h = (rtb_Integrator[2] - rtb_stateOut.pos[2]) *
    URControlParams.altitude_Kp_pos;
  if ((rtb_Product1_h < scale) || rtIsNaN(scale)) {
    scale = rtb_Product1_h;
  }

  scale -= rtb_stateOut.vel[2];

  /* 'URAltitudeControl:20' errorInt = errorInt + errorVel/par.freq; */
  URControl_DW.errorInt_g += scale / 500.0;

  /* 'URAltitudeControl:21' intLim = URpar.altitude_intLim; */
  /* 'URAltitudeControl:22' errorInt = max(min(errorInt,intLim),-intLim); */
  if ((URControl_DW.errorInt_g < URControlParams.altitude_intLim) || rtIsNaN
      (URControlParams.altitude_intLim)) {
    rtb_Product1_h = URControl_DW.errorInt_g;
  } else {
    rtb_Product1_h = URControlParams.altitude_intLim;
  }

  if ((rtb_Product1_h > -URControlParams.altitude_intLim) || rtIsNaN
      (-URControlParams.altitude_intLim)) {
    URControl_DW.errorInt_g = rtb_Product1_h;
  } else {
    URControl_DW.errorInt_g = -URControlParams.altitude_intLim;
  }

  /* 'URAltitudeControl:25' az_ref = URpar.altitude_Kp_vel.*errorVel + URpar.altitude_Ki_vel.*errorInt; */
  /* 'URAltitudeControl:26' peakAngle = URpar.altitude_peakAngle; */
  /* 'URAltitudeControl:30' multiFactor = 1/(cos(max(min(state.att(1),peakAngle),-peakAngle))*cos(max(min(state.att(2),peakAngle),-peakAngle))); */
  /* 'URAltitudeControl:32' maxFtot = sum(state.FMax); */
  absxk = ((rtb_stateOut.FMax[0] + rtb_stateOut.FMax[1]) + rtb_stateOut.FMax[2])
    + rtb_stateOut.FMax[3];

  /* 'URAltitudeControl:34' if URpar.manual_enable == 1 && URpar.manual_alt == 1 */
  if ((URControlParams.manual_enable == 1.0) && (URControlParams.manual_alt ==
       1.0)) {
    /* 'URAltitudeControl:35' Ftot_ref =  (inputs.manual(3) * URpar.manual_h_gain) * maxFtot * multiFactor; */
    b_b_idx_0 = rtIsNaN(URControlParams.altitude_peakAngle);
    if ((rtb_stateOut.att[1] < URControlParams.altitude_peakAngle) || b_b_idx_0)
    {
      rtb_Product1_h = rtb_stateOut.att[1];
    } else {
      rtb_Product1_h = URControlParams.altitude_peakAngle;
    }

    if ((rtb_stateOut.att[0] < URControlParams.altitude_peakAngle) || b_b_idx_0)
    {
      rtb_TmpSignalConversionAtSFun_3 = rtb_stateOut.att[0];
    } else {
      rtb_TmpSignalConversionAtSFun_3 = URControlParams.altitude_peakAngle;
    }

    b_b_idx_0 = rtIsNaN(-URControlParams.altitude_peakAngle);
    if ((!(rtb_TmpSignalConversionAtSFun_3 > -URControlParams.altitude_peakAngle))
        && (!b_b_idx_0)) {
      rtb_TmpSignalConversionAtSFun_3 = -URControlParams.altitude_peakAngle;
    }

    if ((!(rtb_Product1_h > -URControlParams.altitude_peakAngle)) && (!b_b_idx_0))
    {
      rtb_Product1_h = -URControlParams.altitude_peakAngle;
    }

    t = rtb_manual[2] * URControlParams.manual_h_gain * absxk * (1.0 / (std::cos
      (rtb_TmpSignalConversionAtSFun_3) * std::cos(rtb_Product1_h)));
  } else {
    /* 'URAltitudeControl:36' else */
    /* 'URAltitudeControl:37' Ftot_ref = -(az_ref - par.g)*par.mass*multiFactor; */
    /* 'URAltitudeControl:38' Ftot_ref = max(Ftot_ref,0); */
    if ((rtb_stateOut.att[1] < URControlParams.altitude_peakAngle) || rtIsNaN
        (URControlParams.altitude_peakAngle)) {
      rtb_Product1_h = rtb_stateOut.att[1];
    } else {
      rtb_Product1_h = URControlParams.altitude_peakAngle;
    }

    if ((rtb_stateOut.att[0] < URControlParams.altitude_peakAngle) || rtIsNaN
        (URControlParams.altitude_peakAngle)) {
      rtb_TmpSignalConversionAtSFun_3 = rtb_stateOut.att[0];
    } else {
      rtb_TmpSignalConversionAtSFun_3 = URControlParams.altitude_peakAngle;
    }

    if ((!(rtb_TmpSignalConversionAtSFun_3 > -URControlParams.altitude_peakAngle))
        && (!rtIsNaN(-URControlParams.altitude_peakAngle))) {
      rtb_TmpSignalConversionAtSFun_3 = -URControlParams.altitude_peakAngle;
    }

    if ((!(rtb_Product1_h > -URControlParams.altitude_peakAngle)) && (!rtIsNaN
         (-URControlParams.altitude_peakAngle))) {
      rtb_Product1_h = -URControlParams.altitude_peakAngle;
    }

    t = -((URControlParams.altitude_Kp_vel * scale +
           URControlParams.altitude_Ki_vel * URControl_DW.errorInt_g) - 9.81) *
      0.374 * (1.0 / (std::cos(rtb_TmpSignalConversionAtSFun_3) * std::cos
                      (rtb_Product1_h)));
    if (!(t > 0.0)) {
      t = 0.0;
    }
  }

  /* 'URAltitudeControl:42' maxAngle = max(abs(state.att(1)),abs(state.att(2))); */
  rtb_Product1_h = std::abs(rtb_stateOut.att[0]);
  scale = std::abs(rtb_stateOut.att[1]);
  if ((rtb_Product1_h > scale) || rtIsNaN(scale)) {
    scale = rtb_Product1_h;
  }

  /* 'URAltitudeControl:43' if maxAngle > URpar.altitude_peakAngle */
  if (scale > URControlParams.altitude_peakAngle) {
    /* 'URAltitudeControl:45' redFactor = 1 - (maxAngle - URpar.altitude_peakAngle)/(URpar.altitude_LOCAngle - URpar.altitude_peakAngle); */
    /* 'URAltitudeControl:46' redFactor = max(min(redFactor,1),0); */
    /* 'URAltitudeControl:47' Ftot_ref = Ftot_ref*redFactor; */
    rtb_Product1_h = 1.0 - (scale - URControlParams.altitude_peakAngle) /
      (URControlParams.altitude_LOCAngle - URControlParams.altitude_peakAngle);
    if (!(rtb_Product1_h < 1.0)) {
      rtb_Product1_h = 1.0;
    }

    if (!(rtb_Product1_h > 0.0)) {
      rtb_Product1_h = 0.0;
    }

    t *= rtb_Product1_h;
  }

  /* 'URAltitudeControl:53' Ftot_ref = min(Ftot_ref,maxFtot); */
  if ((!(t < absxk)) && (!rtIsNaN(absxk))) {
    t = absxk;
  }

  /* 'URAltitudeControl:55' if URpar.altitude_enable == 0 */
  if (URControlParams.altitude_enable == 0.0) {
    /* 'URAltitudeControl:56' Ftot_ref = par.g*par.mass; */
    t = 3.66894;
  }

  /* 'URAltitudeControl:60' daq.Ftot_ref = Ftot_ref; */
  URControl_SharedDSM.DAQ.Ftot_ref = t;
  rtb_Ftot_ref = t;

  /* End of MATLAB Function: '<S4>/altitude control' */

  /* ModelReference: '<S5>/URControl_att_indi_simple' */
  URControl_att_indi_sMDLOBJ1.step(&rtb_stateOut.acc[0], &rtb_stateOut.omega[0],
    &rtb_stateOut.att[0], &rtb_stateOut.wRotor[0], &rtb_stateOut.fail_id,
    &rtb_n_des[0], &rtb_r_cmd, &rtb_Ftot_ref, &rtb_w_cmd[0]);

  /* MATLAB Function: '<S3>/MATLAB Function' */
  /* :  [wRotorSetFinal, DAQ] = UROverrides(state, DAQ, wRotorSet, par, URControlParams, flip_input); */
  /* 'UROverrides:3' if isempty(fallCount) */
  /* 'UROverrides:4' if isempty(thrown) */
  /* 'UROverrides:6' if isempty(flipTime) */
  /* 'UROverrides:8' wRotorSetFinal = wRotorSet; */
  /* 'UROverrides:11' if URpar.throw_mode == 1 */
  if (URControlParams.throw_mode == 1.0) {
    /* 'UROverrides:14' if rms(state.accf) < URpar.throw_threshold */
    rtb_TmpSignalConversionAtSFun_3 = (rtb_stateOut.accf[0] * rtb_stateOut.accf
      [0] + rtb_stateOut.accf[1] * rtb_stateOut.accf[1]) + rtb_stateOut.accf[2] *
      rtb_stateOut.accf[2];
    if (std::sqrt(rtb_TmpSignalConversionAtSFun_3 / 3.0) <
        URControlParams.throw_threshold) {
      /* 'UROverrides:15' fallCount = fallCount + 1; */
      URControl_DW.fallCount++;
    } else {
      /* 'UROverrides:16' else */
      /* 'UROverrides:17' fallCount = fallCount*0.998; */
      URControl_DW.fallCount *= 0.998;
    }

    /* 'UROverrides:20' if fallCount > URpar.throw_falltime*par.freq */
    if (URControl_DW.fallCount > URControlParams.throw_falltime * 500.0) {
      /* 'UROverrides:21' thrown = 1; */
      URControl_DW.thrown = 1.0;
    }

    /* 'UROverrides:24' if thrown == 0 */
    if (URControl_DW.thrown == 0.0) {
      /* 'UROverrides:25' wRotorSetFinal = ones(4,1).*par.w_min; */
      qconj[0] = 300.0;
      qconj[1] = 300.0;
      qconj[2] = 300.0;
      qconj[3] = 300.0;
    } else {
      /* 'UROverrides:26' else */
      /* 'UROverrides:27' wRotorSetFinal = wRotorSet; */
      qconj[0] = rtb_w_cmd[0];
      qconj[1] = rtb_w_cmd[1];
      qconj[2] = rtb_w_cmd[2];
      qconj[3] = rtb_w_cmd[3];
    }
  } else if (URControlParams.throw_mode == 2.0) {
    /* 'UROverrides:29' elseif URpar.throw_mode == 2 */
    /* 'UROverrides:31' if state.posf(3) <= -URpar.throw_alt_threshold */
    if (rtb_stateOut.posf[2] <= -URControlParams.throw_alt_threshold) {
      /* 'UROverrides:32' thrown = 1; */
      URControl_DW.thrown = 1.0;
    }

    /* 'UROverrides:34' if thrown == 0 */
    if (URControl_DW.thrown == 0.0) {
      /* 'UROverrides:35' wRotorSetFinal = ones(4,1).*par.w_min; */
      qconj[0] = 300.0;
      qconj[1] = 300.0;
      qconj[2] = 300.0;
      qconj[3] = 300.0;
    } else {
      /* 'UROverrides:36' else */
      /* 'UROverrides:37' wRotorSetFinal = wRotorSet; */
      qconj[0] = rtb_w_cmd[0];
      qconj[1] = rtb_w_cmd[1];
      qconj[2] = rtb_w_cmd[2];
      qconj[3] = rtb_w_cmd[3];
    }
  } else {
    /* 'UROverrides:39' else */
    /* 'UROverrides:40' fallCount = 0; */
    URControl_DW.fallCount = 0.0;

    /* 'UROverrides:41' thrown = 0; */
    URControl_DW.thrown = 0.0;

    /* 'UROverrides:42' wRotorSetFinal = wRotorSet; */
    qconj[0] = rtb_w_cmd[0];
    qconj[1] = rtb_w_cmd[1];
    qconj[2] = rtb_w_cmd[2];
    qconj[3] = rtb_w_cmd[3];
  }

  /* 'UROverrides:46' if ~(URpar.throw_mode == 1 && thrown == 0) */
  if ((!(URControlParams.throw_mode == 1.0)) || (!(URControl_DW.thrown == 0.0)))
  {
    /* 'UROverrides:47' if URpar.flip_mode == 0 */
    if (URControlParams.flip_mode == 0.0) {
      /* 'UROverrides:49' flipTime = 0; */
      URControl_DW.flipTime = 0.0;

      /* 'UROverrides:50' wRotorSetFinal = wRotorSet; */
      qconj[0] = rtb_w_cmd[0];
      qconj[1] = rtb_w_cmd[1];
      qconj[2] = rtb_w_cmd[2];
      qconj[3] = rtb_w_cmd[3];
    } else {
      if (URControlParams.flip_mode == 1.0) {
        /* 'UROverrides:52' elseif URpar.flip_mode == 1 */
        /* 'UROverrides:54' flipTime = flipTime + 1/par.freq; */
        URControl_DW.flipTime += 0.002;

        /* 'UROverrides:55' if flipTime > URpar.flip_time + URpar.flip_upTime */
        if (URControl_DW.flipTime > URControlParams.flip_time +
            URControlParams.flip_upTime) {
          /* 'UROverrides:56' wRotorSetFinal = wRotorSet; */
          qconj[0] = rtb_w_cmd[0];
          qconj[1] = rtb_w_cmd[1];
          qconj[2] = rtb_w_cmd[2];
          qconj[3] = rtb_w_cmd[3];
        } else {
          /* 'UROverrides:57' else */
          /* 'UROverrides:58' if flipTime < URpar.flip_upTime */
          if (URControl_DW.flipTime < URControlParams.flip_upTime) {
            /* 'UROverrides:59' wRotorSetFinal = ones(4,1).*1000; */
            qconj[0] = 1000.0;
            qconj[1] = 1000.0;
            qconj[2] = 1000.0;
            qconj[3] = 1000.0;
          } else {
            /* 'UROverrides:60' else */
            /* 'UROverrides:61' wRotorSetFinal = ones(4,1).*700 + [1;-1;-1;1]*URpar.flip_intensityX + [1;1;-1;-1]*URpar.flip_intensityY; */
            qconj[0] = (700.0 + URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            qconj[1] = (700.0 + -URControlParams.flip_intensityX) +
              URControlParams.flip_intensityY;
            qconj[2] = (700.0 + -URControlParams.flip_intensityX) +
              -URControlParams.flip_intensityY;
            qconj[3] = (700.0 + URControlParams.flip_intensityX) +
              -URControlParams.flip_intensityY;
          }
        }
      }
    }
  }

  /* End of MATLAB Function: '<S3>/MATLAB Function' */

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  /* :  actuator_controls = w_sp_to_px4_actuator_controls(w_sp, par); */
  /* 'w_sp_to_px4_actuator_controls:10' w_min_sq = par.px4.w_min^2; */
  /* 'w_sp_to_px4_actuator_controls:11' w_max_sq = par.px4.w_max^2; */
  /* 'w_sp_to_px4_actuator_controls:13' actuator_controls = -1 + 2*(w_sp.^2 - w_min_sq)./(w_max_sq - w_min_sq); */
  URControl_Y.w_rotors[0] = static_cast<real32_T>(qconj[0]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[0] = static_cast<real32_T>(((qconj[0] * qconj[0]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[1] = static_cast<real32_T>(qconj[1]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[1] = static_cast<real32_T>(((qconj[1] * qconj[1]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[2] = static_cast<real32_T>(qconj[2]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[2] = static_cast<real32_T>(((qconj[2] * qconj[2]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* Outport: '<Root>/w_rotors' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  URControl_Y.w_rotors[3] = static_cast<real32_T>(qconj[3]);

  /* Outport: '<Root>/actuators_control' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion11'
   *  MATLAB Function: '<Root>/conversion to px4'
   */
  URControl_Y.actuators_control[3] = static_cast<real32_T>(((qconj[3] * qconj[3]
    - 98696.044010893587) * 2.0 / 1.5335171993870398E+6 + -1.0));

  /* DiscreteStateSpace: '<S20>/Discrete State-Space' */
  {
    rtb_accs_filter[0] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    rtb_accs_filter[1] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    rtb_accs_filter[2] = (1.0)*URControl_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* Outputs for Atomic SubSystem: '<S24>/Predict' */
  /* SignalConversion: '<S33>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  MATLAB Function: '<S31>/Predict'
   */
  rtb_TmpSignalConversionAtSFunct[0] = rtb_accs_filter[0];

  /* End of Outputs for SubSystem: '<S24>/Predict' */

  /* Gain: '<S7>/Gain3' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Gain: '<S22>/Gain4'
   *  Inport: '<Root>/rates'
   */
  scale = 1.22 * URControl_U.rates[0];

  /* Outputs for Atomic SubSystem: '<S24>/Predict' */
  /* SignalConversion: '<S33>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  Gain: '<S7>/Gain3'
   *  MATLAB Function: '<S31>/Predict'
   */
  rtb_TmpSignalConversionAtSFunct[3] = scale;
  rtb_TmpSignalConversionAtSFunct[1] = rtb_accs_filter[1];

  /* End of Outputs for SubSystem: '<S24>/Predict' */

  /* Gain: '<S7>/Gain3' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Gain: '<S22>/Gain2'
   *  Inport: '<Root>/rates'
   */
  absxk = 1.22 * URControl_U.rates[1];

  /* Outputs for Atomic SubSystem: '<S24>/Predict' */
  /* SignalConversion: '<S33>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  Gain: '<S7>/Gain3'
   *  MATLAB Function: '<S31>/Predict'
   */
  rtb_TmpSignalConversionAtSFunct[4] = absxk;
  rtb_TmpSignalConversionAtSFunct[2] = rtb_accs_filter[2];
  rtb_TmpSignalConversionAtSFunct[5] = rtb_Delay1_tmp;

  /* MATLAB Function: '<S31>/Predict' incorporates:
   *  DataStoreRead: '<S31>/Data Store ReadP'
   *  DataStoreRead: '<S31>/Data Store ReadX'
   *  Gain: '<S7>/Gain3'
   *  SignalConversion: '<S33>/TmpSignal ConversionAt SFunction Inport4'
   */
  /* :  if pS.IsSimulinkFcn */
  /* :  else */
  /* :  StateTransitionFcnH = str2func(pS.FcnName); */
  /* :  if pS.HasJacobian */
  /* :  StateTransitionJacobianFcnH = str2func(pS.JacobianFcnName); */
  /* :  switch pS.NumberOfExtraArgumentInports */
  /* :  case 1 */
  /* :  extraArgs = {uState}; */
  /* :  xNew = zeros(size(x),'like',x); */
  /* :  if pS.HasAdditiveNoise */
  /* :  [xNew,P] = matlabshared.tracking.internal.EKFPredictorAdditive.predict(... */
  /* :          Q,x,P,StateTransitionFcnH,StateTransitionJacobianFcnH,extraArgs{:}); */
  ekf_state_jacob_WRvyoYwd(URControl_DW.x, rtb_TmpSignalConversionAtSFunct,
    Jacobian);

  /* 'ekf_state_func:7' posx = x(1); */
  /* 'ekf_state_func:8' posy = x(2); */
  /* 'ekf_state_func:9' posz = x(3); */
  /* 'ekf_state_func:11' velx = x(4); */
  /* 'ekf_state_func:12' vely = x(5); */
  /* 'ekf_state_func:13' velz = x(6); */
  /* 'ekf_state_func:15' q1 = x(7); */
  /* 'ekf_state_func:16' q2 = x(8); */
  /* 'ekf_state_func:17' q3 = x(9); */
  /* 'ekf_state_func:18' q4 = x(10); */
  /* 'ekf_state_func:20' accBx = u(1); */
  /* 'ekf_state_func:21' accBy = u(2); */
  /* 'ekf_state_func:22' accBz = u(3); */
  /* 'ekf_state_func:24' omegax = u(4); */
  /* 'ekf_state_func:25' omegay = u(5); */
  /* 'ekf_state_func:26' omegaz = u(6); */
  /* 'ekf_state_func:28' dt = 0.002; */
  /* 'ekf_state_func:31' pos = [posx; posy; posz]; */
  /* 'ekf_state_func:32' vel = [velx; vely; velz]; */
  /* 'ekf_state_func:33' accB = [accBx; accBy; accBz]; */
  /* 'ekf_state_func:34' omega = [omegax; omegay; omegaz]; */
  /* 'ekf_state_func:35' q = [q1; q2; q3; q4]; */
  /* 'ekf_state_func:37' x = zeros(10,1); */
  /* 'ekf_state_func:39' acc = quatRot(q', accB') + [0,0,9.81]; */
  /* 'quatRot:3' qconj = [ q(:,1)  -q(:,2:4) ]; */
  /* 'quatRot:5' dummy = HProduct(HProduct(q,[0,vector]),qconj); */
  /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
  /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
  /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
  /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
  /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
  /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
  /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
  /* 'quatRot:25' qout = [scalar  vec]; */
  FMin[0] = ((URControl_DW.x[6] * 0.0 - URControl_DW.x[7] * rtb_accs_filter[0])
             - URControl_DW.x[8] * rtb_accs_filter[1]) - URControl_DW.x[9] *
    rtb_accs_filter[2];
  FMin[1] = (URControl_DW.x[6] * rtb_accs_filter[0] + 0.0 * URControl_DW.x[7]) +
    (URControl_DW.x[8] * rtb_accs_filter[2] - URControl_DW.x[9] *
     rtb_accs_filter[1]);
  FMin[2] = (URControl_DW.x[6] * rtb_accs_filter[1] + 0.0 * URControl_DW.x[8]) +
    (URControl_DW.x[9] * rtb_accs_filter[0] - URControl_DW.x[7] *
     rtb_accs_filter[2]);
  FMin[3] = (URControl_DW.x[6] * rtb_accs_filter[2] + 0.0 * URControl_DW.x[9]) +
    (URControl_DW.x[7] * rtb_accs_filter[1] - URControl_DW.x[8] *
     rtb_accs_filter[0]);

  /* 'quatRot:14' vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ... */
  /* 'quatRot:15'          [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+... */
  /* 'quatRot:16'          [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ... */
  /* 'quatRot:17'            v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ... */
  /* 'quatRot:18'            v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)]; */
  /* 'quatRot:22' scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ... */
  /* 'quatRot:23'              v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4); */
  /* 'quatRot:25' qout = [scalar  vec]; */
  /* 'quatRot:6' r = dummy(2:4); */
  /* 'ekf_state_func:42' for i = 1:3 */
  /* 'ekf_state_func:45' for i = 1:3 */
  /* 'ekf_state_func:49' q_dot1 = -0.5*dotProduct(q(2:4),omega); */
  /* 'dotProduct:3' c = sum(a.*b); */
  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[0] = URControl_DW.x[3] * 0.002 + URControl_DW.x[0];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[3] = ((FMin[0] * -URControl_DW.x[7] + URControl_DW.x[6] * FMin[1]) +
                 (FMin[2] * -URControl_DW.x[9] - FMin[3] * -URControl_DW.x[8])) *
    0.002 + URControl_DW.x[3];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[1] = URControl_DW.x[4] * 0.002 + URControl_DW.x[1];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[4] = ((FMin[0] * -URControl_DW.x[8] + URControl_DW.x[6] * FMin[2]) +
                 (FMin[3] * -URControl_DW.x[7] - FMin[1] * -URControl_DW.x[9])) *
    0.002 + URControl_DW.x[4];

  /* 'ekf_state_func:43' x(i) = pos(i) + vel(i)*dt; */
  rtb_xNew[2] = URControl_DW.x[5] * 0.002 + URControl_DW.x[2];

  /* 'ekf_state_func:46' x(i+3) = vel(i) + acc(i)*dt; */
  rtb_xNew[5] = (((FMin[0] * -URControl_DW.x[9] + URControl_DW.x[6] * FMin[3]) +
                  (FMin[1] * -URControl_DW.x[8] - FMin[2] * -URControl_DW.x[7]))
                 + 9.81) * 0.002 + URControl_DW.x[5];

  /* 'ekf_state_func:50' q_dot24 = 0.5*(crossProduct(q(2:4),omega) + omega*q(1)); */
  /* 'crossProduct:3' c = [a(2)*b(3) - a(3)*b(2); a(3)*b(1) - a(1)*b(3); a(1)*b(2) - a(2)*b(1)]; */
  /* 'ekf_state_func:51' q_dot = [q_dot1; q_dot24]; */
  /* 'ekf_state_func:53' q = q + q_dot*dt; */
  rtb_TmpSignalConversionAtSFun_5 = ((URControl_DW.x[7] * scale +
    URControl_DW.x[8] * absxk) + URControl_DW.x[9] * rtb_Delay1_tmp) * -0.5 *
    0.002 + URControl_DW.x[6];
  rtb_TmpSignalConversionAtSFun_4 = ((URControl_DW.x[8] * rtb_Delay1_tmp -
    URControl_DW.x[9] * absxk) + scale * URControl_DW.x[6]) * 0.5 * 0.002 +
    URControl_DW.x[7];
  rtb_TmpSignalConversionAtSFun_3 = ((URControl_DW.x[9] * scale -
    URControl_DW.x[7] * rtb_Delay1_tmp) + absxk * URControl_DW.x[6]) * 0.5 *
    0.002 + URControl_DW.x[8];
  rtb_Product1_h = ((URControl_DW.x[7] * absxk - URControl_DW.x[8] * scale) +
                    rtb_Delay1_tmp * URControl_DW.x[6]) * 0.5 * 0.002 +
    URControl_DW.x[9];

  /* 'ekf_state_func:54' qnorm = sqrt(q(1)^2 + q(2)^2 + q(3)^2 + q(4)^2); */
  t = std::sqrt(((rtb_TmpSignalConversionAtSFun_5 *
                  rtb_TmpSignalConversionAtSFun_5 +
                  rtb_TmpSignalConversionAtSFun_4 *
                  rtb_TmpSignalConversionAtSFun_4) +
                 rtb_TmpSignalConversionAtSFun_3 *
                 rtb_TmpSignalConversionAtSFun_3) + rtb_Product1_h *
                rtb_Product1_h);

  /* 'ekf_state_func:55' q = q/qnorm; */
  /* 'ekf_state_func:57' for i = 1:4 */
  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[6] = rtb_TmpSignalConversionAtSFun_5 / t;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[7] = rtb_TmpSignalConversionAtSFun_4 / t;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[8] = rtb_TmpSignalConversionAtSFun_3 / t;

  /* 'ekf_state_func:58' x(i+6) = q(i); */
  rtb_xNew[9] = rtb_Product1_h / t;
  for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
    for (km_tmp = 0; km_tmp < 10; km_tmp++) {
      gain_tmp = km_tmp + 10 * qconj_tmp;
      Jacobian_0[gain_tmp] = 0.0;
      for (Rc_tmp = 0; Rc_tmp < 10; Rc_tmp++) {
        Jacobian_0[gain_tmp] += Jacobian[10 * Rc_tmp + km_tmp] * URControl_DW.P
          [10 * qconj_tmp + Rc_tmp];
      }
    }
  }

  for (Rc_tmp = 0; Rc_tmp < 10; Rc_tmp++) {
    /* DataStoreWrite: '<S31>/Data Store WriteP' incorporates:
     *  Constant: '<S24>/Q'
     *  MATLAB Function: '<S31>/Predict'
     */
    for (qconj_tmp = 0; qconj_tmp < 10; qconj_tmp++) {
      rtb_Merge_c_tmp = 0.0;
      for (km_tmp = 0; km_tmp < 10; km_tmp++) {
        rtb_Merge_c_tmp += Jacobian_0[10 * km_tmp + Rc_tmp] * Jacobian[10 *
          km_tmp + qconj_tmp];
      }

      /* MATLAB Function: '<S31>/Predict' incorporates:
       *  Constant: '<S24>/Q'
       */
      km_tmp = 10 * qconj_tmp + Rc_tmp;
      URControl_DW.P[km_tmp] = rtCP_Q_Value[km_tmp] + rtb_Merge_c_tmp;
    }

    /* End of DataStoreWrite: '<S31>/Data Store WriteP' */

    /* DataStoreWrite: '<S31>/Data Store WriteX' */
    URControl_DW.x[Rc_tmp] = rtb_xNew[Rc_tmp];
  }

  /* End of Outputs for SubSystem: '<S24>/Predict' */

  /* MATLAB Function: '<S21>/MATLAB Function' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  Inport: '<Root>/mag'
   */
  /* :  psi = mag_to_heading(mag, att, URControlParams); */
  /* 'mag_to_heading:4' if isempty(psi_last) */
  /* 'mag_to_heading:8' x = mag(1); */
  /* 'mag_to_heading:9' y = mag(2); */
  /* 'mag_to_heading:11' h = sqrt(x^2+y^2); */
  /* 'mag_to_heading:13' if URControlParams.mag_est_type == 0 */
  if (URControlParams.mag_est_type == 0.0) {
    /* 'mag_to_heading:16' psi0 = acos(abs(x)/h); */
    rtb_TmpSignalConversionAtSFun_5 = std::acos(std::abs((real_T)
      URControl_U.mag[0]) / std::sqrt(static_cast<real_T>(URControl_U.mag[0]) *
      URControl_U.mag[0] + static_cast<real_T>(URControl_U.mag[1]) *
      URControl_U.mag[1]));

    /* 'mag_to_heading:18' if x>0 */
    if (URControl_U.mag[0] > 0.0F) {
      /* 'mag_to_heading:19' if y>0 */
      if (URControl_U.mag[1] > 0.0F) {
        /* 'mag_to_heading:20' psi = - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = -rtb_TmpSignalConversionAtSFun_5;
      } else {
        /* 'mag_to_heading:21' else */
        /* 'mag_to_heading:22' psi = psi0; */
      }
    } else {
      /* 'mag_to_heading:24' else */
      /* 'mag_to_heading:25' if y>0 */
      if (URControl_U.mag[1] > 0.0F) {
        /* 'mag_to_heading:26' psi= -pi + psi0; */
        rtb_TmpSignalConversionAtSFun_5 += -3.1415926535897931;
      } else {
        /* 'mag_to_heading:27' else */
        /* 'mag_to_heading:28' psi = pi - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = 3.1415926535897931 -
          rtb_TmpSignalConversionAtSFun_5;
      }
    }
  } else {
    /* 'mag_to_heading:32' else */
    /* 'mag_to_heading:33' phi = att(1); */
    /* 'mag_to_heading:34' theta = att(2); */
    /* 'mag_to_heading:36' alpha = URControlParams.magxI; */
    /* 'mag_to_heading:37' beta = URControlParams.magzI; */
    /* 'mag_to_heading:39' if isnan(psi_last) */
    if (rtIsNaN(URControl_DW.psi_last_a)) {
      /* 'mag_to_heading:40' psi_last = 0; */
      URControl_DW.psi_last_a = 0.0;
    }

    /* 'mag_to_heading:43' x = (mag(1) + beta*sin(theta))/alpha/cos(theta); */
    rtb_TmpSignalConversionAtSFun_4 = std::cos(URControl_B.Euler_flip[1]);
    rtb_TmpSignalConversionAtSFun_3 = std::sin(URControl_B.Euler_flip[1]);
    t = (URControlParams.magzI * rtb_TmpSignalConversionAtSFun_3 +
         URControl_U.mag[0]) / URControlParams.magxI /
      rtb_TmpSignalConversionAtSFun_4;

    /* 'mag_to_heading:44' y = (mag(2) - beta*cos(theta)*sin(phi) - alpha*sin(theta)*sin(phi)*cos(psi_last))/alpha/cos(phi); */
    rtb_Product1_h = std::sin(URControl_B.Euler_flip[0]);
    rtb_TmpSignalConversionAtSFun_3 = ((URControl_U.mag[1] -
      URControlParams.magzI * rtb_TmpSignalConversionAtSFun_4 * rtb_Product1_h)
      - URControlParams.magxI * rtb_TmpSignalConversionAtSFun_3 * rtb_Product1_h
      * std::cos(URControl_DW.psi_last_a)) / URControlParams.magxI / std::cos
      (URControl_B.Euler_flip[0]);

    /* 'mag_to_heading:46' psi0 = acos(abs(x)/sqrt(x^2+y^2)); */
    rtb_TmpSignalConversionAtSFun_5 = std::acos(std::abs(t) / std::sqrt(t * t +
      rtb_TmpSignalConversionAtSFun_3 * rtb_TmpSignalConversionAtSFun_3));

    /* 'mag_to_heading:48' if x>0 */
    if (t > 0.0) {
      /* 'mag_to_heading:49' if y>0 */
      if (rtb_TmpSignalConversionAtSFun_3 > 0.0) {
        /* 'mag_to_heading:50' psi = - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = -rtb_TmpSignalConversionAtSFun_5;
      } else {
        /* 'mag_to_heading:51' else */
        /* 'mag_to_heading:52' psi = psi0; */
      }
    } else {
      /* 'mag_to_heading:54' else */
      /* 'mag_to_heading:55' if y>0 */
      if (rtb_TmpSignalConversionAtSFun_3 > 0.0) {
        /* 'mag_to_heading:56' psi= -pi + psi0; */
        rtb_TmpSignalConversionAtSFun_5 += -3.1415926535897931;
      } else {
        /* 'mag_to_heading:57' else */
        /* 'mag_to_heading:58' psi = pi - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = 3.1415926535897931 -
          rtb_TmpSignalConversionAtSFun_5;
      }
    }
  }

  /* 'mag_to_heading:65' psi = psi - URControlParams.mag_psi_shift; */
  rtb_TmpSignalConversionAtSFun_5 -= URControlParams.mag_psi_shift;

  /* 'mag_to_heading:68' if psi > pi */
  if (rtb_TmpSignalConversionAtSFun_5 > 3.1415926535897931) {
    /* 'mag_to_heading:69' psi  = -pi + (psi-pi); */
    rtb_TmpSignalConversionAtSFun_5 = (rtb_TmpSignalConversionAtSFun_5 -
      3.1415926535897931) + -3.1415926535897931;
  } else {
    if (rtb_TmpSignalConversionAtSFun_5 < -3.1415926535897931) {
      /* 'mag_to_heading:70' elseif psi < -pi */
      /* 'mag_to_heading:71' psi = pi - (-pi-psi); */
      rtb_TmpSignalConversionAtSFun_5 = 3.1415926535897931 -
        (-3.1415926535897931 - rtb_TmpSignalConversionAtSFun_5);
    }
  }

  /* 'mag_to_heading:74' psi_last = psi; */
  URControl_DW.psi_last_a = rtb_TmpSignalConversionAtSFun_5;

  /* End of MATLAB Function: '<S21>/MATLAB Function' */

  /* MATLAB Function: '<S21>/unwrap2pi' */
  /* :  psi = unwrap2pi(psi0); */
  /* 'unwrap2pi:7' if isempty(psi_last) */
  if (!URControl_DW.psi_last_not_empty_d) {
    /* 'unwrap2pi:7' psi_last = psi0; */
    URControl_DW.psi_last_h = rtb_TmpSignalConversionAtSFun_5;
    URControl_DW.psi_last_not_empty_d = true;
  }

  /* 'unwrap2pi:8' if isempty(N) */
  /* 'unwrap2pi:10' if (psi0-psi_last)>1.0*pi */
  rtb_Merge_c_tmp = rtb_TmpSignalConversionAtSFun_5 - URControl_DW.psi_last_h;
  if (rtb_Merge_c_tmp > 3.1415926535897931) {
    /* 'unwrap2pi:11' N = N-1; */
    URControl_DW.N_n--;
  } else {
    if (rtb_Merge_c_tmp < -3.1415926535897931) {
      /* 'unwrap2pi:12' elseif (psi0-psi_last)< -1.0*pi */
      /* 'unwrap2pi:13' N = N+1; */
      URControl_DW.N_n++;
    }
  }

  /* 'unwrap2pi:15' psi = psi0 + 2*N*pi; */
  /* 'unwrap2pi:17' psi_last = psi0; */
  URControl_DW.psi_last_h = rtb_TmpSignalConversionAtSFun_5;

  /* Sum: '<S21>/Add' incorporates:
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
   *  MATLAB Function: '<S21>/unwrap2pi'
   */
  t = (2.0 * URControl_DW.N_n * 3.1415926535897931 +
       rtb_TmpSignalConversionAtSFun_5) -
    URControl_DW.DiscreteTimeIntegrator_DSTATE;

  /* Math: '<S21>/Transpose' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   *  MATLAB Function: '<S21>/MATLAB Function6'
   */
  /* :  phi     = sensor.att(1); */
  /* :  theta   = sensor.att(2); */
  /* :  psi     = sensor.att(3); */
  /* :  R_BI = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* :          sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* :          cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  /* :  R_IB = R_BI'; */
  /* :  output = R_IB * [0 0 -9.81]'; */
  km[0] = dHdx_tmp;
  km[3] = R_E_tmp;
  km[6] = -std::sin((real_T)URControl_U.att[1]);
  km[1] = tmp_4;
  km[4] = R_E_tmp_0;
  km[7] = tmp_5;
  km[2] = tmp_6;
  km[5] = rtb_sincos_o2_idx_4;
  km[8] = rtb_sincos_o2_idx_3;

  /* Sum: '<S62>/Add' */
  rtb_Product1_h = (dHdx_tmp + R_E_tmp_0) + rtb_sincos_o2_idx_3;

  /* If: '<S42>/If' */
  if (rtb_Product1_h > 0.0) {
    /* Outputs for IfAction SubSystem: '<S42>/Positive Trace' incorporates:
     *  ActionPort: '<S60>/Action Port'
     */
    URControl_PositiveTrace(rtb_Product1_h, km, &URControl_B.Merge[0],
      &URControl_B.Merge[1]);

    /* End of Outputs for SubSystem: '<S42>/Positive Trace' */
  } else {
    /* Outputs for IfAction SubSystem: '<S42>/Negative Trace' incorporates:
     *  ActionPort: '<S59>/Action Port'
     */
    URControl_NegativeTrace(km, URControl_B.Merge);

    /* End of Outputs for SubSystem: '<S42>/Negative Trace' */
  }

  /* End of If: '<S42>/If' */

  /* Gain: '<S21>/Gain2' */
  /* :  if sum(isnan(u)) */
  rtb_TmpSignalConversionAtSFun_3 = URControlParams.kb[0] * rtb_u2[0];

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  b_b_idx_0 = rtIsNaN(rtb_TmpSignalConversionAtSFun_3);

  /* Gain: '<S21>/Gain2' */
  rtb_u2[0] = rtb_TmpSignalConversionAtSFun_3;
  rtb_TmpSignalConversionAtSFun_3 = URControlParams.kb[1] * rtb_u2[1];

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  b_b_idx_1 = rtIsNaN(rtb_TmpSignalConversionAtSFun_3);

  /* Gain: '<S21>/Gain2' */
  rtb_u2[1] = rtb_TmpSignalConversionAtSFun_3;
  rtb_TmpSignalConversionAtSFun_3 = URControlParams.kb[2] * rtb_u2[2];
  rtb_u2[2] = rtb_TmpSignalConversionAtSFun_3;

  /* MATLAB Function: '<S21>/MATLAB Function12' */
  if ((static_cast<real_T>(b_b_idx_0) + static_cast<real_T>(b_b_idx_1)) +
      static_cast<real_T>(rtIsNaN(rtb_TmpSignalConversionAtSFun_3)) != 0.0) {
    /* :  y = 0*ones(size(u)); */
    rtb_u2[0] = 0.0;
    rtb_u2[1] = 0.0;
    rtb_u2[2] = 0.0;
  } else {
    /* :  else */
    /* :  y = u; */
  }

  /* MATLAB Function: '<S21>/MATLAB Function3' */
  URControl_MATLABFunction3(t, &URControl_B.sf_MATLABFunction3);

  /* MATLAB Function: '<S21>/MATLAB Function4' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator1'
   *  Gain: '<S21>/Gain'
   *  Gain: '<S21>/Gain3'
   *  Inport: '<Root>/rates'
   *  Sum: '<S21>/Add1'
   *  Sum: '<S21>/Add4'
   */
  URControl_MATLABFunction3((10.0 * t +
    URControl_DW.DiscreteTimeIntegrator1_DSTATE) + 1.22 * URControl_U.rates[2],
    &URControl_B.sf_MATLABFunction4);

  /* Sqrt: '<S107>/sqrt' incorporates:
   *  Product: '<S108>/Product'
   *  Product: '<S108>/Product1'
   *  Product: '<S108>/Product2'
   *  Product: '<S108>/Product3'
   *  Sum: '<S108>/Sum'
   */
  t = std::sqrt(((URControl_B.Merge[0] * URControl_B.Merge[0] +
                  URControl_B.Merge[1] * URControl_B.Merge[1]) +
                 URControl_B.Merge[2] * URControl_B.Merge[2]) +
                URControl_B.Merge[3] * URControl_B.Merge[3]);

  /* Product: '<S102>/Product' */
  rtb_TmpSignalConversionAtSFun_5 = URControl_B.Merge[0] / t;

  /* Product: '<S102>/Product1' */
  rtb_Product1_h = URControl_B.Merge[1] / t;

  /* Product: '<S102>/Product2' */
  rtb_TmpSignalConversionAtSFun_4 = URControl_B.Merge[2] / t;

  /* Product: '<S102>/Product3' */
  t = URControl_B.Merge[3] / t;

  /* Fcn: '<S54>/fcn3' */
  rtb_Product1_h = (rtb_Product1_h * t - rtb_TmpSignalConversionAtSFun_5 *
                    rtb_TmpSignalConversionAtSFun_4) * -2.0;

  /* If: '<S103>/If' */
  if ((!(rtb_Product1_h > 1.0)) && (!(rtb_Product1_h < -1.0))) {
    /* Outputs for IfAction SubSystem: '<S103>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_Product1_h,
      &rtb_TmpSignalConversionAtSFun_3);

    /* End of Outputs for SubSystem: '<S103>/If Action Subsystem2' */
  }

  /* End of If: '<S103>/If' */

  /* Update for Delay: '<S21>/Delay' incorporates:
   *  SignalConversion: '<S21>/TmpSignal ConversionAtDelayInport1'
   */
  URControl_DW.Delay_DSTATE[0] = b_scale;
  URControl_DW.Delay_DSTATE[1] = rtb_fcn3;
  URControl_DW.Delay_DSTATE[2] = rtb_fcn5;
  URControl_DW.Delay_DSTATE[3] = rtb_TmpSignalConversionAtSFun_2;

  /* Trigonometry: '<S130>/sincos' */
  rtb_TmpSignalConversionAtSFun_3 = std::cos(rtb_sincos_o2_idx_2);
  rtb_Gain3_d[0] = std::sin(rtb_sincos_o2_idx_2);
  rtb_TmpSignalConversionAtSFun_2 = std::cos(rtb_u2_tmp);
  rtb_Gain3_d[1] = std::sin(rtb_u2_tmp);
  rtb_Product1_h = std::sin(rtb_u2_tmp_0);
  rtb_sincos_o2_idx_2 = std::cos(rtb_u2_tmp_0);

  /* Fcn: '<S130>/q0' incorporates:
   *  Fcn: '<S130>/q1'
   */
  b_scale = rtb_TmpSignalConversionAtSFun_3 * rtb_TmpSignalConversionAtSFun_2;
  rtb_Merge_c_tmp = rtb_Gain3_d[0] * rtb_Gain3_d[1];

  /* Fcn: '<S130>/q2' incorporates:
   *  Fcn: '<S130>/q3'
   */
  rtb_u2_tmp = rtb_Gain3_d[0] * rtb_TmpSignalConversionAtSFun_2;
  rtb_u2_tmp_0 = rtb_TmpSignalConversionAtSFun_3 * rtb_Gain3_d[1];

  /* MATLAB Function: '<S22>/MATLAB Function7' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   */
  /* :  if isempty(attPrev) */
  /* :  enableMeas = 1; */
  rtb_TmpSignalConversionAtSFun_5 = 1.0;

  /* :  tol = 1e-3; */
  /* :  errorSum = sum(abs((attPrev(1:2) - att(1:2)))); */
  /* :  if errorSum < tol */
  if (std::abs(URControl_DW.attPrev[0] - URControl_U.att[0]) + std::abs
      (URControl_DW.attPrev[1] - URControl_U.att[1]) < 0.001) {
    /* :  enableMeas = 0; */
    rtb_TmpSignalConversionAtSFun_5 = 0.0;
  }

  /* :  attPrev = att; */
  URControl_DW.attPrev[0] = URControl_U.att[0];
  URControl_DW.attPrev[1] = URControl_U.att[1];
  URControl_DW.attPrev[2] = URControl_U.att[2];

  /* End of MATLAB Function: '<S22>/MATLAB Function7' */

  /* SignalConversion: '<S124>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S22>/MATLAB Function5'
   */
  rtb_Gain3_d[0] = scale;
  rtb_Gain3_d[1] = absxk;
  rtb_Gain3_d[2] = rtb_Delay1_tmp;

  /* MATLAB Function: '<S22>/MATLAB Function5' incorporates:
   *  Constant: '<S22>/Constant2'
   */
  /* :  p = rate(1); */
  /* :  q = rate(2); */
  /* :  r = rate(3); */
  /* :  A = 0.5 * [0 -p -q -r; */
  /* :             p  0  r -q; */
  /* :             q -r  0  p; */
  /* :             r  q -p  0]; */
  /* :  q_pred = (eye(4) * cos(norm(rate)*dt/2) ... */
  /* :         + 2/norm(rate)*A * sin(norm(rate)*dt/2))*q_prev; */
  rtb_TmpSignalConversionAtSFun_4 = norm_2e9Xj4lM(rtb_Gain3_d);
  rtb_TmpSignalConversionAtSFun_3 = rtb_TmpSignalConversionAtSFun_4 * 0.002 /
    2.0;
  t = std::cos(rtb_TmpSignalConversionAtSFun_3);
  rtb_fcn3 = 2.0 / rtb_TmpSignalConversionAtSFun_4;
  rtb_fcn5 = std::sin(rtb_TmpSignalConversionAtSFun_3);

  /* MATLAB Function: '<S22>/MATLAB Function1' incorporates:
   *  Delay: '<S22>/Delay2'
   *  Fcn: '<S130>/q0'
   *  Fcn: '<S130>/q1'
   *  Fcn: '<S130>/q2'
   *  Fcn: '<S130>/q3'
   *  MATLAB Function: '<S22>/MATLAB Function5'
   */
  /* :  if flag_update == 1 */
  if (rtb_TmpSignalConversionAtSFun_5 == 1.0) {
    /* :  q = q_mea; */
    qconj[0] = b_scale * rtb_sincos_o2_idx_2 + rtb_Merge_c_tmp * rtb_Product1_h;
    qconj[1] = b_scale * rtb_Product1_h - rtb_Merge_c_tmp * rtb_sincos_o2_idx_2;
    qconj[2] = rtb_u2_tmp_0 * rtb_sincos_o2_idx_2 + rtb_u2_tmp * rtb_Product1_h;
    qconj[3] = rtb_u2_tmp * rtb_sincos_o2_idx_2 - rtb_u2_tmp_0 * rtb_Product1_h;
  } else {
    /* MATLAB Function: '<S22>/MATLAB Function5' */
    /* :  else */
    /* :  q = q_pred; */
    b_scale = rtb_fcn3 * 0.0 * rtb_fcn5;
    rtb_fcn3_0[0] = b_scale;
    rtb_fcn3_0[4] = 0.5 * -scale * rtb_fcn3 * rtb_fcn5;
    rtb_TmpSignalConversionAtSFun_5 = 0.5 * -absxk;
    rtb_fcn3_0[8] = rtb_TmpSignalConversionAtSFun_5 * rtb_fcn3 * rtb_fcn5;
    rtb_TmpSignalConversionAtSFun_4 = 0.5 * -rtb_Delay1_tmp;
    rtb_fcn3_0[12] = rtb_TmpSignalConversionAtSFun_4 * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[1] = 0.5 * scale * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[5] = b_scale;
    rtb_fcn3_0[9] = 0.5 * rtb_Delay1_tmp * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[13] = rtb_TmpSignalConversionAtSFun_5 * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[2] = 0.5 * absxk * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[6] = rtb_TmpSignalConversionAtSFun_4 * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[10] = rtb_fcn3 * 0.0 * rtb_fcn5;
    rtb_fcn3_0[14] = 0.5 * scale * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[3] = 0.5 * rtb_Delay1_tmp * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[7] = 0.5 * absxk * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[11] = 0.5 * -scale * rtb_fcn3 * rtb_fcn5;
    rtb_fcn3_0[15] = rtb_fcn3 * 0.0 * rtb_fcn5;
    for (qconj_tmp = 0; qconj_tmp < 16; qconj_tmp++) {
      b_a_1[qconj_tmp] = static_cast<real_T>(b_a_0[qconj_tmp]) * t +
        rtb_fcn3_0[qconj_tmp];
    }

    for (qconj_tmp = 0; qconj_tmp < 4; qconj_tmp++) {
      rtb_fcn3 = b_a_1[qconj_tmp + 12] * URControl_DW.Delay2_DSTATE_e[3] +
        (b_a_1[qconj_tmp + 8] * URControl_DW.Delay2_DSTATE_e[2] +
         (b_a_1[qconj_tmp + 4] * URControl_DW.Delay2_DSTATE_e[1] +
          b_a_1[qconj_tmp] * URControl_DW.Delay2_DSTATE_e[0]));
      qconj[qconj_tmp] = rtb_fcn3;
    }
  }

  /* End of MATLAB Function: '<S22>/MATLAB Function1' */

  /* Sum: '<S171>/Sum' incorporates:
   *  Product: '<S171>/Product'
   *  Product: '<S171>/Product1'
   *  Product: '<S171>/Product2'
   *  Product: '<S171>/Product3'
   */
  rtb_Product1_h = ((URControl_ConstB.q0 * qconj[0] - URControl_ConstB.q1 *
                     qconj[1]) - URControl_ConstB.q2 * qconj[2]) -
    URControl_ConstB.q3 * qconj[3];

  /* Sum: '<S172>/Sum' incorporates:
   *  Product: '<S172>/Product'
   *  Product: '<S172>/Product1'
   *  Product: '<S172>/Product2'
   *  Product: '<S172>/Product3'
   */
  b_scale = ((URControl_ConstB.q0 * qconj[1] + URControl_ConstB.q1 * qconj[0]) +
             URControl_ConstB.q2 * qconj[3]) - URControl_ConstB.q3 * qconj[2];

  /* Sum: '<S173>/Sum' incorporates:
   *  Product: '<S173>/Product'
   *  Product: '<S173>/Product1'
   *  Product: '<S173>/Product2'
   *  Product: '<S173>/Product3'
   */
  rtb_fcn5 = ((URControl_ConstB.q0 * qconj[2] - URControl_ConstB.q1 * qconj[3])
              + URControl_ConstB.q2 * qconj[0]) + URControl_ConstB.q3 * qconj[1];

  /* Sum: '<S174>/Sum' incorporates:
   *  Product: '<S174>/Product'
   *  Product: '<S174>/Product1'
   *  Product: '<S174>/Product2'
   *  Product: '<S174>/Product3'
   */
  rtb_fcn3 = ((URControl_ConstB.q0 * qconj[3] + URControl_ConstB.q1 * qconj[2])
              - URControl_ConstB.q2 * qconj[1]) + URControl_ConstB.q3 * qconj[0];

  /* Sqrt: '<S189>/sqrt' incorporates:
   *  Product: '<S190>/Product'
   *  Product: '<S190>/Product1'
   *  Product: '<S190>/Product2'
   *  Product: '<S190>/Product3'
   *  Sum: '<S190>/Sum'
   */
  t = std::sqrt(((rtb_Product1_h * rtb_Product1_h + b_scale * b_scale) +
                 rtb_fcn5 * rtb_fcn5) + rtb_fcn3 * rtb_fcn3);

  /* Product: '<S184>/Product' */
  rtb_Product1_h /= t;

  /* Product: '<S184>/Product1' */
  b_scale /= t;

  /* Product: '<S184>/Product2' */
  rtb_fcn5 /= t;

  /* Product: '<S184>/Product3' */
  rtb_fcn3 /= t;

  /* Fcn: '<S129>/fcn1' */
  t = (b_scale * rtb_fcn5 + rtb_Product1_h * rtb_fcn3) * 2.0;

  /* Fcn: '<S129>/fcn2' incorporates:
   *  Fcn: '<S129>/fcn5'
   */
  rtb_TmpSignalConversionAtSFun_3 = rtb_Product1_h * rtb_Product1_h;
  rtb_Merge_c_tmp = b_scale * b_scale;
  rtb_Gain3_p_tmp = rtb_fcn5 * rtb_fcn5;
  rtb_Gain3_p_tmp_0 = rtb_fcn3 * rtb_fcn3;

  /* Trigonometry: '<S183>/Trigonometric Function1' incorporates:
   *  Fcn: '<S129>/fcn2'
   */
  rtb_Gain3_d[0] = rt_atan2d_snf(t, ((rtb_TmpSignalConversionAtSFun_3 +
    rtb_Merge_c_tmp) - rtb_Gain3_p_tmp) - rtb_Gain3_p_tmp_0);

  /* Fcn: '<S129>/fcn3' */
  rtb_TmpSignalConversionAtSFun_2 = (b_scale * rtb_fcn3 - rtb_Product1_h *
    rtb_fcn5) * -2.0;

  /* If: '<S185>/If' incorporates:
   *  Constant: '<S186>/Constant'
   *  Constant: '<S187>/Constant'
   */
  if (rtb_TmpSignalConversionAtSFun_2 > 1.0) {
    /* Outputs for IfAction SubSystem: '<S185>/If Action Subsystem' incorporates:
     *  ActionPort: '<S186>/Action Port'
     */
    t = 1.0;

    /* End of Outputs for SubSystem: '<S185>/If Action Subsystem' */
  } else if (rtb_TmpSignalConversionAtSFun_2 < -1.0) {
    /* Outputs for IfAction SubSystem: '<S185>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S187>/Action Port'
     */
    t = 1.0;

    /* End of Outputs for SubSystem: '<S185>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S185>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S188>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_TmpSignalConversionAtSFun_2, &t);

    /* End of Outputs for SubSystem: '<S185>/If Action Subsystem2' */
  }

  /* End of If: '<S185>/If' */

  /* Trigonometry: '<S183>/trigFcn' */
  if (t > 1.0) {
    t = 1.0;
  } else {
    if (t < -1.0) {
      t = -1.0;
    }
  }

  rtb_Gain3_d[1] = std::asin(t);

  /* End of Trigonometry: '<S183>/trigFcn' */

  /* DSPFlip: '<S22>/Flip1' incorporates:
   *  Fcn: '<S129>/fcn4'
   *  Fcn: '<S129>/fcn5'
   *  Trigonometry: '<S183>/Trigonometric Function3'
   */
  URControl_B.Euler_flip_m[0] = rt_atan2d_snf((rtb_fcn5 * rtb_fcn3 +
    rtb_Product1_h * b_scale) * 2.0, ((rtb_TmpSignalConversionAtSFun_3 -
    rtb_Merge_c_tmp) - rtb_Gain3_p_tmp) + rtb_Gain3_p_tmp_0);
  URControl_B.Euler_flip_m[2] = rtb_Gain3_d[0];
  URControl_B.Euler_flip_m[1] = rtb_Gain3_d[1];
  URControl_B.Euler_flip_m[1] = rtb_Gain3_d[1];

  /* MATLAB Function: '<S22>/MATLAB Function' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  Inport: '<Root>/mag'
   */
  /* :  if isempty(psi_last) */
  /* :  x = mag(1); */
  /* :  y = mag(2); */
  /* :  h = sqrt(x^2+y^2); */
  /* :  if URControlParams.mag_est_type == 0 */
  if (URControlParams.mag_est_type == 0.0) {
    /* :  psi0 = acos(abs(x)/h); */
    rtb_TmpSignalConversionAtSFun_5 = std::acos(std::abs((real_T)
      URControl_U.mag[0]) / std::sqrt(static_cast<real_T>(URControl_U.mag[0]) *
      URControl_U.mag[0] + static_cast<real_T>(URControl_U.mag[1]) *
      URControl_U.mag[1]));

    /* :  if x>0 */
    if (URControl_U.mag[0] > 0.0F) {
      /* :  if y>0 */
      if (URControl_U.mag[1] > 0.0F) {
        /* :  psi = - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = -rtb_TmpSignalConversionAtSFun_5;
      } else {
        /* :  else */
        /* :  psi = psi0; */
      }
    } else {
      /* :  else */
      /* :  if y>0 */
      if (URControl_U.mag[1] > 0.0F) {
        /* :  psi= -pi + psi0; */
        rtb_TmpSignalConversionAtSFun_5 += -3.1415926535897931;
      } else {
        /* :  else */
        /* :  psi = pi - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = 3.1415926535897931 -
          rtb_TmpSignalConversionAtSFun_5;
      }
    }
  } else {
    /* :  else */
    /* :  phi = att(1); */
    /* :  theta = att(2); */
    /* :  alpha = URControlParams.magxI; */
    /* :  beta = URControlParams.magzI; */
    /* :  if isnan(psi_last) */
    if (rtIsNaN(URControl_DW.psi_last_b)) {
      /* :  psi_last = 0; */
      URControl_DW.psi_last_b = 0.0;
    }

    /* :  x = (mag(1) + beta*sin(theta))/alpha/cos(theta); */
    rtb_TmpSignalConversionAtSFun_4 = std::cos(URControl_B.Euler_flip_m[1]);
    rtb_TmpSignalConversionAtSFun_3 = std::sin(URControl_B.Euler_flip_m[1]);
    t = (URControlParams.magzI * rtb_TmpSignalConversionAtSFun_3 +
         URControl_U.mag[0]) / URControlParams.magxI /
      rtb_TmpSignalConversionAtSFun_4;

    /* :  y = (mag(2) - beta*cos(theta)*sin(phi) - alpha*sin(theta)*sin(phi)*cos(psi_last))/alpha/cos(phi); */
    rtb_Product1_h = std::sin(URControl_B.Euler_flip_m[0]);
    rtb_TmpSignalConversionAtSFun_3 = ((URControl_U.mag[1] -
      URControlParams.magzI * rtb_TmpSignalConversionAtSFun_4 * rtb_Product1_h)
      - URControlParams.magxI * rtb_TmpSignalConversionAtSFun_3 * rtb_Product1_h
      * std::cos(URControl_DW.psi_last_b)) / URControlParams.magxI / std::cos
      (URControl_B.Euler_flip_m[0]);

    /* :  psi0 = acos(abs(x)/sqrt(x^2+y^2)); */
    rtb_TmpSignalConversionAtSFun_5 = std::acos(std::abs(t) / std::sqrt(t * t +
      rtb_TmpSignalConversionAtSFun_3 * rtb_TmpSignalConversionAtSFun_3));

    /* :  if x>0 */
    if (t > 0.0) {
      /* :  if y>0 */
      if (rtb_TmpSignalConversionAtSFun_3 > 0.0) {
        /* :  psi = - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = -rtb_TmpSignalConversionAtSFun_5;
      } else {
        /* :  else */
        /* :  psi = psi0; */
      }
    } else {
      /* :  else */
      /* :  if y>0 */
      if (rtb_TmpSignalConversionAtSFun_3 > 0.0) {
        /* :  psi= -pi + psi0; */
        rtb_TmpSignalConversionAtSFun_5 += -3.1415926535897931;
      } else {
        /* :  else */
        /* :  psi = pi - psi0; */
        rtb_TmpSignalConversionAtSFun_5 = 3.1415926535897931 -
          rtb_TmpSignalConversionAtSFun_5;
      }
    }
  }

  /* :  psi = psi - URControlParams.mag_psi_shift; */
  rtb_TmpSignalConversionAtSFun_5 -= URControlParams.mag_psi_shift;

  /* :  if psi > pi */
  if (rtb_TmpSignalConversionAtSFun_5 > 3.1415926535897931) {
    /* :  psi  = -pi + (psi-pi); */
    rtb_TmpSignalConversionAtSFun_5 = (rtb_TmpSignalConversionAtSFun_5 -
      3.1415926535897931) + -3.1415926535897931;
  } else {
    if (rtb_TmpSignalConversionAtSFun_5 < -3.1415926535897931) {
      /* :  elseif psi < -pi */
      /* :  psi = pi - (-pi-psi); */
      rtb_TmpSignalConversionAtSFun_5 = 3.1415926535897931 -
        (-3.1415926535897931 - rtb_TmpSignalConversionAtSFun_5);
    }
  }

  /* :  psi_last = psi; */
  URControl_DW.psi_last_b = rtb_TmpSignalConversionAtSFun_5;

  /* End of MATLAB Function: '<S22>/MATLAB Function' */

  /* MATLAB Function: '<S22>/unwrap2pi' */
  /* :  if isempty(psi_last) */
  if (!URControl_DW.psi_last_not_empty) {
    /* :  psi_last = psi0; */
    URControl_DW.psi_last = rtb_TmpSignalConversionAtSFun_5;
    URControl_DW.psi_last_not_empty = true;
  }

  /* :  if isempty(N) */
  /* :  if (psi0-psi_last)>1.0*pi */
  rtb_Merge_c_tmp = rtb_TmpSignalConversionAtSFun_5 - URControl_DW.psi_last;
  if (rtb_Merge_c_tmp > 3.1415926535897931) {
    /* :  N = N-1; */
    URControl_DW.N--;
  } else {
    if (rtb_Merge_c_tmp < -3.1415926535897931) {
      /* :  elseif (psi0-psi_last)< -1.0*pi */
      /* :  N = N+1; */
      URControl_DW.N++;
    }
  }

  /* :  psi = psi0 + 2*N*pi; */
  /* :  psi_last = psi0; */
  URControl_DW.psi_last = rtb_TmpSignalConversionAtSFun_5;

  /* Sum: '<S22>/Add' incorporates:
   *  DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
   *  MATLAB Function: '<S22>/unwrap2pi'
   */
  rtb_TmpSignalConversionAtSFun_2 = (2.0 * URControl_DW.N * 3.1415926535897931 +
    rtb_TmpSignalConversionAtSFun_5) -
    URControl_DW.DiscreteTimeIntegrator_DSTATE_c;

  /* Math: '<S22>/Transpose' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  Inport: '<Root>/att'
   *  MATLAB Function: '<S22>/MATLAB Function6'
   */
  /* :  phi     = sensor.att(1); */
  /* :  theta   = sensor.att(2); */
  /* :  psi     = sensor.att(3); */
  /* :  R_BI = [cos(theta)*cos(psi)                             , cos(theta)*sin(psi)                               , -sin(theta); */
  /* :          sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)  , sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)    , sin(phi)*cos(theta); */
  /* :          cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)  , cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)    , cos(phi)*cos(theta)]; */
  /* :  R_IB = R_BI'; */
  km[0] = dHdx_tmp;
  km[3] = R_E_tmp;
  km[6] = -std::sin((real_T)URControl_U.att[1]);
  km[1] = tmp_4;
  km[4] = R_E_tmp_0;
  km[7] = tmp_5;
  km[2] = tmp_6;
  km[5] = rtb_sincos_o2_idx_4;
  km[8] = rtb_sincos_o2_idx_3;

  /* Sum: '<S136>/Add' */
  rtb_sincos_o2_idx_2 = (dHdx_tmp + R_E_tmp_0) + rtb_sincos_o2_idx_3;

  /* If: '<S118>/If' */
  if (rtb_sincos_o2_idx_2 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S118>/Positive Trace' incorporates:
     *  ActionPort: '<S134>/Action Port'
     */
    URControl_PositiveTrace(rtb_sincos_o2_idx_2, km, &URControl_B.Merge_i[0],
      &URControl_B.Merge_i[1]);

    /* End of Outputs for SubSystem: '<S118>/Positive Trace' */
  } else {
    /* Outputs for IfAction SubSystem: '<S118>/Negative Trace' incorporates:
     *  ActionPort: '<S133>/Action Port'
     */
    URControl_NegativeTrace(km, URControl_B.Merge_i);

    /* End of Outputs for SubSystem: '<S118>/Negative Trace' */
  }

  /* End of If: '<S118>/If' */

  /* MATLAB Function: '<S22>/MATLAB Function2' incorporates:
   *  DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
   */
  URControl_B.sf_MATLABFunction2_a.lambda =
    URControl_DW.DiscreteTimeIntegrator_DSTATE_c;
  URControl_MATLABFunction2(&URControl_B.sf_MATLABFunction2_a);

  /* MATLAB Function: '<S22>/MATLAB Function3' */
  URControl_MATLABFunction3(rtb_TmpSignalConversionAtSFun_2,
    &URControl_B.sf_MATLABFunction3_o);

  /* MATLAB Function: '<S22>/MATLAB Function4' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DiscreteIntegrator: '<S22>/Discrete-Time Integrator1'
   *  Gain: '<S22>/Gain'
   *  Gain: '<S22>/Gain3'
   *  Inport: '<Root>/rates'
   *  Sum: '<S22>/Add1'
   *  Sum: '<S22>/Add4'
   */
  URControl_MATLABFunction3((10.0 * rtb_TmpSignalConversionAtSFun_2 +
    URControl_DW.DiscreteTimeIntegrator1_DSTAT_a) + 1.22 * URControl_U.rates[2],
    &URControl_B.sf_MATLABFunction4_g);

  /* Sqrt: '<S181>/sqrt' incorporates:
   *  Product: '<S182>/Product'
   *  Product: '<S182>/Product1'
   *  Product: '<S182>/Product2'
   *  Product: '<S182>/Product3'
   *  Sum: '<S182>/Sum'
   */
  b_scale = std::sqrt(((URControl_B.Merge_i[0] * URControl_B.Merge_i[0] +
                        URControl_B.Merge_i[1] * URControl_B.Merge_i[1]) +
                       URControl_B.Merge_i[2] * URControl_B.Merge_i[2]) +
                      URControl_B.Merge_i[3] * URControl_B.Merge_i[3]);

  /* Product: '<S176>/Product' */
  rtb_fcn5 = URControl_B.Merge_i[0] / b_scale;

  /* Product: '<S176>/Product1' */
  rtb_fcn3 = URControl_B.Merge_i[1] / b_scale;

  /* Product: '<S176>/Product2' */
  t = URControl_B.Merge_i[2] / b_scale;

  /* Product: '<S176>/Product3' */
  b_scale = URControl_B.Merge_i[3] / b_scale;

  /* Fcn: '<S128>/fcn3' */
  rtb_sincos_o2_idx_2 = (rtb_fcn3 * b_scale - rtb_fcn5 * t) * -2.0;

  /* If: '<S177>/If' */
  if ((!(rtb_sincos_o2_idx_2 > 1.0)) && (!(rtb_sincos_o2_idx_2 < -1.0))) {
    /* Outputs for IfAction SubSystem: '<S177>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S180>/Action Port'
     */
    URControl_IfActionSubsystem2(rtb_sincos_o2_idx_2,
      &rtb_TmpSignalConversionAtSFun_2);

    /* End of Outputs for SubSystem: '<S177>/If Action Subsystem2' */
  }

  /* End of If: '<S177>/If' */

  /* Outport: '<Root>/daq' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  URControl_Y.daq = URControl_SharedDSM.DAQ;

  /* Update for Memory: '<S20>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = rtb_DataStoreRead_k[6];
  URControl_DW.Memory_PreviousInput[1] = rtb_DataStoreRead_k[7];
  URControl_DW.Memory_PreviousInput[2] = rtb_DataStoreRead_k[8];
  URControl_DW.Memory_PreviousInput[3] = rtb_DataStoreRead_k[9];

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE += 0.002 *
    URControl_B.sf_MATLABFunction4.y;

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[0] += 0.002 * rtb_u2[0];
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[1] += 0.002 * rtb_u2[1];
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[2] += 0.002 * rtb_u2[2];

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion10'
   *  Inport: '<Root>/fail_flag'
   */
  for (Rc_tmp = 0; Rc_tmp < 999; Rc_tmp++) {
    URControl_DW.Delay_DSTATE_j[Rc_tmp] = URControl_DW.Delay_DSTATE_j[Rc_tmp + 1];
  }

  URControl_DW.Delay_DSTATE_j[999] = URControl_U.fail_flag;

  /* End of Update for Delay: '<Root>/Delay' */

  /* Update for DiscreteIntegrator: '<S11>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 0U;

  /* MinMax: '<S8>/Max' */
  if (URControl_B.Probe[0] > 1.0) {
    rtb_sincos_o2_idx_3 = URControl_B.Probe[0];
  } else {
    rtb_sincos_o2_idx_3 = 1.0;
  }

  /* End of MinMax: '<S8>/Max' */

  /* Product: '<S1>/1//T' */
  rtb_sincos_o2_idx_3 = 1.0 / rtb_sincos_o2_idx_3;

  /* Update for DiscreteIntegrator: '<S11>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion8'
   *  Inport: '<Root>/pos_sp'
   *  Product: '<S1>/1//T'
   *  Sum: '<S1>/Sum1'
   */
  URControl_DW.Integrator_DSTATE[0] += (URControl_U.pos_sp[0] - rtb_Integrator[0])
    * rtb_sincos_o2_idx_3 * 0.002;
  URControl_DW.Integrator_DSTATE[1] += (URControl_U.pos_sp[1] - rtb_Integrator[1])
    * rtb_sincos_o2_idx_3 * 0.002;
  URControl_DW.Integrator_DSTATE[2] += (URControl_U.pos_sp[2] - rtb_Integrator[2])
    * rtb_sincos_o2_idx_3 * 0.002;
  URControl_DW.Integrator_PrevResetState = static_cast<int8_T>(rEQ0);

  /* Update for DiscreteIntegrator: '<S15>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 0U;

  /* MinMax: '<S12>/Max' */
  if (URControl_B.Probe_d[0] > 1.0) {
    rtb_sincos_o2_idx_3 = URControl_B.Probe_d[0];
  } else {
    rtb_sincos_o2_idx_3 = 1.0;
  }

  /* End of MinMax: '<S12>/Max' */

  /* Update for DiscreteIntegrator: '<S15>/Integrator' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion9'
   *  Inport: '<Root>/yaw_sp'
   *  Product: '<S2>/1//T'
   *  Sum: '<S2>/Sum1'
   */
  URControl_DW.Integrator_DSTATE_i += 1.0 / rtb_sincos_o2_idx_3 *
    (URControl_U.yaw_sp - rtb_Integrator_g) * 0.002;
  URControl_DW.Integrator_PrevResetState_i = static_cast<int8_T>(rtb_Compare_p2);

  /* Update for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.1)*rtb_acc[0];
    xnew[1] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.1)*rtb_acc[1];
    xnew[2] = (0.9)*URControl_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.1)*rtb_acc[2];
    (void) memcpy(&URControl_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTATE += 0.004 *
    URControl_B.sf_MATLABFunction3.y;

  /* Update for Delay: '<S22>/Delay2' */
  URControl_DW.Delay2_DSTATE_e[0] = qconj[0];
  URControl_DW.Delay2_DSTATE_e[1] = qconj[1];
  URControl_DW.Delay2_DSTATE_e[2] = qconj[2];
  URControl_DW.Delay2_DSTATE_e[3] = qconj[3];

  /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE_c += 0.002 *
    URControl_B.sf_MATLABFunction4_g.y;

  /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTAT_a += 0.004 *
    URControl_B.sf_MATLABFunction3_o.y;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.002, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  (&URControl_M)->Timing.clockTick0++;
  if (!(&URControl_M)->Timing.clockTick0) {
    (&URControl_M)->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void URControlModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)(&URControl_M), 0,
                sizeof(RT_MODEL_URControl_T));

  /* block I/O */
  (void) memset(((void *) &URControl_B), 0,
                sizeof(B_URControl_T));

  /* Initialize data stores shared across model instances */
  if (!_URControl_SharedDataInit_) {
    (void) memset((void *)&URControl_SharedDSM, 0,
                  sizeof(SharedDSM_URControl_T));
  }

  /* states (dwork) */
  (void) memset((void *)&URControl_DW, 0,
                sizeof(DW_URControl_T));

  /* external inputs */
  (void)memset(&URControl_U, 0, sizeof(ExtU_URControl_T));

  /* external outputs */
  (void) memset((void *)&URControl_Y, 0,
                sizeof(ExtY_URControl_T));

  /* Model Initialize function for ModelReference Block: '<S5>/URControl_att_indi_simple' */
  URControl_att_indi_sMDLOBJ1.initializeRTM();

  /* Set error status pointer for ModelReference Block: '<S5>/URControl_att_indi_simple' */
  URControl_att_indi_sMDLOBJ1.setErrorStatusPointer(rtmGetErrorStatusPointer
    ((&URControl_M)));
  URControl_att_indi_sMDLOBJ1.initialize();

  /* Start for Probe: '<S8>/Probe' */
  URControl_B.Probe[0] = 0.002;
  URControl_B.Probe[1] = 0.0;

  /* Start for Probe: '<S12>/Probe' */
  URControl_B.Probe_d[0] = 0.002;
  URControl_B.Probe_d[1] = 0.0;

  /* Start for ModelReference: '<S5>/URControl_att_indi_simple' */
  URControl_att_indi_sMDLOBJ1.start();

  /* Start for DataStoreMemory: '<S24>/DataStoreMemory - P' */
  memcpy(&URControl_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], 100U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<S24>/DataStoreMemory - x' */
  memcpy(&URControl_DW.x[0], &rtCP_DataStoreMemoryx_InitialVa[0], 10U * sizeof
         (real_T));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  if (!_URControl_SharedDataInit_) {
    URControl_SharedDSM.DAQ = URControl_rtZdaqBus;
  }

  /* End of Start for DataStoreMemory: '<Root>/Data Store Memory' */

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  URControl_DW.State = URControl_rtZstateBus;

  /* InitializeConditions for Memory: '<S20>/Memory' */
  URControl_DW.Memory_PreviousInput[0] = 0.0;
  URControl_DW.Memory_PreviousInput[1] = 0.0;
  URControl_DW.Memory_PreviousInput[2] = 0.0;
  URControl_DW.Memory_PreviousInput[3] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay2' */
  URControl_B.Euler_flip[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_B.Euler_flip[0] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay2' */
  URControl_B.Euler_flip[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_B.Euler_flip[1] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay2' */
  URControl_B.Euler_flip[2] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator3' */
  URControl_DW.DiscreteTimeIntegrator3_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay1' */
  URControl_B.Euler_flip[2] = 0.0;

  /* InitializeConditions for Delay: '<S21>/Delay' */
  URControl_DW.Delay_DSTATE[0] = 1.0;
  URControl_DW.Delay_DSTATE[1] = 0.0;
  URControl_DW.Delay_DSTATE[2] = 0.0;
  URControl_DW.Delay_DSTATE[3] = 0.0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  memset(&URControl_DW.Delay_DSTATE_j[0], 0, 1000U * sizeof(real_T));

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Integrator' */
  URControl_DW.Integrator_IC_LOADING = 1U;
  URControl_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S15>/Integrator' */
  URControl_DW.Integrator_IC_LOADING_a = 1U;
  URControl_DW.Integrator_PrevResetState_i = 0;

  /* InitializeConditions for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  URControl_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_DW.DiscreteStateSpace_DSTATE[2] = (0.0);

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTATE = 0.0;

  /* InitializeConditions for Delay: '<S22>/Delay2' */
  URControl_DW.Delay2_DSTATE_e[0] = 1.0;
  URControl_DW.Delay2_DSTATE_e[1] = 0.0;
  URControl_DW.Delay2_DSTATE_e[2] = 0.0;
  URControl_DW.Delay2_DSTATE_e[3] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  URControl_DW.DiscreteTimeIntegrator_DSTATE_c = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' */
  URControl_DW.DiscreteTimeIntegrator1_DSTAT_a = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/enableMeas' */
  URControl_enableMeas_Init(&URControl_DW.sf_enableMeas);

  /* SystemInitialize for MATLAB Function: '<S21>/enableMeas' */
  URControl_enableMeas_Init(&URControl_DW.sf_enableMeas_k);

  /* SystemInitialize for MATLAB Function: '<S7>/basic estimators' */
  URControl_DW.omegaFilter_not_empty = false;
  URControl_DW.posFilter_not_empty = false;
  URControl_DW.velFilter_not_empty = false;
  URControl_DW.accFilter_not_empty = false;

  /* 'UREstimators:7' failProt = 0; */
  URControl_DW.failProt = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/position control' */
  /* 'URpositionControl:3' errorInt = [0,0,0]; */
  URControl_DW.errorInt[0] = 0.0;
  URControl_DW.errorInt[1] = 0.0;
  URControl_DW.errorInt[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S4>/altitude control' */
  /* 'URAltitudeControl:3' errorInt = 0; */
  URControl_DW.errorInt_g = 0.0;

  /* SystemInitialize for ModelReference: '<S5>/URControl_att_indi_simple' */
  URControl_att_indi_sMDLOBJ1.init();

  /* SystemInitialize for MATLAB Function: '<S3>/MATLAB Function' */
  /* 'UROverrides:3' fallCount = 0; */
  URControl_DW.fallCount = 0.0;

  /* 'UROverrides:4' thrown = 0; */
  URControl_DW.thrown = 0.0;

  /* 'UROverrides:6' flipTime = 0; */
  URControl_DW.flipTime = 0.0;

  /* SystemInitialize for MATLAB Function: '<S21>/MATLAB Function' */
  /* 'mag_to_heading:5' psi_last = 0; */
  URControl_DW.psi_last_a = 0.0;

  /* SystemInitialize for MATLAB Function: '<S21>/unwrap2pi' */
  URControl_DW.psi_last_not_empty_d = false;

  /* 'unwrap2pi:8' N = 0; */
  URControl_DW.N_n = 0.0;

  /* SystemInitialize for Merge: '<S42>/Merge' */
  URControl_B.Merge[0] = 1.0;
  URControl_B.Merge[1] = 0.0;
  URControl_B.Merge[2] = 0.0;
  URControl_B.Merge[3] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S22>/MATLAB Function7' */
  /* :  attPrev = [0;0;0]; */
  URControl_DW.attPrev[0] = 0.0;
  URControl_DW.attPrev[1] = 0.0;
  URControl_DW.attPrev[2] = 0.0;

  /* SystemInitialize for MATLAB Function: '<S22>/MATLAB Function' */
  /* :  psi_last = 0; */
  URControl_DW.psi_last_b = 0.0;

  /* SystemInitialize for MATLAB Function: '<S22>/unwrap2pi' */
  URControl_DW.psi_last_not_empty = false;

  /* :  N = 0; */
  URControl_DW.N = 0.0;

  /* SystemInitialize for Merge: '<S118>/Merge' */
  URControl_B.Merge_i[0] = 1.0;
  URControl_B.Merge_i[1] = 0.0;
  URControl_B.Merge_i[2] = 0.0;
  URControl_B.Merge_i[3] = 0.0;

  /* SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
  if (!_URControl_SharedDataInit_) {
    _URControl_SharedDataInit_ = true;
  }

  /* End of SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
}

/* Model terminate function */
void URControlModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
URControlModelClass::URControlModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
URControlModelClass::~URControlModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_URControl_T * URControlModelClass::getRTM()
{
  return (&URControl_M);
}
