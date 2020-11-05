/*
 * Code generation for system model 'URControl_att'
 *
 * Model                      : URControl_att
 * Model version              : 1.32
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jun 30 13:33:44 2020
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "URControl_att.h"
#include "URControl_att_private.h"
#include "URTrajCalc_ZHbRu9Bu.h"
#include "abs_PbMH4joa.h"
#include "eps_HLXrD8YB.h"
#include "norm_MZOQPbOg.h"
#include "norm_UkJeSx98.h"
#include "pinv_sd18IsCR.h"
#include "rt_atan2d_snf.h"
#include "rt_hypotd_snf.h"
#include "rt_powd_snf.h"
#include "sqrt_t6kvbcYg.h"
#include "sum_WaUbR9ig.h"

const daqBus URControl_att_rtZdaqBus = {
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
boolean_T _URControl_att_SharedDataInit_ = false;/* synthesized block */

/* data stores shared across model instances */
SharedDSM_URControl_att_T URControl_attModelClass::URControl_att_SharedDSM;

/* Function for MATLAB Function: '<S1>/attitude controller' */
void URControl_attModelClass::URControl_att_URAngleControl(daqBus *daq, const
  real_T nd_i[3], const real_T primAxis[3], const stateBus *state, const
  struct_YhmxgXLVjzlogleEk1YuME *b_par, const URControlParamsType *URpar, real_T
  uv_attCtrl[2])
{
  real_T h[3];
  real_T totAngle;
  real_T speedAroundVec;
  real_T rotAction;
  real_T vAngle;
  int32_T signt;
  boolean_T y;
  boolean_T x[3];
  real_T h_uv[3];
  real_T tmp[9];
  real_T b_par_0;
  real_T h_uv_idx_0;
  real_T rotVec_idx_0;
  real_T rotVec_idx_1;
  real_T totAngle_tmp;
  real_T h_uv_tmp_tmp;
  real_T totAngle_tmp_0;
  boolean_T exitg1;
  rotAction = std::cos(state->att[1]);
  h_uv_idx_0 = std::cos(state->att[2]);
  tmp[0] = rotAction * h_uv_idx_0;
  b_par_0 = std::sin(state->att[2]);
  tmp[3] = rotAction * b_par_0;
  totAngle = std::sin(state->att[1]);
  tmp[6] = -totAngle;
  rotVec_idx_0 = std::sin(state->att[0]);
  rotVec_idx_1 = rotVec_idx_0 * totAngle;
  vAngle = std::cos(state->att[0]);
  tmp[1] = rotVec_idx_1 * h_uv_idx_0 - vAngle * b_par_0;
  tmp[4] = rotVec_idx_1 * b_par_0 + vAngle * h_uv_idx_0;
  tmp[7] = rotVec_idx_0 * rotAction;
  totAngle *= vAngle;
  tmp[2] = totAngle * h_uv_idx_0 + rotVec_idx_0 * b_par_0;
  tmp[5] = totAngle * b_par_0 - rotVec_idx_0 * h_uv_idx_0;
  tmp[8] = vAngle * rotAction;
  for (signt = 0; signt < 3; signt++) {
    h[signt] = tmp[signt + 6] * nd_i[2] + (tmp[signt + 3] * nd_i[1] + tmp[signt]
      * nd_i[0]);
  }

  h_uv_idx_0 = b_par->URC.R_xy_uv[0] * h[0] + b_par->URC.R_xy_uv[2] * h[1];
  b_par_0 = b_par->URC.R_xy_uv[1] * h[0] + b_par->URC.R_xy_uv[3] * h[1];
  daq->h_uv[0] = h_uv_idx_0;
  daq->n_uv[0] = primAxis[0];
  daq->h_uv[1] = b_par_0;
  daq->n_uv[1] = primAxis[1];
  daq->h_uv[2] = h[2];
  daq->n_uv[2] = primAxis[2];
  rotVec_idx_0 = b_par_0 * primAxis[2];
  speedAroundVec = rotVec_idx_0 - h[2] * primAxis[1];
  h_uv[0] = speedAroundVec;
  rotVec_idx_1 = h_uv_idx_0 * primAxis[2];
  h_uv[1] = h[2] * primAxis[0] - rotVec_idx_1;
  rotAction = b_par_0 * primAxis[0];
  h_uv_tmp_tmp = h_uv_idx_0 * primAxis[1];
  vAngle = h_uv_tmp_tmp - rotAction;
  h_uv[2] = vAngle;
  totAngle_tmp = b_par_0 * primAxis[1];
  totAngle_tmp_0 = h_uv_idx_0 * primAxis[0];
  totAngle = rt_atan2d_snf(norm_UkJeSx98(h_uv), (totAngle_tmp_0 + totAngle_tmp)
    + h[2] * primAxis[2]);
  if (URpar->attitude_mode == 1.0) {
    h[0] = speedAroundVec;
    h[1] = h[2] * primAxis[0] - rotVec_idx_1;
    h[2] = vAngle;
    rotAction = std::abs(norm_UkJeSx98(h));
    if (!(rotAction > 0.001)) {
      rotAction = 0.001;
    }

    rotVec_idx_0 = speedAroundVec / rotAction;
    rotVec_idx_1 = h[1] / rotAction;
    speedAroundVec = (state->omegaUV[0] * rotVec_idx_0 + state->omegaUV[1] *
                      rotVec_idx_1) + vAngle / rotAction * 0.0;
    if (totAngle > b_par->URC.attitude_trajThreshold) {
      rotAction = URTrajCalc_ZHbRu9Bu(totAngle, -speedAroundVec,
        URpar->attitude_rotSpeedComp);
      speedAroundVec = URTrajCalc_ZHbRu9Bu(6.2831853071795862 - totAngle,
        speedAroundVec, URpar->attitude_rotSpeedComp);
      if ((rotAction > 0.0) && (speedAroundVec > 0.0) && (rotAction >
           speedAroundVec)) {
        rotVec_idx_0 = -rotVec_idx_0;
        rotVec_idx_1 = -rotVec_idx_1;
      }
    }

    rotAction = std::abs(totAngle) * URpar->attitude_rotKp;
    uv_attCtrl[0] = rotVec_idx_0 * rotAction;
    uv_attCtrl[1] = rotVec_idx_1 * rotAction;
  } else if (URpar->attitude_mode == 2.0) {
    h[0] = rotVec_idx_0 - h[2] * primAxis[1];
    h[1] = h[2] * primAxis[0] - rotVec_idx_1;
    h[2] = vAngle;
    rotAction = std::abs(norm_UkJeSx98(h));
    if (!(rotAction > 0.001)) {
      rotAction = 0.001;
    }

    rotVec_idx_0 = h[0] / rotAction;
    rotVec_idx_1 = h[1] / rotAction;
    h[0] /= rotAction;
    speedAroundVec = (state->omegaUV[0] * h[0] + state->omegaUV[1] *
                      rotVec_idx_1) + vAngle / rotAction * 0.0;
    if (totAngle > b_par->URC.attitude_trajThreshold) {
      rotAction = URTrajCalc_ZHbRu9Bu(totAngle, -speedAroundVec,
        URpar->attitude_rotSpeedComp);
      speedAroundVec = URTrajCalc_ZHbRu9Bu(6.2831853071795862 - totAngle,
        speedAroundVec, URpar->attitude_rotSpeedComp);
      if ((rotAction > 0.0) && (speedAroundVec > 0.0) && (rotAction >
           speedAroundVec)) {
        rotVec_idx_0 = -rotVec_idx_0;
        rotVec_idx_1 = -rotVec_idx_1;
      }
    }

    if ((state->fail_id == 1.0) || (state->fail_id == 3.0)) {
      vAngle = 0.1 * std::abs(state->omegaUV[2]);
      if ((!(rotVec_idx_1 < vAngle)) && (!rtIsNaN(vAngle))) {
        rotVec_idx_1 = vAngle;
      }

      if ((!(rotVec_idx_1 > -vAngle)) && (!rtIsNaN(-vAngle))) {
        rotVec_idx_1 = -vAngle;
      }
    } else {
      if ((state->fail_id == 2.0) || (state->fail_id == 4.0)) {
        rotAction = 0.1 * std::abs(state->omegaUV[2]);
        if ((!(rotVec_idx_0 < rotAction)) && (!rtIsNaN(rotAction))) {
          rotVec_idx_0 = rotAction;
        }

        if ((!(rotVec_idx_0 > -rotAction)) && (!rtIsNaN(-rotAction))) {
          rotVec_idx_0 = -rotAction;
        }
      }
    }

    rotAction = std::abs(totAngle) * URpar->attitude_rotKp;
    uv_attCtrl[0] = rotVec_idx_0 * rotAction;
    uv_attCtrl[1] = rotVec_idx_1 * rotAction;
  } else if (URpar->attitude_mode == 3.0) {
    if ((h[2] > URpar->attitude_mode3Lim) && (state->fail_id > 0.0)) {
      h_uv[0] = rotVec_idx_0 - h[2] * primAxis[1];
      h_uv[1] = h[2] * primAxis[0] - 0.0 * primAxis[2];
      h_uv[2] = 0.0 * primAxis[1] - rotAction;
      rotAction = rt_atan2d_snf(norm_UkJeSx98(h_uv), (0.0 * primAxis[0] +
        totAngle_tmp) + h[2] * primAxis[2]);
      h_uv[0] = 0.0 * primAxis[2] - h[2] * primAxis[1];
      h_uv[1] = h[2] * primAxis[0] - rotVec_idx_1;
      h_uv[2] = h_uv_tmp_tmp - 0.0 * primAxis[0];
      vAngle = rt_atan2d_snf(norm_UkJeSx98(h_uv), (totAngle_tmp_0 + 0.0 *
        primAxis[1]) + h[2] * primAxis[2]);
      if (state->uvDot_max[0] > 5.0) {
        speedAroundVec = state->uvDot_max[0];
      } else {
        speedAroundVec = 5.0;
      }

      if (state->uvDot_min[0] < -5.0) {
        h_uv_tmp_tmp = -state->uvDot_min[0];
      } else {
        h_uv_tmp_tmp = 5.0;
      }

      if (state->uvDot_max[1] > 5.0) {
        totAngle_tmp_0 = state->uvDot_max[1];
      } else {
        totAngle_tmp_0 = 5.0;
      }

      if (state->uvDot_min[1] < -5.0) {
        totAngle_tmp = -state->uvDot_min[1];
      } else {
        totAngle_tmp = 5.0;
      }

      if ((speedAroundVec < h_uv_tmp_tmp) || rtIsNaN(h_uv_tmp_tmp)) {
        h_uv_tmp_tmp = speedAroundVec;
      }

      if ((totAngle_tmp_0 < totAngle_tmp) || rtIsNaN(totAngle_tmp)) {
        totAngle_tmp = totAngle_tmp_0;
      }

      if (rotAction / h_uv_tmp_tmp < vAngle / totAngle_tmp) {
        x[0] = (rotVec_idx_0 - h[2] * primAxis[1] < 0.0);
        x[1] = false;
        x[2] = false;
        y = false;
        signt = 0;
        exitg1 = false;
        while ((!exitg1) && (signt < 3)) {
          if (x[signt]) {
            y = true;
            exitg1 = true;
          } else {
            signt++;
          }
        }

        if (y) {
          signt = -1;
        } else {
          signt = 1;
        }

        rotVec_idx_0 = signt;
        rotVec_idx_1 = 0.0 * static_cast<real_T>(signt);
        vAngle = rotAction;
      } else {
        x[0] = false;
        x[1] = (h[2] * primAxis[0] - rotVec_idx_1 < 0.0);
        x[2] = false;
        y = false;
        signt = 0;
        exitg1 = false;
        while ((!exitg1) && (signt < 3)) {
          if (x[signt]) {
            y = true;
            exitg1 = true;
          } else {
            signt++;
          }
        }

        if (y) {
          signt = -1;
        } else {
          signt = 1;
        }

        rotVec_idx_0 = 0.0 * static_cast<real_T>(signt);
        rotVec_idx_1 = signt;
      }

      h[0] = rotVec_idx_0;
      h[1] = rotVec_idx_1;
      h[2] = 0.0;
      rotAction = std::abs(vAngle) * URpar->attitude_rotKp;
    } else {
      h[0] = rotVec_idx_0 - h[2] * primAxis[1];
      h[1] = h[2] * primAxis[0] - rotVec_idx_1;
      h[2] = vAngle;
      rotAction = std::abs(norm_UkJeSx98(h));
      if (!(rotAction > 0.001)) {
        rotAction = 0.001;
      }

      rotVec_idx_0 = h[0] / rotAction;
      rotVec_idx_1 = h[1] / rotAction;
      h[0] = rotVec_idx_0;
      h[1] /= rotAction;
      h[2] = vAngle / rotAction;
      rotAction = std::abs(totAngle) * URpar->attitude_rotKp;
    }

    speedAroundVec = (state->omegaUV[0] * h[0] + state->omegaUV[1] * h[1]) + 0.0
      * h[2];
    if (totAngle > b_par->URC.attitude_trajThreshold) {
      vAngle = URTrajCalc_ZHbRu9Bu(totAngle, -speedAroundVec,
        URpar->attitude_rotSpeedComp);
      speedAroundVec = URTrajCalc_ZHbRu9Bu(6.2831853071795862 - totAngle,
        speedAroundVec, URpar->attitude_rotSpeedComp);
      if ((vAngle > 0.0) && (speedAroundVec > 0.0) && (vAngle > speedAroundVec))
      {
        rotVec_idx_0 = -rotVec_idx_0;
        rotVec_idx_1 = -rotVec_idx_1;
      }
    }

    uv_attCtrl[0] = rotVec_idx_0 * rotAction;
    uv_attCtrl[1] = rotVec_idx_1 * rotAction;
  } else {
    h[0] = rotVec_idx_0 - h[2] * primAxis[1];
    h[1] = h[2] * primAxis[0] - rotVec_idx_1;
    h[2] = vAngle;
    rotAction = std::abs(norm_UkJeSx98(h));
    if (!(rotAction > 0.001)) {
      rotAction = 0.001;
    }

    vAngle = std::abs(totAngle) * URpar->attitude_rotKp;
    uv_attCtrl[0] = h[0] / rotAction * vAngle;
    uv_attCtrl[1] = h[1] / rotAction * vAngle;
  }

  uv_attCtrl[0] += -h_uv_idx_0 * state->omegaUV[2] * URpar->attitude_yrcComp;
  uv_attCtrl[1] += -b_par_0 * state->omegaUV[2] * URpar->attitude_yrcComp;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
LPFilter_1_URControl_att_T *URControl_attModelClass::
  URControl_att_LPFilter_LPFilter(LPFilter_1_URControl_att_T *obj, real_T
  filterT)
{
  LPFilter_1_URControl_att_T *b_obj;
  b_obj = obj;
  obj->filterT = filterT;
  obj->value = 0.0;
  obj->maxLim = 30.0;
  obj->minLim = -30.0;
  return b_obj;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
SimpleDerivative_URControl_at_T *URControl_attModelClass::
  SimpleDerivative_SimpleDerivati(SimpleDerivative_URControl_at_T *obj, real_T
  filterT, const real_T initValue[3], real_T maxLim, real_T minLim)
{
  SimpleDerivative_URControl_at_T *b_obj;
  b_obj = obj;
  obj->filterHandle.filterT = filterT;
  obj->filterHandle.value[0] = initValue[0];
  obj->filterHandle.value[1] = initValue[1];
  obj->filterHandle.value[2] = initValue[2];
  obj->filterHandle.maxLim = maxLim;
  obj->filterHandle.minLim = minLim;
  obj->prevValue[0] = initValue[0];
  obj->prevValue[1] = initValue[1];
  obj->prevValue[2] = initValue[2];
  return b_obj;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URContr_SimpleDerivative_update
  (SimpleDerivative_URControl_at_T *obj, const real_T newValue[3], real_T dt)
{
  real_T b;
  real_T b_b;
  real_T derRaw_idx_1;
  real_T a_idx_1;
  real_T derRaw_idx_2;
  real_T a_idx_2;
  boolean_T tmp;
  derRaw_idx_1 = (newValue[1] - obj->prevValue[1]) / dt;
  a_idx_1 = obj->filterHandle.value[1];
  derRaw_idx_2 = (newValue[2] - obj->prevValue[2]) / dt;
  a_idx_2 = obj->filterHandle.value[2];
  b = obj->filterHandle.filterT;
  b_b = 1.0 - obj->filterHandle.filterT;
  obj->filterHandle.value[0] = (newValue[0] - obj->prevValue[0]) / dt * (1.0 -
    obj->filterHandle.filterT) + obj->filterHandle.value[0] *
    obj->filterHandle.filterT;
  obj->filterHandle.value[1] = a_idx_1 * b + derRaw_idx_1 * b_b;
  obj->filterHandle.value[2] = a_idx_2 * b + derRaw_idx_2 * b_b;
  tmp = rtIsNaN(obj->filterHandle.maxLim);
  if ((obj->filterHandle.value[0] < obj->filterHandle.maxLim) || tmp) {
    derRaw_idx_1 = obj->filterHandle.value[0];
  } else {
    derRaw_idx_1 = obj->filterHandle.maxLim;
  }

  if ((obj->filterHandle.value[1] < obj->filterHandle.maxLim) || tmp) {
    a_idx_1 = obj->filterHandle.value[1];
  } else {
    a_idx_1 = obj->filterHandle.maxLim;
  }

  if ((obj->filterHandle.value[2] < obj->filterHandle.maxLim) || tmp) {
    a_idx_2 = obj->filterHandle.value[2];
  } else {
    a_idx_2 = obj->filterHandle.maxLim;
  }

  b = obj->filterHandle.minLim;
  if ((derRaw_idx_1 > obj->filterHandle.minLim) || rtIsNaN
      (obj->filterHandle.minLim)) {
    obj->filterHandle.value[0] = derRaw_idx_1;
  } else {
    obj->filterHandle.value[0] = obj->filterHandle.minLim;
  }

  obj->derValue[0] = obj->filterHandle.value[0];
  obj->prevValue[0] = newValue[0];
  if ((a_idx_1 > b) || rtIsNaN(b)) {
    obj->filterHandle.value[1] = a_idx_1;
  } else {
    obj->filterHandle.value[1] = b;
  }

  obj->derValue[1] = obj->filterHandle.value[1];
  obj->prevValue[1] = newValue[1];
  if ((a_idx_2 > b) || rtIsNaN(b)) {
    obj->filterHandle.value[2] = a_idx_2;
  } else {
    obj->filterHandle.value[2] = b;
  }

  obj->derValue[2] = obj->filterHandle.value[2];
  obj->prevValue[2] = newValue[2];
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_PIDMomentGen(const real_T
  state_omegaUV[3], const real_T state_omegafUV[3], daqBus *daq, const real_T
  uvr_des[3], real_T URpar_Iz, real_T URpar_Iu, real_T URpar_Iv, const real_T
  URpar_rate_MPID_rateDotKp[3], const real_T URpar_rate_MPID_rateDotKi[3], const
  real_T URpar_rate_MPID_rateDotKd[3], real_T URpar_rate_MPID_derFilterT, real_T
  URpar_rate_MPID_uvrdesderFilter, real_T URpar_rate_MPID_maxInt, real_T
  URpar_rate_MPID_precGain, const struct_YhmxgXLVjzlogleEk1YuME *b_par, real_T
  M_uvr[3])
{
  real_T intLim;
  real_T uvr_des_0[3];
  real_T errorf;
  real_T uvr_des_dot;
  real_T errorf_idx_0;
  real_T errorf_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  if (!URControl_att_DW.errorD_not_empty) {
    URControl_att_DW.errorD.filterHandle.filterT = URpar_rate_MPID_derFilterT;
    URControl_att_DW.errorD.filterHandle.maxLim = 200.0;
    URControl_att_DW.errorD.filterHandle.minLim = -200.0;
    URControl_att_DW.errorD.filterHandle.value[0] = 0.0;
    URControl_att_DW.errorD.prevValue[0] = 0.0;
    URControl_att_DW.errorD.filterHandle.value[1] = 0.0;
    URControl_att_DW.errorD.prevValue[1] = 0.0;
    URControl_att_DW.errorD.filterHandle.value[2] = 0.0;
    URControl_att_DW.errorD.prevValue[2] = 0.0;
    URControl_att_DW.errorD_not_empty = true;
  }

  if (!URControl_att_DW.uvrDer_not_empty) {
    URControl_att_DW.uvrDer.filterHandle.filterT =
      URpar_rate_MPID_uvrdesderFilter;
    URControl_att_DW.uvrDer.filterHandle.maxLim = 200.0;
    URControl_att_DW.uvrDer.filterHandle.minLim = -200.0;
    URControl_att_DW.uvrDer.filterHandle.value[0] = 0.0;
    URControl_att_DW.uvrDer.prevValue[0] = 0.0;
    URControl_att_DW.uvrDer.filterHandle.value[1] = 0.0;
    URControl_att_DW.uvrDer.prevValue[1] = 0.0;
    URControl_att_DW.uvrDer.filterHandle.value[2] = 0.0;
    URControl_att_DW.uvrDer.prevValue[2] = 0.0;
    URControl_att_DW.uvrDer_not_empty = true;
  }

  intLim = URpar_rate_MPID_maxInt * 0.001;
  URControl_att_DW.errorD.filterHandle.filterT = URpar_rate_MPID_derFilterT;
  errorf = uvr_des[0] - state_omegafUV[0];
  URControl_att_DW.errorInt[0] += errorf / b_par->freq;
  tmp = rtIsNaN(intLim);
  if ((URControl_att_DW.errorInt[0] < intLim) || tmp) {
    uvr_des_dot = URControl_att_DW.errorInt[0];
  } else {
    uvr_des_dot = intLim;
  }

  tmp_0 = rtIsNaN(-intLim);
  if ((uvr_des_dot > -intLim) || tmp_0) {
    URControl_att_DW.errorInt[0] = uvr_des_dot;
  } else {
    URControl_att_DW.errorInt[0] = -intLim;
  }

  uvr_des_0[0] = uvr_des[0] - state_omegaUV[0];
  errorf_idx_0 = errorf;
  errorf = uvr_des[1] - state_omegafUV[1];
  URControl_att_DW.errorInt[1] += errorf / b_par->freq;
  if ((URControl_att_DW.errorInt[1] < intLim) || tmp) {
    uvr_des_dot = URControl_att_DW.errorInt[1];
  } else {
    uvr_des_dot = intLim;
  }

  if ((uvr_des_dot > -intLim) || tmp_0) {
    URControl_att_DW.errorInt[1] = uvr_des_dot;
  } else {
    URControl_att_DW.errorInt[1] = -intLim;
  }

  uvr_des_0[1] = uvr_des[1] - state_omegaUV[1];
  errorf_idx_1 = errorf;
  errorf = uvr_des[2] - state_omegafUV[2];
  URControl_att_DW.errorInt[2] += errorf / b_par->freq;
  if ((URControl_att_DW.errorInt[2] < intLim) || tmp) {
    uvr_des_dot = URControl_att_DW.errorInt[2];
  } else {
    uvr_des_dot = intLim;
  }

  if ((uvr_des_dot > -intLim) || tmp_0) {
    URControl_att_DW.errorInt[2] = uvr_des_dot;
  } else {
    URControl_att_DW.errorInt[2] = -intLim;
  }

  uvr_des_0[2] = uvr_des[2] - state_omegaUV[2];
  URContr_SimpleDerivative_update(&URControl_att_DW.errorD, uvr_des_0, 1.0 /
    b_par->freq);
  URControl_att_DW.uvrDer.filterHandle.filterT = URpar_rate_MPID_uvrdesderFilter;
  URContr_SimpleDerivative_update(&URControl_att_DW.uvrDer, uvr_des, 1.0 /
    b_par->freq);
  intLim = ((errorf_idx_0 * URpar_rate_MPID_rateDotKp[0] +
             URControl_att_DW.errorInt[0] * URpar_rate_MPID_rateDotKi[0]) +
            URControl_att_DW.errorD.derValue[0] * URpar_rate_MPID_rateDotKd[0])
    + URControl_att_DW.uvrDer.derValue[0];
  M_uvr[0] = intLim * URpar_Iu - state_omegafUV[1] * state_omegafUV[2] *
    (URpar_Iv - URpar_Iz) * URpar_rate_MPID_precGain;
  daq->uvrDot_des[0] = intLim;
  intLim = ((errorf_idx_1 * URpar_rate_MPID_rateDotKp[1] +
             URControl_att_DW.errorInt[1] * URpar_rate_MPID_rateDotKi[1]) +
            URControl_att_DW.errorD.derValue[1] * URpar_rate_MPID_rateDotKd[1])
    + URControl_att_DW.uvrDer.derValue[1];
  M_uvr[1] = intLim * URpar_Iv - state_omegafUV[0] * state_omegafUV[2] *
    (URpar_Iz - URpar_Iu) * URpar_rate_MPID_precGain;
  daq->uvrDot_des[1] = intLim;
  intLim = ((errorf * URpar_rate_MPID_rateDotKp[2] + URControl_att_DW.errorInt[2]
             * URpar_rate_MPID_rateDotKi[2]) + URControl_att_DW.errorD.derValue
            [2] * URpar_rate_MPID_rateDotKd[2]) +
    URControl_att_DW.uvrDer.derValue[2];
  M_uvr[2] = intLim * URpar_Iz - URpar_rate_MPID_precGain * 0.0;
  daq->uvrDot_des[2] = intLim;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_INDIMomentGen(const real_T
  state_wRotor[4], const real_T state_omegaUV[3], const real_T state_omegafUV[3],
  daqBus *daq, const real_T uvr_des[3], real_T URpar_k0, real_T URpar_t0, real_T
  URpar_s, real_T URpar_est_omegaFilterT, const real_T
  URpar_rate_MINDI_rateDotKp[3], real_T URpar_rate_MINDI_derFilterT, const
  real_T URpar_rate_MINDI_MKp[3], const struct_YhmxgXLVjzlogleEk1YuME *b_par,
  real_T M_uvr[3])
{
  real_T z1;
  real_T Fset_idx_1;
  real_T Fset_idx_0;
  real_T Fset_idx_2;
  if (!URControl_att_DW.omegaDot_not_empty_m) {
    URControl_att_DW.omegaDot_b.filterHandle.filterT =
      URpar_rate_MINDI_derFilterT;
    URControl_att_DW.omegaDot_b.filterHandle.maxLim = 300.0;
    URControl_att_DW.omegaDot_b.filterHandle.minLim = -300.0;
    URControl_att_DW.omegaDot_b.filterHandle.value[0] = 0.0;
    URControl_att_DW.omegaDot_b.prevValue[0] = 0.0;
    URControl_att_DW.omegaDot_b.filterHandle.value[1] = 0.0;
    URControl_att_DW.omegaDot_b.prevValue[1] = 0.0;
    URControl_att_DW.omegaDot_b.filterHandle.value[2] = 0.0;
    URControl_att_DW.omegaDot_b.prevValue[2] = 0.0;
    URControl_att_DW.omegaDot_not_empty_m = true;
  }

  if (!URControl_att_DW.wRotorFilter_not_empty) {
    URControl_att_DW.wRotorFilter.filterT = URpar_est_omegaFilterT;
    URControl_att_DW.wRotorFilter.value[0] = 0.0;
    URControl_att_DW.wRotorFilter.value[1] = 0.0;
    URControl_att_DW.wRotorFilter.value[2] = 0.0;
    URControl_att_DW.wRotorFilter.value[3] = 0.0;
    URControl_att_DW.wRotorFilter.maxLim = 1200.0;
    URControl_att_DW.wRotorFilter.minLim = 0.0;
    URControl_att_DW.wRotorFilter_not_empty = true;
  }

  URControl_att_DW.wRotorFilter.filterT = URpar_rate_MINDI_derFilterT;
  URControl_att_DW.wRotorFilter.value[0] = (1.0 -
    URControl_att_DW.wRotorFilter.filterT) * state_wRotor[0] +
    URControl_att_DW.wRotorFilter.value[0] *
    URControl_att_DW.wRotorFilter.filterT;
  if ((URControl_att_DW.wRotorFilter.value[0] <
       URControl_att_DW.wRotorFilter.maxLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.maxLim)) {
    z1 = URControl_att_DW.wRotorFilter.value[0];
  } else {
    z1 = URControl_att_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_att_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.minLim)) {
    URControl_att_DW.wRotorFilter.value[0] = z1;
  } else {
    URControl_att_DW.wRotorFilter.value[0] =
      URControl_att_DW.wRotorFilter.minLim;
  }

  Fset_idx_0 = URControl_att_DW.wRotorFilter.value[0] *
    URControl_att_DW.wRotorFilter.value[0] * URpar_k0;
  URControl_att_DW.wRotorFilter.value[1] = (1.0 -
    URControl_att_DW.wRotorFilter.filterT) * state_wRotor[1] +
    URControl_att_DW.wRotorFilter.value[1] *
    URControl_att_DW.wRotorFilter.filterT;
  if ((URControl_att_DW.wRotorFilter.value[1] <
       URControl_att_DW.wRotorFilter.maxLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.maxLim)) {
    z1 = URControl_att_DW.wRotorFilter.value[1];
  } else {
    z1 = URControl_att_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_att_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.minLim)) {
    URControl_att_DW.wRotorFilter.value[1] = z1;
  } else {
    URControl_att_DW.wRotorFilter.value[1] =
      URControl_att_DW.wRotorFilter.minLim;
  }

  Fset_idx_1 = URControl_att_DW.wRotorFilter.value[1] *
    URControl_att_DW.wRotorFilter.value[1] * URpar_k0;
  URControl_att_DW.wRotorFilter.value[2] = (1.0 -
    URControl_att_DW.wRotorFilter.filterT) * state_wRotor[2] +
    URControl_att_DW.wRotorFilter.value[2] *
    URControl_att_DW.wRotorFilter.filterT;
  if ((URControl_att_DW.wRotorFilter.value[2] <
       URControl_att_DW.wRotorFilter.maxLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.maxLim)) {
    z1 = URControl_att_DW.wRotorFilter.value[2];
  } else {
    z1 = URControl_att_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_att_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.minLim)) {
    URControl_att_DW.wRotorFilter.value[2] = z1;
  } else {
    URControl_att_DW.wRotorFilter.value[2] =
      URControl_att_DW.wRotorFilter.minLim;
  }

  Fset_idx_2 = URControl_att_DW.wRotorFilter.value[2] *
    URControl_att_DW.wRotorFilter.value[2] * URpar_k0;
  URControl_att_DW.wRotorFilter.value[3] = (1.0 -
    URControl_att_DW.wRotorFilter.filterT) * state_wRotor[3] +
    URControl_att_DW.wRotorFilter.value[3] *
    URControl_att_DW.wRotorFilter.filterT;
  if ((URControl_att_DW.wRotorFilter.value[3] <
       URControl_att_DW.wRotorFilter.maxLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.maxLim)) {
    z1 = URControl_att_DW.wRotorFilter.value[3];
  } else {
    z1 = URControl_att_DW.wRotorFilter.maxLim;
  }

  if ((z1 > URControl_att_DW.wRotorFilter.minLim) || rtIsNaN
      (URControl_att_DW.wRotorFilter.minLim)) {
    URControl_att_DW.wRotorFilter.value[3] = z1;
  } else {
    URControl_att_DW.wRotorFilter.value[3] =
      URControl_att_DW.wRotorFilter.minLim;
  }

  z1 = URControl_att_DW.wRotorFilter.value[3] *
    URControl_att_DW.wRotorFilter.value[3] * URpar_k0;
  M_uvr[0] = (z1 - Fset_idx_1) * URpar_s;
  M_uvr[1] = (Fset_idx_0 - Fset_idx_2) * URpar_s;
  M_uvr[2] = (((Fset_idx_0 - Fset_idx_1) + Fset_idx_2) - z1) * URpar_t0 /
    URpar_k0;
  Fset_idx_0 = (uvr_des[0] - state_omegafUV[0]) * URpar_rate_MINDI_rateDotKp[0];
  Fset_idx_1 = (uvr_des[1] - state_omegafUV[1]) * URpar_rate_MINDI_rateDotKp[1];
  Fset_idx_2 = (uvr_des[2] - state_omegafUV[2]) * URpar_rate_MINDI_rateDotKp[2];
  URControl_att_DW.omegaDot_b.filterHandle.filterT = URpar_rate_MINDI_derFilterT;
  URContr_SimpleDerivative_update(&URControl_att_DW.omegaDot_b, state_omegaUV,
    1.0 / b_par->freq);
  z1 = (Fset_idx_0 - URControl_att_DW.omegaDot_b.derValue[0]) *
    URpar_rate_MINDI_MKp[0] * 0.0001;
  daq->uvrDot_des[0] = Fset_idx_0;
  daq->omegaDot[0] = URControl_att_DW.omegaDot_b.derValue[0];
  daq->dM[0] = z1;
  M_uvr[0] += z1;
  z1 = (Fset_idx_1 - URControl_att_DW.omegaDot_b.derValue[1]) *
    URpar_rate_MINDI_MKp[1] * 0.0001;
  daq->uvrDot_des[1] = Fset_idx_1;
  daq->omegaDot[1] = URControl_att_DW.omegaDot_b.derValue[1];
  daq->dM[1] = z1;
  M_uvr[1] += z1;
  z1 = (Fset_idx_2 - URControl_att_DW.omegaDot_b.derValue[2]) *
    URpar_rate_MINDI_MKp[2] * 0.0001;
  daq->uvrDot_des[2] = Fset_idx_2;
  daq->omegaDot[2] = URControl_att_DW.omegaDot_b.derValue[2];
  daq->dM[2] = z1;
  M_uvr[2] += z1;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
real_T URControl_attModelClass::URControl_att_xnrm2(int32_T n, const real_T
  x_data[], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = std::abs(x_data[ix0 - 1]);
    } else {
      scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = std::abs(x_data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * std::sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
int32_T URControl_attModelClass::URControl_att_ixamax(int32_T n, const real_T
  x_data[], int32_T ix0)
{
  int32_T idxmax;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T k;
  if (n < 1) {
    idxmax = 0;
  } else {
    idxmax = 1;
    if (n > 1) {
      ix = ix0 - 1;
      smax = std::abs(x_data[ix0 - 1]);
      for (k = 2; k <= n; k++) {
        ix++;
        s = std::abs(x_data[ix]);
        if (s > smax) {
          idxmax = k;
          smax = s;
        }
      }
    }
  }

  return idxmax;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_xswap(int32_T n, real_T x_data[],
  int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < n; k++) {
    temp = x_data[ix];
    x_data[ix] = x_data[iy];
    x_data[iy] = temp;
    ix++;
    iy++;
  }
}

/* Function for MATLAB Function: '<S2>/control allocator' */
real_T URControl_attModelClass::URControl_att_xzlarfg(int32_T n, real_T *alpha1,
  real_T x_data[], int32_T ix0)
{
  real_T tau;
  real_T xnorm;
  int32_T knt;
  int32_T b_k;
  int32_T c_k;
  tau = 0.0;
  if (n > 0) {
    xnorm = URControl_att_xnrm2(n - 1, x_data, ix0);
    if (xnorm != 0.0) {
      xnorm = rt_hypotd_snf(*alpha1, xnorm);
      if (*alpha1 >= 0.0) {
        xnorm = -xnorm;
      }

      if (std::abs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        b_k = (ix0 + n) - 2;
        do {
          knt++;
          for (c_k = ix0; c_k <= b_k; c_k++) {
            x_data[c_k - 1] *= 9.9792015476736E+291;
          }

          xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(std::abs(xnorm) >= 1.0020841800044864E-292));

        xnorm = rt_hypotd_snf(*alpha1, URControl_att_xnrm2(n - 1, x_data, ix0));
        if (*alpha1 >= 0.0) {
          xnorm = -xnorm;
        }

        tau = (xnorm - *alpha1) / xnorm;
        *alpha1 = 1.0 / (*alpha1 - xnorm);
        for (c_k = ix0; c_k <= b_k; c_k++) {
          x_data[c_k - 1] *= *alpha1;
        }

        for (b_k = 0; b_k <= knt; b_k++) {
          xnorm *= 1.0020841800044864E-292;
        }

        *alpha1 = xnorm;
      } else {
        tau = (xnorm - *alpha1) / xnorm;
        *alpha1 = 1.0 / (*alpha1 - xnorm);
        knt = (ix0 + n) - 2;
        for (b_k = ix0; b_k <= knt; b_k++) {
          x_data[b_k - 1] *= *alpha1;
        }

        *alpha1 = xnorm;
      }
    }
  }

  return tau;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_xzlarf(int32_T m, int32_T n, int32_T
  iv0, real_T tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[])
{
  int32_T lastv;
  int32_T lastc;
  int32_T coltop;
  int32_T ix;
  real_T c;
  int32_T iac;
  int32_T d;
  int32_T b_ia;
  int32_T jy;
  int32_T exitg1;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C_data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = n - 1;
    exitg2 = false;
    while ((!exitg2) && (lastc + 1 > 0)) {
      coltop = lastc * ldc + ic0;
      jy = coltop;
      do {
        exitg1 = 0;
        if (jy <= (coltop + lastv) - 1) {
          if (C_data[jy - 1] != 0.0) {
            exitg1 = 1;
          } else {
            jy++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = -1;
  }

  if (lastv > 0) {
    if (lastc + 1 != 0) {
      for (coltop = 0; coltop <= lastc; coltop++) {
        work_data[coltop] = 0.0;
      }

      coltop = 0;
      jy = ldc * lastc + ic0;
      iac = ic0;
      while (((ldc > 0) && (iac <= jy)) || ((ldc < 0) && (iac >= jy))) {
        ix = iv0;
        c = 0.0;
        d = (iac + lastv) - 1;
        for (b_ia = iac; b_ia <= d; b_ia++) {
          c += C_data[b_ia - 1] * C_data[ix - 1];
          ix++;
        }

        work_data[coltop] += c;
        coltop++;
        iac += ldc;
      }
    }

    if (!(-tau == 0.0)) {
      coltop = ic0 - 1;
      jy = 0;
      for (iac = 0; iac <= lastc; iac++) {
        if (work_data[jy] != 0.0) {
          c = work_data[jy] * -tau;
          ix = iv0;
          d = lastv + coltop;
          for (b_ia = coltop; b_ia < d; b_ia++) {
            C_data[b_ia] += C_data[ix - 1] * c;
            ix++;
          }
        }

        jy++;
        coltop += ldc;
      }
    }
  }
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_xgeqp3(real_T A_data[], int32_T
  A_size[2], real_T tau_data[], int32_T *tau_size, int32_T jpvt_data[], int32_T
  jpvt_size[2])
{
  int32_T m;
  int32_T n;
  int32_T mn;
  real_T work_data[15];
  real_T vn1_data[15];
  real_T vn2_data[15];
  int32_T i_i;
  int32_T nmi;
  int32_T pvt;
  int32_T itemp;
  real_T temp2;
  real_T b_atmp;
  int32_T b_n;
  int32_T yk;
  int8_T c_idx_0;
  m = A_size[0];
  n = A_size[1];
  if (A_size[0] < A_size[1]) {
    mn = A_size[0];
  } else {
    mn = A_size[1];
  }

  *tau_size = static_cast<int8_T>(mn);
  if (A_size[1] < 1) {
    b_n = 0;
  } else {
    b_n = A_size[1];
  }

  jpvt_size[0] = 1;
  jpvt_size[1] = b_n;
  if (b_n > 0) {
    jpvt_data[0] = 1;
    yk = 1;
    for (i_i = 2; i_i <= b_n; i_i++) {
      yk++;
      jpvt_data[i_i - 1] = yk;
    }
  }

  if (A_size[1] != 0) {
    c_idx_0 = static_cast<int8_T>(A_size[1]);
    if (0 <= c_idx_0 - 1) {
      memset(&work_data[0], 0, c_idx_0 * sizeof(real_T));
    }

    b_n = 1;
    for (yk = 0; yk < n; yk++) {
      vn1_data[yk] = URControl_att_xnrm2(m, A_data, b_n);
      vn2_data[yk] = vn1_data[yk];
      b_n += m;
    }

    for (b_n = 0; b_n < mn; b_n++) {
      i_i = b_n * m + b_n;
      nmi = n - b_n;
      yk = m - b_n;
      pvt = (URControl_att_ixamax(nmi, vn1_data, b_n + 1) + b_n) - 1;
      if (pvt + 1 != b_n + 1) {
        URControl_att_xswap(m, A_data, 1 + m * pvt, 1 + m * b_n);
        itemp = jpvt_data[pvt];
        jpvt_data[pvt] = jpvt_data[b_n];
        jpvt_data[b_n] = itemp;
        vn1_data[pvt] = vn1_data[b_n];
        vn2_data[pvt] = vn2_data[b_n];
      }

      if (b_n + 1 < m) {
        b_atmp = A_data[i_i];
        tau_data[b_n] = URControl_att_xzlarfg(yk, &b_atmp, A_data, i_i + 2);
        A_data[i_i] = b_atmp;
      } else {
        tau_data[b_n] = 0.0;
      }

      if (b_n + 1 < n) {
        b_atmp = A_data[i_i];
        A_data[i_i] = 1.0;
        URControl_att_xzlarf(yk, nmi - 1, i_i + 1, tau_data[b_n], A_data, (b_n +
          (b_n + 1) * m) + 1, m, work_data);
        A_data[i_i] = b_atmp;
      }

      for (i_i = b_n + 1; i_i < n; i_i++) {
        if (vn1_data[i_i] != 0.0) {
          nmi = A_size[0] * i_i + b_n;
          b_atmp = std::abs(A_data[nmi]) / vn1_data[i_i];
          b_atmp = 1.0 - b_atmp * b_atmp;
          if (b_atmp < 0.0) {
            b_atmp = 0.0;
          }

          temp2 = vn1_data[i_i] / vn2_data[i_i];
          temp2 = temp2 * temp2 * b_atmp;
          if (temp2 <= 1.4901161193847656E-8) {
            if (b_n + 1 < m) {
              vn1_data[i_i] = URControl_att_xnrm2(yk - 1, A_data, nmi + 2);
              vn2_data[i_i] = vn1_data[i_i];
            } else {
              vn1_data[i_i] = 0.0;
              vn2_data[i_i] = 0.0;
            }
          } else {
            vn1_data[i_i] *= std::sqrt(b_atmp);
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_qrsolve(const real_T A_data[], const
  int32_T A_size[2], const real_T B_data[], const int32_T *B_size, real_T
  Y_data[], int32_T *Y_size)
{
  real_T b_A_data[225];
  real_T tau_data[15];
  int32_T jpvt_data[15];
  int32_T rankR;
  int32_T minmn;
  int32_T maxmn;
  real_T b_B_data[15];
  real_T wj;
  int32_T c_i;
  int32_T b_A_size[2];
  int32_T jpvt_size[2];
  int8_T b_idx_0;
  int32_T b_A_size_0;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  minmn = A_size[0] * A_size[1] - 1;
  if (0 <= minmn) {
    memcpy(&b_A_data[0], &A_data[0], (minmn + 1) * sizeof(real_T));
  }

  URControl_att_xgeqp3(b_A_data, b_A_size, tau_data, &minmn, jpvt_data,
                       jpvt_size);
  rankR = 0;
  if (b_A_size[0] < b_A_size[1]) {
    minmn = b_A_size[0];
    maxmn = b_A_size[1];
  } else {
    minmn = b_A_size[1];
    maxmn = b_A_size[0];
  }

  if (minmn > 0) {
    while ((rankR < minmn) && (!(std::abs(b_A_data[b_A_size[0] * rankR + rankR])
             <= 2.2204460492503131E-15 * static_cast<real_T>(maxmn) * std::abs
             (b_A_data[0])))) {
      rankR++;
    }
  }

  b_idx_0 = static_cast<int8_T>(b_A_size[1]);
  *Y_size = b_idx_0;
  if (0 <= b_idx_0 - 1) {
    memset(&Y_data[0], 0, b_idx_0 * sizeof(real_T));
  }

  if (0 <= *B_size - 1) {
    memcpy(&b_B_data[0], &B_data[0], *B_size * sizeof(real_T));
  }

  minmn = b_A_size[0];
  if (b_A_size[0] < b_A_size[1]) {
    b_A_size_0 = b_A_size[0];
  } else {
    b_A_size_0 = b_A_size[1];
  }

  maxmn = b_A_size_0 - 1;
  for (b_A_size_0 = 0; b_A_size_0 <= maxmn; b_A_size_0++) {
    if (tau_data[b_A_size_0] != 0.0) {
      wj = b_B_data[b_A_size_0];
      for (c_i = b_A_size_0 + 1; c_i < minmn; c_i++) {
        wj += b_A_data[b_A_size[0] * b_A_size_0 + c_i] * b_B_data[c_i];
      }

      wj *= tau_data[b_A_size_0];
      if (wj != 0.0) {
        b_B_data[b_A_size_0] -= wj;
        for (c_i = b_A_size_0 + 1; c_i < minmn; c_i++) {
          b_B_data[c_i] -= b_A_data[b_A_size[0] * b_A_size_0 + c_i] * wj;
        }
      }
    }
  }

  for (maxmn = 0; maxmn < rankR; maxmn++) {
    Y_data[jpvt_data[maxmn] - 1] = b_B_data[maxmn];
  }

  for (rankR--; rankR + 1 > 0; rankR--) {
    minmn = b_A_size[0] * rankR;
    Y_data[jpvt_data[rankR] - 1] /= b_A_data[minmn + rankR];
    for (b_A_size_0 = 0; b_A_size_0 < rankR; b_A_size_0++) {
      Y_data[jpvt_data[b_A_size_0] - 1] -= b_A_data[minmn + b_A_size_0] *
        Y_data[jpvt_data[rankR] - 1];
    }
  }
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_xgetrf(int32_T m, int32_T n, real_T
  A_data[], int32_T A_size[2], int32_T lda, int32_T ipiv_data[], int32_T
  ipiv_size[2], int32_T *info)
{
  int32_T mmj;
  int32_T b_n;
  int32_T yk;
  int32_T b_c;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T iy;
  int32_T jA;
  int32_T c_ix;
  int32_T b_j;
  int32_T e;
  int32_T ijA;
  if (m < n) {
    b_n = m;
  } else {
    b_n = n;
  }

  if (b_n < 1) {
    b_n = 0;
  }

  ipiv_size[0] = 1;
  ipiv_size[1] = b_n;
  if (b_n > 0) {
    ipiv_data[0] = 1;
    yk = 1;
    for (mmj = 2; mmj <= b_n; mmj++) {
      yk++;
      ipiv_data[mmj - 1] = yk;
    }
  }

  *info = 0;
  if ((m >= 1) && (n >= 1)) {
    b_n = m - 1;
    if (b_n >= n) {
      b_n = n;
    }

    for (yk = 0; yk < b_n; yk++) {
      mmj = m - yk;
      b_c = (lda + 1) * yk;
      if (mmj < 1) {
        jA = -1;
      } else {
        jA = 0;
        if (mmj > 1) {
          ix = b_c;
          smax = std::abs(A_data[b_c]);
          for (iy = 2; iy <= mmj; iy++) {
            ix++;
            s = std::abs(A_data[ix]);
            if (s > smax) {
              jA = iy - 1;
              smax = s;
            }
          }
        }
      }

      if (A_data[b_c + jA] != 0.0) {
        if (jA != 0) {
          iy = yk + jA;
          ipiv_data[yk] = iy + 1;
          ix = yk;
          for (jA = 0; jA < n; jA++) {
            smax = A_data[ix];
            A_data[ix] = A_data[iy];
            A_data[iy] = smax;
            ix += lda;
            iy += lda;
          }
        }

        iy = b_c + mmj;
        for (jA = b_c + 1; jA < iy; jA++) {
          A_data[jA] /= A_data[b_c];
        }
      } else {
        *info = yk + 1;
      }

      iy = n - yk;
      ix = b_c + lda;
      jA = ix + 1;
      for (b_j = 0; b_j <= iy - 2; b_j++) {
        smax = A_data[ix];
        if (A_data[ix] != 0.0) {
          c_ix = b_c + 1;
          e = mmj + jA;
          for (ijA = jA; ijA < e - 1; ijA++) {
            A_data[ijA] += A_data[c_ix] * -smax;
            c_ix++;
          }
        }

        ix += lda;
        jA += lda;
      }
    }

    if ((*info == 0) && (m <= n) && (!(A_data[((m - 1) * A_size[0] + m) - 1] !=
          0.0))) {
      *info = m;
    }
  }
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_mldivide(const real_T A_data[],
  const int32_T A_size[2], const real_T B_data[], const int32_T *B_size, real_T
  Y_data[], int32_T *Y_size)
{
  int32_T n;
  real_T temp;
  real_T b_A_data[225];
  int32_T ipiv_data[15];
  int32_T b_kAcol;
  int32_T b_i;
  int32_T loop_ub;
  int32_T b_A_size[2];
  int32_T ipiv_size[2];
  if (A_size[1] == 0) {
    *Y_size = 0;
  } else if (A_size[0] == A_size[1]) {
    n = A_size[1];
    b_A_size[0] = A_size[0];
    b_A_size[1] = A_size[1];
    loop_ub = A_size[0] * A_size[1] - 1;
    if (0 <= loop_ub) {
      memcpy(&b_A_data[0], &A_data[0], (loop_ub + 1) * sizeof(real_T));
    }

    URControl_att_xgetrf(A_size[1], A_size[1], b_A_data, b_A_size, A_size[1],
                         ipiv_data, ipiv_size, &loop_ub);
    *Y_size = *B_size;
    if (0 <= *B_size - 1) {
      memcpy(&Y_data[0], &B_data[0], *B_size * sizeof(real_T));
    }

    for (loop_ub = 0; loop_ub <= n - 2; loop_ub++) {
      if (loop_ub + 1 != ipiv_data[loop_ub]) {
        temp = Y_data[loop_ub];
        Y_data[loop_ub] = Y_data[ipiv_data[loop_ub] - 1];
        Y_data[ipiv_data[loop_ub] - 1] = temp;
      }
    }

    for (loop_ub = 0; loop_ub < n; loop_ub++) {
      b_kAcol = n * loop_ub;
      if (Y_data[loop_ub] != 0.0) {
        for (b_i = loop_ub + 1; b_i < n; b_i++) {
          Y_data[b_i] -= b_A_data[b_i + b_kAcol] * Y_data[loop_ub];
        }
      }
    }

    for (loop_ub = A_size[1] - 1; loop_ub + 1 > 0; loop_ub--) {
      b_kAcol = n * loop_ub;
      if (Y_data[loop_ub] != 0.0) {
        Y_data[loop_ub] /= b_A_data[loop_ub + b_kAcol];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          Y_data[b_i] -= b_A_data[b_i + b_kAcol] * Y_data[loop_ub];
        }
      }
    }
  } else {
    URControl_att_qrsolve(A_data, A_size, B_data, B_size, Y_data, Y_size);
  }
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_a_controlAllocQPQuick(real_T
  refStruct_MuRef, real_T refStruct_MvRef, real_T refStruct_MzRef, real_T
  refStruct_FtotRef, const real_T FMax[4], const real_T FMin[4], real_T
  gainStruct_MuGain, real_T gainStruct_MvGain, real_T gainStruct_MzGain, real_T
  gainStruct_FGain, real_T gainStruct_FtotGain, real_T y_state_init[4], const
  struct_YhmxgXLVjzlogleEk1YuME *b_par, real_T URpar_rate_maxIter, real_T x[4],
  real_T *iterSteps, real_T *optimal)
{
  real_T H[16];
  real_T b[8];
  int32_T solution;
  boolean_T indices[8];
  int8_T A_eq_data[32];
  int8_T AT_eq_data[32];
  real_T constraintError[8];
  real_T count;
  int32_T iter;
  int8_T f_data[8];
  int8_T g_data[8];
  int32_T trueCount;
  boolean_T empty_non_axis_sizes;
  real_T varargin_1_data[48];
  b_cell_wrap_0_URControl_att_T reshapes[2];
  int32_T idx;
  static const int8_T A[32] = { 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0,
    0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1 };

  real_T h_data[15];
  real_T varargin_1_data_0[225];
  real_T c_data[12];
  int8_T A_eq_data_0[150];
  int32_T h_size;
  int32_T varargin_1_size[2];
  real_T c_idx_0;
  real_T c_idx_1;
  real_T c_idx_2;
  real_T c_idx_3;
  int32_T f_size_idx_1;
  real_T z1_idx_1;
  real_T z1_idx_2;
  real_T z1_idx_3;
  int8_T l2_idx_0;
  int8_T l1_idx_1;
  real_T c_idx_0_tmp;
  int32_T AT_eq_data_tmp;
  int32_T loop_ub_tmp;
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;
  x[0] = 0.0;
  if (FMax[0] > 0.001) {
    count = FMax[0];
  } else {
    count = 0.001;
  }

  x[1] = 0.0;
  if (FMax[1] > 0.001) {
    z1_idx_1 = FMax[1];
  } else {
    z1_idx_1 = 0.001;
  }

  x[2] = 0.0;
  if (FMax[2] > 0.001) {
    z1_idx_2 = FMax[2];
  } else {
    z1_idx_2 = 0.001;
  }

  x[3] = 0.0;
  if (FMax[3] > 0.001) {
    z1_idx_3 = FMax[3];
  } else {
    z1_idx_3 = 0.001;
  }

  c_idx_0 = b_par->URC.t0 / b_par->URC.k0;
  c_idx_1 = b_par->URC.s * b_par->URC.s;
  c_idx_2 = c_idx_1 * gainStruct_MvGain;
  H[0] = (((c_idx_2 + c_idx_0 * c_idx_0 * gainStruct_MzGain) +
           gainStruct_FtotGain) + gainStruct_FGain / count) * 2.0;
  H[4] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[1] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[8] = (-2.0 * gainStruct_MvGain * c_idx_1 + gainStruct_MzGain * 2.0 *
          (c_idx_0 * c_idx_0)) + gainStruct_FtotGain * 2.0;
  H[2] = H[8];
  H[12] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[3] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[5] = (((c_idx_1 * gainStruct_MuGain + c_idx_0 * c_idx_0 * gainStruct_MzGain)
           + gainStruct_FtotGain) + gainStruct_FGain / z1_idx_1) * 2.0;
  H[9] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[6] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[13] = (-2.0 * gainStruct_MuGain * c_idx_1 + gainStruct_MzGain * 2.0 *
           (c_idx_0 * c_idx_0)) + 2.0 * gainStruct_FtotGain;
  H[7] = H[13];
  H[10] = (((c_idx_2 + c_idx_0 * c_idx_0 * gainStruct_MzGain) +
            gainStruct_FtotGain) + gainStruct_FGain / z1_idx_2) * 2.0;
  H[14] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[11] = -2.0 * gainStruct_MzGain * (c_idx_0 * c_idx_0) + gainStruct_FtotGain *
    2.0;
  H[15] = (((b_par->URC.s * b_par->URC.s * gainStruct_MuGain + c_idx_0 * c_idx_0
             * gainStruct_MzGain) + gainStruct_FtotGain) + gainStruct_FGain /
           z1_idx_3) * 2.0;
  c_idx_3 = 2.0 * b_par->URC.t0 / b_par->URC.k0 * refStruct_MzRef *
    gainStruct_MzGain;
  c_idx_0_tmp = 2.0 * gainStruct_FtotGain * refStruct_FtotRef;
  c_idx_0 = (-2.0 * gainStruct_MvGain * refStruct_MvRef * b_par->URC.s - c_idx_3)
    - c_idx_0_tmp;
  c_idx_1 = (c_idx_3 + 2.0 * gainStruct_MuGain * refStruct_MuRef * b_par->URC.s)
    - c_idx_0_tmp;
  c_idx_2 = (2.0 * gainStruct_MvGain * refStruct_MvRef * b_par->URC.s - c_idx_3)
    - c_idx_0_tmp;
  c_idx_3 = (c_idx_3 + -2.0 * gainStruct_MuGain * refStruct_MuRef * b_par->URC.s)
    - c_idx_0_tmp;
  b[0] = count;
  b[1] = z1_idx_1;
  b[2] = z1_idx_2;
  b[3] = z1_idx_3;
  b[4] = -FMin[0];
  b[5] = -FMin[1];
  b[6] = -FMin[2];
  b[7] = -FMin[3];
  solution = 0;
  *iterSteps = 0.0;
  iter = 0;
  exitg1 = false;
  while ((!exitg1) && (iter <= static_cast<int32_T>(URpar_rate_maxIter) - 1)) {
    (*iterSteps)++;
    indices[0] = (y_state_init[0] == 1.0);
    indices[4] = (y_state_init[0] == -1.0);
    indices[1] = (y_state_init[1] == 1.0);
    indices[5] = (y_state_init[1] == -1.0);
    indices[2] = (y_state_init[2] == 1.0);
    indices[6] = (y_state_init[2] == -1.0);
    indices[3] = (y_state_init[3] == 1.0);
    indices[7] = (y_state_init[3] == -1.0);
    trueCount = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        trueCount++;
      }
    }

    f_size_idx_1 = trueCount;
    trueCount = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        f_data[trueCount] = static_cast<int8_T>((h_size + 1));
        trueCount++;
      }
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp] = A[f_data[loop_ub_tmp] - 1];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp + f_size_idx_1] = A[f_data[loop_ub_tmp] + 7];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp + (f_size_idx_1 << 1)] = A[f_data[loop_ub_tmp] + 15];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp + f_size_idx_1 * 3] = A[f_data[loop_ub_tmp] + 23];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      AT_eq_data_tmp = loop_ub_tmp << 2;
      AT_eq_data[AT_eq_data_tmp] = A_eq_data[loop_ub_tmp];
      AT_eq_data[1 + AT_eq_data_tmp] = A_eq_data[loop_ub_tmp + f_size_idx_1];
      AT_eq_data[2 + AT_eq_data_tmp] = A_eq_data[(f_size_idx_1 << 1) +
        loop_ub_tmp];
      AT_eq_data[3 + AT_eq_data_tmp] = A_eq_data[f_size_idx_1 * 3 + loop_ub_tmp];
    }

    if (f_size_idx_1 == 0) {
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      l1_idx_1 = static_cast<int8_T>(f_size_idx_1);
      l2_idx_0 = static_cast<int8_T>(f_size_idx_1);
    }

    if (f_size_idx_1 != 0) {
      trueCount = f_size_idx_1;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      trueCount = l2_idx_0;
    } else {
      trueCount = 0;
      if (l2_idx_0 > 0) {
        trueCount = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (trueCount == 0);
    if (empty_non_axis_sizes || (f_size_idx_1 != 0)) {
      h_size = 4;
    } else {
      h_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      idx = l1_idx_1;
    } else {
      idx = 0;
    }

    AT_eq_data_tmp = 4 + f_size_idx_1;
    f_size_idx_1 = (f_size_idx_1 << 2) - 1;
    memcpy(&varargin_1_data[0], &H[0], sizeof(real_T) << 4U);
    for (loop_ub_tmp = 0; loop_ub_tmp <= f_size_idx_1; loop_ub_tmp++) {
      varargin_1_data[loop_ub_tmp + 16] = AT_eq_data[loop_ub_tmp];
    }

    loop_ub_tmp = trueCount * h_size;
    if (0 <= loop_ub_tmp - 1) {
      memcpy(&A_eq_data_0[0], &A_eq_data[0], loop_ub_tmp * sizeof(int8_T));
    }

    f_size_idx_1 = trueCount * idx;
    if (0 <= f_size_idx_1 - 1) {
      memset(&A_eq_data_0[loop_ub_tmp], 0, ((f_size_idx_1 + loop_ub_tmp) -
              loop_ub_tmp) * sizeof(int8_T));
    }

    if ((trueCount != 0) && (h_size + idx != 0)) {
      idx = trueCount;
    } else {
      idx = 0;
    }

    f_size_idx_1 = idx * AT_eq_data_tmp;
    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      reshapes[1].f1.data[loop_ub_tmp] = A_eq_data_0[loop_ub_tmp];
    }

    trueCount = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        trueCount++;
      }
    }

    f_size_idx_1 = trueCount;
    trueCount = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        g_data[trueCount] = static_cast<int8_T>((h_size + 1));
        trueCount++;
      }
    }

    varargin_1_size[0] = 4 + idx;
    varargin_1_size[1] = AT_eq_data_tmp;
    for (loop_ub_tmp = 0; loop_ub_tmp < AT_eq_data_tmp; loop_ub_tmp++) {
      trueCount = loop_ub_tmp << 2;
      h_size = varargin_1_size[0] * loop_ub_tmp;
      varargin_1_data_0[h_size] = varargin_1_data[trueCount];
      varargin_1_data_0[1 + h_size] = varargin_1_data[trueCount + 1];
      varargin_1_data_0[2 + h_size] = varargin_1_data[trueCount + 2];
      varargin_1_data_0[3 + h_size] = varargin_1_data[trueCount + 3];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < AT_eq_data_tmp; loop_ub_tmp++) {
      for (trueCount = 0; trueCount < idx; trueCount++) {
        varargin_1_data_0[(trueCount + varargin_1_size[0] * loop_ub_tmp) + 4] =
          reshapes[1].f1.data[idx * loop_ub_tmp + trueCount];
      }
    }

    trueCount = 4 + f_size_idx_1;
    c_data[0] = -c_idx_0;
    c_data[1] = -c_idx_1;
    c_data[2] = -c_idx_2;
    c_data[3] = -c_idx_3;
    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      c_data[loop_ub_tmp + 4] = b[g_data[loop_ub_tmp] - 1];
    }

    URControl_att_mldivide(varargin_1_data_0, varargin_1_size, c_data,
      &trueCount, h_data, &h_size);
    x[0] = h_data[0];
    x[1] = h_data[1];
    x[2] = h_data[2];
    x[3] = h_data[3];
    if (5 > h_size) {
      trueCount = 0;
      h_size = 0;
    } else {
      trueCount = 4;
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < 8; loop_ub_tmp++) {
      constraintError[loop_ub_tmp] = (((static_cast<real_T>(A[loop_ub_tmp + 8]) *
        x[1] + static_cast<real_T>(A[loop_ub_tmp]) * x[0]) + static_cast<real_T>
        (A[loop_ub_tmp + 16]) * x[2]) + static_cast<real_T>(A[loop_ub_tmp + 24])
        * x[3]) - b[loop_ub_tmp];
    }

    if (!rtIsNaN(constraintError[0])) {
      idx = 1;
    } else {
      idx = 0;
      AT_eq_data_tmp = 2;
      exitg2 = false;
      while ((!exitg2) && (AT_eq_data_tmp < 9)) {
        if (!rtIsNaN(constraintError[AT_eq_data_tmp - 1])) {
          idx = AT_eq_data_tmp;
          exitg2 = true;
        } else {
          AT_eq_data_tmp++;
        }
      }
    }

    if (idx == 0) {
      count = constraintError[0];
    } else {
      count = constraintError[idx - 1];
      while (idx + 1 < 9) {
        if (count < constraintError[idx]) {
          count = constraintError[idx];
        }

        idx++;
      }
    }

    loop_ub_tmp = h_size - trueCount;
    if (loop_ub_tmp == 0) {
      empty_non_axis_sizes = true;
    } else {
      if (loop_ub_tmp <= 2) {
        if (loop_ub_tmp == 1) {
          z1_idx_1 = h_data[trueCount];
        } else {
          z1_idx_1 = h_data[trueCount + 1];
          if ((h_data[trueCount] > z1_idx_1) || (rtIsNaN(h_data[trueCount]) && (
                !rtIsNaN(z1_idx_1)))) {
          } else {
            z1_idx_1 = h_data[trueCount];
          }
        }
      } else {
        if (!rtIsNaN(h_data[trueCount])) {
          idx = 1;
        } else {
          idx = 0;
          AT_eq_data_tmp = 2;
          exitg2 = false;
          while ((!exitg2) && (AT_eq_data_tmp <= loop_ub_tmp)) {
            if (!rtIsNaN(h_data[(trueCount + AT_eq_data_tmp) - 1])) {
              idx = AT_eq_data_tmp;
              exitg2 = true;
            } else {
              AT_eq_data_tmp++;
            }
          }
        }

        if (idx == 0) {
          z1_idx_1 = h_data[trueCount];
        } else {
          z1_idx_1 = h_data[(trueCount + idx) - 1];
          while (idx + 1 <= loop_ub_tmp) {
            z1_idx_2 = h_data[trueCount + idx];
            if (z1_idx_1 > z1_idx_2) {
              z1_idx_1 = z1_idx_2;
            }

            idx++;
          }
        }
      }

      if (z1_idx_1 >= 0.0) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
      }
    }

    if ((count <= 0.001) && empty_non_axis_sizes) {
      solution = 1;
      exitg1 = true;
    } else {
      guard1 = false;
      if (loop_ub_tmp == 0) {
        guard1 = true;
      } else {
        if (loop_ub_tmp <= 2) {
          if (loop_ub_tmp == 1) {
            count = h_data[trueCount];
          } else if ((h_data[trueCount] > h_data[trueCount + 1]) || (rtIsNaN
                      (h_data[trueCount]) && (!rtIsNaN(h_data[trueCount + 1]))))
          {
            count = h_data[trueCount + 1];
          } else {
            count = h_data[trueCount];
          }
        } else {
          if (!rtIsNaN(h_data[trueCount])) {
            idx = 1;
          } else {
            idx = 0;
            AT_eq_data_tmp = 2;
            exitg2 = false;
            while ((!exitg2) && (AT_eq_data_tmp <= loop_ub_tmp)) {
              if (!rtIsNaN(h_data[(trueCount + AT_eq_data_tmp) - 1])) {
                idx = AT_eq_data_tmp;
                exitg2 = true;
              } else {
                AT_eq_data_tmp++;
              }
            }
          }

          if (idx == 0) {
            count = h_data[trueCount];
          } else {
            count = h_data[(trueCount + idx) - 1];
            while (idx + 1 <= loop_ub_tmp) {
              z1_idx_2 = h_data[trueCount + idx];
              if (count > z1_idx_2) {
                count = z1_idx_2;
              }

              idx++;
            }
          }
        }

        if (count >= 0.0) {
          guard1 = true;
        } else {
          if (loop_ub_tmp <= 2) {
            if (loop_ub_tmp == 1) {
              idx = 1;
            } else if ((h_data[trueCount] > h_data[trueCount + 1]) || (rtIsNaN
                        (h_data[trueCount]) && (!rtIsNaN(h_data[trueCount + 1]))))
            {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            if (!rtIsNaN(h_data[trueCount])) {
              idx = 1;
            } else {
              idx = 0;
              AT_eq_data_tmp = 2;
              exitg2 = false;
              while ((!exitg2) && (AT_eq_data_tmp <= loop_ub_tmp)) {
                if (!rtIsNaN(h_data[(trueCount + AT_eq_data_tmp) - 1])) {
                  idx = AT_eq_data_tmp;
                  exitg2 = true;
                } else {
                  AT_eq_data_tmp++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              count = h_data[(trueCount + idx) - 1];
              for (AT_eq_data_tmp = idx; AT_eq_data_tmp < loop_ub_tmp;
                   AT_eq_data_tmp++) {
                z1_idx_2 = h_data[trueCount + AT_eq_data_tmp];
                if (count > z1_idx_2) {
                  count = z1_idx_2;
                  idx = AT_eq_data_tmp + 1;
                }
              }
            }
          }

          count = std::abs(y_state_init[0]);
          if (count == idx) {
            y_state_init[0] = 0.0;
          }

          count += std::abs(y_state_init[1]);
          if (count == idx) {
            y_state_init[1] = 0.0;
          }

          count += std::abs(y_state_init[2]);
          if (count == idx) {
            y_state_init[2] = 0.0;
          }

          count += std::abs(y_state_init[3]);
          if (count == idx) {
            y_state_init[3] = 0.0;
          }
        }
      }

      if (guard1) {
        if (!rtIsNaN(constraintError[0])) {
          trueCount = 1;
        } else {
          trueCount = 0;
          h_size = 2;
          exitg2 = false;
          while ((!exitg2) && (h_size < 9)) {
            if (!rtIsNaN(constraintError[h_size - 1])) {
              trueCount = h_size;
              exitg2 = true;
            } else {
              h_size++;
            }
          }
        }

        if (trueCount == 0) {
          trueCount = 1;
        } else {
          count = constraintError[trueCount - 1];
          for (h_size = trueCount; h_size + 1 < 9; h_size++) {
            if (count < constraintError[h_size]) {
              count = constraintError[h_size];
              trueCount = h_size + 1;
            }
          }
        }

        if (trueCount < 5) {
          y_state_init[trueCount - 1] = 1.0;
        } else {
          y_state_init[trueCount - 5] = -1.0;
        }
      }

      iter++;
    }
  }

  *optimal = solution;
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_QP_activeSet(const real_T H[25],
  const real_T c[5], const real_T A[50], const real_T b[10], real_T x0[5],
  real_T maxItr, real_T y_state[10], real_T *iter, real_T *optimal)
{
  real_T constraint[10];
  real_T A_eq_data[50];
  real_T D_data[225];
  real_T d_xy_data[15];
  real_T d_k[5];
  int32_T p;
  real_T tmp;
  real_T dis;
  int8_T f_data[10];
  int8_T g_data[10];
  real_T result_data[150];
  boolean_T empty_non_axis_sizes;
  int32_T d_result;
  real_T varargin_1_data[75];
  real_T H_data[15];
  int32_T loop_ub;
  int32_T loop_ub_0;
  real_T A_0;
  int32_T c_i;
  int32_T D_size[2];
  int32_T d_xy_size;
  int32_T f_size_idx_1;
  int32_T varargin_1_size_idx_1;
  int8_T l2_idx_0;
  int8_T l1_idx_1;
  real_T A_tmp;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T guard1 = false;
  for (c_i = 0; c_i < 10; c_i++) {
    constraint[c_i] = 0.0;
    for (loop_ub = 0; loop_ub < 5; loop_ub++) {
      constraint[c_i] += A[10 * loop_ub + c_i] * x0[loop_ub];
    }

    y_state[c_i] = 0.0;
    if (constraint[c_i] - b[c_i] >= 0.0) {
      y_state[c_i] = 1.0;
    }
  }

  *iter = 0.0;
  *optimal = 0.0;
  c_i = 0;
  exitg1 = false;
  while ((!exitg1) && (c_i <= static_cast<int32_T>(maxItr) - 1)) {
    (*iter)++;
    p = 0;
    for (d_xy_size = 0; d_xy_size < 10; d_xy_size++) {
      if (static_cast<int8_T>(y_state[d_xy_size]) == 1) {
        p++;
      }
    }

    f_size_idx_1 = p;
    p = 0;
    for (d_xy_size = 0; d_xy_size < 10; d_xy_size++) {
      if (static_cast<int8_T>(y_state[d_xy_size]) == 1) {
        f_data[p] = static_cast<int8_T>((d_xy_size + 1));
        p++;
      }
    }

    for (loop_ub = 0; loop_ub < 5; loop_ub++) {
      for (loop_ub_0 = 0; loop_ub_0 < f_size_idx_1; loop_ub_0++) {
        A_eq_data[loop_ub_0 + f_size_idx_1 * loop_ub] = A[(10 * loop_ub +
          f_data[loop_ub_0]) - 1];
      }
    }

    if (f_size_idx_1 == 0) {
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      l1_idx_1 = static_cast<int8_T>(f_size_idx_1);
      l2_idx_0 = static_cast<int8_T>(f_size_idx_1);
    }

    if (f_size_idx_1 != 0) {
      p = f_size_idx_1;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      p = l2_idx_0;
    } else {
      if (f_size_idx_1 > 0) {
        p = f_size_idx_1;
      } else {
        p = 0;
      }

      if (l2_idx_0 > p) {
        p = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (p == 0);
    if (empty_non_axis_sizes || (f_size_idx_1 != 0)) {
      d_xy_size = 5;
    } else {
      d_xy_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      d_result = l1_idx_1;
    } else {
      d_result = 0;
    }

    loop_ub = p * d_xy_size;
    loop_ub_0 = p * d_result - 1;
    if (0 <= loop_ub - 1) {
      memcpy(&result_data[0], &A_eq_data[0], loop_ub * sizeof(real_T));
    }

    if (0 <= loop_ub_0) {
      memset(&result_data[loop_ub], 0, (((loop_ub_0 + loop_ub) - loop_ub) + 1) *
             sizeof(real_T));
    }

    varargin_1_size_idx_1 = 5 + f_size_idx_1;
    for (loop_ub = 0; loop_ub < 5; loop_ub++) {
      for (loop_ub_0 = 0; loop_ub_0 < 5; loop_ub_0++) {
        varargin_1_data[loop_ub_0 + 5 * loop_ub] = H[5 * loop_ub + loop_ub_0];
      }
    }

    for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
      for (loop_ub_0 = 0; loop_ub_0 < 5; loop_ub_0++) {
        varargin_1_data[loop_ub_0 + 5 * (loop_ub + 5)] = A_eq_data[f_size_idx_1 *
          loop_ub_0 + loop_ub];
      }
    }

    if ((p == 0) || (d_xy_size + d_result == 0)) {
      p = 0;
    }

    D_size[0] = 5 + p;
    D_size[1] = varargin_1_size_idx_1;
    for (loop_ub = 0; loop_ub < varargin_1_size_idx_1; loop_ub++) {
      for (loop_ub_0 = 0; loop_ub_0 < 5; loop_ub_0++) {
        D_data[loop_ub_0 + D_size[0] * loop_ub] = varargin_1_data[5 * loop_ub +
          loop_ub_0];
      }
    }

    for (loop_ub = 0; loop_ub < varargin_1_size_idx_1; loop_ub++) {
      for (loop_ub_0 = 0; loop_ub_0 < p; loop_ub_0++) {
        D_data[(loop_ub_0 + D_size[0] * loop_ub) + 5] = result_data[p * loop_ub
          + loop_ub_0];
      }
    }

    p = 5 + f_size_idx_1;
    for (loop_ub = 0; loop_ub < 5; loop_ub++) {
      tmp = 0.0;
      for (loop_ub_0 = 0; loop_ub_0 < 5; loop_ub_0++) {
        tmp += H[5 * loop_ub_0 + loop_ub] * x0[loop_ub_0];
      }

      H_data[loop_ub] = -(tmp + c[loop_ub]);
    }

    if (0 <= f_size_idx_1 - 1) {
      memset(&H_data[5], 0, f_size_idx_1 * sizeof(real_T));
    }

    URControl_att_mldivide(D_data, D_size, H_data, &p, d_xy_data, &d_xy_size);
    for (loop_ub = 0; loop_ub < 5; loop_ub++) {
      d_k[loop_ub] = d_xy_data[loop_ub];
    }

    guard1 = false;
    if (norm_MZOQPbOg(d_k) < 0.0001) {
      p = 0;
      for (d_xy_size = 0; d_xy_size < 10; d_xy_size++) {
        if (static_cast<int8_T>(y_state[d_xy_size]) == 1) {
          p++;
        }
      }

      f_size_idx_1 = p;
      p = 0;
      for (d_xy_size = 0; d_xy_size < 10; d_xy_size++) {
        if (static_cast<int8_T>(y_state[d_xy_size]) == 1) {
          g_data[p] = static_cast<int8_T>((d_xy_size + 1));
          p++;
        }
      }

      loop_ub_0 = 5 + f_size_idx_1;
      for (loop_ub = 0; loop_ub < 5; loop_ub++) {
        H_data[loop_ub] = -c[loop_ub];
      }

      for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
        H_data[loop_ub + 5] = b[g_data[loop_ub] - 1];
      }

      URControl_att_mldivide(D_data, D_size, H_data, &loop_ub_0, d_xy_data,
        &d_xy_size);
      for (loop_ub = 0; loop_ub < 5; loop_ub++) {
        x0[loop_ub] = d_xy_data[loop_ub];
      }

      if (6 > d_xy_size) {
        p = 0;
        d_xy_size = 0;
      } else {
        p = 5;
      }

      f_size_idx_1 = d_xy_size - p;
      for (loop_ub = 0; loop_ub < f_size_idx_1; loop_ub++) {
        H_data[loop_ub] = d_xy_data[p + loop_ub];
      }

      if (0 <= f_size_idx_1 - 1) {
        memcpy(&d_xy_data[0], &H_data[0], f_size_idx_1 * sizeof(real_T));
      }

      for (loop_ub = 0; loop_ub < 10; loop_ub++) {
        tmp = 0.0;
        for (loop_ub_0 = 0; loop_ub_0 < 5; loop_ub_0++) {
          tmp += A[10 * loop_ub_0 + loop_ub] * x0[loop_ub_0];
        }

        constraint[loop_ub] = tmp - b[loop_ub];
      }

      if (!rtIsNaN(constraint[0])) {
        p = 1;
      } else {
        p = 0;
        d_xy_size = 2;
        exitg2 = false;
        while ((!exitg2) && (d_xy_size < 11)) {
          if (!rtIsNaN(constraint[d_xy_size - 1])) {
            p = d_xy_size;
            exitg2 = true;
          } else {
            d_xy_size++;
          }
        }
      }

      if (p == 0) {
        tmp = constraint[0];
      } else {
        tmp = constraint[p - 1];
        while (p + 1 < 11) {
          if (tmp < constraint[p]) {
            tmp = constraint[p];
          }

          p++;
        }
      }

      if (f_size_idx_1 == 0) {
        empty_non_axis_sizes = true;
      } else {
        if (f_size_idx_1 <= 2) {
          if (f_size_idx_1 == 1) {
            dis = d_xy_data[0];
          } else if ((d_xy_data[0] > d_xy_data[1]) || (rtIsNaN(d_xy_data[0]) &&
                      (!rtIsNaN(d_xy_data[1])))) {
            dis = d_xy_data[1];
          } else {
            dis = d_xy_data[0];
          }
        } else {
          if (!rtIsNaN(d_xy_data[0])) {
            p = 1;
          } else {
            p = 0;
            d_xy_size = 2;
            exitg2 = false;
            while ((!exitg2) && (d_xy_size <= f_size_idx_1)) {
              if (!rtIsNaN(d_xy_data[d_xy_size - 1])) {
                p = d_xy_size;
                exitg2 = true;
              } else {
                d_xy_size++;
              }
            }
          }

          if (p == 0) {
            dis = d_xy_data[0];
          } else {
            dis = d_xy_data[p - 1];
            while (p + 1 <= f_size_idx_1) {
              if (dis > d_xy_data[p]) {
                dis = d_xy_data[p];
              }

              p++;
            }
          }
        }

        if (dis >= -0.0001) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }
      }

      if ((tmp <= 0.0001) && empty_non_axis_sizes) {
        *optimal = 1.0;
        exitg1 = true;
      } else if (f_size_idx_1 == 0) {
        guard1 = true;
      } else {
        if (f_size_idx_1 <= 2) {
          if (f_size_idx_1 == 1) {
            tmp = d_xy_data[0];
          } else if ((d_xy_data[0] > d_xy_data[1]) || (rtIsNaN(d_xy_data[0]) &&
                      (!rtIsNaN(d_xy_data[1])))) {
            tmp = d_xy_data[1];
          } else {
            tmp = d_xy_data[0];
          }
        } else {
          if (!rtIsNaN(d_xy_data[0])) {
            p = 1;
          } else {
            p = 0;
            d_xy_size = 2;
            exitg2 = false;
            while ((!exitg2) && (d_xy_size <= f_size_idx_1)) {
              if (!rtIsNaN(d_xy_data[d_xy_size - 1])) {
                p = d_xy_size;
                exitg2 = true;
              } else {
                d_xy_size++;
              }
            }
          }

          if (p == 0) {
            tmp = d_xy_data[0];
          } else {
            tmp = d_xy_data[p - 1];
            while (p + 1 <= f_size_idx_1) {
              if (tmp > d_xy_data[p]) {
                tmp = d_xy_data[p];
              }

              p++;
            }
          }
        }

        if (tmp >= -0.0001) {
          guard1 = true;
        } else {
          if (f_size_idx_1 <= 2) {
            if (f_size_idx_1 == 1) {
              p = 1;
            } else if ((d_xy_data[0] > d_xy_data[1]) || (rtIsNaN(d_xy_data[0]) &&
                        (!rtIsNaN(d_xy_data[1])))) {
              p = 2;
            } else {
              p = 1;
            }
          } else {
            if (!rtIsNaN(d_xy_data[0])) {
              p = 1;
            } else {
              p = 0;
              d_xy_size = 2;
              exitg2 = false;
              while ((!exitg2) && (d_xy_size <= f_size_idx_1)) {
                if (!rtIsNaN(d_xy_data[d_xy_size - 1])) {
                  p = d_xy_size;
                  exitg2 = true;
                } else {
                  d_xy_size++;
                }
              }
            }

            if (p == 0) {
              p = 1;
            } else {
              tmp = d_xy_data[p - 1];
              for (d_xy_size = p; d_xy_size < f_size_idx_1; d_xy_size++) {
                if (tmp > d_xy_data[d_xy_size]) {
                  tmp = d_xy_data[d_xy_size];
                  p = d_xy_size + 1;
                }
              }
            }
          }

          tmp = 0.0;
          for (d_xy_size = 0; d_xy_size < 10; d_xy_size++) {
            dis = y_state[d_xy_size];
            tmp += static_cast<real_T>(static_cast<int8_T>(y_state[d_xy_size]));
            if (tmp == p) {
              dis = 0.0;
            }

            y_state[d_xy_size] = dis;
          }

          c_i++;
        }
      }
    } else {
      tmp = (rtInf);
      p = 0;
      for (d_xy_size = 0; d_xy_size < 10; d_xy_size++) {
        dis = 0.0;
        for (loop_ub = 0; loop_ub < 5; loop_ub++) {
          dis += A[10 * loop_ub + d_xy_size] * d_k[loop_ub];
        }

        if (dis > 0.0001) {
          dis = 0.0;
          A_0 = 0.0;
          for (loop_ub = 0; loop_ub < 5; loop_ub++) {
            A_tmp = A[10 * loop_ub + d_xy_size];
            dis += A_tmp * x0[loop_ub];
            A_0 += A_tmp * d_k[loop_ub];
          }

          dis = (b[d_xy_size] - dis) / A_0;
          if (dis < tmp) {
            tmp = dis;
            p = d_xy_size;
          }
        }
      }

      if (tmp < 1.0) {
        dis = tmp;
        y_state[p] = 1.0;
      } else {
        dis = 1.0;
      }

      for (loop_ub = 0; loop_ub < 5; loop_ub++) {
        x0[loop_ub] += dis * d_k[loop_ub];
      }

      c_i++;
    }

    if (guard1) {
      if (!rtIsNaN(constraint[0])) {
        p = 0;
      } else {
        p = -1;
        d_xy_size = 2;
        exitg2 = false;
        while ((!exitg2) && (d_xy_size < 11)) {
          if (!rtIsNaN(constraint[d_xy_size - 1])) {
            p = d_xy_size - 1;
            exitg2 = true;
          } else {
            d_xy_size++;
          }
        }
      }

      if (p + 1 == 0) {
        p = 0;
      } else {
        tmp = constraint[p];
        for (d_xy_size = p + 1; d_xy_size + 1 < 11; d_xy_size++) {
          if (tmp < constraint[d_xy_size]) {
            tmp = constraint[d_xy_size];
            p = d_xy_size;
          }
        }
      }

      y_state[p] = 1.0;
      c_i++;
    }
  }
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URContr_controlAllocQPpredictor(real_T
  refStruct_MuRef, real_T refStruct_MvRef, real_T refStruct_MzRef, real_T
  refStruct_FtotRef, const real_T state_omegaf[3], const real_T state_FMax[4],
  const real_T state_FMin[4], real_T state_fail_id, real_T gainStruct_MuGain,
  real_T gainStruct_MvGain, real_T gainStruct_MzGain, real_T gainStruct_FtotGain,
  const struct_YhmxgXLVjzlogleEk1YuME *b_par, const URControlParamsType *URpar,
  real_T output[4], real_T *iter, real_T *optimal)
{
  real_T r;
  real_T b;
  real_T w;
  real_T PHI[4];
  real_T Q1[4];
  real_T Gv[4];
  real_T Gz[4];
  real_T x[5];
  real_T unusedU0[10];
  real_T y[25];
  real_T b_y[25];
  real_T c_y[25];
  real_T absxk;
  real_T t;
  static const int8_T c[5] = { 0, 1, 0, 1, 0 };

  static const int8_T d[5] = { 1, 0, 1, 0, 0 };

  static const int8_T c_b[8] = { 1, 1, -1, 1, -1, -1, 1, -1 };

  static const int8_T e[20] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
    0, 0, 0, 0 };

  static const int8_T f[20] = { -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0,
    -1, 0, 0, 0, 0 };

  static const int8_T g[5] = { 0, 0, 0, 0, -1 };

  static const int8_T g_b[25] = { 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1,
    1, 1, 1, 0, 0, 0, 0, 0, 0 };

  static const int8_T h_b[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1 };

  int32_T i;
  real_T tmp[25];
  real_T tmp_0[5];
  real_T e_0[50];
  real_T state_FMax_0[10];
  real_T URpar_0[4];
  real_T tmp_1[2];
  real_T URpar_1[8];
  real_T tmp_2[5];
  real_T tmp_3[5];
  real_T tmp_4[5];
  real_T tmp_5[5];
  real_T r_tmp;
  real_T tmp_6;
  int32_T Q1_tmp;
  int32_T URpar_tmp;
  int32_T URpar_tmp_tmp;
  int32_T e_tmp;
  r = state_omegaf[2];
  if (!URControl_att_DW.x_last_not_empty) {
    if (state_fail_id == 0.0) {
      for (i = 0; i < 5; i++) {
        URControl_att_DW.x_last[i] = 0.0;
      }

      URControl_att_DW.x_last_not_empty = true;
    } else if ((state_fail_id == 2.0) || (state_fail_id == 4.0)) {
      for (i = 0; i < 5; i++) {
        URControl_att_DW.x_last[i] = d[i];
      }

      URControl_att_DW.x_last_not_empty = true;
    } else {
      for (i = 0; i < 5; i++) {
        URControl_att_DW.x_last[i] = c[i];
      }

      URControl_att_DW.x_last_not_empty = true;
    }
  }

  if (std::abs(state_omegaf[2]) < 0.001) {
    r = 0.001;
  }

  b = (URpar->Iz - URpar->Ix) / URpar->Iy * r;
  w = std::sqrt(std::abs((URpar->Iy - URpar->Iz) / URpar->Ix * r) * std::abs(b));
  r = b * state_omegaf[0] / w;
  switch (static_cast<int32_T>(state_fail_id)) {
   case 1:
    absxk = w * URpar->envp_timeHoriz;
    t = w / b;
    r_tmp = std::cos(absxk);
    absxk = std::sin(absxk);
    r = ((absxk * -state_omegaf[1] * t + r_tmp * r * t) * (0.0 * URpar->R_xy_uv
          [0] + URpar->R_xy_uv[1]) + (r_tmp * state_omegaf[1] + absxk * r) *
         (0.0 * URpar->R_xy_uv[2] + URpar->R_xy_uv[3])) + URpar->envp_maxOmega;
    t = -0.0 * URpar->R_xy_uv[0] + -URpar->R_xy_uv[1];
    tmp_6 = -0.0 * URpar->R_xy_uv[2] + -URpar->R_xy_uv[3];
    absxk *= 1.0 / w;
    Q1[0] = absxk;
    Q1[2] = 1.0 / b * r_tmp - 1.0 / b;
    Q1[1] = -b / w / w * r_tmp + b / w / w;
    Q1[3] = absxk;
    URpar_0[0] = URpar->b / URpar->Ix;
    URpar_0[2] = 0.0;
    URpar_0[1] = 0.0;
    URpar_0[3] = URpar->l / URpar->Iy;
    for (i = 0; i < 2; i++) {
      Q1_tmp = i << 1;
      for (e_tmp = 0; e_tmp < 4; e_tmp++) {
        URpar_tmp_tmp = e_tmp << 1;
        URpar_tmp = i + URpar_tmp_tmp;
        URpar_1[URpar_tmp] = 0.0;
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp]) *
          URpar_0[i];
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp + 1]) *
          URpar_0[i + 2];
      }

      tmp_1[i] = Q1[Q1_tmp + 1] * tmp_6 + Q1[Q1_tmp] * t;
    }

    for (i = 0; i < 4; i++) {
      Q1_tmp = i << 1;
      Q1[i] = URpar_1[Q1_tmp + 1] * tmp_1[1] + URpar_1[Q1_tmp] * tmp_1[0];
    }
    break;

   case 2:
    r = ((std::sin(w * URpar->envp_timeHoriz) * -state_omegaf[1] * (w / b) + std::
          cos(w * URpar->envp_timeHoriz) * r * (w / b)) * (0.0 * URpar->R_xy_uv
          [1] + -URpar->R_xy_uv[0]) + (std::cos(w * URpar->envp_timeHoriz) *
          state_omegaf[1] + std::sin(w * URpar->envp_timeHoriz) * r) * (0.0 *
          URpar->R_xy_uv[3] + -URpar->R_xy_uv[2])) + URpar->envp_maxOmega;
    t = 0.0 * URpar->R_xy_uv[1] + URpar->R_xy_uv[0];
    tmp_6 = 0.0 * URpar->R_xy_uv[3] + URpar->R_xy_uv[2];
    Q1[0] = 1.0 / w * std::sin(w * URpar->envp_timeHoriz);
    Q1[2] = 1.0 / b * std::cos(w * URpar->envp_timeHoriz) - 1.0 / b;
    Q1[1] = -b / w / w * std::cos(w * URpar->envp_timeHoriz) + b / w / w;
    Q1[3] = 1.0 / w * std::sin(w * URpar->envp_timeHoriz);
    URpar_0[0] = URpar->b / URpar->Ix;
    URpar_0[2] = 0.0;
    URpar_0[1] = 0.0;
    URpar_0[3] = URpar->l / URpar->Iy;
    for (i = 0; i < 2; i++) {
      Q1_tmp = i << 1;
      for (e_tmp = 0; e_tmp < 4; e_tmp++) {
        URpar_tmp_tmp = e_tmp << 1;
        URpar_tmp = i + URpar_tmp_tmp;
        URpar_1[URpar_tmp] = 0.0;
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp]) *
          URpar_0[i];
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp + 1]) *
          URpar_0[i + 2];
      }

      tmp_1[i] = Q1[Q1_tmp + 1] * tmp_6 + Q1[Q1_tmp] * t;
    }

    for (i = 0; i < 4; i++) {
      Q1_tmp = i << 1;
      Q1[i] = URpar_1[Q1_tmp + 1] * tmp_1[1] + URpar_1[Q1_tmp] * tmp_1[0];
    }
    break;

   case 3:
    r = ((std::sin(w * URpar->envp_timeHoriz) * -state_omegaf[1] * (w / b) + std::
          cos(w * URpar->envp_timeHoriz) * r * (w / b)) * (-0.0 * URpar->
          R_xy_uv[0] + -URpar->R_xy_uv[1]) + (std::cos(w * URpar->envp_timeHoriz)
          * state_omegaf[1] + std::sin(w * URpar->envp_timeHoriz) * r) * (-0.0 *
          URpar->R_xy_uv[2] + -URpar->R_xy_uv[3])) + URpar->envp_maxOmega;
    t = 0.0 * URpar->R_xy_uv[0] + URpar->R_xy_uv[1];
    tmp_6 = 0.0 * URpar->R_xy_uv[2] + URpar->R_xy_uv[3];
    Q1[0] = 1.0 / w * std::sin(w * URpar->envp_timeHoriz);
    Q1[2] = 1.0 / b * std::cos(w * URpar->envp_timeHoriz) - 1.0 / b;
    Q1[1] = -b / w / w * std::cos(w * URpar->envp_timeHoriz) + b / w / w;
    Q1[3] = 1.0 / w * std::sin(w * URpar->envp_timeHoriz);
    URpar_0[0] = URpar->b / URpar->Ix;
    URpar_0[2] = 0.0;
    URpar_0[1] = 0.0;
    URpar_0[3] = URpar->l / URpar->Iy;
    for (i = 0; i < 2; i++) {
      Q1_tmp = i << 1;
      for (e_tmp = 0; e_tmp < 4; e_tmp++) {
        URpar_tmp_tmp = e_tmp << 1;
        URpar_tmp = i + URpar_tmp_tmp;
        URpar_1[URpar_tmp] = 0.0;
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp]) *
          URpar_0[i];
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp + 1]) *
          URpar_0[i + 2];
      }

      tmp_1[i] = Q1[Q1_tmp + 1] * tmp_6 + Q1[Q1_tmp] * t;
    }

    for (i = 0; i < 4; i++) {
      Q1_tmp = i << 1;
      Q1[i] = URpar_1[Q1_tmp + 1] * tmp_1[1] + URpar_1[Q1_tmp] * tmp_1[0];
    }
    break;

   case 4:
    r = ((std::sin(w * URpar->envp_timeHoriz) * -state_omegaf[1] * (w / b) + std::
          cos(w * URpar->envp_timeHoriz) * r * (w / b)) * (0.0 * URpar->R_xy_uv
          [1] + URpar->R_xy_uv[0]) + (std::cos(w * URpar->envp_timeHoriz) *
          state_omegaf[1] + std::sin(w * URpar->envp_timeHoriz) * r) * (0.0 *
          URpar->R_xy_uv[3] + URpar->R_xy_uv[2])) + URpar->envp_maxOmega;
    t = 0.0 * URpar->R_xy_uv[1] + -URpar->R_xy_uv[0];
    tmp_6 = 0.0 * URpar->R_xy_uv[3] + -URpar->R_xy_uv[2];
    Q1[0] = 1.0 / w * std::sin(w * URpar->envp_timeHoriz);
    Q1[2] = 1.0 / b * std::cos(w * URpar->envp_timeHoriz) - 1.0 / b;
    Q1[1] = -b / w / w * std::cos(w * URpar->envp_timeHoriz) + b / w / w;
    Q1[3] = 1.0 / w * std::sin(w * URpar->envp_timeHoriz);
    URpar_0[0] = URpar->b / URpar->Ix;
    URpar_0[2] = 0.0;
    URpar_0[1] = 0.0;
    URpar_0[3] = URpar->l / URpar->Iy;
    for (i = 0; i < 2; i++) {
      Q1_tmp = i << 1;
      for (e_tmp = 0; e_tmp < 4; e_tmp++) {
        URpar_tmp_tmp = e_tmp << 1;
        URpar_tmp = i + URpar_tmp_tmp;
        URpar_1[URpar_tmp] = 0.0;
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp]) *
          URpar_0[i];
        URpar_1[URpar_tmp] += static_cast<real_T>(c_b[URpar_tmp_tmp + 1]) *
          URpar_0[i + 2];
      }

      tmp_1[i] = Q1[Q1_tmp + 1] * tmp_6 + Q1[Q1_tmp] * t;
    }

    for (i = 0; i < 4; i++) {
      Q1_tmp = i << 1;
      Q1[i] = URpar_1[Q1_tmp + 1] * tmp_1[1] + URpar_1[Q1_tmp] * tmp_1[0];
    }
    break;

   default:
    r = 10000.0;
    Q1[0] = 1.0;
    Q1[1] = 1.0;
    Q1[2] = 1.0;
    Q1[3] = 1.0;
    break;
  }

  b = URpar->t0 / URpar->k0;
  r_tmp = b_par->URC.s * 0.0;
  PHI[0] = r_tmp;
  Gv[0] = b_par->URC.s;
  Gz[0] = b;
  PHI[1] = -b_par->URC.s;
  Gv[1] = r_tmp;
  Gz[1] = -b;
  PHI[2] = r_tmp;
  Gv[2] = -b_par->URC.s;
  Gz[2] = b;
  PHI[3] = b_par->URC.s;
  Gv[3] = r_tmp;
  Gz[3] = -b;
  memset(&y[0], 0, 25U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    y[i] = PHI[i] * r_tmp;
    y[i + 5] = PHI[i] * PHI[1];
    y[i + 10] = PHI[i] * r_tmp;
    y[i + 15] = PHI[i] * PHI[3];
  }

  y[24] = 0.0;
  memset(&b_y[0], 0, 25U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    b_y[i] = Gv[i] * Gv[0];
    b_y[i + 5] = Gv[i] * r_tmp;
    b_y[i + 10] = Gv[i] * Gv[2];
    b_y[i + 15] = Gv[i] * r_tmp;
  }

  b_y[24] = 0.0;
  memset(&c_y[0], 0, 25U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    w = Gz[i] * b;
    c_y[i] = w;
    c_y[i + 5] = Gz[i] * -b;
    c_y[i + 10] = w;
    c_y[i + 15] = Gz[i] * -b;
  }

  c_y[24] = 0.0;
  w = 3.3121686421112381E-170;
  absxk = std::abs(refStruct_MuRef);
  if (absxk > 3.3121686421112381E-170) {
    b = 1.0;
    w = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    b = t * t;
  }

  absxk = std::abs(refStruct_MvRef);
  if (absxk > w) {
    t = w / absxk;
    b = b * t * t + 1.0;
    w = absxk;
  } else {
    t = absxk / w;
    b += t * t;
  }

  b = w * std::sqrt(b);
  b *= URpar->rate_envGain;
  w = gainStruct_MuGain * refStruct_MuRef;
  absxk = gainStruct_MvGain * refStruct_MvRef;
  t = gainStruct_FtotGain * refStruct_FtotRef;
  tmp_6 = gainStruct_MzGain * refStruct_MzRef;
  for (i = 0; i < 5; i++) {
    x[i] = URControl_att_DW.x_last[i];
  }

  for (i = 0; i < 25; i++) {
    tmp[i] = ((((gainStruct_MuGain * y[i] + gainStruct_MvGain * b_y[i]) +
                gainStruct_FtotGain * static_cast<real_T>(g_b[i])) +
               gainStruct_MzGain * c_y[i]) + b * static_cast<real_T>(h_b[i])) *
      2.0;
  }

  tmp_2[4] = 0.0;
  tmp_3[4] = 0.0;
  tmp_4[4] = 0.0;
  tmp_2[0] = w * r_tmp * -2.0;
  tmp_3[0] = absxk * b_par->URC.s * -2.0;
  tmp_4[0] = -2.0 * t;
  tmp_5[0] = tmp_6 * Gz[0] * -2.0;
  tmp_2[1] = w * -b_par->URC.s * -2.0;
  tmp_3[1] = absxk * r_tmp * -2.0;
  tmp_4[1] = -2.0 * t;
  tmp_5[1] = tmp_6 * Gz[1] * -2.0;
  tmp_2[2] = w * r_tmp * -2.0;
  tmp_3[2] = absxk * -b_par->URC.s * -2.0;
  tmp_4[2] = -2.0 * t;
  tmp_5[2] = tmp_6 * Gz[2] * -2.0;
  tmp_2[3] = w * b_par->URC.s * -2.0;
  tmp_3[3] = absxk * r_tmp * -2.0;
  tmp_4[3] = -2.0 * t;
  tmp_5[3] = tmp_6 * Gz[3] * -2.0;
  tmp_5[4] = 0.0;
  for (i = 0; i < 5; i++) {
    tmp_0[i] = ((tmp_2[i] + tmp_3[i]) + tmp_4[i]) + tmp_5[i];
    Q1_tmp = i << 2;
    e_0[10 * i] = e[Q1_tmp];
    e_0[4 + 10 * i] = f[Q1_tmp];
    e_tmp = Q1_tmp + 1;
    e_0[1 + 10 * i] = e[e_tmp];
    e_0[5 + 10 * i] = f[e_tmp];
    e_tmp = Q1_tmp + 2;
    e_0[2 + 10 * i] = e[e_tmp];
    e_0[6 + 10 * i] = f[e_tmp];
    Q1_tmp += 3;
    e_0[3 + 10 * i] = e[Q1_tmp];
    e_0[7 + 10 * i] = f[Q1_tmp];
  }

  e_0[8] = Q1[0];
  e_0[18] = Q1[1];
  e_0[28] = Q1[2];
  e_0[38] = Q1[3];
  e_0[48] = -1.0;
  for (i = 0; i < 5; i++) {
    e_0[9 + 10 * i] = g[i];
  }

  state_FMax_0[0] = state_FMax[0];
  state_FMax_0[1] = state_FMax[1];
  state_FMax_0[2] = state_FMax[2];
  state_FMax_0[3] = state_FMax[3];
  state_FMax_0[4] = -state_FMin[0];
  state_FMax_0[5] = -state_FMin[1];
  state_FMax_0[6] = -state_FMin[2];
  state_FMax_0[7] = -state_FMin[3];
  state_FMax_0[8] = r;
  state_FMax_0[9] = 0.0;
  URControl_att_QP_activeSet(tmp, tmp_0, e_0, state_FMax_0, x,
    URpar->rate_maxIter, unusedU0, iter, optimal);
  for (i = 0; i < 5; i++) {
    r = x[i];
    if (*optimal != 1.0) {
      r = URControl_att_DW.x_last[i] * 0.99;
    }

    URControl_att_DW.x_last[i] = r;
    x[i] = r;
  }

  output[0] = x[0];
  output[1] = x[1];
  output[2] = x[2];
  output[3] = x[3];
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_URINDI_allocator(real_T act_fail_id,
  const real_T Omega_f_dot[3], real_T accel_z_f, const real_T v[4], real_T G[32],
  const real_T w_f[4], const struct_YhmxgXLVjzlogleEk1YuME *b_par, real_T w_cmd
  [4])
{
  real_T G1[16];
  real32_T fail_id_vec_data[2];
  real_T G_pinv[16];
  real_T du[4];
  int8_T i_up_data[4];
  boolean_T tf;
  boolean_T x[4];
  int8_T ii_data[4];
  int32_T idx;
  int32_T b_ii;
  real_T v_0[4];
  real_T v_idx_0;
  real_T v_idx_1;
  real_T v_idx_2;
  real_T v_idx_3;
  real_T du_0;
  int32_T G_tmp;
  int32_T G_tmp_0;
  boolean_T guard1 = false;
  boolean_T exitg1;
  for (b_ii = 0; b_ii < 32; b_ii++) {
    G[b_ii] *= 0.001;
  }

  for (b_ii = 0; b_ii < 4; b_ii++) {
    idx = b_ii << 2;
    G1[idx] = G[idx];
    G1[1 + (b_ii << 2)] = G[idx + 1];
    G1[2 + (b_ii << 2)] = G[idx + 2];
    G1[3 + (b_ii << 2)] = G[idx + 3];
  }

  guard1 = false;
  if (act_fail_id == 13.0) {
    G_tmp = 2;
    fail_id_vec_data[0] = 1.0F;
    fail_id_vec_data[1] = 3.0F;
    guard1 = true;
  } else if (act_fail_id == 24.0) {
    G_tmp = 2;
    fail_id_vec_data[0] = 2.0F;
    fail_id_vec_data[1] = 4.0F;
    guard1 = true;
  } else {
    tf = false;
    idx = 1;
    exitg1 = false;
    while ((!exitg1) && (idx - 1 < 4)) {
      if (std::abs(static_cast<real_T>(idx) - act_fail_id) < eps_HLXrD8YB
          (static_cast<real_T>(idx) / 2.0)) {
        tf = true;
        exitg1 = true;
      } else {
        idx++;
      }
    }

    if (tf) {
      G_tmp = 1;
      fail_id_vec_data[0] = static_cast<real32_T>(act_fail_id);
      guard1 = true;
    } else {
      for (b_ii = 0; b_ii < 4; b_ii++) {
        idx = b_ii << 2;
        G_tmp = (4 + b_ii) << 2;
        G1[idx] = G[G_tmp] + G[idx];
        G_tmp_0 = idx + 1;
        G1[G_tmp_0] = G[G_tmp + 1] + G[G_tmp_0];
        G_tmp_0 = idx + 2;
        G1[G_tmp_0] = G[G_tmp + 2] + G[G_tmp_0];
        idx += 3;
        G1[idx] = G[G_tmp + 3] + G[idx];
      }

      pinv_sd18IsCR(G1, G_pinv);
      du[0] = Omega_f_dot[0];
      du[1] = Omega_f_dot[1];
      du[2] = Omega_f_dot[2];
      du[3] = accel_z_f;
      for (b_ii = 0; b_ii < 4; b_ii++) {
        v_0[b_ii] = (((G[b_ii + 16] * URControl_att_DW.du_last[0] + G[b_ii + 20]
                       * URControl_att_DW.du_last[1]) + G[b_ii + 24] *
                      URControl_att_DW.du_last[2]) + G[b_ii + 28] *
                     URControl_att_DW.du_last[3]) + (v[b_ii] - du[b_ii]);
      }

      for (b_ii = 0; b_ii < 4; b_ii++) {
        du_0 = G_pinv[b_ii + 12] * v_0[3] + (G_pinv[b_ii + 8] * v_0[2] +
          (G_pinv[b_ii + 4] * v_0[1] + G_pinv[b_ii] * v_0[0]));
        du[b_ii] = du_0;
      }
    }
  }

  if (guard1) {
    for (b_ii = 0; b_ii < G_tmp; b_ii++) {
      idx = (static_cast<int32_T>(fail_id_vec_data[b_ii]) - 1) << 2;
      G1[idx] = 0.0;
      G1[1 + idx] = 0.0;
      G1[2 + idx] = 0.0;
      G1[3 + idx] = 0.0;
    }

    G1[2] = 0.0;
    G1[6] = 0.0;
    G1[10] = 0.0;
    G1[14] = 0.0;
    pinv_sd18IsCR(G1, G_pinv);
    v_idx_0 = v[0] - Omega_f_dot[0];
    v_idx_1 = v[1] - Omega_f_dot[1];
    v_idx_2 = v[2] - Omega_f_dot[2];
    v_idx_3 = v[3] - accel_z_f;
    for (b_ii = 0; b_ii < 4; b_ii++) {
      du_0 = G_pinv[b_ii + 12] * v_idx_3 + (G_pinv[b_ii + 8] * v_idx_2 +
        (G_pinv[b_ii + 4] * v_idx_1 + G_pinv[b_ii] * v_idx_0));
      du[b_ii] = du_0;
    }
  }

  du_0 = w_f[0] + du[0];
  x[0] = (du_0 >= b_par->w_max);
  w_cmd[0] = du_0;
  du_0 = w_f[1] + du[1];
  x[1] = (du_0 >= b_par->w_max);
  w_cmd[1] = du_0;
  du_0 = w_f[2] + du[2];
  x[2] = (du_0 >= b_par->w_max);
  w_cmd[2] = du_0;
  du_0 = w_f[3] + du[3];
  x[3] = (du_0 >= b_par->w_max);
  w_cmd[3] = du_0;
  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 4)) {
    if (x[b_ii]) {
      idx++;
      ii_data[idx - 1] = static_cast<int8_T>((b_ii + 1));
      if (idx >= 4) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  G_tmp = idx;
  if (0 <= idx - 1) {
    memcpy(&i_up_data[0], &ii_data[0], idx * sizeof(int8_T));
  }

  x[0] = (w_cmd[0] < b_par->w_min);
  x[1] = (w_cmd[1] < b_par->w_min);
  x[2] = (w_cmd[2] < b_par->w_min);
  x[3] = (du_0 < b_par->w_min);
  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 4)) {
    if (x[b_ii]) {
      idx++;
      ii_data[idx - 1] = static_cast<int8_T>((b_ii + 1));
      if (idx >= 4) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  for (b_ii = 0; b_ii < G_tmp; b_ii++) {
    G_tmp_0 = i_up_data[b_ii] - 1;
    du[G_tmp_0] = b_par->w_max - w_f[G_tmp_0];
  }

  for (b_ii = 0; b_ii < idx; b_ii++) {
    G_tmp_0 = ii_data[b_ii] - 1;
    du[G_tmp_0] = b_par->w_min - w_f[G_tmp_0];
  }

  for (b_ii = 0; b_ii < G_tmp; b_ii++) {
    w_cmd[i_up_data[b_ii] - 1] = b_par->w_max;
  }

  for (b_ii = 0; b_ii < idx; b_ii++) {
    w_cmd[ii_data[b_ii] - 1] = b_par->w_min;
  }

  URControl_att_DW.du_last[0] = du[0];
  URControl_att_DW.du_last[1] = du[1];
  URControl_att_DW.du_last[2] = du[2];
  URControl_att_DW.du_last[3] = du[3];
}

/* Function for MATLAB Function: '<S2>/control allocator' */
void URControl_attModelClass::URControl_att_QPINDI(const real_T inp[4], const
  real_T G[16], const real_T K[16], const real_T K2[16], const real_T lowBound[4],
  const real_T highBound[4], real_T y_state_init[4], real_T URpar_rate_maxIter,
  real_T x[4], real_T *iterSteps, real_T *optimal)
{
  real_T H[16];
  real_T c[4];
  real_T b[8];
  boolean_T indices[8];
  int8_T A_eq_data[32];
  int8_T AT_eq_data[32];
  real_T constraintError[8];
  real_T count;
  int8_T f_data[8];
  int8_T g_data[8];
  boolean_T empty_non_axis_sizes;
  real_T varargin_1_data[48];
  b_cell_wrap_0_URControl_att_T reshapes[2];
  int32_T idx;
  real_T b_ex;
  static const int8_T A[32] = { 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0,
    0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1 };

  real_T h_data[15];
  real_T H_tmp[16];
  int32_T i;
  real_T varargin_1_data_0[225];
  real_T c_data[12];
  real_T H_tmp_0[16];
  real_T inp_0[4];
  int8_T A_eq_data_0[150];
  int32_T h_size;
  int32_T varargin_1_size[2];
  int32_T f_size_idx_1;
  int8_T l2_idx_0;
  int8_T l1_idx_1;
  int32_T H_tmp_tmp;
  int32_T H_tmp_tmp_tmp;
  int32_T H_tmp_tmp_0;
  int32_T loop_ub_tmp;
  real_T tmp;
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;
  for (i = 0; i < 4; i++) {
    x[i] = 0.0;
    for (loop_ub_tmp = 0; loop_ub_tmp < 4; loop_ub_tmp++) {
      H_tmp_tmp_tmp = loop_ub_tmp << 2;
      H_tmp_tmp = i + H_tmp_tmp_tmp;
      H_tmp[H_tmp_tmp] = 0.0;
      H_tmp_tmp_0 = i << 2;
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0] * K[H_tmp_tmp_tmp];
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0 + 1] * K[H_tmp_tmp_tmp + 1];
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0 + 2] * K[H_tmp_tmp_tmp + 2];
      H_tmp[H_tmp_tmp] += G[H_tmp_tmp_0 + 3] * K[H_tmp_tmp_tmp + 3];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < 4; loop_ub_tmp++) {
      H_tmp_tmp = loop_ub_tmp << 2;
      H_tmp_tmp_0 = H_tmp_tmp + i;
      H_tmp_0[H_tmp_tmp_0] = (((G[H_tmp_tmp + 1] * H_tmp[i + 4] + G[H_tmp_tmp] *
        H_tmp[i]) + G[H_tmp_tmp + 2] * H_tmp[i + 8]) + G[H_tmp_tmp + 3] *
        H_tmp[i + 12]) + K2[H_tmp_tmp_0];
    }
  }

  for (loop_ub_tmp = 0; loop_ub_tmp < 16; loop_ub_tmp++) {
    H[loop_ub_tmp] = 2.0 * H_tmp_0[loop_ub_tmp];
  }

  for (loop_ub_tmp = 0; loop_ub_tmp < 4; loop_ub_tmp++) {
    H_tmp_tmp_tmp = loop_ub_tmp << 2;
    count = K[H_tmp_tmp_tmp + 3] * inp[3] + (K[H_tmp_tmp_tmp + 2] * inp[2] +
      (K[H_tmp_tmp_tmp + 1] * inp[1] + K[H_tmp_tmp_tmp] * inp[0]));
    inp_0[loop_ub_tmp] = count;
  }

  for (i = 0; i < 4; i++) {
    H_tmp_tmp_tmp = i << 2;
    count = G[H_tmp_tmp_tmp + 3] * inp_0[3] + (G[H_tmp_tmp_tmp + 2] * inp_0[2] +
      (G[H_tmp_tmp_tmp + 1] * inp_0[1] + G[H_tmp_tmp_tmp] * inp_0[0]));
    c[i] = -((((H_tmp[i + 4] * inp[1] + H_tmp[i] * inp[0]) + H_tmp[i + 8] * inp
               [2]) + H_tmp[i + 12] * inp[3]) + count);
    b[i] = highBound[i];
    b[i + 4] = -lowBound[i];
  }

  i = 0;
  *iterSteps = 0.0;
  H_tmp_tmp_tmp = 0;
  exitg1 = false;
  while ((!exitg1) && (H_tmp_tmp_tmp <= static_cast<int32_T>(URpar_rate_maxIter)
                       - 1)) {
    (*iterSteps)++;
    indices[0] = (y_state_init[0] == 1.0);
    indices[4] = (y_state_init[0] == -1.0);
    indices[1] = (y_state_init[1] == 1.0);
    indices[5] = (y_state_init[1] == -1.0);
    indices[2] = (y_state_init[2] == 1.0);
    indices[6] = (y_state_init[2] == -1.0);
    indices[3] = (y_state_init[3] == 1.0);
    indices[7] = (y_state_init[3] == -1.0);
    H_tmp_tmp_0 = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        H_tmp_tmp_0++;
      }
    }

    f_size_idx_1 = H_tmp_tmp_0;
    H_tmp_tmp_0 = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        f_data[H_tmp_tmp_0] = static_cast<int8_T>((h_size + 1));
        H_tmp_tmp_0++;
      }
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp] = A[f_data[loop_ub_tmp] - 1];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp + f_size_idx_1] = A[f_data[loop_ub_tmp] + 7];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp + (f_size_idx_1 << 1)] = A[f_data[loop_ub_tmp] + 15];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      A_eq_data[loop_ub_tmp + f_size_idx_1 * 3] = A[f_data[loop_ub_tmp] + 23];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      H_tmp_tmp = loop_ub_tmp << 2;
      AT_eq_data[H_tmp_tmp] = A_eq_data[loop_ub_tmp];
      AT_eq_data[1 + H_tmp_tmp] = A_eq_data[loop_ub_tmp + f_size_idx_1];
      AT_eq_data[2 + H_tmp_tmp] = A_eq_data[(f_size_idx_1 << 1) + loop_ub_tmp];
      AT_eq_data[3 + H_tmp_tmp] = A_eq_data[f_size_idx_1 * 3 + loop_ub_tmp];
    }

    if (f_size_idx_1 == 0) {
      l2_idx_0 = 0;
      l1_idx_1 = 0;
    } else {
      l1_idx_1 = static_cast<int8_T>(f_size_idx_1);
      l2_idx_0 = static_cast<int8_T>(f_size_idx_1);
    }

    if (f_size_idx_1 != 0) {
      H_tmp_tmp_0 = f_size_idx_1;
    } else if ((l2_idx_0 != 0) && (l1_idx_1 != 0)) {
      H_tmp_tmp_0 = l2_idx_0;
    } else {
      H_tmp_tmp_0 = 0;
      if (l2_idx_0 > 0) {
        H_tmp_tmp_0 = l2_idx_0;
      }
    }

    empty_non_axis_sizes = (H_tmp_tmp_0 == 0);
    if (empty_non_axis_sizes || (f_size_idx_1 != 0)) {
      h_size = 4;
    } else {
      h_size = 0;
    }

    if (empty_non_axis_sizes || ((l2_idx_0 != 0) && (l1_idx_1 != 0))) {
      idx = l1_idx_1;
    } else {
      idx = 0;
    }

    H_tmp_tmp = 4 + f_size_idx_1;
    f_size_idx_1 = (f_size_idx_1 << 2) - 1;
    memcpy(&varargin_1_data[0], &H[0], sizeof(real_T) << 4U);
    for (loop_ub_tmp = 0; loop_ub_tmp <= f_size_idx_1; loop_ub_tmp++) {
      varargin_1_data[loop_ub_tmp + 16] = AT_eq_data[loop_ub_tmp];
    }

    loop_ub_tmp = H_tmp_tmp_0 * h_size;
    if (0 <= loop_ub_tmp - 1) {
      memcpy(&A_eq_data_0[0], &A_eq_data[0], loop_ub_tmp * sizeof(int8_T));
    }

    f_size_idx_1 = H_tmp_tmp_0 * idx;
    if (0 <= f_size_idx_1 - 1) {
      memset(&A_eq_data_0[loop_ub_tmp], 0, ((f_size_idx_1 + loop_ub_tmp) -
              loop_ub_tmp) * sizeof(int8_T));
    }

    if ((H_tmp_tmp_0 != 0) && (h_size + idx != 0)) {
      idx = H_tmp_tmp_0;
    } else {
      idx = 0;
    }

    f_size_idx_1 = idx * H_tmp_tmp;
    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      reshapes[1].f1.data[loop_ub_tmp] = A_eq_data_0[loop_ub_tmp];
    }

    H_tmp_tmp_0 = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        H_tmp_tmp_0++;
      }
    }

    f_size_idx_1 = H_tmp_tmp_0;
    H_tmp_tmp_0 = 0;
    for (h_size = 0; h_size < 8; h_size++) {
      if (indices[h_size]) {
        g_data[H_tmp_tmp_0] = static_cast<int8_T>((h_size + 1));
        H_tmp_tmp_0++;
      }
    }

    varargin_1_size[0] = 4 + idx;
    varargin_1_size[1] = H_tmp_tmp;
    for (loop_ub_tmp = 0; loop_ub_tmp < H_tmp_tmp; loop_ub_tmp++) {
      H_tmp_tmp_0 = loop_ub_tmp << 2;
      h_size = varargin_1_size[0] * loop_ub_tmp;
      varargin_1_data_0[h_size] = varargin_1_data[H_tmp_tmp_0];
      varargin_1_data_0[1 + h_size] = varargin_1_data[H_tmp_tmp_0 + 1];
      varargin_1_data_0[2 + h_size] = varargin_1_data[H_tmp_tmp_0 + 2];
      varargin_1_data_0[3 + h_size] = varargin_1_data[H_tmp_tmp_0 + 3];
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < H_tmp_tmp; loop_ub_tmp++) {
      for (H_tmp_tmp_0 = 0; H_tmp_tmp_0 < idx; H_tmp_tmp_0++) {
        varargin_1_data_0[(H_tmp_tmp_0 + varargin_1_size[0] * loop_ub_tmp) + 4] =
          reshapes[1].f1.data[idx * loop_ub_tmp + H_tmp_tmp_0];
      }
    }

    H_tmp_tmp = 4 + f_size_idx_1;
    c_data[0] = -c[0];
    c_data[1] = -c[1];
    c_data[2] = -c[2];
    c_data[3] = -c[3];
    for (loop_ub_tmp = 0; loop_ub_tmp < f_size_idx_1; loop_ub_tmp++) {
      c_data[loop_ub_tmp + 4] = b[g_data[loop_ub_tmp] - 1];
    }

    URControl_att_mldivide(varargin_1_data_0, varargin_1_size, c_data,
      &H_tmp_tmp, h_data, &h_size);
    x[0] = h_data[0];
    x[1] = h_data[1];
    x[2] = h_data[2];
    x[3] = h_data[3];
    if (5 > h_size) {
      H_tmp_tmp_0 = 0;
      h_size = 0;
    } else {
      H_tmp_tmp_0 = 4;
    }

    for (loop_ub_tmp = 0; loop_ub_tmp < 8; loop_ub_tmp++) {
      constraintError[loop_ub_tmp] = (((static_cast<real_T>(A[loop_ub_tmp + 8]) *
        x[1] + static_cast<real_T>(A[loop_ub_tmp]) * x[0]) + static_cast<real_T>
        (A[loop_ub_tmp + 16]) * x[2]) + static_cast<real_T>(A[loop_ub_tmp + 24])
        * x[3]) - b[loop_ub_tmp];
    }

    if (!rtIsNaN(constraintError[0])) {
      idx = 1;
    } else {
      idx = 0;
      H_tmp_tmp = 2;
      exitg2 = false;
      while ((!exitg2) && (H_tmp_tmp < 9)) {
        if (!rtIsNaN(constraintError[H_tmp_tmp - 1])) {
          idx = H_tmp_tmp;
          exitg2 = true;
        } else {
          H_tmp_tmp++;
        }
      }
    }

    if (idx == 0) {
      count = constraintError[0];
    } else {
      count = constraintError[idx - 1];
      while (idx + 1 < 9) {
        if (count < constraintError[idx]) {
          count = constraintError[idx];
        }

        idx++;
      }
    }

    loop_ub_tmp = h_size - H_tmp_tmp_0;
    if (loop_ub_tmp == 0) {
      empty_non_axis_sizes = true;
    } else {
      if (loop_ub_tmp <= 2) {
        if (loop_ub_tmp == 1) {
          b_ex = h_data[H_tmp_tmp_0];
        } else {
          b_ex = h_data[H_tmp_tmp_0 + 1];
          if ((h_data[H_tmp_tmp_0] > b_ex) || (rtIsNaN(h_data[H_tmp_tmp_0]) && (
                !rtIsNaN(b_ex)))) {
          } else {
            b_ex = h_data[H_tmp_tmp_0];
          }
        }
      } else {
        if (!rtIsNaN(h_data[H_tmp_tmp_0])) {
          idx = 1;
        } else {
          idx = 0;
          H_tmp_tmp = 2;
          exitg2 = false;
          while ((!exitg2) && (H_tmp_tmp <= loop_ub_tmp)) {
            if (!rtIsNaN(h_data[(H_tmp_tmp_0 + H_tmp_tmp) - 1])) {
              idx = H_tmp_tmp;
              exitg2 = true;
            } else {
              H_tmp_tmp++;
            }
          }
        }

        if (idx == 0) {
          b_ex = h_data[H_tmp_tmp_0];
        } else {
          b_ex = h_data[(H_tmp_tmp_0 + idx) - 1];
          while (idx + 1 <= loop_ub_tmp) {
            tmp = h_data[H_tmp_tmp_0 + idx];
            if (b_ex > tmp) {
              b_ex = tmp;
            }

            idx++;
          }
        }
      }

      if (b_ex >= 0.0) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
      }
    }

    if ((count <= 0.001) && empty_non_axis_sizes) {
      i = 1;
      exitg1 = true;
    } else {
      guard1 = false;
      if (loop_ub_tmp == 0) {
        guard1 = true;
      } else {
        if (loop_ub_tmp <= 2) {
          if (loop_ub_tmp == 1) {
            count = h_data[H_tmp_tmp_0];
          } else if ((h_data[H_tmp_tmp_0] > h_data[H_tmp_tmp_0 + 1]) || (rtIsNaN
                      (h_data[H_tmp_tmp_0]) && (!rtIsNaN(h_data[H_tmp_tmp_0 + 1]))))
          {
            count = h_data[H_tmp_tmp_0 + 1];
          } else {
            count = h_data[H_tmp_tmp_0];
          }
        } else {
          if (!rtIsNaN(h_data[H_tmp_tmp_0])) {
            idx = 1;
          } else {
            idx = 0;
            H_tmp_tmp = 2;
            exitg2 = false;
            while ((!exitg2) && (H_tmp_tmp <= loop_ub_tmp)) {
              if (!rtIsNaN(h_data[(H_tmp_tmp_0 + H_tmp_tmp) - 1])) {
                idx = H_tmp_tmp;
                exitg2 = true;
              } else {
                H_tmp_tmp++;
              }
            }
          }

          if (idx == 0) {
            count = h_data[H_tmp_tmp_0];
          } else {
            count = h_data[(H_tmp_tmp_0 + idx) - 1];
            while (idx + 1 <= loop_ub_tmp) {
              tmp = h_data[H_tmp_tmp_0 + idx];
              if (count > tmp) {
                count = tmp;
              }

              idx++;
            }
          }
        }

        if (count >= 0.0) {
          guard1 = true;
        } else {
          if (loop_ub_tmp <= 2) {
            if (loop_ub_tmp == 1) {
              idx = 1;
            } else if ((h_data[H_tmp_tmp_0] > h_data[H_tmp_tmp_0 + 1]) ||
                       (rtIsNaN(h_data[H_tmp_tmp_0]) && (!rtIsNaN
                         (h_data[H_tmp_tmp_0 + 1])))) {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            if (!rtIsNaN(h_data[H_tmp_tmp_0])) {
              idx = 1;
            } else {
              idx = 0;
              H_tmp_tmp = 2;
              exitg2 = false;
              while ((!exitg2) && (H_tmp_tmp <= loop_ub_tmp)) {
                if (!rtIsNaN(h_data[(H_tmp_tmp_0 + H_tmp_tmp) - 1])) {
                  idx = H_tmp_tmp;
                  exitg2 = true;
                } else {
                  H_tmp_tmp++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              count = h_data[(H_tmp_tmp_0 + idx) - 1];
              for (H_tmp_tmp = idx; H_tmp_tmp < loop_ub_tmp; H_tmp_tmp++) {
                tmp = h_data[H_tmp_tmp_0 + H_tmp_tmp];
                if (count > tmp) {
                  count = tmp;
                  idx = H_tmp_tmp + 1;
                }
              }
            }
          }

          count = std::abs(y_state_init[0]);
          if (count == idx) {
            y_state_init[0] = 0.0;
          }

          count += std::abs(y_state_init[1]);
          if (count == idx) {
            y_state_init[1] = 0.0;
          }

          count += std::abs(y_state_init[2]);
          if (count == idx) {
            y_state_init[2] = 0.0;
          }

          count += std::abs(y_state_init[3]);
          if (count == idx) {
            y_state_init[3] = 0.0;
          }
        }
      }

      if (guard1) {
        if (!rtIsNaN(constraintError[0])) {
          H_tmp_tmp_0 = 1;
        } else {
          H_tmp_tmp_0 = 0;
          h_size = 2;
          exitg2 = false;
          while ((!exitg2) && (h_size < 9)) {
            if (!rtIsNaN(constraintError[h_size - 1])) {
              H_tmp_tmp_0 = h_size;
              exitg2 = true;
            } else {
              h_size++;
            }
          }
        }

        if (H_tmp_tmp_0 == 0) {
          H_tmp_tmp_0 = 1;
        } else {
          count = constraintError[H_tmp_tmp_0 - 1];
          for (h_size = H_tmp_tmp_0; h_size + 1 < 9; h_size++) {
            if (count < constraintError[h_size]) {
              count = constraintError[h_size];
              H_tmp_tmp_0 = h_size + 1;
            }
          }
        }

        if (H_tmp_tmp_0 < 5) {
          y_state_init[H_tmp_tmp_0 - 1] = 1.0;
        } else {
          y_state_init[H_tmp_tmp_0 - 5] = -1.0;
        }
      }

      H_tmp_tmp_tmp++;
    }
  }

  *optimal = i;
}

/* System initialize for referenced model: 'URControl_att' */
void URControl_attModelClass::init(void)
{
  /* InitializeConditions for DiscreteStateSpace: '<S1>/Discrete State-Space' */
  URControl_att_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_att_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_att_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  URControl_att_DW.UD_DSTATE[0] = 0.0;
  URControl_att_DW.UD_DSTATE[1] = 0.0;
  URControl_att_DW.UD_DSTATE[2] = -500.0;

  /* SystemInitialize for MATLAB Function: '<S2>/control allocator' */
  URControl_att_DW.omegaDot_not_empty = false;
  URControl_att_DW.accZFilt_not_empty = false;
  URControl_att_DW.errorD_not_empty = false;
  URControl_att_DW.uvrDer_not_empty = false;
  URControl_att_DW.omegaDot_not_empty_m = false;
  URControl_att_DW.wRotorFilter_not_empty = false;
  URControl_att_DW.x_last_not_empty = false;
  URControl_att_DW.y_state_prev[0] = 0.0;
  URControl_att_DW.Fset_prev[0] = 0.0;
  URControl_att_DW.y_state_prev[1] = 0.0;
  URControl_att_DW.Fset_prev[1] = 0.0;
  URControl_att_DW.y_state_prev[2] = 0.0;
  URControl_att_DW.Fset_prev[2] = 0.0;
  URControl_att_DW.y_state_prev[3] = 0.0;
  URControl_att_DW.Fset_prev[3] = 0.0;
  URControl_att_DW.M_uvr_set[0] = 0.0;
  URControl_att_DW.M_uvr_set[1] = 0.0;
  URControl_att_DW.M_uvr_set[2] = 0.0;
  URControl_att_DW.du_last[0] = 0.0;
  URControl_att_DW.du_last[1] = 0.0;
  URControl_att_DW.du_last[2] = 0.0;
  URControl_att_DW.du_last[3] = 0.0;
  URControl_att_DW.errorInt[0] = 0.0;
  URControl_att_DW.errorInt[1] = 0.0;
  URControl_att_DW.errorInt[2] = 0.0;

  /* SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
  if (!_URControl_att_SharedDataInit_) {
    _URControl_att_SharedDataInit_ = true;
  }

  /* End of SystemInitialize for DataStoreMemory: '<Root>/DataStoreMemory' */
}

/* System reset for referenced model: 'URControl_att' */
void URControl_attModelClass::reset(void)
{
  /* InitializeConditions for DiscreteStateSpace: '<S1>/Discrete State-Space' */
  URControl_att_DW.DiscreteStateSpace_DSTATE[0] = (0.0);
  URControl_att_DW.DiscreteStateSpace_DSTATE[1] = (0.0);
  URControl_att_DW.DiscreteStateSpace_DSTATE[2] = (-1.0);

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  URControl_att_DW.UD_DSTATE[0] = 0.0;
  URControl_att_DW.UD_DSTATE[1] = 0.0;
  URControl_att_DW.UD_DSTATE[2] = -500.0;

  /* SystemReset for MATLAB Function: '<S2>/control allocator' */
  URControl_att_DW.omegaDot_not_empty = false;
  URControl_att_DW.accZFilt_not_empty = false;
  URControl_att_DW.errorD_not_empty = false;
  URControl_att_DW.uvrDer_not_empty = false;
  URControl_att_DW.omegaDot_not_empty_m = false;
  URControl_att_DW.wRotorFilter_not_empty = false;
  URControl_att_DW.x_last_not_empty = false;
  URControl_att_DW.y_state_prev[0] = 0.0;
  URControl_att_DW.Fset_prev[0] = 0.0;
  URControl_att_DW.y_state_prev[1] = 0.0;
  URControl_att_DW.Fset_prev[1] = 0.0;
  URControl_att_DW.y_state_prev[2] = 0.0;
  URControl_att_DW.Fset_prev[2] = 0.0;
  URControl_att_DW.y_state_prev[3] = 0.0;
  URControl_att_DW.Fset_prev[3] = 0.0;
  URControl_att_DW.M_uvr_set[0] = 0.0;
  URControl_att_DW.M_uvr_set[1] = 0.0;
  URControl_att_DW.M_uvr_set[2] = 0.0;
  URControl_att_DW.du_last[0] = 0.0;
  URControl_att_DW.du_last[1] = 0.0;
  URControl_att_DW.du_last[2] = 0.0;
  URControl_att_DW.du_last[3] = 0.0;
  URControl_att_DW.errorInt[0] = 0.0;
  URControl_att_DW.errorInt[1] = 0.0;
  URControl_att_DW.errorInt[2] = 0.0;
}

/* Start for referenced model: 'URControl_att' */
void URControl_attModelClass::start(void)
{
  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  if (!_URControl_att_SharedDataInit_) {
    URControl_att_SharedDSM.DAQ = URControl_att_rtZdaqBus;
  }

  /* End of Start for DataStoreMemory: '<Root>/Data Store Memory' */
}

/* Output and update for referenced model: 'URControl_att' */
void URControl_attModelClass::step(const real_T rtu_state_acc[3], const real_T
  rtu_state_accf[3], const real_T rtu_state_vel[3], const real_T rtu_state_velf
  [3], const real_T rtu_state_velB[3], const real_T rtu_state_pos[3], const
  real_T rtu_state_posf[3], const real_T rtu_state_omega[3], const real_T
  rtu_state_omegaf[3], const real_T rtu_state_att[3], const real_T rtu_state_n[3],
  const real_T rtu_state_wRotor[4], const real_T rtu_state_omegaUV[3], const
  real_T rtu_state_omegafUV[3], const real_T rtu_state_FMax[4], const real_T
  rtu_state_FMin[4], const real_T *rtu_state_fail_id, const real_T
  *rtu_state_fail_id_quick, const real_T rtu_state_uvDot_max[2], const real_T
  rtu_state_uvDot_min[2], const real_T rtu_state_uv_max[2], const real_T
  rtu_state_uv_min[2], const real_T rtu_state_vel_ref[3], const real_T
  rtu_state_pos_ref[3], const real_T rtu_n_des[3], const real_T *rtu_r_cmd,
  const real_T *rtu_Ftot_ref, real_T rty_wRotorSet[4])
{
  /* local block i/o variables */
  real_T rtb_Uk1[3];
  real_T s;
  real_T Mu_max;
  real_T Mu_min;
  real_T Mv_max;
  real_T Mv_min;
  real_T gain;
  real_T uvr_des[3];
  real_T z1[2];
  int32_T r1;
  int32_T r2;
  real_T M_uvr[3];
  real_T inp[4];
  real_T wMax[4];
  real_T dw_lin_max[4];
  real_T dw_lin_min[4];
  real_T G[16];
  real_T K[16];
  real_T b_z1[4];
  real_T a[16];
  stateBus rtb_BusConversion_InsertedFor_a;
  real_T rtb_precAngle[2];
  real_T URpar[32];
  real_T tmp[3];
  boolean_T Mu_min_0;
  int16_T tmp_0[16];
  real_T z1_0;
  real_T rtb_TSamp_idx_2;
  real_T rtb_TSamp_idx_1;
  real_T rtb_TSamp_idx_0;
  real_T rtb_uv_prec_idx_1;
  boolean_T tmp_1;
  real_T dw_lin_max_tmp;
  const URControlParamsType *URpar_0;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_attitude controller_at_inport_0' */
  rtb_BusConversion_InsertedFor_a.acc[0] = rtu_state_acc[0];
  rtb_BusConversion_InsertedFor_a.accf[0] = rtu_state_accf[0];
  rtb_BusConversion_InsertedFor_a.vel[0] = rtu_state_vel[0];
  rtb_BusConversion_InsertedFor_a.velf[0] = rtu_state_velf[0];
  rtb_BusConversion_InsertedFor_a.velB[0] = rtu_state_velB[0];
  rtb_BusConversion_InsertedFor_a.pos[0] = rtu_state_pos[0];
  rtb_BusConversion_InsertedFor_a.posf[0] = rtu_state_posf[0];
  rtb_BusConversion_InsertedFor_a.omega[0] = rtu_state_omega[0];
  rtb_BusConversion_InsertedFor_a.omegaf[0] = rtu_state_omegaf[0];
  rtb_BusConversion_InsertedFor_a.att[0] = rtu_state_att[0];
  rtb_BusConversion_InsertedFor_a.n[0] = rtu_state_n[0];
  rtb_BusConversion_InsertedFor_a.acc[1] = rtu_state_acc[1];
  rtb_BusConversion_InsertedFor_a.accf[1] = rtu_state_accf[1];
  rtb_BusConversion_InsertedFor_a.vel[1] = rtu_state_vel[1];
  rtb_BusConversion_InsertedFor_a.velf[1] = rtu_state_velf[1];
  rtb_BusConversion_InsertedFor_a.velB[1] = rtu_state_velB[1];
  rtb_BusConversion_InsertedFor_a.pos[1] = rtu_state_pos[1];
  rtb_BusConversion_InsertedFor_a.posf[1] = rtu_state_posf[1];
  rtb_BusConversion_InsertedFor_a.omega[1] = rtu_state_omega[1];
  rtb_BusConversion_InsertedFor_a.omegaf[1] = rtu_state_omegaf[1];
  rtb_BusConversion_InsertedFor_a.att[1] = rtu_state_att[1];
  rtb_BusConversion_InsertedFor_a.n[1] = rtu_state_n[1];
  rtb_BusConversion_InsertedFor_a.acc[2] = rtu_state_acc[2];
  rtb_BusConversion_InsertedFor_a.accf[2] = rtu_state_accf[2];
  rtb_BusConversion_InsertedFor_a.vel[2] = rtu_state_vel[2];
  rtb_BusConversion_InsertedFor_a.velf[2] = rtu_state_velf[2];
  rtb_BusConversion_InsertedFor_a.velB[2] = rtu_state_velB[2];
  rtb_BusConversion_InsertedFor_a.pos[2] = rtu_state_pos[2];
  rtb_BusConversion_InsertedFor_a.posf[2] = rtu_state_posf[2];
  rtb_BusConversion_InsertedFor_a.omega[2] = rtu_state_omega[2];
  rtb_BusConversion_InsertedFor_a.omegaf[2] = rtu_state_omegaf[2];
  rtb_BusConversion_InsertedFor_a.att[2] = rtu_state_att[2];
  rtb_BusConversion_InsertedFor_a.n[2] = rtu_state_n[2];
  rtb_BusConversion_InsertedFor_a.wRotor[0] = rtu_state_wRotor[0];
  rtb_BusConversion_InsertedFor_a.wRotor[1] = rtu_state_wRotor[1];
  rtb_BusConversion_InsertedFor_a.wRotor[2] = rtu_state_wRotor[2];
  rtb_BusConversion_InsertedFor_a.wRotor[3] = rtu_state_wRotor[3];
  rtb_BusConversion_InsertedFor_a.omegaUV[0] = rtu_state_omegaUV[0];
  rtb_BusConversion_InsertedFor_a.omegafUV[0] = rtu_state_omegafUV[0];
  rtb_BusConversion_InsertedFor_a.omegaUV[1] = rtu_state_omegaUV[1];
  rtb_BusConversion_InsertedFor_a.omegafUV[1] = rtu_state_omegafUV[1];
  rtb_BusConversion_InsertedFor_a.omegaUV[2] = rtu_state_omegaUV[2];
  rtb_BusConversion_InsertedFor_a.omegafUV[2] = rtu_state_omegafUV[2];
  rtb_BusConversion_InsertedFor_a.FMax[0] = rtu_state_FMax[0];
  rtb_BusConversion_InsertedFor_a.FMin[0] = rtu_state_FMin[0];
  rtb_BusConversion_InsertedFor_a.FMax[1] = rtu_state_FMax[1];
  rtb_BusConversion_InsertedFor_a.FMin[1] = rtu_state_FMin[1];
  rtb_BusConversion_InsertedFor_a.FMax[2] = rtu_state_FMax[2];
  rtb_BusConversion_InsertedFor_a.FMin[2] = rtu_state_FMin[2];
  rtb_BusConversion_InsertedFor_a.FMax[3] = rtu_state_FMax[3];
  rtb_BusConversion_InsertedFor_a.FMin[3] = rtu_state_FMin[3];
  rtb_BusConversion_InsertedFor_a.fail_id = *rtu_state_fail_id;
  rtb_BusConversion_InsertedFor_a.fail_id_quick = *rtu_state_fail_id_quick;
  rtb_BusConversion_InsertedFor_a.uvDot_max[0] = rtu_state_uvDot_max[0];
  rtb_BusConversion_InsertedFor_a.uvDot_min[0] = rtu_state_uvDot_min[0];
  rtb_BusConversion_InsertedFor_a.uv_max[0] = rtu_state_uv_max[0];
  rtb_BusConversion_InsertedFor_a.uv_min[0] = rtu_state_uv_min[0];
  rtb_BusConversion_InsertedFor_a.uvDot_max[1] = rtu_state_uvDot_max[1];
  rtb_BusConversion_InsertedFor_a.uvDot_min[1] = rtu_state_uvDot_min[1];
  rtb_BusConversion_InsertedFor_a.uv_max[1] = rtu_state_uv_max[1];
  rtb_BusConversion_InsertedFor_a.uv_min[1] = rtu_state_uv_min[1];
  rtb_BusConversion_InsertedFor_a.vel_ref[0] = rtu_state_vel_ref[0];
  rtb_BusConversion_InsertedFor_a.pos_ref[0] = rtu_state_pos_ref[0];
  rtb_BusConversion_InsertedFor_a.vel_ref[1] = rtu_state_vel_ref[1];
  rtb_BusConversion_InsertedFor_a.pos_ref[1] = rtu_state_pos_ref[1];
  rtb_BusConversion_InsertedFor_a.vel_ref[2] = rtu_state_vel_ref[2];
  rtb_BusConversion_InsertedFor_a.pos_ref[2] = rtu_state_pos_ref[2];

  /* DiscreteStateSpace: '<S1>/Discrete State-Space' */
  {
    rtb_Uk1[0] = (1.0)*URControl_att_DW.DiscreteStateSpace_DSTATE[0];
    rtb_Uk1[1] = (1.0)*URControl_att_DW.DiscreteStateSpace_DSTATE[1];
    rtb_Uk1[2] = (1.0)*URControl_att_DW.DiscreteStateSpace_DSTATE[2];
  }

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_0 = rtb_Uk1[0] * 500.0;

  /* UnitDelay: '<S3>/UD' */
  rtb_Uk1[0] = URControl_att_DW.UD_DSTATE[0];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_1 = rtb_Uk1[1] * 500.0;

  /* UnitDelay: '<S3>/UD' */
  rtb_Uk1[1] = URControl_att_DW.UD_DSTATE[1];

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_idx_2 = rtb_Uk1[2] * 500.0;

  /* UnitDelay: '<S3>/UD' */
  rtb_Uk1[2] = URControl_att_DW.UD_DSTATE[2];

  /* MATLAB Function: '<S1>/Precession' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_Precession_at_inport_0'
   */
  s = std::sqrt(URControlParams.l * URControlParams.l + URControlParams.b *
                URControlParams.b);
  Mu_max = (-rtu_state_FMin[1] + rtu_state_FMax[3]) * s;
  Mu_min = (-rtu_state_FMax[1] + rtu_state_FMin[3]) * s;
  Mv_max = (rtu_state_FMax[0] - rtu_state_FMin[2]) * s;
  Mv_min = (rtu_state_FMin[0] - rtu_state_FMax[2]) * s;
  rtb_uv_prec_idx_1 = std::abs(rtu_state_omegaf[2]);
  if (rtb_uv_prec_idx_1 < URControlParams.attitude_yawThreshold) {
    if (rtu_state_omegaf[2] < 0.0) {
      gain = -1.0;
    } else if (rtu_state_omegaf[2] > 0.0) {
      gain = 1.0;
    } else if (rtu_state_omegaf[2] == 0.0) {
      gain = 0.0;
    } else {
      gain = (rtNaN);
    }

    s = gain * URControlParams.attitude_yawThreshold;
    gain = 1.0 - (URControlParams.attitude_yawThreshold - rtb_uv_prec_idx_1) /
      URControlParams.attitude_yawThreshold;
    if (!(gain < 1.0)) {
      gain = 1.0;
    }

    if (!(gain > 0.0)) {
      gain = 0.0;
    }

    if (Mv_max < URControlParams.attitude_MMargin) {
      Mv_max = URControlParams.attitude_MMargin - Mv_max;
    } else if (Mv_min > -URControlParams.attitude_MMargin) {
      Mv_max = -URControlParams.attitude_MMargin - Mv_min;
    } else {
      Mv_max = 0.0;
    }

    Mv_max = Mv_max / ((URControlParams.Iz - std::sqrt(URControlParams.Ix *
      URControlParams.Ix + URControlParams.Iy * URControlParams.Iy)) * s) * gain;
    if (Mu_max < URControlParams.attitude_MMargin) {
      Mu_max = URControlParams.attitude_MMargin - Mu_max;
    } else if (Mu_min > -URControlParams.attitude_MMargin) {
      Mu_max = -URControlParams.attitude_MMargin - Mu_min;
    } else {
      Mu_max = 0.0;
    }

    Mu_max = Mu_max / ((std::sqrt(URControlParams.Ix * URControlParams.Ix +
      URControlParams.Iy * URControlParams.Iy) - URControlParams.Iz) * s) * gain;
  } else {
    if (Mv_max < URControlParams.attitude_MMargin) {
      Mv_max = URControlParams.attitude_MMargin - Mv_max;
    } else if (Mv_min > -URControlParams.attitude_MMargin) {
      Mv_max = -URControlParams.attitude_MMargin - Mv_min;
    } else {
      Mv_max = 0.0;
    }

    Mv_min = std::sqrt(URControlParams.Ix * URControlParams.Ix +
                       URControlParams.Iy * URControlParams.Iy);
    Mv_max /= (URControlParams.Iz - Mv_min) * rtu_state_omegaf[2];
    if (Mu_max < URControlParams.attitude_MMargin) {
      Mu_max = URControlParams.attitude_MMargin - Mu_max;
    } else if (Mu_min > -URControlParams.attitude_MMargin) {
      Mu_max = -URControlParams.attitude_MMargin - Mu_min;
    } else {
      Mu_max = 0.0;
    }

    Mu_max /= (Mv_min - URControlParams.Iz) * rtu_state_omegaf[2];
  }

  Mu_min_0 = rtIsNaN(URControlParams.attitude_maxPrecSpeed);
  if ((!(Mv_max < URControlParams.attitude_maxPrecSpeed)) && (!Mu_min_0)) {
    Mv_max = URControlParams.attitude_maxPrecSpeed;
  }

  tmp_1 = rtIsNaN(-URControlParams.attitude_maxPrecSpeed);
  if ((!(Mv_max > -URControlParams.attitude_maxPrecSpeed)) && (!tmp_1)) {
    Mv_max = -URControlParams.attitude_maxPrecSpeed;
  }

  if ((!(Mu_max < URControlParams.attitude_maxPrecSpeed)) && (!Mu_min_0)) {
    Mu_max = URControlParams.attitude_maxPrecSpeed;
  }

  if ((!(Mu_max > -URControlParams.attitude_maxPrecSpeed)) && (!tmp_1)) {
    Mu_max = -URControlParams.attitude_maxPrecSpeed;
  }

  Mu_min = 0.0;
  s = 0.0;
  if (URControlParams.attitude_precMode == 2.0) {
    if (Mu_max < 0.0) {
      Mu_min = -1.0;
    } else if (Mu_max > 0.0) {
      Mu_min = 1.0;
    } else if (Mu_max == 0.0) {
      Mu_min = 0.0;
    } else {
      Mu_min = (rtNaN);
    }

    Mu_min = Mu_min * URControlParams.attitude_precAngle / 180.0 *
      3.1415926535897931;
    if (Mv_max < 0.0) {
      Mv_min = -1.0;
    } else if (Mv_max > 0.0) {
      Mv_min = 1.0;
    } else if (Mv_max == 0.0) {
      Mv_min = 0.0;
    } else {
      Mv_min = (rtNaN);
    }

    s = Mv_min * URControlParams.attitude_precAngle / 180.0 * 3.1415926535897931;
  }

  if (URControlParams.attitude_precMode == 0.0) {
    Mv_max = 0.0;
    Mu_max = 0.0;
    Mu_min = 0.0;
    s = 0.0;
  }

  rtb_uv_prec_idx_1 = Mu_max;
  URControl_att_SharedDSM.DAQ.uv_prec[0] = Mv_max;
  URControl_att_SharedDSM.DAQ.precAngle[0] = Mu_min;
  URControl_att_SharedDSM.DAQ.uv_prec[1] = Mu_max;
  URControl_att_SharedDSM.DAQ.precAngle[1] = s;

  /* MATLAB Function: '<S1>/yawRateControl' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_yawRateControl_at_inport_0'
   */
  Mu_max = URControlParams.rate_MzGain;
  if ((URControlParams.YRCFail_enable != 0.0) && (*rtu_state_fail_id > 0.0)) {
    Mu_max = (rtu_state_n[2] - URControlParams.YRCFail_nLim2) /
      (URControlParams.YRCFail_nLim1 - URControlParams.YRCFail_nLim2);
    if (!(Mu_max < 1.0)) {
      Mu_max = 1.0;
    }

    if (!(Mu_max > 0.0)) {
      Mu_max = 0.0;
    }

    Mu_max = -((rtu_state_omegaf[2] * rt_powd_snf(-1.0, *rtu_state_fail_id) -
                URControlParams.YRC_r_cmd_fail) * Mu_max) *
      URControlParams.YRCFail_Kp_dMzGain;
    if (!(Mu_max > 0.0)) {
      Mu_max = 0.0;
    }

    Mu_max = Mu_max * Mu_max + URControlParams.rate_MzGain;
  }

  /* MATLAB Function: '<S1>/attitude controller' incorporates:
   *  MATLAB Function: '<S1>/Precession'
   *  MATLAB Function: '<S1>/yawRateControl'
   */
  tmp[0] = -std::sin(s);
  tmp[1] = std::sin(Mu_min);
  tmp[2] = -std::cos(Mu_min) * std::cos(s);
  URControl_att_URAngleControl(&URControl_att_SharedDSM.DAQ, rtu_n_des, tmp,
    &rtb_BusConversion_InsertedFor_a,
    &URControl_att_ConstP.attitudecontroller_par, &URControlParams,
    rtb_precAngle);
  Mv_max += rtb_precAngle[0];
  Mu_min_0 = rtIsNaN(URControlParams.attitude_maxuv_des);
  if ((Mv_max < URControlParams.attitude_maxuv_des) || Mu_min_0) {
    Mv_min = Mv_max;
  } else {
    Mv_min = URControlParams.attitude_maxuv_des;
  }

  tmp_1 = rtIsNaN(-URControlParams.attitude_maxuv_des);
  if ((Mv_min > -URControlParams.attitude_maxuv_des) || tmp_1) {
    gain = Mv_min;
    z1[0] = Mv_min;
  } else {
    gain = -URControlParams.attitude_maxuv_des;
    z1[0] = -URControlParams.attitude_maxuv_des;
  }

  URControl_att_SharedDSM.DAQ.uv_des_raw[0] = Mv_max;
  Mv_max = rtb_uv_prec_idx_1 + rtb_precAngle[1];
  if ((Mv_max < URControlParams.attitude_maxuv_des) || Mu_min_0) {
    Mv_min = Mv_max;
  } else {
    Mv_min = URControlParams.attitude_maxuv_des;
  }

  if ((Mv_min > -URControlParams.attitude_maxuv_des) || tmp_1) {
    z1[1] = Mv_min;
  } else {
    Mv_min = -URControlParams.attitude_maxuv_des;
    z1[1] = -URControlParams.attitude_maxuv_des;
  }

  if (std::abs(URControl_att_ConstP.attitudecontroller_par.URC.R_xy_uv[1]) > std::
      abs(URControl_att_ConstP.attitudecontroller_par.URC.R_xy_uv[0])) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }

  Mu_min = URControl_att_ConstP.attitudecontroller_par.URC.R_xy_uv[r2] /
    URControl_att_ConstP.attitudecontroller_par.URC.R_xy_uv[r1];
  s = URControl_att_ConstP.attitudecontroller_par.URC.R_xy_uv[2 + r1];
  Mu_min = (z1[r2] - z1[r1] * Mu_min) /
    (URControl_att_ConstP.attitudecontroller_par.URC.R_xy_uv[2 + r2] - s *
     Mu_min);
  uvr_des[0] = gain;
  uvr_des[1] = Mv_min;
  uvr_des[2] = *rtu_r_cmd;
  rtb_uv_prec_idx_1 = (z1[r1] - s * Mu_min) /
    URControl_att_ConstP.attitudecontroller_par.URC.R_xy_uv[r1];
  URControl_att_SharedDSM.DAQ.pqr_des[0] = rtb_uv_prec_idx_1;
  URControl_att_SharedDSM.DAQ.uvr_des[0] = z1[0];
  URControl_att_SharedDSM.DAQ.pqr_des[1] = Mu_min;
  URControl_att_SharedDSM.DAQ.uvr_des[1] = z1[1];
  URControl_att_SharedDSM.DAQ.pqr_des[2] = *rtu_r_cmd;
  URControl_att_SharedDSM.DAQ.uvr_des[2] = *rtu_r_cmd;
  URControl_att_SharedDSM.DAQ.uv_des[0] = gain;
  URControl_att_SharedDSM.DAQ.uv_attCtrl[0] = rtb_precAngle[0];
  URControl_att_SharedDSM.DAQ.uv_des_raw[1] = Mv_max;
  URControl_att_SharedDSM.DAQ.uv_des[1] = Mv_min;
  URControl_att_SharedDSM.DAQ.uv_attCtrl[1] = rtb_precAngle[1];
  URControl_att_SharedDSM.DAQ.w_max[0] = 1200.0;
  URControl_att_SharedDSM.DAQ.w_min[0] = 0.0;
  URControl_att_SharedDSM.DAQ.w_max[1] = 1200.0;
  URControl_att_SharedDSM.DAQ.w_min[1] = 0.0;
  URControl_att_SharedDSM.DAQ.w_max[2] = 1200.0;
  URControl_att_SharedDSM.DAQ.w_min[2] = 0.0;
  URControl_att_SharedDSM.DAQ.w_max[3] = 1200.0;
  URControl_att_SharedDSM.DAQ.w_min[3] = 0.0;
  URControl_att_SharedDSM.DAQ.MzGain = Mu_max;

  /* BusCreator: '<S2>/BusConversion_InsertedFor_control allocator_at_inport_0' */
  rtb_BusConversion_InsertedFor_a.omega[0] = rtu_state_omega[0];
  rtb_BusConversion_InsertedFor_a.omegaf[0] = rtu_state_omegaf[0];
  rtb_BusConversion_InsertedFor_a.omega[1] = rtu_state_omega[1];
  rtb_BusConversion_InsertedFor_a.omegaf[1] = rtu_state_omegaf[1];
  rtb_BusConversion_InsertedFor_a.omega[2] = rtu_state_omega[2];
  rtb_BusConversion_InsertedFor_a.omegaf[2] = rtu_state_omegaf[2];
  rtb_BusConversion_InsertedFor_a.wRotor[0] = rtu_state_wRotor[0];
  rtb_BusConversion_InsertedFor_a.wRotor[1] = rtu_state_wRotor[1];
  rtb_BusConversion_InsertedFor_a.wRotor[2] = rtu_state_wRotor[2];
  rtb_BusConversion_InsertedFor_a.wRotor[3] = rtu_state_wRotor[3];
  rtb_BusConversion_InsertedFor_a.omegaUV[0] = rtu_state_omegaUV[0];
  rtb_BusConversion_InsertedFor_a.omegafUV[0] = rtu_state_omegafUV[0];
  rtb_BusConversion_InsertedFor_a.omegaUV[1] = rtu_state_omegaUV[1];
  rtb_BusConversion_InsertedFor_a.omegafUV[1] = rtu_state_omegafUV[1];
  rtb_BusConversion_InsertedFor_a.omegaUV[2] = rtu_state_omegaUV[2];
  rtb_BusConversion_InsertedFor_a.omegafUV[2] = rtu_state_omegafUV[2];
  rtb_BusConversion_InsertedFor_a.FMax[0] = rtu_state_FMax[0];
  rtb_BusConversion_InsertedFor_a.FMin[0] = rtu_state_FMin[0];
  rtb_BusConversion_InsertedFor_a.FMax[1] = rtu_state_FMax[1];
  rtb_BusConversion_InsertedFor_a.FMin[1] = rtu_state_FMin[1];
  rtb_BusConversion_InsertedFor_a.FMax[2] = rtu_state_FMax[2];
  rtb_BusConversion_InsertedFor_a.FMin[2] = rtu_state_FMin[2];
  rtb_BusConversion_InsertedFor_a.FMax[3] = rtu_state_FMax[3];
  rtb_BusConversion_InsertedFor_a.FMin[3] = rtu_state_FMin[3];

  /* MATLAB Function: '<S2>/control allocator' incorporates:
   *  BusCreator: '<S2>/BusConversion_InsertedFor_control allocator_at_inport_0'
   *  MATLAB Function: '<S1>/attitude controller'
   *  MATLAB Function: '<S1>/yawRateControl'
   */
  URpar_0 = &URControlParams;
  if (!URControl_att_DW.omegaDot_not_empty) {
    tmp[0] = 0.0;
    tmp[1] = 0.0;
    tmp[2] = 0.0;
    SimpleDerivative_SimpleDerivati(&URControl_att_DW.omegaDot,
      URControlParams.rate_INDI_omegaDotFilterT, tmp, 300.0, -300.0);
    URControl_att_DW.omegaDot_not_empty = true;
  }

  if (!URControl_att_DW.accZFilt_not_empty) {
    URControl_att_LPFilter_LPFilter(&URControl_att_DW.accZFilt,
      URControlParams.rate_INDI_accZFilterT);
    URControl_att_DW.accZFilt_not_empty = true;
  }

  rty_wRotorSet[0] = 0.0;
  rty_wRotorSet[1] = 0.0;
  rty_wRotorSet[2] = 0.0;
  rty_wRotorSet[3] = 0.0;
  if (URControlParams.rate_mode == 1.0) {
    M_uvr[0] = (rtb_uv_prec_idx_1 - rtu_state_omegaf[0]) *
      URControlParams.rate_INDI_rateDotKp[0];
    M_uvr[1] = (Mu_min - rtu_state_omegaf[1]) *
      URControlParams.rate_INDI_rateDotKp[1];
    Mv_min = (*rtu_r_cmd - rtu_state_omegaf[2]) *
      URControlParams.rate_INDI_rateDotKp[2];
    URControl_att_DW.omegaDot.filterHandle.filterT =
      URControlParams.rate_INDI_omegaDotFilterT;
    URContr_SimpleDerivative_update(&URControl_att_DW.omegaDot,
      rtb_BusConversion_InsertedFor_a.omega, 0.002);
    URControl_att_DW.accZFilt.filterT = URControlParams.rate_INDI_accZFilterT;
    URControl_att_DW.accZFilt.value = (1.0 - URControl_att_DW.accZFilt.filterT) *
      rtu_state_acc[2] + URControl_att_DW.accZFilt.value *
      URControl_att_DW.accZFilt.filterT;
    Mu_max = URControl_att_DW.accZFilt.value;
    Mu_min = URControl_att_DW.accZFilt.maxLim;
    Mv_max = URControl_att_DW.accZFilt.minLim;
    if ((Mu_max < Mu_min) || rtIsNaN(Mu_min)) {
      Mu_min = Mu_max;
    }

    if ((Mu_min > Mv_max) || rtIsNaN(Mv_max)) {
      URControl_att_DW.accZFilt.value = Mu_min;
    } else {
      URControl_att_DW.accZFilt.value = Mv_max;
    }

    tmp[0] = URControl_att_DW.omegaDot.derValue[0];
    tmp[1] = URControl_att_DW.omegaDot.derValue[1];
    tmp[2] = URControl_att_DW.omegaDot.derValue[2];
    b_z1[0] = M_uvr[0];
    b_z1[1] = M_uvr[1];
    b_z1[2] = Mv_min;
    b_z1[3] = -*rtu_Ftot_ref / URControlParams.mass;
    memcpy(&URpar[0], &URControlParams.rate_INDI_G[0], sizeof(real_T) << 5U);
    URControl_att_URINDI_allocator(*rtu_state_fail_id, tmp,
      URControl_att_DW.accZFilt.value, b_z1, URpar,
      rtb_BusConversion_InsertedFor_a.wRotor,
      &URControl_att_ConstP.controlallocator_par, rty_wRotorSet);
    URControl_att_SharedDSM.DAQ.pqr_des_dot[0] = M_uvr[0];
    URControl_att_SharedDSM.DAQ.pqr_des_dot[1] = M_uvr[1];
    URControl_att_SharedDSM.DAQ.pqr_des_dot[2] = Mv_min;
    URControl_att_SharedDSM.DAQ.omegaDot[0] =
      URControl_att_DW.omegaDot.derValue[0];
    URControl_att_SharedDSM.DAQ.omegaDot[1] =
      URControl_att_DW.omegaDot.derValue[1];
    URControl_att_SharedDSM.DAQ.omegaDot[2] =
      URControl_att_DW.omegaDot.derValue[2];
  } else if (URControlParams.rate_mode == 2.0) {
    M_uvr[0] = 0.0;
    M_uvr[1] = 0.0;
    M_uvr[2] = 0.0;
    if (URControlParams.rate_momentMode == 1.0) {
      URControl_att_PIDMomentGen(rtb_BusConversion_InsertedFor_a.omegaUV,
        rtb_BusConversion_InsertedFor_a.omegafUV, &URControl_att_SharedDSM.DAQ,
        uvr_des, URControlParams.Iz, URControlParams.Iu, URControlParams.Iv,
        URControlParams.rate_MPID_rateDotKp, URControlParams.rate_MPID_rateDotKi,
        URControlParams.rate_MPID_rateDotKd,
        URControlParams.rate_MPID_derFilterT,
        URControlParams.rate_MPID_uvrdesderFilterT,
        URControlParams.rate_MPID_maxInt, URControlParams.rate_MPID_precGain,
        &URControl_att_ConstP.controlallocator_par, M_uvr);
    } else {
      if (URControlParams.rate_momentMode == 2.0) {
        URControl_att_INDIMomentGen(rtb_BusConversion_InsertedFor_a.wRotor,
          rtb_BusConversion_InsertedFor_a.omegaUV,
          rtb_BusConversion_InsertedFor_a.omegafUV, &URControl_att_SharedDSM.DAQ,
          uvr_des, URControlParams.k0, URControlParams.t0, URControlParams.s,
          URControlParams.est_omegaFilterT, URControlParams.rate_MINDI_rateDotKp,
          URControlParams.rate_MINDI_derFilterT, URControlParams.rate_MINDI_MKp,
          &URControl_att_ConstP.controlallocator_par, M_uvr);
      }
    }

    if ((M_uvr[0] < URControlParams.rate_maxMoments[0]) || rtIsNaN
        (URControlParams.rate_maxMoments[0])) {
      Mv_max = M_uvr[0];
    } else {
      Mv_max = URControlParams.rate_maxMoments[0];
    }

    if ((Mv_max > -URControlParams.rate_maxMoments[0]) || rtIsNaN
        (-URControlParams.rate_maxMoments[0])) {
      M_uvr[0] = Mv_max;
    } else {
      M_uvr[0] = -URControlParams.rate_maxMoments[0];
    }

    if ((M_uvr[1] < URControlParams.rate_maxMoments[1]) || rtIsNaN
        (URControlParams.rate_maxMoments[1])) {
      Mv_max = M_uvr[1];
    } else {
      Mv_max = URControlParams.rate_maxMoments[1];
    }

    if ((Mv_max > -URControlParams.rate_maxMoments[1]) || rtIsNaN
        (-URControlParams.rate_maxMoments[1])) {
      M_uvr[1] = Mv_max;
    } else {
      M_uvr[1] = -URControlParams.rate_maxMoments[1];
    }

    if ((M_uvr[2] < URControlParams.rate_maxMoments[2]) || rtIsNaN
        (URControlParams.rate_maxMoments[2])) {
      Mv_max = M_uvr[2];
    } else {
      Mv_max = URControlParams.rate_maxMoments[2];
    }

    if ((!(Mv_max > -URControlParams.rate_maxMoments[2])) && (!rtIsNaN
         (-URControlParams.rate_maxMoments[2]))) {
      Mv_max = -URControlParams.rate_maxMoments[2];
    }

    if (URControlParams.envp_enable == 1.0) {
      URContr_controlAllocQPpredictor(M_uvr[0], M_uvr[1], Mv_max, *rtu_Ftot_ref,
        rtb_BusConversion_InsertedFor_a.omegaf,
        rtb_BusConversion_InsertedFor_a.FMax,
        rtb_BusConversion_InsertedFor_a.FMin, *rtu_state_fail_id,
        URControlParams.rate_MuGain, URControlParams.rate_MvGain, Mu_max,
        URControlParams.rate_FtotGain,
        &URControl_att_ConstP.controlallocator_par, &URControlParams, dw_lin_min,
        &URControl_att_SharedDSM.DAQ.iter, &Mu_min);
      URControl_att_DW.y_state_prev[0] = 0.0;
      URControl_att_DW.y_state_prev[1] = 0.0;
      URControl_att_DW.y_state_prev[2] = 0.0;
      URControl_att_DW.y_state_prev[3] = 0.0;
    } else {
      URControl_a_controlAllocQPQuick(M_uvr[0], M_uvr[1], Mv_max, *rtu_Ftot_ref,
        rtb_BusConversion_InsertedFor_a.FMax,
        rtb_BusConversion_InsertedFor_a.FMin, URControlParams.rate_MuGain,
        URControlParams.rate_MvGain, Mu_max, URControlParams.rate_FGain,
        URControlParams.rate_FtotGain, URControl_att_DW.y_state_prev,
        &URControl_att_ConstP.controlallocator_par, URControlParams.rate_maxIter,
        dw_lin_min, &URControl_att_SharedDSM.DAQ.iter, &Mu_min);
    }

    Mu_min_0 = (Mu_min != 0.0);
    if (Mu_min_0) {
      URControl_att_DW.Fset_prev[0] = dw_lin_min[0];
    } else {
      URControl_att_DW.Fset_prev[0] *= 0.99;
    }

    if (URControl_att_DW.Fset_prev[0] > 0.0) {
      rty_wRotorSet[0] = URControl_att_DW.Fset_prev[0];
    } else {
      rty_wRotorSet[0] = 0.0;
    }

    rty_wRotorSet[0] /= URControlParams.k0;
    if (Mu_min_0) {
      URControl_att_DW.Fset_prev[1] = dw_lin_min[1];
    } else {
      URControl_att_DW.Fset_prev[1] *= 0.99;
    }

    if (URControl_att_DW.Fset_prev[1] > 0.0) {
      rty_wRotorSet[1] = URControl_att_DW.Fset_prev[1];
    } else {
      rty_wRotorSet[1] = 0.0;
    }

    rty_wRotorSet[1] /= URControlParams.k0;
    if (Mu_min_0) {
      URControl_att_DW.Fset_prev[2] = dw_lin_min[2];
    } else {
      URControl_att_DW.Fset_prev[2] *= 0.99;
    }

    if (URControl_att_DW.Fset_prev[2] > 0.0) {
      rty_wRotorSet[2] = URControl_att_DW.Fset_prev[2];
    } else {
      rty_wRotorSet[2] = 0.0;
    }

    rty_wRotorSet[2] /= URControlParams.k0;
    if (Mu_min_0) {
      URControl_att_DW.Fset_prev[3] = dw_lin_min[3];
    } else {
      URControl_att_DW.Fset_prev[3] *= 0.99;
    }

    if (URControl_att_DW.Fset_prev[3] > 0.0) {
      rty_wRotorSet[3] = URControl_att_DW.Fset_prev[3];
    } else {
      rty_wRotorSet[3] = 0.0;
    }

    rty_wRotorSet[3] /= URControlParams.k0;
    sqrt_t6kvbcYg(rty_wRotorSet);
    URControl_att_DW.M_uvr_set[0] = (dw_lin_min[3] - dw_lin_min[1]) *
      URControlParams.s;
    URControl_att_DW.M_uvr_set[1] = (dw_lin_min[0] - dw_lin_min[2]) *
      URControlParams.s;
    URControl_att_DW.M_uvr_set[2] = (((dw_lin_min[0] - dw_lin_min[1]) +
      dw_lin_min[2]) - dw_lin_min[3]) * URControlParams.t0 / URControlParams.k0;
    URControl_att_SharedDSM.DAQ.optimal = Mu_min;
    URControl_att_SharedDSM.DAQ.M_uvr_des[0] = M_uvr[0];
    URControl_att_SharedDSM.DAQ.M_uvr_set[0] = URControl_att_DW.M_uvr_set[0];
    URControl_att_SharedDSM.DAQ.M_uvr_des[1] = M_uvr[1];
    URControl_att_SharedDSM.DAQ.M_uvr_set[1] = URControl_att_DW.M_uvr_set[1];
    URControl_att_SharedDSM.DAQ.M_uvr_des[2] = Mv_max;
    URControl_att_SharedDSM.DAQ.M_uvr_set[2] = URControl_att_DW.M_uvr_set[2];
    URControl_att_SharedDSM.DAQ.Ftot_set = sum_WaUbR9ig(dw_lin_min);
  } else {
    if (URControlParams.rate_mode == 3.0) {
      URControl_att_DW.omegaDot.filterHandle.filterT =
        URControlParams.rate_INDI_omegaDotFilterT;
      URContr_SimpleDerivative_update(&URControl_att_DW.omegaDot,
        rtb_BusConversion_InsertedFor_a.omegaUV, 0.002);
      URControl_att_DW.accZFilt.filterT = URControlParams.rate_INDI_accZFilterT;
      URControl_att_DW.accZFilt.value = (1.0 - URControl_att_DW.accZFilt.filterT)
        * rtu_state_acc[2] + URControl_att_DW.accZFilt.value *
        URControl_att_DW.accZFilt.filterT;
      Mu_min = URControl_att_DW.accZFilt.value;
      Mv_max = URControl_att_DW.accZFilt.maxLim;
      s = URControl_att_DW.accZFilt.minLim;
      if ((Mu_min < Mv_max) || rtIsNaN(Mv_max)) {
        Mv_max = Mu_min;
      }

      if ((Mv_max > s) || rtIsNaN(s)) {
        URControl_att_DW.accZFilt.value = Mv_max;
      } else {
        URControl_att_DW.accZFilt.value = s;
      }

      Mu_min = -URControl_att_DW.omegaDot.derValue[0];
      Mv_max = -URControl_att_DW.omegaDot.derValue[1];
      s = -URControl_att_DW.omegaDot.derValue[2];
      rtb_uv_prec_idx_1 = -URControl_att_DW.accZFilt.value;
      Mu_min += (gain - rtu_state_omegafUV[0]) *
        URControlParams.rate_INDI_rateDotKp[0];
      if (!(Mu_min < 100.0)) {
        Mu_min = 100.0;
      }

      if (Mu_min > -100.0) {
        b_z1[0] = Mu_min;
      } else {
        b_z1[0] = -100.0;
      }

      Mu_min = (Mv_min - rtu_state_omegafUV[1]) *
        URControlParams.rate_INDI_rateDotKp[1] + Mv_max;
      if (!(Mu_min < 100.0)) {
        Mu_min = 100.0;
      }

      if (Mu_min > -100.0) {
        b_z1[1] = Mu_min;
      } else {
        b_z1[1] = -100.0;
      }

      Mu_min = (*rtu_r_cmd - rtu_state_omegafUV[2]) *
        URControlParams.rate_INDI_rateDotKp[2] + s;
      if (!(Mu_min < 50.0)) {
        Mu_min = 50.0;
      }

      if (Mu_min > -50.0) {
        b_z1[2] = Mu_min;
      } else {
        b_z1[2] = -50.0;
      }

      Mu_min = -*rtu_Ftot_ref / URControlParams.mass + rtb_uv_prec_idx_1;
      if (!(Mu_min < 20.0)) {
        Mu_min = 20.0;
      }

      if (Mu_min > -20.0) {
        b_z1[3] = Mu_min;
      } else {
        b_z1[3] = -20.0;
      }

      abs_PbMH4joa(b_z1, dw_lin_max);
      Mv_max = dw_lin_max[0] / URControlParams.rate_QPINDI_cutoff[0];
      if (Mv_max < 1.0) {
        z1_0 = Mv_max;
      } else {
        z1_0 = 1.0;
      }

      Mv_max = rtu_state_wRotor[0] + URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < Mv_max) || rtIsNaN(Mv_max)) {
        wMax[0] = 1200.0;
      } else {
        wMax[0] = Mv_max;
      }

      Mv_max = rtu_state_wRotor[0] - URControlParams.rate_QPINDI_dwMax;
      if ((300.0 > Mv_max) || rtIsNaN(Mv_max)) {
        Mv_min = 300.0;
      } else {
        Mv_min = Mv_max;
      }

      Mu_min_0 = rtIsNaN(URControlParams.rate_QPINDI_minGain);
      if ((!(z1_0 > URControlParams.rate_QPINDI_minGain)) && (!Mu_min_0)) {
        z1_0 = URControlParams.rate_QPINDI_minGain;
      }

      inp[0] = z1_0 * b_z1[0];
      Mv_max = dw_lin_max[1] / URControlParams.rate_QPINDI_cutoff[1];
      if (Mv_max < 1.0) {
        z1_0 = Mv_max;
      } else {
        z1_0 = 1.0;
      }

      Mv_max = rtu_state_wRotor[1] + URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < Mv_max) || rtIsNaN(Mv_max)) {
        wMax[1] = 1200.0;
      } else {
        wMax[1] = Mv_max;
      }

      Mv_max = rtu_state_wRotor[1] - URControlParams.rate_QPINDI_dwMax;
      if ((300.0 > Mv_max) || rtIsNaN(Mv_max)) {
        gain = 300.0;
      } else {
        gain = Mv_max;
      }

      if ((!(z1_0 > URControlParams.rate_QPINDI_minGain)) && (!Mu_min_0)) {
        z1_0 = URControlParams.rate_QPINDI_minGain;
      }

      inp[1] = z1_0 * b_z1[1];
      Mv_max = dw_lin_max[2] / URControlParams.rate_QPINDI_cutoff[2];
      if (Mv_max < 1.0) {
        z1_0 = Mv_max;
      } else {
        z1_0 = 1.0;
      }

      Mv_max = rtu_state_wRotor[2] + URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < Mv_max) || rtIsNaN(Mv_max)) {
        wMax[2] = 1200.0;
      } else {
        wMax[2] = Mv_max;
      }

      Mv_max = rtu_state_wRotor[2] - URControlParams.rate_QPINDI_dwMax;
      if ((300.0 > Mv_max) || rtIsNaN(Mv_max)) {
        s = 300.0;
      } else {
        s = Mv_max;
      }

      if ((!(z1_0 > URControlParams.rate_QPINDI_minGain)) && (!Mu_min_0)) {
        z1_0 = URControlParams.rate_QPINDI_minGain;
      }

      inp[2] = z1_0 * b_z1[2];
      Mv_max = dw_lin_max[3] / URControlParams.rate_QPINDI_cutoff[3];
      if (Mv_max < 1.0) {
        z1_0 = Mv_max;
      } else {
        z1_0 = 1.0;
      }

      if ((!(z1_0 > URControlParams.rate_QPINDI_minGain)) && (!Mu_min_0)) {
        z1_0 = URControlParams.rate_QPINDI_minGain;
      }

      Mu_min = z1_0 * b_z1[3];
      Mv_max = rtu_state_wRotor[3] + URControlParams.rate_QPINDI_dwMax;
      if ((1200.0 < Mv_max) || rtIsNaN(Mv_max)) {
        wMax[3] = 1200.0;
      } else {
        wMax[3] = Mv_max;
      }

      Mv_max = rtu_state_wRotor[3] - URControlParams.rate_QPINDI_dwMax;
      inp[3] = Mu_min;
      if (*rtu_state_fail_id != 0.0) {
        wMax[static_cast<int32_T>(*rtu_state_fail_id) - 1] = 300.0;
      }

      rtb_uv_prec_idx_1 = wMax[0] / 100.0;
      z1_0 = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      rtb_uv_prec_idx_1 = rtu_state_wRotor[0] / 100.0;
      dw_lin_max_tmp = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      dw_lin_max[0] = z1_0 - dw_lin_max_tmp;
      z1_0 = Mv_min / 100.0;
      tmp_0[0] = 150;
      tmp_0[1] = 150;
      tmp_0[2] = -100;
      tmp_0[3] = 5;
      wMax[0] = rtb_uv_prec_idx_1;
      dw_lin_min[0] = z1_0 * z1_0 - dw_lin_max_tmp;
      rtb_uv_prec_idx_1 = wMax[1] / 100.0;
      z1_0 = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      rtb_uv_prec_idx_1 = rtu_state_wRotor[1] / 100.0;
      dw_lin_max_tmp = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      dw_lin_max[1] = z1_0 - dw_lin_max_tmp;
      z1_0 = gain / 100.0;
      tmp_0[4] = 150;
      tmp_0[5] = 150;
      tmp_0[6] = -100;
      tmp_0[7] = 5;
      wMax[1] = rtb_uv_prec_idx_1;
      dw_lin_min[1] = z1_0 * z1_0 - dw_lin_max_tmp;
      rtb_uv_prec_idx_1 = wMax[2] / 100.0;
      z1_0 = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      rtb_uv_prec_idx_1 = rtu_state_wRotor[2] / 100.0;
      dw_lin_max_tmp = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      dw_lin_max[2] = z1_0 - dw_lin_max_tmp;
      z1_0 = s / 100.0;
      tmp_0[8] = 150;
      tmp_0[9] = 150;
      tmp_0[10] = -100;
      tmp_0[11] = 5;
      wMax[2] = rtb_uv_prec_idx_1;
      dw_lin_min[2] = z1_0 * z1_0 - dw_lin_max_tmp;
      rtb_uv_prec_idx_1 = wMax[3] / 100.0;
      z1_0 = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      rtb_uv_prec_idx_1 = rtu_state_wRotor[3] / 100.0;
      dw_lin_max_tmp = rtb_uv_prec_idx_1 * rtb_uv_prec_idx_1;
      dw_lin_max[3] = z1_0 - dw_lin_max_tmp;
      if ((300.0 > Mv_max) || rtIsNaN(Mv_max)) {
        Mv_max = 300.0;
      }

      z1_0 = Mv_max / 100.0;
      tmp_0[12] = 150;
      tmp_0[13] = 150;
      tmp_0[14] = -100;
      tmp_0[15] = 5;
      dw_lin_min[3] = z1_0 * z1_0 - dw_lin_max_tmp;
      for (r1 = 0; r1 < 16; r1++) {
        G[r1] = URControl_att_ConstP.controlallocator_par.URC.rate_G1_unit[r1] *
          static_cast<real_T>(tmp_0[r1]) * 0.01;
        K[r1] = URControlParams.rate_QPINDI_K[r1];
      }

      K[10] = Mu_max / 100.0;
      pinv_sd18IsCR(G, a);
      for (r1 = 0; r1 < 4; r1++) {
        URControl_att_DW.y_state_prev[r1] = 0.0;
        URControl_att_DW.y_state_prev[r1] += a[r1] * inp[0];
        URControl_att_DW.y_state_prev[r1] += a[r1 + 4] * inp[1];
        URControl_att_DW.y_state_prev[r1] += a[r1 + 8] * inp[2];
        URControl_att_DW.y_state_prev[r1] += a[r1 + 12] * Mu_min;
        URControl_att_DW.y_state_prev[r1] = (URControl_att_DW.y_state_prev[r1] >
          dw_lin_max[r1]) - (URControl_att_DW.y_state_prev[r1] < dw_lin_min[r1]);
      }

      URControl_att_QPINDI(inp, G, K, URControlParams.rate_QPINDI_K2, dw_lin_min,
                           dw_lin_max, URControl_att_DW.y_state_prev,
                           URControlParams.rate_maxIter, b_z1,
                           &URControl_att_SharedDSM.DAQ.iter, &Mu_max);
      if (Mu_max != 0.0) {
        z1_0 = wMax[0] * wMax[0] + b_z1[0];
        if (z1_0 > 0.0) {
          rty_wRotorSet[0] = z1_0;
        } else {
          rty_wRotorSet[0] = 0.0;
        }

        rty_wRotorSet[0] = std::sqrt(rty_wRotorSet[0]);
        rty_wRotorSet[0] *= 100.0;
        z1_0 = wMax[1] * wMax[1] + b_z1[1];
        if (z1_0 > 0.0) {
          rty_wRotorSet[1] = z1_0;
        } else {
          rty_wRotorSet[1] = 0.0;
        }

        rty_wRotorSet[1] = std::sqrt(rty_wRotorSet[1]);
        rty_wRotorSet[1] *= 100.0;
        z1_0 = wMax[2] * wMax[2] + b_z1[2];
        if (z1_0 > 0.0) {
          rty_wRotorSet[2] = z1_0;
        } else {
          rty_wRotorSet[2] = 0.0;
        }

        rty_wRotorSet[2] = std::sqrt(rty_wRotorSet[2]);
        rty_wRotorSet[2] *= 100.0;
        z1_0 = dw_lin_max_tmp + b_z1[3];
        if (z1_0 > 0.0) {
          rty_wRotorSet[3] = z1_0;
        } else {
          rty_wRotorSet[3] = 0.0;
        }

        rty_wRotorSet[3] = std::sqrt(rty_wRotorSet[3]);
        rty_wRotorSet[3] *= 100.0;
      } else {
        rty_wRotorSet[0] = rtu_state_wRotor[0] * 0.99;
        rty_wRotorSet[1] = rtu_state_wRotor[1] * 0.99;
        rty_wRotorSet[2] = rtu_state_wRotor[2] * 0.99;
        rty_wRotorSet[3] = rtu_state_wRotor[3] * 0.99;
      }

      URControl_att_SharedDSM.DAQ.optimal = Mu_max;
      for (r1 = 0; r1 < 4; r1++) {
        URControl_att_SharedDSM.DAQ.inp[r1] = inp[r1];
        URControl_att_SharedDSM.DAQ.dw_lin[r1] = b_z1[r1];
        URControl_att_SharedDSM.DAQ.inpActual[r1] = 0.0;
        URControl_att_SharedDSM.DAQ.inpActual[r1] += G[r1] * b_z1[0];
        URControl_att_SharedDSM.DAQ.inpActual[r1] += G[r1 + 4] * b_z1[1];
        URControl_att_SharedDSM.DAQ.inpActual[r1] += G[r1 + 8] * b_z1[2];
        URControl_att_SharedDSM.DAQ.inpActual[r1] += G[r1 + 12] * b_z1[3];
      }
    }
  }

  if (rty_wRotorSet[0] < 1200.0) {
    z1_0 = rty_wRotorSet[0];
  } else {
    z1_0 = 1200.0;
  }

  if (z1_0 > 0.0) {
    rty_wRotorSet[0] = z1_0;
  } else {
    rty_wRotorSet[0] = 0.0;
  }

  if (rty_wRotorSet[1] < 1200.0) {
    z1_0 = rty_wRotorSet[1];
  } else {
    z1_0 = 1200.0;
  }

  if (z1_0 > 0.0) {
    rty_wRotorSet[1] = z1_0;
  } else {
    rty_wRotorSet[1] = 0.0;
  }

  if (rty_wRotorSet[2] < 1200.0) {
    z1_0 = rty_wRotorSet[2];
  } else {
    z1_0 = 1200.0;
  }

  if (z1_0 > 0.0) {
    rty_wRotorSet[2] = z1_0;
  } else {
    rty_wRotorSet[2] = 0.0;
  }

  if (rty_wRotorSet[3] < 1200.0) {
    z1_0 = rty_wRotorSet[3];
  } else {
    z1_0 = 1200.0;
  }

  if (z1_0 > 0.0) {
    rty_wRotorSet[3] = z1_0;
  } else {
    rty_wRotorSet[3] = 0.0;
  }

  URControl_att_SharedDSM.DAQ.wRotorSet[0] = rty_wRotorSet[0];
  URControl_att_SharedDSM.DAQ.wRotorSet[1] = rty_wRotorSet[1];
  URControl_att_SharedDSM.DAQ.wRotorSet[2] = rty_wRotorSet[2];
  URControl_att_SharedDSM.DAQ.wRotorSet[3] = rty_wRotorSet[3];
  if (*rtu_state_fail_id_quick != 0.0) {
    rty_wRotorSet[static_cast<int32_T>(*rtu_state_fail_id_quick) - 1] =
      URpar_0->fail_wRot;
  }

  /* End of MATLAB Function: '<S2>/control allocator' */

  /* Update for DiscreteStateSpace: '<S1>/Discrete State-Space' */
  {
    real_T xnew[3];
    xnew[0] = (0.96)*URControl_att_DW.DiscreteStateSpace_DSTATE[0];
    xnew[0] += (0.04)*rtu_n_des[0];
    xnew[1] = (0.96)*URControl_att_DW.DiscreteStateSpace_DSTATE[1];
    xnew[1] += (0.04)*rtu_n_des[1];
    xnew[2] = (0.96)*URControl_att_DW.DiscreteStateSpace_DSTATE[2];
    xnew[2] += (0.04)*rtu_n_des[2];
    (void) memcpy(&URControl_att_DW.DiscreteStateSpace_DSTATE[0], xnew,
                  sizeof(real_T)*3);
  }

  /* Update for UnitDelay: '<S3>/UD' */
  URControl_att_DW.UD_DSTATE[0] = rtb_TSamp_idx_0;
  URControl_att_DW.UD_DSTATE[1] = rtb_TSamp_idx_1;
  URControl_att_DW.UD_DSTATE[2] = rtb_TSamp_idx_2;
}

/* Model initialize function */
void URControl_attModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* states (dwork) */
  (void) memset((void *)&URControl_att_DW, 0,
                sizeof(DW_URControl_att_T));
}

/* Constructor */
URControl_attModelClass::URControl_attModelClass()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
URControl_attModelClass::~URControl_attModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_URControl_att_T * URControl_attModelClass::getRTM()
{
  return (&URControl_att_M);
}

/* member function to initialize Real-Time model */
void URControl_attModelClass::initializeRTM()
{
  (void) memset((void *)((&URControl_att_M)), 0,
                sizeof(RT_MODEL_URControl_att_T));
}

/* member function to setup error status pointer */
void URControl_attModelClass::setErrorStatusPointer(const char_T
  **rt_errorStatus)
{
  rtmSetErrorStatusPointer((&URControl_att_M), rt_errorStatus);
}
