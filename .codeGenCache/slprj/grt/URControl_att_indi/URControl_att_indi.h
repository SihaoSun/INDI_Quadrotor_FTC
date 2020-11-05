/*
 * Code generation for system model 'URControl_att_indi'
 * For more details, see corresponding source file URControl_att_indi.c
 *
 */

#ifndef RTW_HEADER_URControl_att_indi_h_
#define RTW_HEADER_URControl_att_indi_h_
#include <cmath>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef URControl_att_indi_COMMON_INCLUDES_
# define URControl_att_indi_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* URControl_att_indi_COMMON_INCLUDES_ */

#include "URControl_att_indi_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include <string.h>
#include <stddef.h>
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'URControl_att_indi' */
typedef struct {
  real_T Probe[2];                     /* '<S13>/Probe' */
  real_T Probe_i[2];                   /* '<S21>/Probe' */
  real_T Probe_d[2];                   /* '<S17>/Probe' */
  real_T Probe_h[2];                   /* '<S44>/Probe' */
  real_T Probe_p[2];                   /* '<S32>/Probe' */
  real_T Probe_b[2];                   /* '<S36>/Probe' */
  real_T Probe_hn[2];                  /* '<S40>/Probe' */
} B_URControl_att_indi_T;

/* Block states (default storage) for model 'URControl_att_indi' */
typedef struct {
  real_T Integrator_DSTATE[3];         /* '<S16>/Integrator' */
  real_T UD_DSTATE[3];                 /* '<S2>/UD' */
  real_T Integrator_DSTATE_p;          /* '<S24>/Integrator' */
  real_T UD_DSTATE_c;                  /* '<S3>/UD' */
  real_T Integrator_DSTATE_e[2];       /* '<S20>/Integrator' */
  real_T UD_DSTATE_n[2];               /* '<S4>/UD' */
  real_T Integrator_DSTATE_i[3];       /* '<S47>/Integrator' */
  real_T Integrator_DSTATE_pv;         /* '<S35>/Integrator' */
  real_T Integrator_DSTATE_l[4];       /* '<S39>/Integrator' */
  real_T Integrator_DSTATE_k;          /* '<S43>/Integrator' */
  int8_T Integrator_PrevResetState;    /* '<S16>/Integrator' */
  int8_T Integrator_PrevResetState_f;  /* '<S24>/Integrator' */
  int8_T Integrator_PrevResetState_n;  /* '<S20>/Integrator' */
  int8_T Integrator_PrevResetState_h;  /* '<S47>/Integrator' */
  int8_T Integrator_PrevResetState_g;  /* '<S35>/Integrator' */
  int8_T Integrator_PrevResetState_d;  /* '<S39>/Integrator' */
  int8_T Integrator_PrevResetState_nd; /* '<S43>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S16>/Integrator' */
  uint8_T Integrator_IC_LOADING_e;     /* '<S24>/Integrator' */
  uint8_T Integrator_IC_LOADING_m;     /* '<S20>/Integrator' */
  uint8_T Integrator_IC_LOADING_mh;    /* '<S47>/Integrator' */
  uint8_T Integrator_IC_LOADING_k;     /* '<S35>/Integrator' */
  uint8_T Integrator_IC_LOADING_g;     /* '<S39>/Integrator' */
  uint8_T Integrator_IC_LOADING_p;     /* '<S43>/Integrator' */
} DW_URControl_att_indi_T;

/* data stores shared across model instances, for model 'URControl_att_indi' */
typedef struct {
  daqBus DAQ;                          /* '<S1>/Data Store Memory' */
} SharedDSM_URControl_att_indi_T;

/* Real-time Model Data Structure */
struct tag_RTM_URControl_att_indi_T {
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
                                            *   '<S1>/MATLAB Function'
                                            *   '<S1>/MATLAB Function6'
                                            *   '<S1>/pseudo_control_indi'
                                            *   '<S13>/Time constant'
                                            *   '<S17>/Time constant'
                                            *   '<S21>/Time constant'
                                            *   '<S32>/Time constant'
                                            *   '<S36>/Time constant'
                                            *   '<S40>/Time constant'
                                            *   '<S44>/Time constant'
                                            */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern boolean_T _URControl_att_indi_SharedDataInit_;/* synthesized block */

/* Class declaration for model URControl_att_indi */
class URControl_att_indiModelClass {
  /* public data and function members */
 public:
  /* model initialize function */
  void initialize();

  /* model step function */
  void step(const real_T rtu_state_acc[3], const real_T rtu_state_vel[3], const
            real_T rtu_state_pos[3], const real_T rtu_state_omegaf[3], const
            real_T rtu_state_att[3], const real_T rtu_state_wRotor[4], const
            real_T *rtu_state_fail_id, const real_T rtu_n_des[3], const real_T
            *rtu_r_cmd, const real_T *rtu_Ftot_ref, const real_T
            *rtu_input_zTarget, real_T rty_wRotorSet[4]);

  /* Initial conditions function */
  void init();

  /* Reset function */
  void reset();

  /* model start function */
  void start();

  /* Constructor */
  URControl_att_indiModelClass();

  /* Destructor */
  ~URControl_att_indiModelClass();

  /* Real-Time Model get method */
  RT_MODEL_URControl_att_indi_T * getRTM();

  /* member function to initialize Real-Time model */
  void initializeRTM();

  /*member function to setup error status pointer */
  void setErrorStatusPointer(const char_T **rt_errorStatus);

  /* private data and function members */
 private:
  /* Block signals */
  B_URControl_att_indi_T URControl_att_indi_B;

  /* Block states */
  DW_URControl_att_indi_T URControl_att_indi_DW;

  /* data stores shared across model instances */
  static SharedDSM_URControl_att_indi_T URControl_att_indi_SharedDSM;

  /* Real-Time Model */
  RT_MODEL_URControl_att_indi_T URControl_att_indi_M;
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
 * '<Root>' : 'URControl_att_indi'
 * '<S1>'   : 'URControl_att_indi/INDI_DRF'
 * '<S2>'   : 'URControl_att_indi/INDI_DRF/Discrete Derivative1'
 * '<S3>'   : 'URControl_att_indi/INDI_DRF/Discrete Derivative8'
 * '<S4>'   : 'URControl_att_indi/INDI_DRF/Discrete Derivative9'
 * '<S5>'   : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)1'
 * '<S6>'   : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)15'
 * '<S7>'   : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)9'
 * '<S8>'   : 'URControl_att_indi/INDI_DRF/MATLAB Function'
 * '<S9>'   : 'URControl_att_indi/INDI_DRF/MATLAB Function6'
 * '<S10>'  : 'URControl_att_indi/INDI_DRF/MATLAB Function8'
 * '<S11>'  : 'URControl_att_indi/INDI_DRF/Subsystem'
 * '<S12>'  : 'URControl_att_indi/INDI_DRF/pseudo_control_indi'
 * '<S13>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant'
 * '<S14>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
 * '<S15>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero'
 * '<S16>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'
 * '<S17>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)15/Enable//disable time constant'
 * '<S18>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)15/Integrator (Discrete or Continuous)'
 * '<S19>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)15/Enable//disable time constant/Compare To Zero'
 * '<S20>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)15/Integrator (Discrete or Continuous)/Discrete'
 * '<S21>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)9/Enable//disable time constant'
 * '<S22>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)9/Integrator (Discrete or Continuous)'
 * '<S23>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)9/Enable//disable time constant/Compare To Zero'
 * '<S24>'  : 'URControl_att_indi/INDI_DRF/Low-Pass Filter (Discrete or Continuous)9/Integrator (Discrete or Continuous)/Discrete'
 * '<S25>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)1'
 * '<S26>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)10'
 * '<S27>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)11'
 * '<S28>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)12'
 * '<S29>'  : 'URControl_att_indi/INDI_DRF/Subsystem/MATLAB Function1'
 * '<S30>'  : 'URControl_att_indi/INDI_DRF/Subsystem/MATLAB Function5'
 * '<S31>'  : 'URControl_att_indi/INDI_DRF/Subsystem/MATLAB Function7'
 * '<S32>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant'
 * '<S33>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
 * '<S34>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero'
 * '<S35>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'
 * '<S36>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)10/Enable//disable time constant'
 * '<S37>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)10/Integrator (Discrete or Continuous)'
 * '<S38>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)10/Enable//disable time constant/Compare To Zero'
 * '<S39>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)10/Integrator (Discrete or Continuous)/Discrete'
 * '<S40>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)11/Enable//disable time constant'
 * '<S41>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)11/Integrator (Discrete or Continuous)'
 * '<S42>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)11/Enable//disable time constant/Compare To Zero'
 * '<S43>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)11/Integrator (Discrete or Continuous)/Discrete'
 * '<S44>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)12/Enable//disable time constant'
 * '<S45>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)12/Integrator (Discrete or Continuous)'
 * '<S46>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)12/Enable//disable time constant/Compare To Zero'
 * '<S47>'  : 'URControl_att_indi/INDI_DRF/Subsystem/Low-Pass Filter (Discrete or Continuous)12/Integrator (Discrete or Continuous)/Discrete'
 */
#endif                                 /* RTW_HEADER_URControl_att_indi_h_ */
