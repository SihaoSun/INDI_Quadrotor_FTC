/*
 * URControl_att_indi_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl_att_indi".
 *
 * Model version              : 1.503
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jun 30 11:15:18 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_URControl_att_indi_types_h_
#define RTW_HEADER_URControl_att_indi_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_stateBus_
#define DEFINED_TYPEDEF_FOR_stateBus_

typedef struct {
  real_T acc[3];
  real_T accf[3];
  real_T vel[3];
  real_T velf[3];
  real_T velB[3];
  real_T pos[3];
  real_T posf[3];
  real_T omega[3];
  real_T omegaf[3];
  real_T att[3];
  real_T n[3];
  real_T wRotor[4];
  real_T omegaUV[3];
  real_T omegafUV[3];
  real_T FMax[4];
  real_T FMin[4];
  real_T fail_id;
  real_T fail_id_quick;
  real_T uvDot_max[2];
  real_T uvDot_min[2];
  real_T uv_max[2];
  real_T uv_min[2];
  real_T vel_ref[3];
  real_T pos_ref[3];
} stateBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_inputsBus_
#define DEFINED_TYPEDEF_FOR_inputsBus_

typedef struct {
  real_T xTarget;
  real_T yTarget;
  real_T zTarget;
  real_T yawTarget;
  real_T manual[5];
} inputsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_daqBus_
#define DEFINED_TYPEDEF_FOR_daqBus_

typedef struct {
  real_T pos[3];
  real_T posRaw[3];
  real_T vel[3];
  real_T att[3];
  real_T attRaw[3];
  real_T acc[3];
  real_T accRaw[3];
  real_T n[3];
  real_T omega[3];
  real_T omegaf[3];
  real_T omegaUV[3];
  real_T omegafUV[3];
  real_T wRotor[4];
  real_T FMax[4];
  real_T FMin[4];
  real_T uvDot_max[2];
  real_T uvDot_min[2];
  real_T uv_max[2];
  real_T uv_min[2];
  real_T posTarget[3];
  real_T velTarget[3];
  real_T a_ref[3];
  real_T n_des[3];
  real_T Ftot_ref;
  real_T r_cmd;
  real_T uv_prec[2];
  real_T precAngle[2];
  real_T h_uv[3];
  real_T n_uv[3];
  real_T pqr_des[3];
  real_T uvr_des[3];
  real_T uv_des_raw[2];
  real_T uv_des[2];
  real_T uv_attCtrl[2];
  real_T w_max[4];
  real_T w_min[4];
  real_T MzGain;
  real_T iter;
  real_T optimal;
  real_T M_uvr_des[3];
  real_T M_uvr_set[3];
  real_T Ftot_set;
  real_T wRotorSet[4];
  real_T uvrDot_des[3];
  real_T pqr_des_dot[3];
  real_T omegaDot[3];
  real_T dM[3];
  real_T inp[4];
  real_T dw_lin[4];
  real_T inpActual[4];
  real_T Y_indi[2];
} daqBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_URControlParamsType_
#define DEFINED_TYPEDEF_FOR_URControlParamsType_

typedef struct {
  real_T k0;
  real_T t0;
  real_T b;
  real_T l;
  real_T Ix;
  real_T Iy;
  real_T Iz;
  real_T Iu;
  real_T Iv;
  real_T s;
  real_T mass;
  real_T Ip;
  real_T freq;
  real_T g;
  real_T fail_delay;
  real_T fail_wRot;
  real_T wMax;
  real_T wMin;
  real_T signr;
  real_T act_dyn_k;
  real_T R_xy_uv[4];
  real_T DRF_enable;
  real_T est_optiDx;
  real_T est_optiDy;
  real_T est_omegaFilterT;
  real_T est_posFilterT;
  real_T est_velFilterT;
  real_T est_accFilterT;
  real_T est_useEKF;
  real_T EKFQuat_stateCov[10];
  real_T EKFQuat_measCov[7];
  real_T est_useMag;
  real_T mag_est_type;
  real_T magxI;
  real_T magyI;
  real_T magzI;
  real_T mag_psi_shift;
  real_T est_useCF;
  real_T ka[9];
  real_T km[9];
  real_T km2;
  real_T ke;
  real_T kb[3];
  real_T kp;
  real_T kcorr;
  real_T r_scale;
  real_T position_enable;
  real_T position_maxAngle;
  real_T position_maxAngleFailure;
  real_T position_Kp_pos[3];
  real_T position_maxVel;
  real_T position_Kp_vel[3];
  real_T position_Ki_vel[3];
  real_T position_intLim;
  real_T position_failGain;
  real_T position_maxAref;
  real_T altitude_enable;
  real_T altitude_Kp_pos;
  real_T altitude_maxVel;
  real_T altitude_maxVelFail;
  real_T altitude_Kp_vel;
  real_T altitude_Ki_vel;
  real_T altitude_intLim;
  real_T altitude_peakAngle;
  real_T altitude_LOCAngle;
  real_T YRC_enable;
  real_T YRC_Kp_psi;
  real_T YRC_Kp_r;
  real_T YRC_r_cmd_fail;
  real_T YRC_rateCmd;
  real_T YRCFail_enable;
  real_T YRCFail_Kp_dMzGain;
  real_T YRCFail_nLim1;
  real_T YRCFail_nLim2;
  real_T attitude_mode;
  real_T attitude_primary_axis[3];
  real_T attitude_yrcComp;
  real_T attitude_rotKp;
  real_T attitude_maxuv_des;
  real_T attitude_rotSpeedComp;
  real_T attitude_trajThreshold;
  real_T attitude_mode3Lim;
  real_T attitude_maxPrecSpeed;
  real_T attitude_MMargin;
  real_T attitude_yawThreshold;
  real_T attitude_precMode;
  real_T attitude_precAngle;
  real_T rate_mode;
  real_T rate_momentMode;
  real_T rate_MPID_rateDotKp[3];
  real_T rate_MPID_rateDotKi[3];
  real_T rate_MPID_rateDotKd[3];
  real_T rate_MPID_derFilterT;
  real_T rate_MPID_uvrdesderFilterT;
  real_T rate_MPID_maxInt;
  real_T rate_MPID_precGain;
  real_T rate_maxMoments[3];
  real_T rate_MuGain;
  real_T rate_MvGain;
  real_T rate_MzGain;
  real_T rate_FtotGain;
  real_T rate_FGain;
  real_T rate_envGain;
  real_T rate_maxIter;
  real_T envp_enable;
  real_T envp_timeHoriz;
  real_T envp_maxOmega;
  real_T Q[36];
  real_T R[4];
  real_T K_lqr0[12];
  real_T K_lqr1[12];
  real_T K_lqr2[12];
  real_T K_lqr3[12];
  real_T K_lqr4[12];
  real_T K_lqr13[12];
  real_T K_lqr24[12];
  real_T axis_tilt;
  real_T rate_INDI_g2;
  real_T chi;
  real_T pos_z_p_gain;
  real_T pos_z_d_gain;
  real_T att_p_gain;
  real_T att_d_gain;
  real_T t_indi;
  real_T flip_mode;
  real_T flip_time;
  real_T flip_upTime;
  real_T flip_intensityX;
  real_T flip_intensityY;
  real_T throw_mode;
  real_T throw_falltime;
  real_T throw_threshold;
  real_T throw_alt_threshold;
  real_T fail_altProt;
  real_T fail_altThresh;
  real_T manual_enable;
  real_T manual_alt;
  real_T manual_acc_gain;
  real_T manual_h_gain;
  real_T manual_yaw_gain;
  real_T rate_INDI_G[32];
  real_T rate_INDI_rateDotKp[3];
  real_T rate_INDI_omegaDotFilterT;
  real_T rate_INDI_accZFilterT;
  real_T rate_INDI_FEGain;
  real_T rate_MINDI_rateDotKp[3];
  real_T rate_MINDI_derFilterT;
  real_T rate_MINDI_MKp[3];
  real_T rate_roll_eff;
  real_T rate_pitch_eff;
  real_T rate_yaw_eff;
  real_T rate_az_eff;
  real_T rate_G1_unit[16];
  real_T rate_QPINDI_K[16];
  real_T rate_QPINDI_K2[16];
  real_T rate_QPINDI_dwMax;
  real_T rate_QPINDI_maxInp[4];
  real_T rate_QPINDI_cutoff[4];
  real_T rate_QPINDI_minGain;
} URControlParamsType;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_URControl_att_indi_T RT_MODEL_URControl_att_indi_T;

#endif                              /* RTW_HEADER_URControl_att_indi_types_h_ */
