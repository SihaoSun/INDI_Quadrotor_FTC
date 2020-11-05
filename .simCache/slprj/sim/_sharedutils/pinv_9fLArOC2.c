#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "eps_0ubcMMgU.h"
#include "mwmathutil.h"
#include "svd_sWXtg7f2.h"
#include "pinv_9fLArOC2.h"

void pinv_9fLArOC2(const real_T A[16], real_T X[16])
{
  real_T V[16];
  int32_T vcol;
  real_T U[16];
  real_T s[4];
  real_T tol;
  int32_T j;
  boolean_T b_p;
  int32_T ar;
  int32_T ia;
  int32_T b_ic;
  int32_T r;
  b_p = true;
  for (r = 0; r < 16; r++) {
    X[r] = 0.0;
    if (b_p && ((!muDoubleScalarIsInf(A[r])) && (!muDoubleScalarIsNaN(A[r])))) {
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (ar = 0; ar < 16; ar++) {
      X[ar] = (rtNaN);
    }
  } else {
    svd_sWXtg7f2(A, U, s, V);
    tol = 4.0 * eps_0ubcMMgU(s[0]);
    r = -1;
    vcol = 0;
    while ((vcol < 4) && (s[vcol] > tol)) {
      r++;
      vcol++;
    }

    if (r + 1 > 0) {
      vcol = 0;
      for (j = 0; j <= r; j++) {
        tol = 1.0 / s[j];
        for (ar = vcol; ar < vcol + 4; ar++) {
          V[ar] *= tol;
        }

        vcol += 4;
      }

      for (j = 0; j < 4; j++) {
        X[j] = 0.0;
      }

      for (j = 4; j < 8; j++) {
        X[j] = 0.0;
      }

      for (j = 8; j < 12; j++) {
        X[j] = 0.0;
      }

      for (j = 12; j < 16; j++) {
        X[j] = 0.0;
      }

      ar = -1;
      r <<= 2;
      vcol = r + 1;
      for (j = 1; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 0; b_ic < 4; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }

      ar = -1;
      vcol = r + 2;
      for (j = 2; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 4; b_ic < 8; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }

      ar = -1;
      vcol = r + 3;
      for (j = 3; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 8; b_ic < 12; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }

      ar = -1;
      vcol = r + 4;
      for (j = 4; j <= vcol; j += 4) {
        ia = ar;
        for (b_ic = 12; b_ic < 16; b_ic++) {
          ia++;
          X[b_ic] += U[j - 1] * V[ia];
        }

        ar += 4;
      }
    }
  }
}
