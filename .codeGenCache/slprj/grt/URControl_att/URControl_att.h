/*
 * Code generation for system model 'URControl_att'
 * For more details, see corresponding source file URControl_att.c
 *
 */

#ifndef RTW_HEADER_URControl_att_h_
#define RTW_HEADER_URControl_att_h_
#include <string.h>
#include <cmath>
#include <stddef.h>
#ifndef URControl_att_COMMON_INCLUDES_
# define URControl_att_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* URControl_att_COMMON_INCLUDES_ */

#include "URControl_att_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include <string.h>
#include <stddef.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"

/* Block states (default storage) for model 'URControl_att' */
typedef struct {
  SimpleDerivative_URControl_at_T omegaDot;/* '<S2>/control allocator' */
  SimpleDerivative_URControl_at_T errorD;/* '<S2>/control allocator' */
  SimpleDerivative_URControl_at_T uvrDer;/* '<S2>/control allocator' */
  SimpleDerivative_URControl_at_T omegaDot_b;/* '<S2>/control allocator' */
  LPFilter_2_URControl_att_T wRotorFilter;/* '<S2>/control allocator' */
  LPFilter_1_URControl_att_T accZFilt; /* '<S2>/control allocator' */
  real_T DiscreteStateSpace_DSTATE[3]; /* '<S1>/Discrete State-Space' */
  real_T UD_DSTATE[3];                 /* '<S3>/UD' */
  real_T y_state_prev[4];              /* '<S2>/control allocator' */
  real_T Fset_prev[4];                 /* '<S2>/control allocator' */
  real_T M_uvr_set[3];                 /* '<S2>/control allocator' */
  real_T du_last[4];                   /* '<S2>/control allocator' */
  real_T errorInt[3];                  /* '<S2>/control allocator' */
  real_T x_last[5];                    /* '<S2>/control allocator' */
  boolean_T omegaDot_not_empty;        /* '<S2>/control allocator' */
  boolean_T accZFilt_not_empty;        /* '<S2>/control allocator' */
  boolean_T errorD_not_empty;          /* '<S2>/control allocator' */
  boolean_T uvrDer_not_empty;          /* '<S2>/control allocator' */
  boolean_T omegaDot_not_empty_m;      /* '<S2>/control allocator' */
  boolean_T wRotorFilter_not_empty;    /* '<S2>/control allocator' */
  boolean_T x_last_not_empty;          /* '<S2>/control allocator' */
} DW_URControl_att_T;

/* data stores shared across model instances, for model 'URControl_att' */
typedef struct {
  daqBus DAQ;                          /* '<Root>/Data Store Memory' */
} SharedDSM_URControl_att_T;

/* Real-time Model Data Structure */
struct tag_RTM_URControl_att_T {
  const char_T **errorStatus;
};

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern URControlParamsType URControlParams;/* Variable: URControlParams
                                            * Referenced by:
                                            *   '<S1>/Precession'
                                            *   '<S1>/attitude controller'
                                            *   '<S1>/yawRateControl'
                                            *   '<S2>/control allocator'
                                            */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern boolean_T _URControl_att_SharedDataInit_;/* synthesized block */

/* Class declaration for model URControl_att */
class URControl_attModelClass {
  /* public data and function members */
 public:
  /* model initialize function */
  void initialize();

  /* model step function */
  void step(const real_T rtu_state_acc[3], const real_T rtu_state_accf[3], const
            real_T rtu_state_vel[3], const real_T rtu_state_velf[3], const
            real_T rtu_state_velB[3], const real_T rtu_state_pos[3], const
            real_T rtu_state_posf[3], const real_T rtu_state_omega[3], const
            real_T rtu_state_omegaf[3], const real_T rtu_state_att[3], const
            real_T rtu_state_n[3], const real_T rtu_state_wRotor[4], const
            real_T rtu_state_omegaUV[3], const real_T rtu_state_omegafUV[3],
            const real_T rtu_state_FMax[4], const real_T rtu_state_FMin[4],
            const real_T *rtu_state_fail_id, const real_T
            *rtu_state_fail_id_quick, const real_T rtu_state_uvDot_max[2], const
            real_T rtu_state_uvDot_min[2], const real_T rtu_state_uv_max[2],
            const real_T rtu_state_uv_min[2], const real_T rtu_state_vel_ref[3],
            const real_T rtu_state_pos_ref[3], const real_T rtu_n_des[3], const
            real_T *rtu_r_cmd, const real_T *rtu_Ftot_ref, real_T rty_wRotorSet
            [4]);

  /* Initial conditions function */
  void init();

  /* Reset function */
  void reset();

  /* model start function */
  void start();

  /* Constructor */
  URControl_attModelClass();

  /* Destructor */
  ~URControl_attModelClass();

  /* Real-Time Model get method */
  RT_MODEL_URControl_att_T * getRTM();

  /* member function to initialize Real-Time model */
  void initializeRTM();

  /*member function to setup error status pointer */
  void setErrorStatusPointer(const char_T **rt_errorStatus);

  /* private data and function members */
 private:
  /* Block states */
  DW_URControl_att_T URControl_att_DW;

  /* data stores shared across model instances */
  static SharedDSM_URControl_att_T URControl_att_SharedDSM;

  /* Real-Time Model */
  RT_MODEL_URControl_att_T URControl_att_M;

  /* private member function(s) for subsystem '<Root>/TmpModelReferenceSubsystem'*/
  void URControl_att_URAngleControl(daqBus *daq, const real_T nd_i[3], const
    real_T primAxis[3], const stateBus *state, const
    struct_YhmxgXLVjzlogleEk1YuME *b_par, const URControlParamsType *URpar,
    real_T uv_attCtrl[2]);
  LPFilter_1_URControl_att_T *URControl_att_LPFilter_LPFilter
    (LPFilter_1_URControl_att_T *obj, real_T filterT);
  SimpleDerivative_URControl_at_T *SimpleDerivative_SimpleDerivati
    (SimpleDerivative_URControl_at_T *obj, real_T filterT, const real_T
     initValue[3], real_T maxLim, real_T minLim);
  void URContr_SimpleDerivative_update(SimpleDerivative_URControl_at_T *obj,
    const real_T newValue[3], real_T dt);
  void URControl_att_PIDMomentGen(const real_T state_omegaUV[3], const real_T
    state_omegafUV[3], daqBus *daq, const real_T uvr_des[3], real_T URpar_Iz,
    real_T URpar_Iu, real_T URpar_Iv, const real_T URpar_rate_MPID_rateDotKp[3],
    const real_T URpar_rate_MPID_rateDotKi[3], const real_T
    URpar_rate_MPID_rateDotKd[3], real_T URpar_rate_MPID_derFilterT, real_T
    URpar_rate_MPID_uvrdesderFilter, real_T URpar_rate_MPID_maxInt, real_T
    URpar_rate_MPID_precGain, const struct_YhmxgXLVjzlogleEk1YuME *b_par, real_T
    M_uvr[3]);
  void URControl_att_INDIMomentGen(const real_T state_wRotor[4], const real_T
    state_omegaUV[3], const real_T state_omegafUV[3], daqBus *daq, const real_T
    uvr_des[3], real_T URpar_k0, real_T URpar_t0, real_T URpar_s, real_T
    URpar_est_omegaFilterT, const real_T URpar_rate_MINDI_rateDotKp[3], real_T
    URpar_rate_MINDI_derFilterT, const real_T URpar_rate_MINDI_MKp[3], const
    struct_YhmxgXLVjzlogleEk1YuME *b_par, real_T M_uvr[3]);
  real_T URControl_att_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
  int32_T URControl_att_ixamax(int32_T n, const real_T x_data[], int32_T ix0);
  void URControl_att_xswap(int32_T n, real_T x_data[], int32_T ix0, int32_T iy0);
  real_T URControl_att_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
  void URControl_att_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
    real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
  void URControl_att_xgeqp3(real_T A_data[], int32_T A_size[2], real_T tau_data[],
    int32_T *tau_size, int32_T jpvt_data[], int32_T jpvt_size[2]);
  void URControl_att_qrsolve(const real_T A_data[], const int32_T A_size[2],
    const real_T B_data[], const int32_T *B_size, real_T Y_data[], int32_T
    *Y_size);
  void URControl_att_xgetrf(int32_T m, int32_T n, real_T A_data[], int32_T
    A_size[2], int32_T lda, int32_T ipiv_data[], int32_T ipiv_size[2], int32_T
    *info);
  void URControl_att_mldivide(const real_T A_data[], const int32_T A_size[2],
    const real_T B_data[], const int32_T *B_size, real_T Y_data[], int32_T
    *Y_size);
  void URControl_a_controlAllocQPQuick(real_T refStruct_MuRef, real_T
    refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef, const
    real_T FMax[4], const real_T FMin[4], real_T gainStruct_MuGain, real_T
    gainStruct_MvGain, real_T gainStruct_MzGain, real_T gainStruct_FGain, real_T
    gainStruct_FtotGain, real_T y_state_init[4], const
    struct_YhmxgXLVjzlogleEk1YuME *b_par, real_T URpar_rate_maxIter, real_T x[4],
    real_T *iterSteps, real_T *optimal);
  void URControl_att_QP_activeSet(const real_T H[25], const real_T c[5], const
    real_T A[50], const real_T b[10], real_T x0[5], real_T maxItr, real_T
    y_state[10], real_T *iter, real_T *optimal);
  void URContr_controlAllocQPpredictor(real_T refStruct_MuRef, real_T
    refStruct_MvRef, real_T refStruct_MzRef, real_T refStruct_FtotRef, const
    real_T state_omegaf[3], const real_T state_FMax[4], const real_T state_FMin
    [4], real_T state_fail_id, real_T gainStruct_MuGain, real_T
    gainStruct_MvGain, real_T gainStruct_MzGain, real_T gainStruct_FtotGain,
    const struct_YhmxgXLVjzlogleEk1YuME *b_par, const URControlParamsType *URpar,
    real_T output[4], real_T *iter, real_T *optimal);
  void URControl_att_URINDI_allocator(real_T act_fail_id, const real_T
    Omega_f_dot[3], real_T accel_z_f, const real_T v[4], real_T G[32], const
    real_T w_f[4], const struct_YhmxgXLVjzlogleEk1YuME *b_par, real_T w_cmd[4]);
  void URControl_att_QPINDI(const real_T inp[4], const real_T G[16], const
    real_T K[16], const real_T K2[16], const real_T lowBound[4], const real_T
    highBound[4], real_T y_state_init[4], real_T URpar_rate_maxIter, real_T x[4],
    real_T *iterSteps, real_T *optimal);
};

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'URControl_att'
 * '<S1>'   : 'URControl_att/attitude controlller'
 * '<S2>'   : 'URControl_att/rate controller'
 * '<S3>'   : 'URControl_att/attitude controlller/Discrete Derivative'
 * '<S4>'   : 'URControl_att/attitude controlller/Precession'
 * '<S5>'   : 'URControl_att/attitude controlller/attitude controller'
 * '<S6>'   : 'URControl_att/attitude controlller/yawRateControl'
 * '<S7>'   : 'URControl_att/rate controller/control allocator'
 */
#endif                                 /* RTW_HEADER_URControl_att_h_ */
