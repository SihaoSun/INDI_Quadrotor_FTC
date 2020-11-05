/*
 * Code generation for system model 'URControl_att_indi'
 *
 * Model                      : URControl_att_indi
 * Model version              : 1.503
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jun 30 11:15:18 2020
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "URControl_att_indi.h"
#include "URControl_att_indi_private.h"
#include "svd_qphS61it.h"

const daqBus URControl_att_indi_rtZdaqBus = {
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

/* Exported block states */
boolean_T _URControl_att_indi_SharedDataInit_ = false;/* synthesized block */

/* data stores shared across model instances */
SharedDSM_URControl_att_indi_T URControl_att_indiModelClass::
  URControl_att_indi_SharedDSM;

/* System initialize for referenced model: 'URControl_att_indi' */
void URControl_att_indiModelClass::init(void)
{
  /* InitializeConditions for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  URControl_att_indi_DW.UD_DSTATE[0] = 0.0;
  URControl_att_indi_DW.UD_DSTATE[1] = 0.0;
  URControl_att_indi_DW.UD_DSTATE[2] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_e = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_f = 0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  URControl_att_indi_DW.UD_DSTATE_c = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S20>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_m = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_n = 0;

  /* InitializeConditions for UnitDelay: '<S4>/UD' */
  URControl_att_indi_DW.UD_DSTATE_n[0] = 0.0;
  URControl_att_indi_DW.UD_DSTATE_n[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S47>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_mh = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_h = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S35>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_k = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_g = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S39>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_g = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_d = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S43>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_p = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_nd = 0;

  /* SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
  if (!_URControl_att_indi_SharedDataInit_) {
    _URControl_att_indi_SharedDataInit_ = true;
  }

  /* End of SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
}

/* System reset for referenced model: 'URControl_att_indi' */
void URControl_att_indiModelClass::reset(void)
{
  /* InitializeConditions for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  URControl_att_indi_DW.UD_DSTATE[0] = 0.0;
  URControl_att_indi_DW.UD_DSTATE[1] = 0.0;
  URControl_att_indi_DW.UD_DSTATE[2] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_e = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_f = 0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  URControl_att_indi_DW.UD_DSTATE_c = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S20>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_m = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_n = 0;

  /* InitializeConditions for UnitDelay: '<S4>/UD' */
  URControl_att_indi_DW.UD_DSTATE_n[0] = 0.0;
  URControl_att_indi_DW.UD_DSTATE_n[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S47>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_mh = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_h = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S35>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_k = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_g = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S39>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_g = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_d = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S43>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_p = 1U;
  URControl_att_indi_DW.Integrator_PrevResetState_nd = 0;
}

/* Start for referenced model: 'URControl_att_indi' */
void URControl_att_indiModelClass::start(void)
{
  /* Start for Probe: '<S13>/Probe' */
  URControl_att_indi_B.Probe[0] = 0.002;
  URControl_att_indi_B.Probe[1] = 0.0;

  /* Start for Probe: '<S21>/Probe' */
  URControl_att_indi_B.Probe_i[0] = 0.002;
  URControl_att_indi_B.Probe_i[1] = 0.0;

  /* Start for Probe: '<S17>/Probe' */
  URControl_att_indi_B.Probe_d[0] = 0.002;
  URControl_att_indi_B.Probe_d[1] = 0.0;

  /* Start for Probe: '<S44>/Probe' */
  URControl_att_indi_B.Probe_h[0] = 0.002;
  URControl_att_indi_B.Probe_h[1] = 0.0;

  /* Start for Probe: '<S32>/Probe' */
  URControl_att_indi_B.Probe_p[0] = 0.002;
  URControl_att_indi_B.Probe_p[1] = 0.0;

  /* Start for Probe: '<S36>/Probe' */
  URControl_att_indi_B.Probe_b[0] = 0.002;
  URControl_att_indi_B.Probe_b[1] = 0.0;

  /* Start for Probe: '<S40>/Probe' */
  URControl_att_indi_B.Probe_hn[0] = 0.002;
  URControl_att_indi_B.Probe_hn[1] = 0.0;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
  if (!_URControl_att_indi_SharedDataInit_) {
    URControl_att_indi_SharedDSM.DAQ = URControl_att_indi_rtZdaqBus;
  }

  /* End of Start for DataStoreMemory: '<S1>/Data Store Memory' */
}

/* Output and update for referenced model: 'URControl_att_indi' */
void URControl_att_indiModelClass::step(const real_T rtu_state_acc[3], const
  real_T rtu_state_vel[3], const real_T rtu_state_pos[3], const real_T
  rtu_state_omegaf[3], const real_T rtu_state_att[3], const real_T
  rtu_state_wRotor[4], const real_T *rtu_state_fail_id, const real_T rtu_n_des[3],
  const real_T *rtu_r_cmd, const real_T *rtu_Ftot_ref, const real_T
  *rtu_input_zTarget, real_T rty_wRotorSet[4])
{
  real_T chi;
  real_T R_IB[9];
  real_T nu1;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real_T maxval;
  real_T a21;
  int32_T rtemp;
  real_T Gr[4];
  real_T R[16];
  real_T G[16];
  real_T fail_id_data[2];
  int32_T c_data[2];
  real_T V[16];
  int32_T r;
  boolean_T b_p;
  int32_T b_ic;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_p;
  real_T rtb_TSamp_h;
  boolean_T rtb_Compare_jb;
  real_T rtb_AvoidDividebyZero_e;
  real_T rtb_AvoidDividebyZero_a;
  boolean_T rtb_Compare_ae;
  boolean_T rtb_Compare_e;
  boolean_T rtb_Compare_j;
  boolean_T rtb_Compare_k;
  real_T R_IB_tmp[9];
  real_T nu1_0[16];
  real_T rtb_ddy0_idx_3;
  real_T nu_idx_3;
  real_T rtb_n_idx_0;
  real_T rtb_n_idx_1;
  real_T nu_idx_0;
  real_T h_idx_0;
  real_T h_idx_1;
  real_T h_idx_2;
  real_T rtb_nd_sat_idx_0;
  real_T rtb_nd_sat_idx_1;
  real_T rtb_nd_sat_idx_2;
  real_T rtb_U_idx_0;
  real_T rtb_U_idx_1;
  real_T rtb_U_idx_2;
  real_T rtb_U_idx_3;
  real_T rtb_dY_idx_0;
  real_T nu_idx_2;
  int32_T fail_id_size_idx_1;
  real_T rtb_w_idx_0;
  real_T rtb_w_idx_1;
  real_T rtb_TSamp_idx_0;
  real_T rtb_TSamp_idx_1;
  real_T rtb_TSamp_idx_2;
  real_T rtb_ddy0_idx_2;
  real_T u0;
  real_T R_IB_tmp_tmp;
  real_T R_IB_tmp_tmp_0;
  boolean_T tmp;
  real_T Gr_tmp;
  real_T Gr_tmp_0;
  real_T nu1_tmp;
  real_T nu1_tmp_tmp;

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S13>/Time constant'
   *  Constant: '<S15>/Constant'
   *  Sum: '<S13>/Sum1'
   */
  rtb_Compare = (URControlParams.t_indi - URControl_att_indi_B.Probe[0] <= 0.0);

  /* DiscreteIntegrator: '<S16>/Integrator' */
  if (URControl_att_indi_DW.Integrator_IC_LOADING != 0) {
    URControl_att_indi_DW.Integrator_DSTATE[0] = rtu_n_des[0];
    URControl_att_indi_DW.Integrator_DSTATE[1] = rtu_n_des[1];
    URControl_att_indi_DW.Integrator_DSTATE[2] = rtu_n_des[2];
  }

  if (rtb_Compare || (URControl_att_indi_DW.Integrator_PrevResetState != 0)) {
    URControl_att_indi_DW.Integrator_DSTATE[0] = rtu_n_des[0];
    URControl_att_indi_DW.Integrator_DSTATE[1] = rtu_n_des[1];
    URControl_att_indi_DW.Integrator_DSTATE[2] = rtu_n_des[2];
  }

  /* SampleTimeMath: '<S2>/TSamp' incorporates:
   *  DiscreteIntegrator: '<S16>/Integrator'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_0 = URControl_att_indi_DW.Integrator_DSTATE[0] * 500.0;
  rtb_TSamp_idx_1 = URControl_att_indi_DW.Integrator_DSTATE[1] * 500.0;
  rtb_TSamp_idx_2 = URControl_att_indi_DW.Integrator_DSTATE[2] * 500.0;

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S21>/Time constant'
   *  Constant: '<S23>/Constant'
   *  Sum: '<S21>/Sum1'
   */
  rtb_Compare_p = (URControlParams.t_indi - URControl_att_indi_B.Probe_i[0] <=
                   0.0);

  /* DiscreteIntegrator: '<S24>/Integrator' */
  if (URControl_att_indi_DW.Integrator_IC_LOADING_e != 0) {
    URControl_att_indi_DW.Integrator_DSTATE_p = *rtu_input_zTarget;
  }

  if (rtb_Compare_p || (URControl_att_indi_DW.Integrator_PrevResetState_f != 0))
  {
    URControl_att_indi_DW.Integrator_DSTATE_p = *rtu_input_zTarget;
  }

  /* SampleTimeMath: '<S3>/TSamp' incorporates:
   *  DiscreteIntegrator: '<S24>/Integrator'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_h = URControl_att_indi_DW.Integrator_DSTATE_p * 500.0;

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S17>/Time constant'
   *  Constant: '<S19>/Constant'
   *  Sum: '<S17>/Sum1'
   */
  rtb_Compare_jb = (URControlParams.t_indi - URControl_att_indi_B.Probe_d[0] <=
                    0.0);

  /* Sum: '<S2>/Diff' incorporates:
   *  UnitDelay: '<S2>/UD'
   */
  u0 = rtb_TSamp_idx_0 - URControl_att_indi_DW.UD_DSTATE[0];
  rtb_dY_idx_0 = rtb_TSamp_idx_1 - URControl_att_indi_DW.UD_DSTATE[1];

  /* MATLAB Function: '<S1>/MATLAB Function' */
  /* :  a = URControlParams.axis_tilt; */
  /* :  if URControlParams.DRF_enable == 0 || URControlParams.DRF_enable == 1 */
  if ((URControlParams.DRF_enable == 0.0) || (URControlParams.DRF_enable == 1.0))
  {
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
  } else {
    /* :  else */
    /* :  n = [0, 0, -1]; */
    rtb_n_idx_0 = 0.0;
    rtb_n_idx_1 = 0.0;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function' */

  /* MATLAB Function: '<S1>/pseudo_control_indi' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_pseudo_control_indi_at_inport_0'
   *  DiscreteIntegrator: '<S16>/Integrator'
   *  MATLAB Function: '<S11>/MATLAB Function1'
   *  MATLAB Function: '<S11>/MATLAB Function5'
   *  MATLAB Function: '<S1>/MATLAB Function6'
   */
  /* :  [nu, DAQ, dY, Y] = pseudo_control_att_indi(state, DAQ, n_des, lambda, nB, r_ref, Z_ref, Vz_ref, F_tot_ref, URControlParams); */
  /* 'pseudo_control_att_indi:2' phi = state.att(1); */
  /* 'pseudo_control_att_indi:3' theta = state.att(2); */
  /* 'pseudo_control_att_indi:4' psi = state.att(3); */
  /* 'pseudo_control_att_indi:6' p = state.omegaf(1); */
  /* 'pseudo_control_att_indi:7' q = state.omegaf(2); */
  /* 'pseudo_control_att_indi:9' r = state.omegaf(3); */
  /* 'pseudo_control_att_indi:11' Vz = state.vel(3); */
  /* 'pseudo_control_att_indi:12' Z = state.pos(3); */
  /* 'pseudo_control_att_indi:14' nx = nB(1); */
  /* 'pseudo_control_att_indi:15' ny = nB(2); */
  /* 'pseudo_control_att_indi:17' chi = URControlParams.chi/57.3; */
  nu1 = URControlParams.chi / 57.3;
  chi = nu1;

  /* 'pseudo_control_att_indi:19' if state.fail_id == 1 || state.fail_id == 3 */
  if ((*rtu_state_fail_id == 1.0) || (*rtu_state_fail_id == 3.0)) {
    /* 'pseudo_control_att_indi:20' chi = pi- URControlParams.chi/57.3; */
    chi = 3.1415926535897931 - nu1;
  }

  /* 'pseudo_control_att_indi:23' m   = URControlParams.mass; */
  /* 'pseudo_control_att_indi:24' g   = URControlParams.g; */
  /* 'pseudo_control_att_indi:26' R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* 'pseudo_control_att_indi:27'         sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* 'pseudo_control_att_indi:28'         -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  nu_idx_2 = std::sin(rtu_state_att[1]);
  R_IB_tmp_tmp = std::cos(rtu_state_att[2]);
  rtb_w_idx_0 = std::cos(rtu_state_att[1]);
  R_IB_tmp[0] = R_IB_tmp_tmp * rtb_w_idx_0;
  R_IB_tmp_tmp_0 = R_IB_tmp_tmp * nu_idx_2;
  rtb_w_idx_1 = std::cos(rtu_state_att[0]);
  h_idx_1 = std::sin(rtu_state_att[2]);
  h_idx_2 = std::sin(rtu_state_att[0]);
  R_IB_tmp[3] = R_IB_tmp_tmp_0 * h_idx_2 - h_idx_1 * rtb_w_idx_1;
  R_IB_tmp[6] = R_IB_tmp_tmp_0 * rtb_w_idx_1 + h_idx_1 * h_idx_2;
  R_IB_tmp[1] = h_idx_1 * rtb_w_idx_0;
  R_IB_tmp_tmp_0 = h_idx_1 * nu_idx_2;
  R_IB_tmp[4] = R_IB_tmp_tmp_0 * h_idx_2 + R_IB_tmp_tmp * rtb_w_idx_1;
  R_IB_tmp[7] = R_IB_tmp_tmp_0 * rtb_w_idx_1 - R_IB_tmp_tmp * h_idx_2;
  R_IB_tmp[2] = -nu_idx_2;
  R_IB_tmp[5] = rtb_w_idx_0 * h_idx_2;
  R_IB_tmp[8] = rtb_w_idx_0 * rtb_w_idx_1;
  memcpy(&R_IB[0], &R_IB_tmp[0], 9U * sizeof(real_T));

  /* 'pseudo_control_att_indi:29' h = R_IB\n_des; */
  r1 = 0;
  r2 = 1;
  r3 = 2;
  rtb_nd_sat_idx_1 = std::abs(R_IB_tmp[0]);
  maxval = rtb_nd_sat_idx_1;
  rtb_nd_sat_idx_2 = std::abs(R_IB_tmp[1]);
  if (rtb_nd_sat_idx_2 > rtb_nd_sat_idx_1) {
    maxval = rtb_nd_sat_idx_2;
    r1 = 1;
    r2 = 0;
  }

  nu_idx_2 = std::abs(-nu_idx_2);
  if (nu_idx_2 > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  R_IB[r2] = R_IB_tmp[r2] / R_IB_tmp[r1];
  R_IB[r3] /= R_IB[r1];
  R_IB[3 + r2] -= R_IB[3 + r1] * R_IB[r2];
  R_IB[3 + r3] -= R_IB[3 + r1] * R_IB[r3];
  R_IB[6 + r2] -= R_IB[6 + r1] * R_IB[r2];
  R_IB[6 + r3] -= R_IB[6 + r1] * R_IB[r3];
  if (std::abs(R_IB[3 + r3]) > std::abs(R_IB[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  R_IB[3 + r3] /= R_IB[3 + r2];
  R_IB[6 + r3] -= R_IB[3 + r3] * R_IB[6 + r2];
  h_idx_1 = URControl_att_indi_DW.Integrator_DSTATE[r2] -
    URControl_att_indi_DW.Integrator_DSTATE[r1] * R_IB[r2];
  h_idx_2 = ((URControl_att_indi_DW.Integrator_DSTATE[r3] -
              URControl_att_indi_DW.Integrator_DSTATE[r1] * R_IB[r3]) - R_IB[3 +
             r3] * h_idx_1) / R_IB[6 + r3];
  h_idx_1 -= R_IB[6 + r2] * h_idx_2;
  h_idx_1 /= R_IB[3 + r2];
  h_idx_0 = ((URControl_att_indi_DW.Integrator_DSTATE[r1] - R_IB[6 + r1] *
              h_idx_2) - R_IB[3 + r1] * h_idx_1) / R_IB[r1];

  /* 'pseudo_control_att_indi:30' h1 = h(1); */
  /* 'pseudo_control_att_indi:30' h2 = h(2); */
  /* 'pseudo_control_att_indi:38' Y = [h1-nx; h2-ny]; */
  /* 'pseudo_control_att_indi:39' dY = [-h(3)*q + h(2)*r + lambda(1); */
  /* 'pseudo_control_att_indi:40'        h(3)*p - h(1)*r + lambda(2)]; */
  /* 'pseudo_control_att_indi:42' Y = [cos(chi) sin(chi); -sin(chi) cos(chi)] * Y; */
  rtb_n_idx_0 = h_idx_0 - rtb_n_idx_0;
  rtb_n_idx_1 = h_idx_1 - rtb_n_idx_1;
  R_IB_tmp_tmp = std::sin(chi);
  R_IB_tmp_tmp_0 = std::cos(chi);

  /* Saturate: '<S1>/Saturation' */
  /* 'pseudo_control_att_indi:43' dY = [cos(chi) sin(chi); -sin(chi) cos(chi)] * dY; */
  if (u0 > 0.5) {
    u0 = 0.5;
  } else {
    if (u0 < -0.5) {
      u0 = -0.5;
    }
  }

  /* MATLAB Function: '<S1>/pseudo_control_indi' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_pseudo_control_indi_at_inport_0'
   */
  u0 += -h_idx_2 * rtu_state_omegaf[1] + h_idx_1 * rtu_state_omegaf[2];

  /* Saturate: '<S1>/Saturation' */
  if (rtb_dY_idx_0 > 0.5) {
    rtb_dY_idx_0 = 0.5;
  } else {
    if (rtb_dY_idx_0 < -0.5) {
      rtb_dY_idx_0 = -0.5;
    }
  }

  /* MATLAB Function: '<S1>/pseudo_control_indi' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_pseudo_control_indi_at_inport_0'
   */
  h_idx_1 = (h_idx_2 * rtu_state_omegaf[0] - h_idx_0 * rtu_state_omegaf[2]) +
    rtb_dY_idx_0;
  rtb_dY_idx_0 = R_IB_tmp_tmp_0 * u0 + R_IB_tmp_tmp * h_idx_1;
  u0 = -std::sin(chi) * u0 + R_IB_tmp_tmp_0 * h_idx_1;

  /* 'pseudo_control_att_indi:45' kpz = URControlParams.pos_z_p_gain; */
  /* 'pseudo_control_att_indi:46' kdz = URControlParams.pos_z_d_gain; */
  /* 'pseudo_control_att_indi:47' kp = URControlParams.att_p_gain; */
  /* 'pseudo_control_att_indi:48' kd = URControlParams.att_d_gain; */
  /* 'pseudo_control_att_indi:49' kpr = URControlParams.YRC_Kp_r; */
  /* 'pseudo_control_att_indi:51' if URControlParams.manual_enable == 0 || URControlParams.manual_alt == 0 */
  if ((URControlParams.manual_enable == 0.0) || (URControlParams.manual_alt ==
       0.0)) {
    /* MATLAB Function: '<S1>/MATLAB Function6' incorporates:
     *  Sum: '<S3>/Diff'
     *  UnitDelay: '<S3>/UD'
     */
    /* 'pseudo_control_att_indi:52' nu1 =  - kdz*(Vz-Vz_ref) - kpz*(Z-Z_ref); */
    nu_idx_0 = (rtu_state_vel[2] - (rtb_TSamp_h -
      URControl_att_indi_DW.UD_DSTATE_c)) * -URControlParams.pos_z_d_gain -
      (rtu_state_pos[2] - *rtu_input_zTarget) * URControlParams.pos_z_p_gain;
  } else {
    /* MATLAB Function: '<S1>/MATLAB Function6' */
    /* 'pseudo_control_att_indi:53' else */
    /* 'pseudo_control_att_indi:54' nu1 = -F_tot_ref/m * cos(theta)*cos(phi) + g; */
    nu_idx_0 = -*rtu_Ftot_ref / URControlParams.mass * rtb_w_idx_0 * rtb_w_idx_1
      + URControlParams.g;
  }

  /* DiscreteIntegrator: '<S20>/Integrator' */
  /* 'pseudo_control_att_indi:57' nu2 =  - kd * dY(1) - kp*Y(1); */
  /* 'pseudo_control_att_indi:58' nu3 =  - kd * dY(2) - kp*Y(2); */
  /* 'pseudo_control_att_indi:59' nu4 =  - kpr* (r-r_ref); */
  /* 'pseudo_control_att_indi:61' nu = [nu1; nu2; nu3; nu4]; */
  if (URControl_att_indi_DW.Integrator_IC_LOADING_m != 0) {
    URControl_att_indi_DW.Integrator_DSTATE_e[0] = rtb_dY_idx_0;
    URControl_att_indi_DW.Integrator_DSTATE_e[1] = u0;
  }

  if (rtb_Compare_jb || (URControl_att_indi_DW.Integrator_PrevResetState_n != 0))
  {
    URControl_att_indi_DW.Integrator_DSTATE_e[0] = rtb_dY_idx_0;
    URControl_att_indi_DW.Integrator_DSTATE_e[1] = u0;
  }

  /* SampleTimeMath: '<S4>/TSamp' incorporates:
   *  DiscreteIntegrator: '<S20>/Integrator'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  h_idx_1 = URControl_att_indi_DW.Integrator_DSTATE_e[0] * 500.0;
  h_idx_2 = URControl_att_indi_DW.Integrator_DSTATE_e[1] * 500.0;

  /* MinMax: '<S13>/Max' incorporates:
   *  Constant: '<S13>/Time constant'
   *  MinMax: '<S17>/Max'
   *  MinMax: '<S21>/Max'
   *  MinMax: '<S32>/Max'
   *  MinMax: '<S36>/Max'
   *  MinMax: '<S40>/Max'
   *  MinMax: '<S44>/Max'
   */
  tmp = rtIsNaN(URControlParams.t_indi);
  if ((URControl_att_indi_B.Probe[0] > URControlParams.t_indi) || tmp) {
    chi = URControl_att_indi_B.Probe[0];
  } else {
    chi = URControlParams.t_indi;
  }

  /* End of MinMax: '<S13>/Max' */

  /* Fcn: '<S13>/Avoid Divide by Zero' */
  h_idx_0 = static_cast<real_T>((chi == 0.0)) * 2.2204460492503131e-16 + chi;

  /* MinMax: '<S17>/Max' incorporates:
   *  Constant: '<S17>/Time constant'
   */
  if ((URControl_att_indi_B.Probe_d[0] > URControlParams.t_indi) || tmp) {
    chi = URControl_att_indi_B.Probe_d[0];
  } else {
    chi = URControlParams.t_indi;
  }

  /* Fcn: '<S17>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_e = static_cast<real_T>((chi == 0.0)) *
    2.2204460492503131e-16 + chi;

  /* MinMax: '<S21>/Max' incorporates:
   *  Constant: '<S21>/Time constant'
   */
  if ((URControl_att_indi_B.Probe_i[0] > URControlParams.t_indi) || tmp) {
    chi = URControl_att_indi_B.Probe_i[0];
  } else {
    chi = URControlParams.t_indi;
  }

  /* Fcn: '<S21>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_a = static_cast<real_T>((chi == 0.0)) *
    2.2204460492503131e-16 + chi;

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S44>/Time constant'
   *  Constant: '<S46>/Constant'
   *  Sum: '<S44>/Sum1'
   */
  rtb_Compare_ae = (URControlParams.t_indi - URControl_att_indi_B.Probe_h[0] <=
                    0.0);

  /* MATLAB Function: '<S11>/MATLAB Function5' */
  /* :  phi = att(1); */
  /* :  theta = att(2); */
  /* :  psi = att(3); */
  /* :  R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi); */
  /* :          sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi); */
  /* :          -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ]; */
  memcpy(&R_IB[0], &R_IB_tmp[0], 9U * sizeof(real_T));

  /* :  h = R_IB \ n_des; */
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = rtb_nd_sat_idx_1;
  if (rtb_nd_sat_idx_2 > rtb_nd_sat_idx_1) {
    maxval = rtb_nd_sat_idx_2;
    r1 = 1;
    r2 = 0;
  }

  if (nu_idx_2 > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  R_IB[r2] = R_IB_tmp[r2] / R_IB_tmp[r1];
  R_IB[r3] /= R_IB[r1];
  R_IB[3 + r2] -= R_IB[3 + r1] * R_IB[r2];
  R_IB[3 + r3] -= R_IB[3 + r1] * R_IB[r3];
  R_IB[6 + r2] -= R_IB[6 + r1] * R_IB[r2];
  R_IB[6 + r3] -= R_IB[6 + r1] * R_IB[r3];
  if (std::abs(R_IB[3 + r3]) > std::abs(R_IB[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  R_IB[3 + r3] /= R_IB[3 + r2];
  R_IB[6 + r3] -= R_IB[3 + r3] * R_IB[6 + r2];
  rtb_nd_sat_idx_1 = rtu_n_des[r2] - rtu_n_des[r1] * R_IB[r2];
  rtb_nd_sat_idx_2 = ((rtu_n_des[r3] - rtu_n_des[r1] * R_IB[r3]) - R_IB[3 + r3] *
                      rtb_nd_sat_idx_1) / R_IB[6 + r3];
  rtb_nd_sat_idx_1 -= R_IB[6 + r2] * rtb_nd_sat_idx_2;
  rtb_nd_sat_idx_1 /= R_IB[3 + r2];
  rtb_nd_sat_idx_0 = ((rtu_n_des[r1] - R_IB[6 + r1] * rtb_nd_sat_idx_2) - R_IB[3
                      + r1] * rtb_nd_sat_idx_1) / R_IB[r1];

  /* DiscreteIntegrator: '<S47>/Integrator' */
  if (URControl_att_indi_DW.Integrator_IC_LOADING_mh != 0) {
    URControl_att_indi_DW.Integrator_DSTATE_i[0] = rtb_nd_sat_idx_0;
    URControl_att_indi_DW.Integrator_DSTATE_i[1] = rtb_nd_sat_idx_1;
    URControl_att_indi_DW.Integrator_DSTATE_i[2] = rtb_nd_sat_idx_2;
  }

  if (rtb_Compare_ae || (URControl_att_indi_DW.Integrator_PrevResetState_h != 0))
  {
    URControl_att_indi_DW.Integrator_DSTATE_i[0] = rtb_nd_sat_idx_0;
    URControl_att_indi_DW.Integrator_DSTATE_i[1] = rtb_nd_sat_idx_1;
    URControl_att_indi_DW.Integrator_DSTATE_i[2] = rtb_nd_sat_idx_2;
  }

  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S32>/Time constant'
   *  Constant: '<S34>/Constant'
   *  Sum: '<S32>/Sum1'
   */
  rtb_Compare_e = (URControlParams.t_indi - URControl_att_indi_B.Probe_p[0] <=
                   0.0);

  /* DiscreteIntegrator: '<S35>/Integrator' */
  if (URControl_att_indi_DW.Integrator_IC_LOADING_k != 0) {
    URControl_att_indi_DW.Integrator_DSTATE_pv = rtu_state_acc[2];
  }

  if (rtb_Compare_e || (URControl_att_indi_DW.Integrator_PrevResetState_g != 0))
  {
    URControl_att_indi_DW.Integrator_DSTATE_pv = rtu_state_acc[2];
  }

  /* RelationalOperator: '<S38>/Compare' incorporates:
   *  Constant: '<S36>/Time constant'
   *  Constant: '<S38>/Constant'
   *  Sum: '<S36>/Sum1'
   */
  /* :  phi = att(1); */
  /* :  theta = att(2); */
  /* :  zdd = az*cos(theta)*cos(phi) + 9.8124; */
  rtb_Compare_j = (URControlParams.t_indi - URControl_att_indi_B.Probe_b[0] <=
                   0.0);

  /* MATLAB Function: '<S11>/MATLAB Function7' */
  /* :  U = zeros(4,1); */
  /* :  U(1) = w(1)^2; */
  rtb_U_idx_0 = rtu_state_wRotor[0] * rtu_state_wRotor[0];

  /* :  U(2) = w(2)^2; */
  rtb_U_idx_1 = rtu_state_wRotor[1] * rtu_state_wRotor[1];

  /* :  U(3) = w(3)^2; */
  rtb_U_idx_2 = rtu_state_wRotor[2] * rtu_state_wRotor[2];

  /* :  U(4) = w(4)^2; */
  rtb_U_idx_3 = rtu_state_wRotor[3] * rtu_state_wRotor[3];

  /* DiscreteIntegrator: '<S39>/Integrator' */
  if (URControl_att_indi_DW.Integrator_IC_LOADING_g != 0) {
    URControl_att_indi_DW.Integrator_DSTATE_l[0] = rtb_U_idx_0;
    URControl_att_indi_DW.Integrator_DSTATE_l[1] = rtb_U_idx_1;
    URControl_att_indi_DW.Integrator_DSTATE_l[2] = rtb_U_idx_2;
    URControl_att_indi_DW.Integrator_DSTATE_l[3] = rtb_U_idx_3;
  }

  if (rtb_Compare_j || (URControl_att_indi_DW.Integrator_PrevResetState_d != 0))
  {
    URControl_att_indi_DW.Integrator_DSTATE_l[0] = rtb_U_idx_0;
    URControl_att_indi_DW.Integrator_DSTATE_l[1] = rtb_U_idx_1;
    URControl_att_indi_DW.Integrator_DSTATE_l[2] = rtb_U_idx_2;
    URControl_att_indi_DW.Integrator_DSTATE_l[3] = rtb_U_idx_3;
  }

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S40>/Time constant'
   *  Constant: '<S42>/Constant'
   *  Sum: '<S40>/Sum1'
   */
  rtb_Compare_k = (URControlParams.t_indi - URControl_att_indi_B.Probe_hn[0] <=
                   0.0);

  /* DiscreteIntegrator: '<S43>/Integrator' */
  if (URControl_att_indi_DW.Integrator_IC_LOADING_p != 0) {
    URControl_att_indi_DW.Integrator_DSTATE_k = rtu_state_omegaf[2];
  }

  if (rtb_Compare_k || (URControl_att_indi_DW.Integrator_PrevResetState_nd != 0))
  {
    URControl_att_indi_DW.Integrator_DSTATE_k = rtu_state_omegaf[2];
  }

  /* MATLAB Function: '<S1>/MATLAB Function6' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_pseudo_control_indi_at_inport_0'
   *  DiscreteIntegrator: '<S35>/Integrator'
   *  DiscreteIntegrator: '<S39>/Integrator'
   *  DiscreteIntegrator: '<S43>/Integrator'
   *  DiscreteIntegrator: '<S47>/Integrator'
   *  MATLAB Function: '<S11>/MATLAB Function1'
   *  MATLAB Function: '<S1>/pseudo_control_indi'
   *  Sum: '<S4>/Diff'
   *  UnitDelay: '<S4>/UD'
   */
  /* :  [U,ddy0]  =  allocation_att_indi(state, nu, ddY, h0, zdd, U0, rdot, URControlParams); */
  nu_idx_2 = -URControlParams.att_d_gain * u0 - URControlParams.att_p_gain *
    (-R_IB_tmp_tmp * rtb_n_idx_0 + R_IB_tmp_tmp_0 * rtb_n_idx_1);
  nu_idx_3 = (rtu_state_omegaf[2] - *rtu_r_cmd) * -URControlParams.YRC_Kp_r;

  /* 'allocation_att_indi:3' fail_flag = state.fail_id; */
  /* 'allocation_att_indi:4' phi = state.att(1); */
  /* 'allocation_att_indi:5' theta = state.att(2); */
  /* 'allocation_att_indi:7' k = URControlParams.k0; */
  /* 'allocation_att_indi:8' t = URControlParams.t0; */
  /* 'allocation_att_indi:9' b = sqrt(URControlParams.b^2 +  URControlParams.l^2); */
  maxval = std::sqrt(URControlParams.b * URControlParams.b + URControlParams.l *
                     URControlParams.l);

  /* 'allocation_att_indi:10' m = URControlParams.mass; */
  /* 'allocation_att_indi:11' Ix = URControlParams.Ix; */
  /* 'allocation_att_indi:12' Iy = URControlParams.Iy; */
  /* 'allocation_att_indi:13' Iz = URControlParams.Iz; */
  /* 'allocation_att_indi:14' beta = atan(URControlParams.b/URControlParams.l); */
  a21 = std::atan(URControlParams.b / URControlParams.l);

  /* 'allocation_att_indi:15' chi = URControlParams.chi/57.3; */
  chi = nu1;

  /* 'allocation_att_indi:17' if state.fail_id == 1 || state.fail_id == 3 */
  if ((*rtu_state_fail_id == 1.0) || (*rtu_state_fail_id == 3.0)) {
    /* 'allocation_att_indi:18' chi = pi- URControlParams.chi/57.3; */
    chi = 3.1415926535897931 - URControlParams.chi / 57.3;
  }

  /* 'allocation_att_indi:26' h1 = h0(1); */
  /* 'allocation_att_indi:26' h2 = h0(2); */
  /* 'allocation_att_indi:26' h3 = h0(3); */
  /* 'allocation_att_indi:37' Gp = [k*b*sin(beta), -k*b*sin(beta), -k*b*sin(beta), k*b*sin(beta)] / Ix; */
  /* 'allocation_att_indi:38' Gq = [k*b*cos(beta), k*b*cos(beta), -k*b*cos(beta), -k*b*cos(beta)] / Iy; */
  /* 'allocation_att_indi:39' Gr = [t -t t -t] / Iz; */
  Gr_tmp = URControlParams.t0 / URControlParams.Iz;
  Gr_tmp_0 = -URControlParams.t0 / URControlParams.Iz;

  /* 'allocation_att_indi:41' G0 = [-k/m*cos(theta)*cos(phi)*ones(1,4); */
  /* 'allocation_att_indi:42'      -h3*Gq + h2*Gr; */
  /* 'allocation_att_indi:43'      h3*Gp - h1*Gr; */
  /* 'allocation_att_indi:44'      Gr]; */
  nu1 = -URControlParams.k0 / URControlParams.mass * rtb_w_idx_0 * rtb_w_idx_1;

  /* 'allocation_att_indi:46' R = blkdiag(1,[cos(chi), sin(chi); -sin(chi), cos(chi)],1); */
  memset(&R[0], 0, sizeof(real_T) << 4U);
  R[0] = 1.0;
  rtb_ddy0_idx_2 = std::cos(chi);
  R[5] = rtb_ddy0_idx_2;
  chi = std::sin(chi);
  R[9] = chi;
  R[6] = -chi;
  R[10] = rtb_ddy0_idx_2;
  R[15] = 1.0;

  /* 'allocation_att_indi:49' ddy0 = [zdd; ddY; rdot]; */
  rtb_ddy0_idx_2 = h_idx_2 - URControl_att_indi_DW.UD_DSTATE_n[1];
  rtb_ddy0_idx_3 = URControl_att_indi_DW.Integrator_DSTATE_k;

  /* 'allocation_att_indi:50' G = R*G0; */
  nu1_0[0] = nu1;
  chi = URControlParams.k0 * maxval;
  nu1_tmp_tmp = std::cos(a21);
  nu1_tmp = chi * nu1_tmp_tmp / URControlParams.Iy *
    -URControl_att_indi_DW.Integrator_DSTATE_i[2];
  nu1_0[1] = nu1_tmp + URControl_att_indi_DW.Integrator_DSTATE_i[1] * Gr_tmp;
  a21 = std::sin(a21);
  chi = chi * a21 / URControlParams.Ix *
    URControl_att_indi_DW.Integrator_DSTATE_i[2];
  nu1_0[2] = chi - URControl_att_indi_DW.Integrator_DSTATE_i[0] * Gr_tmp;
  nu1_0[3] = Gr_tmp;
  nu1_0[4] = nu1;
  nu1_0[5] = nu1_tmp + URControl_att_indi_DW.Integrator_DSTATE_i[1] * Gr_tmp_0;
  nu1_tmp = -URControlParams.k0 * maxval;
  a21 = nu1_tmp * a21 / URControlParams.Ix *
    URControl_att_indi_DW.Integrator_DSTATE_i[2];
  nu1_0[6] = a21 - URControl_att_indi_DW.Integrator_DSTATE_i[0] * Gr_tmp_0;
  nu1_0[7] = Gr_tmp_0;
  nu1_0[8] = nu1;
  nu1_tmp = nu1_tmp * nu1_tmp_tmp / URControlParams.Iy *
    -URControl_att_indi_DW.Integrator_DSTATE_i[2];
  nu1_0[9] = nu1_tmp + URControl_att_indi_DW.Integrator_DSTATE_i[1] * Gr_tmp;
  nu1_0[10] = a21 - URControl_att_indi_DW.Integrator_DSTATE_i[0] * Gr_tmp;
  nu1_0[11] = Gr_tmp;
  nu1_0[12] = nu1;
  nu1_0[13] = nu1_tmp + URControl_att_indi_DW.Integrator_DSTATE_i[1] * Gr_tmp_0;
  nu1_0[14] = chi - URControl_att_indi_DW.Integrator_DSTATE_i[0] * Gr_tmp_0;
  nu1_0[15] = Gr_tmp_0;
  for (r3 = 0; r3 < 4; r3++) {
    for (fail_id_size_idx_1 = 0; fail_id_size_idx_1 < 4; fail_id_size_idx_1++) {
      r1 = r3 << 2;
      rtemp = fail_id_size_idx_1 + r1;
      G[rtemp] = 0.0;
      G[rtemp] += nu1_0[r1] * R[fail_id_size_idx_1];
      G[rtemp] += nu1_0[r1 + 1] * R[fail_id_size_idx_1 + 4];
      G[rtemp] += nu1_0[r1 + 2] * R[fail_id_size_idx_1 + 8];
      G[rtemp] += nu1_0[r1 + 3] * R[fail_id_size_idx_1 + 12];
    }
  }

  /* 'allocation_att_indi:52' if URControlParams.DRF_enable && fail_flag>0 */
  if ((URControlParams.DRF_enable != 0.0) && (*rtu_state_fail_id > 0.0)) {
    /* 'allocation_att_indi:53' if fail_flag == 1 || fail_flag == 3 */
    if ((*rtu_state_fail_id == 1.0) || (*rtu_state_fail_id == 3.0)) {
      /* 'allocation_att_indi:54' fail_id = [1 3]; */
      fail_id_size_idx_1 = 2;
      fail_id_data[0] = 1.0;
      fail_id_data[1] = 3.0;
    } else {
      /* 'allocation_att_indi:55' else */
      /* 'allocation_att_indi:56' fail_id = [2 4]; */
      fail_id_size_idx_1 = 2;
      fail_id_data[0] = 2.0;
      fail_id_data[1] = 4.0;
    }
  } else {
    /* 'allocation_att_indi:58' else */
    /* 'allocation_att_indi:59' fail_id = fail_flag; */
    fail_id_size_idx_1 = 1;
    fail_id_data[0] = *rtu_state_fail_id;
  }

  /* 'allocation_att_indi:62' if fail_flag > 0 */
  if (*rtu_state_fail_id > 0.0) {
    /* 'allocation_att_indi:63' if URControlParams.DRF_enable == 1 */
    if (URControlParams.DRF_enable == 1.0) {
      /* 'allocation_att_indi:65' G(:,fail_id) = zeros(4,length(fail_id)); */
      for (r3 = 0; r3 < fail_id_size_idx_1; r3++) {
        rtemp = (static_cast<int32_T>(fail_id_data[r3]) - 1) << 2;
        G[rtemp] = 0.0;
        G[1 + rtemp] = 0.0;
        G[2 + rtemp] = 0.0;
        G[3 + rtemp] = 0.0;
      }

      /* 'allocation_att_indi:66' ddy0(3:4) = zeros(2,1); */
      rtb_ddy0_idx_2 = 0.0;
      rtb_ddy0_idx_3 = 0.0;

      /* 'allocation_att_indi:67' G(3:4,:) = zeros(size(G(3:4,:))); */
      for (r3 = 0; r3 < 4; r3++) {
        rtemp = r3 << 2;
        G[2 + rtemp] = 0.0;
        G[3 + rtemp] = 0.0;
      }

      /* 'allocation_att_indi:68' nu(3:4) = zeros(2,1); */
      nu_idx_2 = 0.0;
      nu_idx_3 = 0.0;
    } else {
      /* 'allocation_att_indi:69' else */
      /* 'allocation_att_indi:71' G(:,fail_id) = zeros(4,length(fail_id)); */
      for (r3 = 0; r3 < fail_id_size_idx_1; r3++) {
        rtemp = (static_cast<int32_T>(fail_id_data[r3]) - 1) << 2;
        G[rtemp] = 0.0;
        G[1 + rtemp] = 0.0;
        G[2 + rtemp] = 0.0;
        G[3 + rtemp] = 0.0;
      }

      /* 'allocation_att_indi:72' ddy0(4) = zeros(1); */
      rtb_ddy0_idx_3 = 0.0;

      /* 'allocation_att_indi:73' G(4,:) = zeros(size(G(4,:))); */
      G[3] = 0.0;
      G[7] = 0.0;
      G[11] = 0.0;
      G[15] = 0.0;

      /* 'allocation_att_indi:74' nu(4) = zeros(1); */
      nu_idx_3 = 0.0;
    }
  }

  /* 'allocation_att_indi:79' dU = pinv(G)*(nu-ddy0); */
  b_p = true;
  for (r1 = 0; r1 < 16; r1++) {
    R[r1] = 0.0;
    if (b_p && ((!rtIsInf(G[r1])) && (!rtIsNaN(G[r1])))) {
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (r3 = 0; r3 < 16; r3++) {
      R[r3] = (rtNaN);
    }
  } else {
    svd_qphS61it(G, nu1_0, Gr, V);
    chi = std::abs(Gr[0]);
    if ((!rtIsInf(chi)) && (!rtIsNaN(chi))) {
      if (chi <= 2.2250738585072014E-308) {
        chi = 4.94065645841247E-324;
      } else {
        frexp(chi, &r);
        chi = std::ldexp(1.0, r - 53);
      }
    } else {
      chi = (rtNaN);
    }

    chi *= 4.0;
    r = -1;
    r1 = 0;
    while ((r1 < 4) && (Gr[r1] > chi)) {
      r++;
      r1++;
    }

    if (r + 1 > 0) {
      r1 = 0;
      for (r2 = 0; r2 <= r; r2++) {
        chi = 1.0 / Gr[r2];
        for (r3 = r1; r3 < r1 + 4; r3++) {
          V[r3] *= chi;
        }

        r1 += 4;
      }

      for (r2 = 0; r2 < 4; r2++) {
        R[r2] = 0.0;
      }

      for (r2 = 4; r2 < 8; r2++) {
        R[r2] = 0.0;
      }

      for (r2 = 8; r2 < 12; r2++) {
        R[r2] = 0.0;
      }

      for (r2 = 12; r2 < 16; r2++) {
        R[r2] = 0.0;
      }

      r3 = -1;
      r <<= 2;
      rtemp = r + 1;
      for (r1 = 1; r1 <= rtemp; r1 += 4) {
        r2 = r3;
        for (b_ic = 0; b_ic < 4; b_ic++) {
          r2++;
          R[b_ic] += nu1_0[r1 - 1] * V[r2];
        }

        r3 += 4;
      }

      r3 = -1;
      rtemp = r + 2;
      for (r1 = 2; r1 <= rtemp; r1 += 4) {
        r2 = r3;
        for (b_ic = 4; b_ic < 8; b_ic++) {
          r2++;
          R[b_ic] += nu1_0[r1 - 1] * V[r2];
        }

        r3 += 4;
      }

      r3 = -1;
      rtemp = r + 3;
      for (r1 = 3; r1 <= rtemp; r1 += 4) {
        r2 = r3;
        for (b_ic = 8; b_ic < 12; b_ic++) {
          r2++;
          R[b_ic] += nu1_0[r1 - 1] * V[r2];
        }

        r3 += 4;
      }

      r3 = -1;
      rtemp = r + 4;
      for (r1 = 4; r1 <= rtemp; r1 += 4) {
        r2 = r3;
        for (b_ic = 12; b_ic < 16; b_ic++) {
          r2++;
          R[b_ic] += nu1_0[r1 - 1] * V[r2];
        }

        r3 += 4;
      }
    }
  }

  /* 'allocation_att_indi:81' U = U0 + dU; */
  nu_idx_0 -= URControl_att_indi_DW.Integrator_DSTATE_pv * rtb_w_idx_0 *
    rtb_w_idx_1 + 9.8124;
  rtb_w_idx_0 = (-URControlParams.att_d_gain * rtb_dY_idx_0 -
                 URControlParams.att_p_gain * (R_IB_tmp_tmp_0 * rtb_n_idx_0 +
    R_IB_tmp_tmp * rtb_n_idx_1)) - (h_idx_1 - URControl_att_indi_DW.UD_DSTATE_n
    [0]);
  nu_idx_2 -= rtb_ddy0_idx_2;
  nu_idx_3 -= rtb_ddy0_idx_3;
  for (r3 = 0; r3 < 4; r3++) {
    Gr[r3] = (((R[r3 + 4] * rtb_w_idx_0 + R[r3] * nu_idx_0) + R[r3 + 8] *
               nu_idx_2) + R[r3 + 12] * nu_idx_3) +
      URControl_att_indi_DW.Integrator_DSTATE_l[r3];
  }

  /* 'allocation_att_indi:82' if fail_flag > 0 */
  if (*rtu_state_fail_id > 0.0) {
    /* 'allocation_att_indi:83' U(fail_id) = 0; */
    rtemp = fail_id_size_idx_1 - 1;
    for (r3 = 0; r3 <= rtemp; r3++) {
      c_data[r3] = static_cast<int32_T>(fail_id_data[r3]);
    }

    for (r3 = 0; r3 < fail_id_size_idx_1; r3++) {
      Gr[c_data[r3] - 1] = 0.0;
    }
  }

  /* MATLAB Function: '<S1>/MATLAB Function8' */
  /* :  w = zeros(4,1); */
  /* :  w(1) = sqrt(abs(U(1)))*sign(U(1)); */
  if (Gr[0] < 0.0) {
    rtb_n_idx_0 = -1.0;
  } else if (Gr[0] > 0.0) {
    rtb_n_idx_0 = 1.0;
  } else if (Gr[0] == 0.0) {
    rtb_n_idx_0 = 0.0;
  } else {
    rtb_n_idx_0 = (rtNaN);
  }

  rtb_w_idx_0 = std::sqrt(std::abs(Gr[0])) * rtb_n_idx_0;

  /* :  w(2) = sqrt(abs(U(2)))*sign(U(2)); */
  if (Gr[1] < 0.0) {
    rtb_n_idx_0 = -1.0;
  } else if (Gr[1] > 0.0) {
    rtb_n_idx_0 = 1.0;
  } else if (Gr[1] == 0.0) {
    rtb_n_idx_0 = 0.0;
  } else {
    rtb_n_idx_0 = (rtNaN);
  }

  rtb_w_idx_1 = std::sqrt(std::abs(Gr[1])) * rtb_n_idx_0;

  /* :  w(3) = sqrt(abs(U(3)))*sign(U(3)); */
  if (Gr[2] < 0.0) {
    rtb_n_idx_0 = -1.0;
  } else if (Gr[2] > 0.0) {
    rtb_n_idx_0 = 1.0;
  } else if (Gr[2] == 0.0) {
    rtb_n_idx_0 = 0.0;
  } else {
    rtb_n_idx_0 = (rtNaN);
  }

  chi = std::sqrt(std::abs(Gr[2])) * rtb_n_idx_0;

  /* :  w(4) = sqrt(abs(U(4)))*sign(U(4)); */
  if (Gr[3] < 0.0) {
    rtb_n_idx_0 = -1.0;
  } else if (Gr[3] > 0.0) {
    rtb_n_idx_0 = 1.0;
  } else if (Gr[3] == 0.0) {
    rtb_n_idx_0 = 0.0;
  } else {
    rtb_n_idx_0 = (rtNaN);
  }

  rtb_n_idx_0 *= std::sqrt(std::abs(Gr[3]));

  /* End of MATLAB Function: '<S1>/MATLAB Function8' */

  /* Saturate: '<S1>/Saturation2' */
  if (rtb_w_idx_0 > 1256.0) {
    rty_wRotorSet[0] = 1256.0;
  } else if (rtb_w_idx_0 < 300.0) {
    rty_wRotorSet[0] = 300.0;
  } else {
    rty_wRotorSet[0] = rtb_w_idx_0;
  }

  if (rtb_w_idx_1 > 1256.0) {
    rty_wRotorSet[1] = 1256.0;
  } else if (rtb_w_idx_1 < 300.0) {
    rty_wRotorSet[1] = 300.0;
  } else {
    rty_wRotorSet[1] = rtb_w_idx_1;
  }

  if (chi > 1256.0) {
    rty_wRotorSet[2] = 1256.0;
  } else if (chi < 300.0) {
    rty_wRotorSet[2] = 300.0;
  } else {
    rty_wRotorSet[2] = chi;
  }

  if (rtb_n_idx_0 > 1256.0) {
    rty_wRotorSet[3] = 1256.0;
  } else if (rtb_n_idx_0 < 300.0) {
    rty_wRotorSet[3] = 300.0;
  } else {
    rty_wRotorSet[3] = rtb_n_idx_0;
  }

  /* End of Saturate: '<S1>/Saturation2' */

  /* MinMax: '<S32>/Max' incorporates:
   *  Constant: '<S32>/Time constant'
   */
  if ((URControl_att_indi_B.Probe_p[0] > URControlParams.t_indi) || tmp) {
    chi = URControl_att_indi_B.Probe_p[0];
  } else {
    chi = URControlParams.t_indi;
  }

  /* Fcn: '<S32>/Avoid Divide by Zero' */
  maxval = static_cast<real_T>((chi == 0.0)) * 2.2204460492503131e-16 + chi;

  /* MinMax: '<S36>/Max' incorporates:
   *  Constant: '<S36>/Time constant'
   */
  if ((URControl_att_indi_B.Probe_b[0] > URControlParams.t_indi) || tmp) {
    chi = URControl_att_indi_B.Probe_b[0];
  } else {
    chi = URControlParams.t_indi;
  }

  /* Fcn: '<S36>/Avoid Divide by Zero' */
  a21 = static_cast<real_T>((chi == 0.0)) * 2.2204460492503131e-16 + chi;

  /* MinMax: '<S40>/Max' incorporates:
   *  Constant: '<S40>/Time constant'
   */
  if ((URControl_att_indi_B.Probe_hn[0] > URControlParams.t_indi) || tmp) {
    chi = URControl_att_indi_B.Probe_hn[0];
  } else {
    chi = URControlParams.t_indi;
  }

  /* Fcn: '<S40>/Avoid Divide by Zero' */
  nu1 = static_cast<real_T>((chi == 0.0)) * 2.2204460492503131e-16 + chi;

  /* MinMax: '<S44>/Max' incorporates:
   *  Constant: '<S44>/Time constant'
   */
  if ((URControl_att_indi_B.Probe_h[0] > URControlParams.t_indi) || tmp) {
    chi = URControl_att_indi_B.Probe_h[0];
  } else {
    chi = URControlParams.t_indi;
  }

  /* Fcn: '<S44>/Avoid Divide by Zero' */
  chi += static_cast<real_T>((chi == 0.0)) * 2.2204460492503131e-16;

  /* Update for DiscreteIntegrator: '<S16>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING = 0U;

  /* Product: '<S5>/1//T' */
  nu_idx_2 = 1.0 / h_idx_0;

  /* Update for DiscreteIntegrator: '<S16>/Integrator' incorporates:
   *  Product: '<S5>/1//T'
   *  Sum: '<S5>/Sum1'
   */
  URControl_att_indi_DW.Integrator_PrevResetState = static_cast<int8_T>
    (rtb_Compare);
  URControl_att_indi_DW.Integrator_DSTATE[0] += (rtu_n_des[0] -
    URControl_att_indi_DW.Integrator_DSTATE[0]) * nu_idx_2 * 0.002;

  /* Update for UnitDelay: '<S2>/UD' */
  URControl_att_indi_DW.UD_DSTATE[0] = rtb_TSamp_idx_0;

  /* Update for DiscreteIntegrator: '<S16>/Integrator' incorporates:
   *  Product: '<S5>/1//T'
   *  Sum: '<S5>/Sum1'
   */
  URControl_att_indi_DW.Integrator_DSTATE[1] += (rtu_n_des[1] -
    URControl_att_indi_DW.Integrator_DSTATE[1]) * nu_idx_2 * 0.002;

  /* Update for UnitDelay: '<S2>/UD' */
  URControl_att_indi_DW.UD_DSTATE[1] = rtb_TSamp_idx_1;

  /* Update for DiscreteIntegrator: '<S16>/Integrator' incorporates:
   *  Product: '<S5>/1//T'
   *  Sum: '<S5>/Sum1'
   */
  URControl_att_indi_DW.Integrator_DSTATE[2] += (rtu_n_des[2] -
    URControl_att_indi_DW.Integrator_DSTATE[2]) * nu_idx_2 * 0.002;

  /* Update for UnitDelay: '<S2>/UD' */
  URControl_att_indi_DW.UD_DSTATE[2] = rtb_TSamp_idx_2;

  /* Update for DiscreteIntegrator: '<S24>/Integrator' incorporates:
   *  Product: '<S7>/1//T'
   *  Sum: '<S7>/Sum1'
   */
  URControl_att_indi_DW.Integrator_IC_LOADING_e = 0U;
  URControl_att_indi_DW.Integrator_DSTATE_p += 1.0 / rtb_AvoidDividebyZero_a * (*
    rtu_input_zTarget - URControl_att_indi_DW.Integrator_DSTATE_p) * 0.002;
  URControl_att_indi_DW.Integrator_PrevResetState_f = static_cast<int8_T>
    (rtb_Compare_p);

  /* Update for UnitDelay: '<S3>/UD' */
  URControl_att_indi_DW.UD_DSTATE_c = rtb_TSamp_h;

  /* Update for DiscreteIntegrator: '<S20>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_m = 0U;

  /* Product: '<S6>/1//T' */
  nu_idx_2 = 1.0 / rtb_AvoidDividebyZero_e;

  /* Update for DiscreteIntegrator: '<S20>/Integrator' incorporates:
   *  Product: '<S6>/1//T'
   *  Sum: '<S6>/Sum1'
   */
  URControl_att_indi_DW.Integrator_PrevResetState_n = static_cast<int8_T>
    (rtb_Compare_jb);
  URControl_att_indi_DW.Integrator_DSTATE_e[0] += (rtb_dY_idx_0 -
    URControl_att_indi_DW.Integrator_DSTATE_e[0]) * nu_idx_2 * 0.002;

  /* Update for UnitDelay: '<S4>/UD' */
  URControl_att_indi_DW.UD_DSTATE_n[0] = h_idx_1;

  /* Update for DiscreteIntegrator: '<S20>/Integrator' incorporates:
   *  Product: '<S6>/1//T'
   *  Sum: '<S6>/Sum1'
   */
  URControl_att_indi_DW.Integrator_DSTATE_e[1] += (u0 -
    URControl_att_indi_DW.Integrator_DSTATE_e[1]) * nu_idx_2 * 0.002;

  /* Update for UnitDelay: '<S4>/UD' */
  URControl_att_indi_DW.UD_DSTATE_n[1] = h_idx_2;

  /* Update for DiscreteIntegrator: '<S47>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_mh = 0U;

  /* Product: '<S28>/1//T' */
  nu_idx_2 = 1.0 / chi;

  /* Update for DiscreteIntegrator: '<S47>/Integrator' incorporates:
   *  Product: '<S28>/1//T'
   *  Sum: '<S28>/Sum1'
   */
  URControl_att_indi_DW.Integrator_DSTATE_i[0] += (rtb_nd_sat_idx_0 -
    URControl_att_indi_DW.Integrator_DSTATE_i[0]) * nu_idx_2 * 0.002;
  URControl_att_indi_DW.Integrator_DSTATE_i[1] += (rtb_nd_sat_idx_1 -
    URControl_att_indi_DW.Integrator_DSTATE_i[1]) * nu_idx_2 * 0.002;
  URControl_att_indi_DW.Integrator_DSTATE_i[2] += (rtb_nd_sat_idx_2 -
    URControl_att_indi_DW.Integrator_DSTATE_i[2]) * nu_idx_2 * 0.002;
  URControl_att_indi_DW.Integrator_PrevResetState_h = static_cast<int8_T>
    (rtb_Compare_ae);

  /* Update for DiscreteIntegrator: '<S35>/Integrator' incorporates:
   *  Product: '<S25>/1//T'
   *  Sum: '<S25>/Sum1'
   */
  URControl_att_indi_DW.Integrator_IC_LOADING_k = 0U;
  URControl_att_indi_DW.Integrator_DSTATE_pv += 1.0 / maxval * (rtu_state_acc[2]
    - URControl_att_indi_DW.Integrator_DSTATE_pv) * 0.002;
  URControl_att_indi_DW.Integrator_PrevResetState_g = static_cast<int8_T>
    (rtb_Compare_e);

  /* Update for DiscreteIntegrator: '<S39>/Integrator' */
  URControl_att_indi_DW.Integrator_IC_LOADING_g = 0U;

  /* Product: '<S26>/1//T' */
  nu_idx_2 = 1.0 / a21;

  /* Update for DiscreteIntegrator: '<S39>/Integrator' incorporates:
   *  Product: '<S26>/1//T'
   *  Sum: '<S26>/Sum1'
   */
  URControl_att_indi_DW.Integrator_DSTATE_l[0] += (rtb_U_idx_0 -
    URControl_att_indi_DW.Integrator_DSTATE_l[0]) * nu_idx_2 * 0.002;
  URControl_att_indi_DW.Integrator_DSTATE_l[1] += (rtb_U_idx_1 -
    URControl_att_indi_DW.Integrator_DSTATE_l[1]) * nu_idx_2 * 0.002;
  URControl_att_indi_DW.Integrator_DSTATE_l[2] += (rtb_U_idx_2 -
    URControl_att_indi_DW.Integrator_DSTATE_l[2]) * nu_idx_2 * 0.002;
  URControl_att_indi_DW.Integrator_DSTATE_l[3] += (rtb_U_idx_3 -
    URControl_att_indi_DW.Integrator_DSTATE_l[3]) * nu_idx_2 * 0.002;
  URControl_att_indi_DW.Integrator_PrevResetState_d = static_cast<int8_T>
    (rtb_Compare_j);

  /* Update for DiscreteIntegrator: '<S43>/Integrator' incorporates:
   *  Product: '<S27>/1//T'
   *  Sum: '<S27>/Sum1'
   */
  URControl_att_indi_DW.Integrator_IC_LOADING_p = 0U;
  URControl_att_indi_DW.Integrator_DSTATE_k += 1.0 / nu1 * (rtu_state_omegaf[2]
    - URControl_att_indi_DW.Integrator_DSTATE_k) * 0.002;
  URControl_att_indi_DW.Integrator_PrevResetState_nd = static_cast<int8_T>
    (rtb_Compare_k);
}

/* Model initialize function */
void URControl_att_indiModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* block I/O */
  (void) memset(((void *) &URControl_att_indi_B), 0,
                sizeof(B_URControl_att_indi_T));

  /* states (dwork) */
  (void) memset((void *)&URControl_att_indi_DW, 0,
                sizeof(DW_URControl_att_indi_T));
}

/* Constructor */
URControl_att_indiModelClass::URControl_att_indiModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
URControl_att_indiModelClass::~URControl_att_indiModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_URControl_att_indi_T * URControl_att_indiModelClass::getRTM()
{
  return (&URControl_att_indi_M);
}

/* member function to initialize Real-Time model */
void URControl_att_indiModelClass::initializeRTM()
{
  (void) memset((void *)((&URControl_att_indi_M)), 0,
                sizeof(RT_MODEL_URControl_att_indi_T));
}

/* member function to setup error status pointer */
void URControl_att_indiModelClass::setErrorStatusPointer(const char_T
  **rt_errorStatus)
{
  rtmSetErrorStatusPointer((&URControl_att_indi_M), rt_errorStatus);
}
