/*
 * Code generation for system model 'URControl_att_indi_simple'
 *
 * Model                      : URControl_att_indi_simple
 * Model version              : 1.181
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jun 30 13:52:15 2020
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "URControl_att_indi_simple.h"
#include "URControl_att_indi_simple_private.h"
#include "mldivide_I8OBiDMa.h"
#include "svd_qphS61it.h"
#include "xgetrf_vu1x6Wed.h"

/* System initialize for referenced model: 'URControl_att_indi_simple' */
void URControl_att_indi_simpleModelClass::init(void)
{
  /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE[0] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE[1] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE[2] = -500.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space1' */
  URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[0] = 0.0;
  URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE_p[0] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE_p[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S20>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_f = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_p = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_k = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_k = 0;

  /* InitializeConditions for UnitDelay: '<S6>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE_d[0] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE_d[1] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE_d[2] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S32>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_d = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_j = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S28>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_f2 = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_b = 0;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  URControl_att_indi_simple_DW.Memory_PreviousInput[0] = 0.0;
  URControl_att_indi_simple_DW.Memory_PreviousInput[1] = 0.0;
  URControl_att_indi_simple_DW.Memory_PreviousInput[2] = 0.0;
  URControl_att_indi_simple_DW.Memory_PreviousInput[3] = 0.0;
}

/* System reset for referenced model: 'URControl_att_indi_simple' */
void URControl_att_indi_simpleModelClass::reset(void)
{
  /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE[0] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE[1] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE[2] = -500.0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space1' */
  URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[0] = 0.0;
  URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE_p[0] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE_p[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S20>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_f = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_p = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_k = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_k = 0;

  /* InitializeConditions for UnitDelay: '<S6>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE_d[0] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE_d[1] = 0.0;
  URControl_att_indi_simple_DW.UD_DSTATE_d[2] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S32>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_d = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_j = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S28>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_f2 = 1U;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_b = 0;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  URControl_att_indi_simple_DW.Memory_PreviousInput[0] = 0.0;
  URControl_att_indi_simple_DW.Memory_PreviousInput[1] = 0.0;
  URControl_att_indi_simple_DW.Memory_PreviousInput[2] = 0.0;
  URControl_att_indi_simple_DW.Memory_PreviousInput[3] = 0.0;
}

/* Start for referenced model: 'URControl_att_indi_simple' */
void URControl_att_indi_simpleModelClass::start(void)
{
  /* Start for Probe: '<S13>/Probe' */
  URControl_att_indi_simple_B.Probe[0] = 0.002;
  URControl_att_indi_simple_B.Probe[1] = 0.0;

  /* Start for Probe: '<S17>/Probe' */
  URControl_att_indi_simple_B.Probe_m[0] = 0.002;
  URControl_att_indi_simple_B.Probe_m[1] = 0.0;

  /* Start for Probe: '<S21>/Probe' */
  URControl_att_indi_simple_B.Probe_e[0] = 0.002;
  URControl_att_indi_simple_B.Probe_e[1] = 0.0;

  /* Start for Probe: '<S29>/Probe' */
  URControl_att_indi_simple_B.Probe_i[0] = 0.002;
  URControl_att_indi_simple_B.Probe_i[1] = 0.0;

  /* Start for Probe: '<S25>/Probe' */
  URControl_att_indi_simple_B.Probe_k[0] = 0.002;
  URControl_att_indi_simple_B.Probe_k[1] = 0.0;
}

/* Output and update for referenced model: 'URControl_att_indi_simple' */
void URControl_att_indi_simpleModelClass::step(const real_T rtu_state_acc[3],
  const real_T rtu_state_omega[3], const real_T rtu_state_att[3], const real_T
  rtu_state_wRotor[4], const real_T *rtu_state_fail_id, const real_T rtu_n_des[3],
  const real_T *rtu_r_cmd, const real_T *rtu_Ftot_ref, real_T rty_wRotorSet[4])
{
  /* local block i/o variables */
  real_T rtb_pq_des[2];
  real_T rtb_Uk1[2];
  real_T rtb_Uk1_j[3];
  real_T R_BI[9];
  real_T B[2];
  int32_T r1;
  int32_T r2;
  real_T a21;
  real_T Iv[16];
  real_T G[16];
  int8_T i_up_data[4];
  int32_T ipiv[4];
  real_T V[16];
  int32_T r;
  real_T U[16];
  boolean_T b_p;
  int32_T ar;
  int32_T ia;
  int32_T b_ic;
  int8_T ii_data[4];
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_k;
  boolean_T rtb_Compare_is;
  boolean_T rtb_Compare_b;
  real_T rtb_Square[4];
  boolean_T rtb_Compare_l;
  real_T rtb_du[4];
  real_T rtb_TmpSignalConversionAtSFunct[4];
  real_T rtb_h[3];
  real_T R_BI_0[3];
  real_T rtb_h_0[4];
  real_T rtb_TSamp_j;
  real_T rtb_n_idx_0;
  real_T rtb_n_idx_1;
  real_T rtb_n_idx_2;
  real_T rtb_Diff_j_idx_0;
  real_T rtb_dnu_idx_3;
  real_T rtb_TSamp_idx_0;
  real_T rtb_TSamp_idx_1;
  real_T rtb_TSamp_idx_2;
  real_T rtb_TSamp_e_idx_0;
  real_T R_BI_tmp;
  real_T R_BI_tmp_0;
  real_T R_BI_tmp_1;
  real_T R_BI_tmp_tmp;
  boolean_T exitg1;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* :  a = URControlParams.axis_tilt; */
  /* :  if u == 1 */
  if (*rtu_state_fail_id == 1.0) {
    /* :  n = [-a, a, -1]; */
    rtb_n_idx_0 = -URControlParams.axis_tilt;
    rtb_n_idx_1 = URControlParams.axis_tilt;
  } else if (*rtu_state_fail_id == 2.0) {
    /* :  elseif u == 2 */
    /* :  n = [-a, -a, -1]; */
    rtb_n_idx_0 = -URControlParams.axis_tilt;
    rtb_n_idx_1 = -URControlParams.axis_tilt;
  } else if (*rtu_state_fail_id == 3.0) {
    /* :  elseif u == 3 */
    /* :  n = [a, -a, -1]; */
    rtb_n_idx_0 = URControlParams.axis_tilt;
    rtb_n_idx_1 = -URControlParams.axis_tilt;
  } else if (*rtu_state_fail_id == 4.0) {
    /* :  elseif u == 4 */
    /* :  n = [a, a, -1]; */
    rtb_n_idx_0 = URControlParams.axis_tilt;
    rtb_n_idx_1 = URControlParams.axis_tilt;
  } else {
    /* :  else */
    /* :  n = [0, 0, -1]; */
    rtb_n_idx_0 = 0.0;
    rtb_n_idx_1 = 0.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* DiscreteStateSpace: '<Root>/Discrete State-Space' */
  {
    rtb_Uk1_j[0] = (1.0)*URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE
      [0];
    rtb_Uk1_j[1] = (1.0)*URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE
      [1];
    rtb_Uk1_j[2] = (1.0)*URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE
      [2];
  }

  /* SampleTimeMath: '<S2>/TSamp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_0 = rtb_Uk1_j[0] * 500.0;

  /* UnitDelay: '<S2>/UD' */
  rtb_Uk1_j[0] = URControl_att_indi_simple_DW.UD_DSTATE[0];

  /* SampleTimeMath: '<S2>/TSamp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_1 = rtb_Uk1_j[1] * 500.0;

  /* UnitDelay: '<S2>/UD' */
  rtb_Uk1_j[1] = URControl_att_indi_simple_DW.UD_DSTATE[1];

  /* SampleTimeMath: '<S2>/TSamp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_2 = rtb_Uk1_j[2] * 500.0;

  /* UnitDelay: '<S2>/UD' */
  rtb_Uk1_j[2] = URControl_att_indi_simple_DW.UD_DSTATE[2];

  /* DiscreteStateSpace: '<Root>/Discrete State-Space1' */
  {
    rtb_Uk1[0] = (1.0)*URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[0];
    rtb_Uk1[1] = (1.0)*URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[1];
  }

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_j = rtb_Uk1[0] * 500.0;

  /* UnitDelay: '<S3>/UD' */
  rtb_Uk1[0] = URControl_att_indi_simple_DW.UD_DSTATE_p[0];

  /* Sum: '<S3>/Diff' */
  rtb_Diff_j_idx_0 = rtb_TSamp_j - rtb_Uk1[0];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_e_idx_0 = rtb_TSamp_j;
  rtb_TSamp_j = rtb_Uk1[1] * 500.0;

  /* UnitDelay: '<S3>/UD' */
  rtb_Uk1[1] = URControl_att_indi_simple_DW.UD_DSTATE_p[1];

  /* MATLAB Function: '<Root>/Attitude Controller' */
  /* :  [h,pq_des,pqr_dot_cmd] = NDI_att_indi_simple(n,att,pqr,nd_i,ndi_dot,pq_des_dot,r_dot_cmd,par); */
  /* 'NDI_att_indi_simple:3' phi = att(1); */
  /* 'NDI_att_indi_simple:4' theta = att(2); */
  /* 'NDI_att_indi_simple:5' psi = att(3); */
  /* 'NDI_att_indi_simple:7' p = pqr(1); */
  /* 'NDI_att_indi_simple:8' q = pqr(2); */
  /* 'NDI_att_indi_simple:9' r = pqr(3); */
  /* 'NDI_att_indi_simple:13' R_BI = [cos(theta)*cos(psi) cos(theta)*sin(psi) -sin(theta); */
  /* 'NDI_att_indi_simple:14'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi) sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi) sin(phi)*cos(theta); */
  /* 'NDI_att_indi_simple:15'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi) cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi) cos(phi)*cos(theta)]; */
  rtb_n_idx_2 = std::cos(rtu_state_att[1]);
  a21 = std::cos(rtu_state_att[2]);
  R_BI[0] = rtb_n_idx_2 * a21;
  rtb_dnu_idx_3 = std::sin(rtu_state_att[2]);
  R_BI[3] = rtb_n_idx_2 * rtb_dnu_idx_3;
  R_BI_tmp = std::sin(rtu_state_att[1]);
  R_BI[6] = -R_BI_tmp;
  R_BI_tmp_tmp = std::sin(rtu_state_att[0]);
  R_BI_tmp_0 = R_BI_tmp_tmp * R_BI_tmp;
  R_BI_tmp_1 = std::cos(rtu_state_att[0]);
  R_BI[1] = R_BI_tmp_0 * a21 - R_BI_tmp_1 * rtb_dnu_idx_3;
  R_BI[4] = R_BI_tmp_0 * rtb_dnu_idx_3 + R_BI_tmp_1 * a21;
  R_BI[7] = R_BI_tmp_tmp * rtb_n_idx_2;
  R_BI_tmp *= R_BI_tmp_1;
  R_BI[2] = R_BI_tmp * a21 + R_BI_tmp_tmp * rtb_dnu_idx_3;
  R_BI[5] = R_BI_tmp * rtb_dnu_idx_3 - R_BI_tmp_tmp * a21;
  R_BI[8] = R_BI_tmp_1 * rtb_n_idx_2;

  /* 'NDI_att_indi_simple:18' h = R_BI*nd_i; */
  for (r1 = 0; r1 < 3; r1++) {
    rtb_h[r1] = R_BI[r1 + 6] * rtu_n_des[2] + (R_BI[r1 + 3] * rtu_n_des[1] +
      R_BI[r1] * rtu_n_des[0]);
  }

  /* 'NDI_att_indi_simple:21' nxd = n(1); */
  /* 'NDI_att_indi_simple:22' nyd = n(2); */
  /* 'NDI_att_indi_simple:24' ndi_dot_b = R_BI*(ndi_dot); */
  /* 'NDI_att_indi_simple:26' kx = -15; */
  /* 'NDI_att_indi_simple:27' ky = -15; */
  /* 'NDI_att_indi_simple:29' nxdot_cmd = kx*(h(1)-nxd); */
  /* 'NDI_att_indi_simple:30' nydot_cmd = ky*(h(2)-nyd); */
  /* 'NDI_att_indi_simple:32' pq_des = [0 -h(3);h(3) 0]\([nxdot_cmd nydot_cmd]'-[h(2) -h(1)]'*r + ndi_dot_b(1:2)); */
  rtb_Square[0] = 0.0;
  rtb_Square[2] = -rtb_h[2];
  rtb_Square[1] = rtb_h[2];
  rtb_Square[3] = 0.0;

  /* Sum: '<S2>/Diff' */
  rtb_n_idx_2 = rtb_TSamp_idx_0 - rtb_Uk1_j[0];
  a21 = rtb_TSamp_idx_1 - rtb_Uk1_j[1];
  rtb_dnu_idx_3 = rtb_TSamp_idx_2 - rtb_Uk1_j[2];

  /* MATLAB Function: '<Root>/Attitude Controller' */
  for (r1 = 0; r1 < 3; r1++) {
    R_BI_0[r1] = R_BI[r1 + 6] * rtb_dnu_idx_3 + (R_BI[r1 + 3] * a21 + R_BI[r1] *
      rtb_n_idx_2);
  }

  B[0] = ((rtb_h[0] - rtb_n_idx_0) * -15.0 - rtb_h[1] * rtu_state_omega[2]) +
    R_BI_0[0];
  B[1] = ((rtb_h[1] - rtb_n_idx_1) * -15.0 - -rtb_h[0] * rtu_state_omega[2]) +
    R_BI_0[1];
  if (std::abs(rtb_h[2]) > 0.0) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }

  a21 = rtb_Square[r2] / rtb_Square[r1];
  rtb_n_idx_0 = rtb_Square[2 + r1];
  a21 = (B[r2] - B[r1] * a21) / (rtb_Square[2 + r2] - rtb_n_idx_0 * a21);
  rtb_dnu_idx_3 = (B[r1] - rtb_n_idx_0 * a21) / rtb_Square[r1];

  /* 'NDI_att_indi_simple:44' kp = -30; */
  /* 'NDI_att_indi_simple:45' kq = -30; */
  /* 'NDI_att_indi_simple:47' p_dot_cmd = pq_des_dot(1)+kp*(p-pq_des(1)); */
  /* 'NDI_att_indi_simple:48' q_dot_cmd = pq_des_dot(2)+kq*(q-pq_des(2)); */
  /* 'NDI_att_indi_simple:50' pq_dot_cmd = [p_dot_cmd;q_dot_cmd]; */
  /* 'NDI_att_indi_simple:52' pqr_dot_cmd = [pq_dot_cmd;r_dot_cmd]; */
  rtb_pq_des[0] = rtb_dnu_idx_3;
  rtb_pq_des[1] = a21;

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S13>/Time constant'
   *  Constant: '<S15>/Constant'
   *  Sum: '<S13>/Sum1'
   */
  rtb_Compare = (0.1 - URControl_att_indi_simple_B.Probe[0] <= 0.0);

  /* DiscreteIntegrator: '<S16>/Integrator' */
  if (URControl_att_indi_simple_DW.Integrator_IC_LOADING != 0) {
    URControl_att_indi_simple_DW.Integrator_DSTATE = rtu_state_omega[0];
  }

  if (rtb_Compare || (URControl_att_indi_simple_DW.Integrator_PrevResetState !=
                      0)) {
    URControl_att_indi_simple_DW.Integrator_DSTATE = rtu_state_omega[0];
  }

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S17>/Time constant'
   *  Constant: '<S19>/Constant'
   *  Sum: '<S17>/Sum1'
   */
  rtb_Compare_k = (0.1 - URControl_att_indi_simple_B.Probe_m[0] <= 0.0);

  /* DiscreteIntegrator: '<S20>/Integrator' */
  if (URControl_att_indi_simple_DW.Integrator_IC_LOADING_f != 0) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_p = rtu_state_omega[1];
  }

  if (rtb_Compare_k || (URControl_att_indi_simple_DW.Integrator_PrevResetState_p
                        != 0)) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_p = rtu_state_omega[1];
  }

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S21>/Time constant'
   *  Constant: '<S23>/Constant'
   *  Sum: '<S21>/Sum1'
   */
  rtb_Compare_is = (0.1 - URControl_att_indi_simple_B.Probe_e[0] <= 0.0);

  /* DiscreteIntegrator: '<S24>/Integrator' */
  if (URControl_att_indi_simple_DW.Integrator_IC_LOADING_k != 0) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_l = rtu_state_omega[2];
  }

  if (rtb_Compare_is ||
      (URControl_att_indi_simple_DW.Integrator_PrevResetState_k != 0)) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_l = rtu_state_omega[2];
  }

  /* SampleTimeMath: '<S6>/TSamp' incorporates:
   *  DiscreteIntegrator: '<S16>/Integrator'
   *  DiscreteIntegrator: '<S20>/Integrator'
   *  DiscreteIntegrator: '<S24>/Integrator'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_n_idx_0 = URControl_att_indi_simple_DW.Integrator_DSTATE * 500.0;
  rtb_n_idx_1 = URControl_att_indi_simple_DW.Integrator_DSTATE_p * 500.0;
  rtb_n_idx_2 = URControl_att_indi_simple_DW.Integrator_DSTATE_l * 500.0;

  /* UnitDelay: '<S6>/UD' */
  rtb_Uk1_j[0] = URControl_att_indi_simple_DW.UD_DSTATE_d[0];

  /* Sum: '<S6>/Diff' */
  rtb_h[0] = rtb_n_idx_0 - rtb_Uk1_j[0];

  /* UnitDelay: '<S6>/UD' */
  rtb_Uk1_j[1] = URControl_att_indi_simple_DW.UD_DSTATE_d[1];

  /* Sum: '<S6>/Diff' */
  rtb_h[1] = rtb_n_idx_1 - rtb_Uk1_j[1];

  /* UnitDelay: '<S6>/UD' */
  rtb_Uk1_j[2] = URControl_att_indi_simple_DW.UD_DSTATE_d[2];

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S29>/Time constant'
   *  Constant: '<S31>/Constant'
   *  Sum: '<S29>/Sum1'
   */
  rtb_Compare_b = (0.1 - URControl_att_indi_simple_B.Probe_i[0] <= 0.0);

  /* Math: '<S5>/Square' */
  rtb_Square[0] = rtu_state_wRotor[0] * rtu_state_wRotor[0];
  rtb_Square[1] = rtu_state_wRotor[1] * rtu_state_wRotor[1];
  rtb_Square[2] = rtu_state_wRotor[2] * rtu_state_wRotor[2];
  rtb_Square[3] = rtu_state_wRotor[3] * rtu_state_wRotor[3];

  /* DiscreteIntegrator: '<S32>/Integrator' */
  if (URControl_att_indi_simple_DW.Integrator_IC_LOADING_d != 0) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[0] = rtb_Square[0];
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[1] = rtb_Square[1];
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[2] = rtb_Square[2];
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[3] = rtb_Square[3];
  }

  if (rtb_Compare_b || (URControl_att_indi_simple_DW.Integrator_PrevResetState_j
                        != 0)) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[0] = rtb_Square[0];
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[1] = rtb_Square[1];
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[2] = rtb_Square[2];
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[3] = rtb_Square[3];
  }

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S25>/Time constant'
   *  Constant: '<S27>/Constant'
   *  Sum: '<S25>/Sum1'
   */
  rtb_Compare_l = (0.1 - URControl_att_indi_simple_B.Probe_k[0] <= 0.0);

  /* DiscreteIntegrator: '<S28>/Integrator' */
  if (URControl_att_indi_simple_DW.Integrator_IC_LOADING_f2 != 0) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_pc = rtu_state_acc[2];
  }

  if (rtb_Compare_l || (URControl_att_indi_simple_DW.Integrator_PrevResetState_b
                        != 0)) {
    URControl_att_indi_simple_DW.Integrator_DSTATE_pc = rtu_state_acc[2];
  }

  /* SignalConversion: '<S7>/TmpSignal ConversionAt SFunction Inport3' incorporates:
   *  Gain: '<Root>/R_Gain'
   *  MATLAB Function: '<Root>/Attitude Controller'
   *  MATLAB Function: '<S5>/INDI'
   *  Sum: '<Root>/Sum'
   *  Sum: '<S3>/Diff'
   */
  rtb_TmpSignalConversionAtSFunct[0] = (rtu_state_omega[0] - rtb_dnu_idx_3) *
    -30.0 + rtb_Diff_j_idx_0;
  rtb_TmpSignalConversionAtSFunct[1] = (rtu_state_omega[1] - a21) * -30.0 +
    (rtb_TSamp_j - rtb_Uk1[1]);
  rtb_TmpSignalConversionAtSFunct[2] = (*rtu_r_cmd - rtu_state_omega[2]) * 0.0;
  rtb_TmpSignalConversionAtSFunct[3] = *rtu_Ftot_ref;

  /* MATLAB Function: '<S5>/INDI' incorporates:
   *  DiscreteIntegrator: '<S28>/Integrator'
   *  DiscreteIntegrator: '<S32>/Integrator'
   *  Memory: '<S5>/Memory'
   *  Sum: '<S6>/Diff'
   */
  /* :  [w_cmd,du,dnu]  = allocator_att_indi_simple(fail_id,w2_f,nu,pqr_dot,omega_sum,az,du_last,URControlParams); */
  /* 'allocator_att_indi_simple:7' l = URControlParams.l; */
  /* 'allocator_att_indi_simple:8' b = URControlParams.b; */
  /* 'allocator_att_indi_simple:9' m = URControlParams.mass; */
  /* 'allocator_att_indi_simple:10' k = URControlParams.k0; */
  /* 'allocator_att_indi_simple:11' t = URControlParams.t0; */
  /* 'allocator_att_indi_simple:12' Iv = diag([URControlParams.Ix,URControlParams.Iy,URControlParams.Iz,1]); */
  memset(&Iv[0], 0, sizeof(real_T) << 4U);
  Iv[0] = URControlParams.Ix;
  Iv[5] = URControlParams.Iy;
  Iv[10] = URControlParams.Iz;
  Iv[15] = 1.0;

  /* 'allocator_att_indi_simple:13' g2 = URControlParams.rate_INDI_g2; */
  /* 'allocator_att_indi_simple:15' G = [b*k, -b*k, -b*k,  b*k; */
  /* 'allocator_att_indi_simple:16'      l*k,  l*k, -l*k, -l*k; */
  /* 'allocator_att_indi_simple:17'       -t,    t,   -t,    t; */
  /* 'allocator_att_indi_simple:18'        k,    k,    k,    k]; */
  /* 'allocator_att_indi_simple:19' G = Iv\G; */
  rtb_Diff_j_idx_0 = URControlParams.b * URControlParams.k0;
  G[0] = rtb_Diff_j_idx_0;
  a21 = -URControlParams.b * URControlParams.k0;
  G[4] = a21;
  G[8] = a21;
  G[12] = rtb_Diff_j_idx_0;
  rtb_Diff_j_idx_0 = URControlParams.l * URControlParams.k0;
  G[1] = rtb_Diff_j_idx_0;
  G[5] = rtb_Diff_j_idx_0;
  rtb_Diff_j_idx_0 = -URControlParams.l * URControlParams.k0;
  G[9] = rtb_Diff_j_idx_0;
  G[13] = rtb_Diff_j_idx_0;
  G[2] = -URControlParams.t0;
  G[6] = URControlParams.t0;
  G[10] = -URControlParams.t0;
  G[14] = URControlParams.t0;
  G[3] = URControlParams.k0;
  G[7] = URControlParams.k0;
  G[11] = URControlParams.k0;
  G[15] = URControlParams.k0;
  mldivide_I8OBiDMa(Iv, G);

  /* 'allocator_att_indi_simple:20' G(3,:) = URControlParams.signr*G(3,:); */
  G[2] *= URControlParams.signr;
  G[6] *= URControlParams.signr;
  G[10] *= URControlParams.signr;
  G[14] *= URControlParams.signr;

  /* 'allocator_att_indi_simple:22' if fail_id~=0 */
  if (*rtu_state_fail_id != 0.0) {
    /* 'allocator_att_indi_simple:23' G_shrink = G; */
    /* 'allocator_att_indi_simple:24' G_shrink(:,fail_id) = 0; */
    ar = (static_cast<int32_T>(*rtu_state_fail_id) - 1) << 2;
    G[ar] = 0.0;
    G[1 + ar] = 0.0;
    G[2 + ar] = 0.0;
    G[3 + ar] = 0.0;

    /* 'allocator_att_indi_simple:25' G_shrink(3,:) = 0; */
    G[2] = 0.0;
    G[6] = 0.0;
    G[10] = 0.0;
    G[14] = 0.0;

    /* 'allocator_att_indi_simple:26' G_pinv = pinv(G_shrink); */
    b_p = true;
    for (r1 = 0; r1 < 16; r1++) {
      Iv[r1] = 0.0;
      if (b_p && ((!rtIsInf(G[r1])) && (!rtIsNaN(G[r1])))) {
      } else {
        b_p = false;
      }
    }

    if (!b_p) {
      for (r1 = 0; r1 < 16; r1++) {
        Iv[r1] = (rtNaN);
      }
    } else {
      svd_qphS61it(G, U, rtb_du, V);
      a21 = std::abs(rtb_du[0]);
      if ((!rtIsInf(a21)) && (!rtIsNaN(a21))) {
        if (a21 <= 2.2250738585072014E-308) {
          a21 = 4.94065645841247E-324;
        } else {
          frexp(a21, &r);
          a21 = std::ldexp(1.0, r - 53);
        }
      } else {
        a21 = (rtNaN);
      }

      a21 *= 4.0;
      r = -1;
      r1 = 0;
      while ((r1 < 4) && (rtb_du[r1] > a21)) {
        r++;
        r1++;
      }

      if (r + 1 > 0) {
        r1 = 0;
        for (r2 = 0; r2 <= r; r2++) {
          a21 = 1.0 / rtb_du[r2];
          for (ar = r1; ar < r1 + 4; ar++) {
            V[ar] *= a21;
          }

          r1 += 4;
        }

        for (r2 = 0; r2 < 4; r2++) {
          Iv[r2] = 0.0;
        }

        for (r2 = 4; r2 < 8; r2++) {
          Iv[r2] = 0.0;
        }

        for (r2 = 8; r2 < 12; r2++) {
          Iv[r2] = 0.0;
        }

        for (r2 = 12; r2 < 16; r2++) {
          Iv[r2] = 0.0;
        }

        ar = -1;
        r <<= 2;
        r1 = r + 1;
        for (r2 = 1; r2 <= r1; r2 += 4) {
          ia = ar;
          for (b_ic = 0; b_ic < 4; b_ic++) {
            ia++;
            Iv[b_ic] += U[r2 - 1] * V[ia];
          }

          ar += 4;
        }

        ar = -1;
        r1 = r + 2;
        for (r2 = 2; r2 <= r1; r2 += 4) {
          ia = ar;
          for (b_ic = 4; b_ic < 8; b_ic++) {
            ia++;
            Iv[b_ic] += U[r2 - 1] * V[ia];
          }

          ar += 4;
        }

        ar = -1;
        r1 = r + 3;
        for (r2 = 3; r2 <= r1; r2 += 4) {
          ia = ar;
          for (b_ic = 8; b_ic < 12; b_ic++) {
            ia++;
            Iv[b_ic] += U[r2 - 1] * V[ia];
          }

          ar += 4;
        }

        ar = -1;
        r1 = r + 4;
        for (r2 = 4; r2 <= r1; r2 += 4) {
          ia = ar;
          for (b_ic = 12; b_ic < 16; b_ic++) {
            ia++;
            Iv[b_ic] += U[r2 - 1] * V[ia];
          }

          ar += 4;
        }
      }
    }

    /* 'allocator_att_indi_simple:27' dnu = nu - [pqr_dot; -az*m]; */
    rtb_Diff_j_idx_0 = rtb_TmpSignalConversionAtSFunct[0] - rtb_h[0];
    a21 = rtb_TmpSignalConversionAtSFunct[1] - rtb_h[1];
    rtb_dnu_idx_3 = *rtu_Ftot_ref -
      -URControl_att_indi_simple_DW.Integrator_DSTATE_pc * URControlParams.mass;

    /* 'allocator_att_indi_simple:28' dnu(3) = 0; */
    /* 'allocator_att_indi_simple:32' du = G_pinv*(dnu); */
    for (r1 = 0; r1 < 4; r1++) {
      R_BI_tmp = Iv[r1 + 12] * rtb_dnu_idx_3 + (Iv[r1 + 8] * 0.0 + (Iv[r1 + 4] *
        a21 + Iv[r1] * rtb_Diff_j_idx_0));
      rtb_du[r1] = R_BI_tmp;
    }
  } else {
    /* 'allocator_att_indi_simple:33' else */
    /* 'allocator_att_indi_simple:34' div = 1500; */
    /* 'allocator_att_indi_simple:35' G2 = [0 0 0 0; */
    /* 'allocator_att_indi_simple:36'           0 0 0 0; */
    /* 'allocator_att_indi_simple:37'           -g2,g2,-g2, g2; */
    /* 'allocator_att_indi_simple:38'           0 0 0 0]/div; */
    rtb_Diff_j_idx_0 = -URControlParams.rate_INDI_g2 / 1500.0;
    a21 = URControlParams.rate_INDI_g2 / 1500.0;

    /* 'allocator_att_indi_simple:40' G2(3,:) = URControlParams.signr*G2(3,:); */
    Iv[0] = 0.0;
    Iv[1] = 0.0;
    Iv[3] = 0.0;
    Iv[2] = URControlParams.signr * rtb_Diff_j_idx_0;
    Iv[4] = 0.0;
    Iv[5] = 0.0;
    Iv[7] = 0.0;
    Iv[6] = URControlParams.signr * a21;
    Iv[8] = 0.0;
    Iv[9] = 0.0;
    Iv[11] = 0.0;
    Iv[10] = URControlParams.signr * rtb_Diff_j_idx_0;
    Iv[12] = 0.0;
    Iv[13] = 0.0;
    Iv[15] = 0.0;
    Iv[14] = URControlParams.signr * a21;

    /* 'allocator_att_indi_simple:41' dnu = nu - [pqr_dot; -az*m]; */
    /* 'allocator_att_indi_simple:42' dnu(end) = dnu(end); */
    /* 'allocator_att_indi_simple:43' du = (G + G2)\(dnu + G2*du_last); */
    for (r1 = 0; r1 < 16; r1++) {
      G[r1] += Iv[r1];
    }

    xgetrf_vu1x6Wed(G, ipiv, &r);
    rtb_h_0[0] = rtb_h[0];
    rtb_h_0[1] = rtb_h[1];
    rtb_h_0[2] = rtb_n_idx_2 - rtb_Uk1_j[2];
    rtb_h_0[3] = -URControl_att_indi_simple_DW.Integrator_DSTATE_pc *
      URControlParams.mass;
    for (r1 = 0; r1 < 4; r1++) {
      rtb_du[r1] = (((Iv[r1 + 4] *
                      URControl_att_indi_simple_DW.Memory_PreviousInput[1] +
                      Iv[r1] *
                      URControl_att_indi_simple_DW.Memory_PreviousInput[0]) +
                     Iv[r1 + 8] *
                     URControl_att_indi_simple_DW.Memory_PreviousInput[2]) +
                    Iv[r1 + 12] *
                    URControl_att_indi_simple_DW.Memory_PreviousInput[3]) +
        (rtb_TmpSignalConversionAtSFunct[r1] - rtb_h_0[r1]);
    }

    if (ipiv[0] != 1) {
      a21 = rtb_du[0];
      rtb_du[0] = rtb_du[ipiv[0] - 1];
      rtb_du[ipiv[0] - 1] = a21;
    }

    if (ipiv[1] != 2) {
      a21 = rtb_du[1];
      rtb_du[1] = rtb_du[ipiv[1] - 1];
      rtb_du[ipiv[1] - 1] = a21;
    }

    if (ipiv[2] != 3) {
      a21 = rtb_du[2];
      rtb_du[2] = rtb_du[ipiv[2] - 1];
      rtb_du[ipiv[2] - 1] = a21;
    }

    if (rtb_du[0] != 0.0) {
      for (r2 = 1; r2 + 1 < 5; r2++) {
        rtb_du[r2] -= rtb_du[0] * G[r2];
      }
    }

    if (rtb_du[1] != 0.0) {
      for (r2 = 2; r2 + 1 < 5; r2++) {
        rtb_du[r2] -= G[r2 + 4] * rtb_du[1];
      }
    }

    if (rtb_du[2] != 0.0) {
      for (r2 = 3; r2 + 1 < 5; r2++) {
        rtb_du[r2] -= G[r2 + 8] * rtb_du[2];
      }
    }

    if (rtb_du[3] != 0.0) {
      rtb_du[3] /= G[15];
      for (r2 = 0; r2 < 3; r2++) {
        rtb_du[r2] -= G[r2 + 12] * rtb_du[3];
      }
    }

    if (rtb_du[2] != 0.0) {
      rtb_du[2] /= G[10];
      for (r2 = 0; r2 < 2; r2++) {
        rtb_du[r2] -= G[r2 + 8] * rtb_du[2];
      }
    }

    if (rtb_du[1] != 0.0) {
      rtb_du[1] /= G[5];
      rtb_du[0] -= rtb_du[1] * G[4];
    }

    if (rtb_du[0] != 0.0) {
      rtb_du[0] /= G[0];
    }
  }

  /* 'allocator_att_indi_simple:46' w2_cmd = w2_f + du; */
  rty_wRotorSet[0] = URControl_att_indi_simple_DW.Integrator_DSTATE_i[0] +
    rtb_du[0];
  rty_wRotorSet[1] = URControl_att_indi_simple_DW.Integrator_DSTATE_i[1] +
    rtb_du[1];
  rty_wRotorSet[2] = URControl_att_indi_simple_DW.Integrator_DSTATE_i[2] +
    rtb_du[2];
  rty_wRotorSet[3] = URControl_att_indi_simple_DW.Integrator_DSTATE_i[3] +
    rtb_du[3];

  /* 'allocator_att_indi_simple:51' i_up = find(w2_cmd>=URControlParams.wMax.^2); */
  rtb_Diff_j_idx_0 = URControlParams.wMax * URControlParams.wMax;
  r = 0;
  r1 = 0;
  exitg1 = false;
  while ((!exitg1) && (r1 < 4)) {
    if (rty_wRotorSet[r1] >= rtb_Diff_j_idx_0) {
      r++;
      ii_data[r - 1] = static_cast<int8_T>((r1 + 1));
      if (r >= 4) {
        exitg1 = true;
      } else {
        r1++;
      }
    } else {
      r1++;
    }
  }

  if (1 > r) {
    r = 0;
  }

  ar = r;
  if (0 <= r - 1) {
    memcpy(&i_up_data[0], &ii_data[0], r * sizeof(int8_T));
  }

  /* 'allocator_att_indi_simple:52' i_down = find(w2_cmd<URControlParams.wMin.^2); */
  a21 = URControlParams.wMin * URControlParams.wMin;
  r = 0;
  r1 = 0;
  exitg1 = false;
  while ((!exitg1) && (r1 < 4)) {
    if (rty_wRotorSet[r1] < a21) {
      r++;
      ii_data[r - 1] = static_cast<int8_T>((r1 + 1));
      if (r >= 4) {
        exitg1 = true;
      } else {
        r1++;
      }
    } else {
      r1++;
    }
  }

  if (1 > r) {
    r = 0;
  }

  /* 'allocator_att_indi_simple:54' du(i_up) = URControlParams.wMax.^2 - w2_f(i_up); */
  for (r1 = 0; r1 < ar; r1++) {
    r2 = i_up_data[r1] - 1;
    rtb_du[r2] = rtb_Diff_j_idx_0 -
      URControl_att_indi_simple_DW.Integrator_DSTATE_i[r2];
  }

  /* 'allocator_att_indi_simple:55' du(i_down) =  URControlParams.wMin.^2 - w2_f(i_down); */
  for (r1 = 0; r1 < r; r1++) {
    r2 = ii_data[r1] - 1;
    rtb_du[r2] = a21 - URControl_att_indi_simple_DW.Integrator_DSTATE_i[r2];
  }

  /* 'allocator_att_indi_simple:57' w2_cmd(i_up) = URControlParams.wMax.^2; */
  for (r1 = 0; r1 < ar; r1++) {
    rty_wRotorSet[i_up_data[r1] - 1] = rtb_Diff_j_idx_0;
  }

  /* 'allocator_att_indi_simple:58' w2_cmd(i_down) = URControlParams.wMin.^2; */
  for (r1 = 0; r1 < r; r1++) {
    rty_wRotorSet[ii_data[r1] - 1] = a21;
  }

  /* 'allocator_att_indi_simple:60' w_cmd = sqrt(w2_cmd); */
  rty_wRotorSet[0] = std::sqrt(rty_wRotorSet[0]);
  rty_wRotorSet[1] = std::sqrt(rty_wRotorSet[1]);
  rty_wRotorSet[2] = std::sqrt(rty_wRotorSet[2]);
  rty_wRotorSet[3] = std::sqrt(rty_wRotorSet[3]);

  /* 'allocator_att_indi_simple:63' if fail_id~=0 */
  if (*rtu_state_fail_id != 0.0) {
    /* 'allocator_att_indi_simple:65' w_cmd(fail_id) = 0; */
    rty_wRotorSet[static_cast<int32_T>(*rtu_state_fail_id) - 1] = 0.0;
  }

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.96)*URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.04)*rtu_n_des[0];
    xnew[1] = (0.96)*URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.04)*rtu_n_des[1];
    xnew[2] = (0.96)*URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.04)*rtu_n_des[2];
    (void) memcpy(&URControl_att_indi_simple_DW.DiscreteStateSpace_DSTATE[0],
                  xnew,
                  sizeof(real_T)*3);
  }

  /* Update for UnitDelay: '<S2>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE[0] = rtb_TSamp_idx_0;
  URControl_att_indi_simple_DW.UD_DSTATE[1] = rtb_TSamp_idx_1;
  URControl_att_indi_simple_DW.UD_DSTATE[2] = rtb_TSamp_idx_2;

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space1' */
  {
    real_T xnew[2];
    xnew[0] = (0.96)*URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[0];
    xnew[0] += (0.04)*rtb_pq_des[0];
    xnew[1] = (0.96)*URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[1];
    xnew[1] += (0.04)*rtb_pq_des[1];
    (void) memcpy(&URControl_att_indi_simple_DW.DiscreteStateSpace1_DSTATE[0],
                  xnew,
                  sizeof(real_T)*2);
  }

  /* Update for UnitDelay: '<S3>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE_p[0] = rtb_TSamp_e_idx_0;
  URControl_att_indi_simple_DW.UD_DSTATE_p[1] = rtb_TSamp_j;

  /* Update for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING = 0U;

  /* MinMax: '<S13>/Max' */
  if (URControl_att_indi_simple_B.Probe[0] > 0.1) {
    rtb_TSamp_idx_0 = URControl_att_indi_simple_B.Probe[0];
  } else {
    rtb_TSamp_idx_0 = 0.1;
  }

  /* End of MinMax: '<S13>/Max' */

  /* Update for DiscreteIntegrator: '<S16>/Integrator' incorporates:
   *  Product: '<S8>/1//T'
   *  Sum: '<S8>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE += 1.0 / rtb_TSamp_idx_0 *
    (rtu_state_omega[0] - URControl_att_indi_simple_DW.Integrator_DSTATE) *
    0.002;
  URControl_att_indi_simple_DW.Integrator_PrevResetState = static_cast<int8_T>
    (rtb_Compare);

  /* Update for DiscreteIntegrator: '<S20>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_f = 0U;

  /* MinMax: '<S17>/Max' */
  if (URControl_att_indi_simple_B.Probe_m[0] > 0.1) {
    rtb_TSamp_idx_0 = URControl_att_indi_simple_B.Probe_m[0];
  } else {
    rtb_TSamp_idx_0 = 0.1;
  }

  /* End of MinMax: '<S17>/Max' */

  /* Update for DiscreteIntegrator: '<S20>/Integrator' incorporates:
   *  Product: '<S9>/1//T'
   *  Sum: '<S9>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE_p += 1.0 / rtb_TSamp_idx_0 *
    (rtu_state_omega[1] - URControl_att_indi_simple_DW.Integrator_DSTATE_p) *
    0.002;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_p = static_cast<int8_T>
    (rtb_Compare_k);

  /* Update for DiscreteIntegrator: '<S24>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_k = 0U;

  /* MinMax: '<S21>/Max' */
  if (URControl_att_indi_simple_B.Probe_e[0] > 0.1) {
    rtb_TSamp_idx_0 = URControl_att_indi_simple_B.Probe_e[0];
  } else {
    rtb_TSamp_idx_0 = 0.1;
  }

  /* End of MinMax: '<S21>/Max' */

  /* Update for DiscreteIntegrator: '<S24>/Integrator' incorporates:
   *  Product: '<S10>/1//T'
   *  Sum: '<S10>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE_l += 1.0 / rtb_TSamp_idx_0 *
    (rtu_state_omega[2] - URControl_att_indi_simple_DW.Integrator_DSTATE_l) *
    0.002;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_k = static_cast<int8_T>
    (rtb_Compare_is);

  /* Update for UnitDelay: '<S6>/UD' */
  URControl_att_indi_simple_DW.UD_DSTATE_d[0] = rtb_n_idx_0;
  URControl_att_indi_simple_DW.UD_DSTATE_d[1] = rtb_n_idx_1;
  URControl_att_indi_simple_DW.UD_DSTATE_d[2] = rtb_n_idx_2;

  /* Update for DiscreteIntegrator: '<S32>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_d = 0U;

  /* MinMax: '<S29>/Max' */
  if (URControl_att_indi_simple_B.Probe_i[0] > 0.1) {
    rtb_TSamp_idx_0 = URControl_att_indi_simple_B.Probe_i[0];
  } else {
    rtb_TSamp_idx_0 = 0.1;
  }

  /* End of MinMax: '<S29>/Max' */

  /* Product: '<S12>/1//T' */
  rtb_TSamp_idx_0 = 1.0 / rtb_TSamp_idx_0;

  /* Update for DiscreteIntegrator: '<S32>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_PrevResetState_j = static_cast<int8_T>
    (rtb_Compare_b);

  /* Update for DiscreteIntegrator: '<S28>/Integrator' */
  URControl_att_indi_simple_DW.Integrator_IC_LOADING_f2 = 0U;

  /* MinMax: '<S25>/Max' */
  if (URControl_att_indi_simple_B.Probe_k[0] > 0.1) {
    rtb_n_idx_0 = URControl_att_indi_simple_B.Probe_k[0];
  } else {
    rtb_n_idx_0 = 0.1;
  }

  /* End of MinMax: '<S25>/Max' */

  /* Update for DiscreteIntegrator: '<S28>/Integrator' incorporates:
   *  Product: '<S11>/1//T'
   *  Sum: '<S11>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE_pc += 1.0 / rtb_n_idx_0 *
    (rtu_state_acc[2] - URControl_att_indi_simple_DW.Integrator_DSTATE_pc) *
    0.002;
  URControl_att_indi_simple_DW.Integrator_PrevResetState_b = static_cast<int8_T>
    (rtb_Compare_l);

  /* Update for DiscreteIntegrator: '<S32>/Integrator' incorporates:
   *  Product: '<S12>/1//T'
   *  Sum: '<S12>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE_i[0] += (rtb_Square[0] -
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[0]) * rtb_TSamp_idx_0 *
    0.002;

  /* Update for Memory: '<S5>/Memory' */
  URControl_att_indi_simple_DW.Memory_PreviousInput[0] = rtb_du[0];

  /* Update for DiscreteIntegrator: '<S32>/Integrator' incorporates:
   *  Product: '<S12>/1//T'
   *  Sum: '<S12>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE_i[1] += (rtb_Square[1] -
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[1]) * rtb_TSamp_idx_0 *
    0.002;

  /* Update for Memory: '<S5>/Memory' */
  URControl_att_indi_simple_DW.Memory_PreviousInput[1] = rtb_du[1];

  /* Update for DiscreteIntegrator: '<S32>/Integrator' incorporates:
   *  Product: '<S12>/1//T'
   *  Sum: '<S12>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE_i[2] += (rtb_Square[2] -
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[2]) * rtb_TSamp_idx_0 *
    0.002;

  /* Update for Memory: '<S5>/Memory' */
  URControl_att_indi_simple_DW.Memory_PreviousInput[2] = rtb_du[2];

  /* Update for DiscreteIntegrator: '<S32>/Integrator' incorporates:
   *  Product: '<S12>/1//T'
   *  Sum: '<S12>/Sum1'
   */
  URControl_att_indi_simple_DW.Integrator_DSTATE_i[3] += (rtb_Square[3] -
    URControl_att_indi_simple_DW.Integrator_DSTATE_i[3]) * rtb_TSamp_idx_0 *
    0.002;

  /* Update for Memory: '<S5>/Memory' */
  URControl_att_indi_simple_DW.Memory_PreviousInput[3] = rtb_du[3];
}

/* Model initialize function */
void URControl_att_indi_simpleModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* block I/O */
  (void) memset(((void *) &URControl_att_indi_simple_B), 0,
                sizeof(B_URControl_att_indi_simple_T));

  /* states (dwork) */
  (void) memset((void *)&URControl_att_indi_simple_DW, 0,
                sizeof(DW_URControl_att_indi_simple_T));
}

/* Constructor */
URControl_att_indi_simpleModelClass::URControl_att_indi_simpleModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
URControl_att_indi_simpleModelClass::~URControl_att_indi_simpleModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_URControl_att_indi_s_T * URControl_att_indi_simpleModelClass::getRTM()
{
  return (&URControl_att_indi_simple_M);
}

/* member function to initialize Real-Time model */
void URControl_att_indi_simpleModelClass::initializeRTM()
{
  (void) memset((void *)((&URControl_att_indi_simple_M)), 0,
                sizeof(RT_MODEL_URControl_att_indi_s_T));
}

/* member function to setup error status pointer */
void URControl_att_indi_simpleModelClass::setErrorStatusPointer(const char_T
  **rt_errorStatus)
{
  rtmSetErrorStatusPointer((&URControl_att_indi_simple_M), rt_errorStatus);
}
