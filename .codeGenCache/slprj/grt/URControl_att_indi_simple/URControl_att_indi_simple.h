/*
 * Code generation for system model 'URControl_att_indi_simple'
 * For more details, see corresponding source file URControl_att_indi_simple.c
 *
 */

#ifndef RTW_HEADER_URControl_att_indi_simple_h_
#define RTW_HEADER_URControl_att_indi_simple_h_
#include <string.h>
#include <cmath>
#include <math.h>
#include <stddef.h>
#ifndef URControl_att_indi_simple_COMMON_INCLUDES_
# define URControl_att_indi_simple_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                          /* URControl_att_indi_simple_COMMON_INCLUDES_ */

#include "URControl_att_indi_simple_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include <string.h>
#include <stddef.h>
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'URControl_att_indi_simple' */
typedef struct {
  real_T Probe[2];                     /* '<S13>/Probe' */
  real_T Probe_m[2];                   /* '<S17>/Probe' */
  real_T Probe_e[2];                   /* '<S21>/Probe' */
  real_T Probe_i[2];                   /* '<S29>/Probe' */
  real_T Probe_k[2];                   /* '<S25>/Probe' */
} B_URControl_att_indi_simple_T;

/* Block states (default storage) for model 'URControl_att_indi_simple' */
typedef struct {
  real_T DiscreteStateSpace_DSTATE[3]; /* '<Root>/Discrete State-Space' */
  real_T UD_DSTATE[3];                 /* '<S2>/UD' */
  real_T DiscreteStateSpace1_DSTATE[2];/* '<Root>/Discrete State-Space1' */
  real_T UD_DSTATE_p[2];               /* '<S3>/UD' */
  real_T Integrator_DSTATE;            /* '<S16>/Integrator' */
  real_T Integrator_DSTATE_p;          /* '<S20>/Integrator' */
  real_T Integrator_DSTATE_l;          /* '<S24>/Integrator' */
  real_T UD_DSTATE_d[3];               /* '<S6>/UD' */
  real_T Integrator_DSTATE_i[4];       /* '<S32>/Integrator' */
  real_T Integrator_DSTATE_pc;         /* '<S28>/Integrator' */
  real_T Memory_PreviousInput[4];      /* '<S5>/Memory' */
  int8_T Integrator_PrevResetState;    /* '<S16>/Integrator' */
  int8_T Integrator_PrevResetState_p;  /* '<S20>/Integrator' */
  int8_T Integrator_PrevResetState_k;  /* '<S24>/Integrator' */
  int8_T Integrator_PrevResetState_j;  /* '<S32>/Integrator' */
  int8_T Integrator_PrevResetState_b;  /* '<S28>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S16>/Integrator' */
  uint8_T Integrator_IC_LOADING_f;     /* '<S20>/Integrator' */
  uint8_T Integrator_IC_LOADING_k;     /* '<S24>/Integrator' */
  uint8_T Integrator_IC_LOADING_d;     /* '<S32>/Integrator' */
  uint8_T Integrator_IC_LOADING_f2;    /* '<S28>/Integrator' */
} DW_URControl_att_indi_simple_T;

/* Real-time Model Data Structure */
struct tag_RTM_URControl_att_indi_si_T {
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
                                            *   '<Root>/MATLAB Function'
                                            *   '<S5>/INDI'
                                            */

/* Class declaration for model URControl_att_indi_simple */
class URControl_att_indi_simpleModelClass {
  /* public data and function members */
 public:
  /* model initialize function */
  void initialize();

  /* model step function */
  void step(const real_T rtu_state_acc[3], const real_T rtu_state_omega[3],
            const real_T rtu_state_att[3], const real_T rtu_state_wRotor[4],
            const real_T *rtu_state_fail_id, const real_T rtu_n_des[3], const
            real_T *rtu_r_cmd, const real_T *rtu_Ftot_ref, real_T rty_wRotorSet
            [4]);

  /* Initial conditions function */
  void init();

  /* Reset function */
  void reset();

  /* model start function */
  void start();

  /* Constructor */
  URControl_att_indi_simpleModelClass();

  /* Destructor */
  ~URControl_att_indi_simpleModelClass();

  /* Real-Time Model get method */
  RT_MODEL_URControl_att_indi_s_T * getRTM();

  /* member function to initialize Real-Time model */
  void initializeRTM();

  /*member function to setup error status pointer */
  void setErrorStatusPointer(const char_T **rt_errorStatus);

  /* private data and function members */
 private:
  /* Block signals */
  B_URControl_att_indi_simple_T URControl_att_indi_simple_B;

  /* Block states */
  DW_URControl_att_indi_simple_T URControl_att_indi_simple_DW;

  /* Real-Time Model */
  RT_MODEL_URControl_att_indi_s_T URControl_att_indi_simple_M;
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
 * '<Root>' : 'URControl_att_indi_simple'
 * '<S1>'   : 'URControl_att_indi_simple/Attitude Controller'
 * '<S2>'   : 'URControl_att_indi_simple/Discrete Derivative'
 * '<S3>'   : 'URControl_att_indi_simple/Discrete Derivative1'
 * '<S4>'   : 'URControl_att_indi_simple/MATLAB Function'
 * '<S5>'   : 'URControl_att_indi_simple/Subsystem'
 * '<S6>'   : 'URControl_att_indi_simple/Subsystem/Discrete Derivative2'
 * '<S7>'   : 'URControl_att_indi_simple/Subsystem/INDI'
 * '<S8>'   : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)'
 * '<S9>'   : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)1'
 * '<S10>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)2'
 * '<S11>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)3'
 * '<S12>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)4'
 * '<S13>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S14>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S15>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S16>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S17>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant'
 * '<S18>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
 * '<S19>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero'
 * '<S20>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'
 * '<S21>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)2/Enable//disable time constant'
 * '<S22>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)2/Integrator (Discrete or Continuous)'
 * '<S23>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)2/Enable//disable time constant/Compare To Zero'
 * '<S24>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)2/Integrator (Discrete or Continuous)/Discrete'
 * '<S25>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant'
 * '<S26>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)'
 * '<S27>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant/Compare To Zero'
 * '<S28>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)/Discrete'
 * '<S29>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant'
 * '<S30>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)'
 * '<S31>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant/Compare To Zero'
 * '<S32>'  : 'URControl_att_indi_simple/Subsystem/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)/Discrete'
 */
#endif                             /* RTW_HEADER_URControl_att_indi_simple_h_ */
