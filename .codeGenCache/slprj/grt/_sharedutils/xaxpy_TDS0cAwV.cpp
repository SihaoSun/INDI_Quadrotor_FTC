/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xaxpy_TDS0cAwV.cpp
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
#include "xaxpy_TDS0cAwV.h"

/* Function for MATLAB Function: '<S2>/control allocator' */
void xaxpy_TDS0cAwV(int32_T n, real_T a, int32_T ix0, real_T y[16], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}
