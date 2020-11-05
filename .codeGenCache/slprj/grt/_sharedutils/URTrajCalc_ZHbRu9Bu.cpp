/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/URTrajCalc_ZHbRu9Bu.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl_att".
 *
 * Model version              : 1.32
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Dec 19 17:18:07 2019
 * Created for block: URControl_att
 */

#include "rtwtypes.h"
#include <cmath>
#include "rt_nonfinite.h"
#include "URTrajCalc_ZHbRu9Bu.h"

/* Function for MATLAB Function: '<S1>/attitude controller' */
real_T URTrajCalc_ZHbRu9Bu(real_T theta0, real_T w0, real_T accMax)
{
  real_T t;
  real_T A;
  real_T B;
  real_T D;
  real_T u0_tmp;
  A = accMax / 4.0;
  B = w0 / 2.0;
  D = w0 / (2.0 * accMax);
  D = B * B - ((-theta0 - w0 * w0 / (2.0 * accMax)) + D * D) * (4.0 * A);
  if (D > 0.0) {
    u0_tmp = std::sqrt(D);
    D = (-B - u0_tmp) / (2.0 * A);
    t = (-B + u0_tmp) / (2.0 * A);
    if ((D > t) || rtIsNaN(t)) {
      t = D;
    }
  } else {
    t = -1.0;
  }

  return t;
}
