/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/xgetrf_vu1x6Wed.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl_att_indi_simple".
 *
 * Model version              : 1.181
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Tue Jun 30 13:36:02 2020
 * Created for block: URControl_att_indi_simple
 */

#include "rtwtypes.h"
#include <cmath>
#include "xgetrf_vu1x6Wed.h"

/* Function for MATLAB Function: '<S5>/INDI' */
void xgetrf_vu1x6Wed(real_T A[16], int32_T ipiv[4], int32_T *info)
{
  int32_T j;
  int32_T c;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T k;
  int32_T iy;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  ipiv[3] = 4;
  *info = 0;
  for (j = 0; j < 3; j++) {
    c = j * 5;
    iy = 0;
    ix = c;
    smax = std::abs(A[c]);
    for (k = 2; k <= 4 - j; k++) {
      ix++;
      s = std::abs(A[ix]);
      if (s > smax) {
        iy = k - 1;
        smax = s;
      }
    }

    if (A[c + iy] != 0.0) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = iy + 1;
        smax = A[j];
        A[j] = A[iy];
        A[iy] = smax;
        ix = j + 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix += 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix += 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
      }

      iy = (c - j) + 4;
      for (ix = c + 1; ix < iy; ix++) {
        A[ix] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    iy = c + 5;
    ix = c + 4;
    for (k = 0; k <= 2 - j; k++) {
      smax = A[ix];
      if (A[ix] != 0.0) {
        c_ix = c + 1;
        d = (iy - j) + 3;
        for (ijA = iy; ijA < d; ijA++) {
          A[ijA] += A[c_ix] * -smax;
          c_ix++;
        }
      }

      ix += 4;
      iy += 4;
    }
  }

  if ((*info == 0) && (!(A[15] != 0.0))) {
    *info = 4;
  }
}
