/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/mrdivide_helper_D6MymrEr.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "URControl".
 *
 * Model version              : 1.1885
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Thu Dec 19 17:18:42 2019
 * Created for block: URControl
 */

#include "rtwtypes.h"
#include <cmath>
#include <string.h>
#include "mrdivide_helper_D6MymrEr.h"

/* Function for MATLAB Function: '<S30>/Correct' */
void mrdivide_helper_D6MymrEr(real_T A[70], const real_T B[49])
{
  real_T b_A[49];
  int8_T ipiv[7];
  int32_T j;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T iy;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T jBcol;
  int32_T kBcol;
  memcpy(&b_A[0], &B[0], 49U * sizeof(real_T));
  for (d = 0; d < 7; d++) {
    ipiv[d] = static_cast<int8_T>((1 + d));
  }

  for (j = 0; j < 6; j++) {
    jBcol = j << 3;
    iy = 0;
    ix = jBcol;
    smax = std::abs(b_A[jBcol]);
    for (kBcol = 2; kBcol <= 7 - j; kBcol++) {
      ix++;
      s = std::abs(b_A[ix]);
      if (s > smax) {
        iy = kBcol - 1;
        smax = s;
      }
    }

    if (b_A[jBcol + iy] != 0.0) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = static_cast<int8_T>((iy + 1));
        ix = j;
        for (kBcol = 0; kBcol < 7; kBcol++) {
          smax = b_A[ix];
          b_A[ix] = b_A[iy];
          b_A[iy] = smax;
          ix += 7;
          iy += 7;
        }
      }

      iy = (jBcol - j) + 7;
      for (ix = jBcol + 1; ix < iy; ix++) {
        b_A[ix] /= b_A[jBcol];
      }
    }

    iy = jBcol;
    ix = jBcol + 7;
    for (kBcol = 0; kBcol <= 5 - j; kBcol++) {
      if (b_A[ix] != 0.0) {
        smax = -b_A[ix];
        c_ix = jBcol + 1;
        d = (iy - j) + 14;
        for (ijA = 8 + iy; ijA < d; ijA++) {
          b_A[ijA] += b_A[c_ix] * smax;
          c_ix++;
        }
      }

      ix += 7;
      iy += 7;
    }
  }

  for (j = 0; j < 7; j++) {
    jBcol = 10 * j;
    iy = 7 * j;
    for (ix = 0; ix < j; ix++) {
      kBcol = 10 * ix;
      if (b_A[ix + iy] != 0.0) {
        for (c_ix = 0; c_ix < 10; c_ix++) {
          d = c_ix + jBcol;
          A[d] -= b_A[ix + iy] * A[c_ix + kBcol];
        }
      }
    }

    smax = 1.0 / b_A[j + iy];
    for (iy = 0; iy < 10; iy++) {
      d = iy + jBcol;
      A[d] *= smax;
    }
  }

  for (j = 6; j >= 0; j--) {
    jBcol = 10 * j;
    iy = 7 * j - 1;
    for (ix = j + 2; ix < 8; ix++) {
      kBcol = (ix - 1) * 10;
      if (b_A[ix + iy] != 0.0) {
        for (c_ix = 0; c_ix < 10; c_ix++) {
          A[c_ix + jBcol] -= b_A[ix + iy] * A[c_ix + kBcol];
        }
      }
    }
  }

  for (j = 5; j >= 0; j--) {
    if (j + 1 != ipiv[j]) {
      jBcol = ipiv[j] - 1;
      for (iy = 0; iy < 10; iy++) {
        smax = A[10 * j + iy];
        d = 10 * jBcol + iy;
        A[iy + 10 * j] = A[d];
        A[d] = smax;
      }
    }
  }
}
