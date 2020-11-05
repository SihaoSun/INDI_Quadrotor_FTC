#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xaxpy_DFWrG79F.h"
#include "xaxpy_Th9vy04w.h"
#include "xaxpy_yKfc9eiG.h"
#include "xdotc_oQ8cd8io.h"
#include "xnrm2_B4ZusOnR.h"
#include "xnrm2_HfWc8I0M.h"
#include "xrot_aTCg27QX.h"
#include "xrotg_dvm63JYW.h"
#include "xscal_d9mznQDv.h"
#include "xswap_l44VPZjd.h"
#include "svd_sWXtg7f2.h"

void svd_sWXtg7f2(const real_T A[16], real_T U[16], real_T s[4], real_T V[16])
{
  real_T b_A[16];
  real_T b_s[4];
  real_T e[4];
  real_T work[4];
  real_T Vf[16];
  int32_T qq;
  boolean_T apply_transform;
  real_T nrm;
  int32_T qjj;
  int32_T qp1jj;
  int32_T m;
  int32_T qp1q;
  real_T rt;
  real_T ztest;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  int32_T k_ii;
  int32_T exitg1;
  boolean_T exitg2;
  e[0] = 0.0;
  work[0] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  e[3] = 0.0;
  work[3] = 0.0;
  for (m = 0; m < 16; m++) {
    b_A[m] = A[m];
    U[m] = 0.0;
    Vf[m] = 0.0;
  }

  qq = 0;
  apply_transform = false;
  nrm = xnrm2_HfWc8I0M(4, b_A, 1);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      b_s[0] = -nrm;
    } else {
      b_s[0] = nrm;
    }

    if (muDoubleScalarAbs(b_s[0]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[0];
      for (qjj = 0; qjj < 4; qjj++) {
        b_A[qjj] *= nrm;
      }
    } else {
      for (qjj = 0; qjj < 4; qjj++) {
        b_A[qjj] /= b_s[0];
      }
    }

    b_A[0]++;
    b_s[0] = -b_s[0];
  } else {
    b_s[0] = 0.0;
  }

  for (qp1q = 1; qp1q + 1 < 5; qp1q++) {
    qjj = qp1q << 2;
    if (apply_transform) {
      xaxpy_DFWrG79F(4, -(xdotc_oQ8cd8io(4, b_A, 1, b_A, qjj + 1) / b_A[0]), 1,
                     b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  while (qq + 1 < 5) {
    U[qq] = b_A[qq];
    qq++;
  }

  nrm = xnrm2_B4ZusOnR(3, e, 2);
  if (nrm == 0.0) {
    e[0] = 0.0;
  } else {
    if (e[1] < 0.0) {
      e[0] = -nrm;
    } else {
      e[0] = nrm;
    }

    nrm = e[0];
    if (muDoubleScalarAbs(e[0]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / e[0];
      for (qq = 1; qq < 4; qq++) {
        e[qq] *= nrm;
      }
    } else {
      for (qq = 1; qq < 4; qq++) {
        e[qq] /= nrm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (qq = 1; qq + 1 < 5; qq++) {
      work[qq] = 0.0;
    }

    for (qq = 1; qq + 1 < 5; qq++) {
      xaxpy_Th9vy04w(3, e[qq], b_A, (qq << 2) + 2, work, 2);
    }

    for (qq = 1; qq + 1 < 5; qq++) {
      xaxpy_yKfc9eiG(3, -e[qq] / e[1], work, 2, b_A, (qq << 2) + 2);
    }
  }

  for (qq = 1; qq + 1 < 5; qq++) {
    Vf[qq] = e[qq];
  }

  apply_transform = false;
  nrm = xnrm2_HfWc8I0M(3, b_A, 6);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[5] < 0.0) {
      b_s[1] = -nrm;
    } else {
      b_s[1] = nrm;
    }

    if (muDoubleScalarAbs(b_s[1]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[1];
      for (qjj = 5; qjj < 8; qjj++) {
        b_A[qjj] *= nrm;
      }
    } else {
      for (qjj = 5; qjj < 8; qjj++) {
        b_A[qjj] /= b_s[1];
      }
    }

    b_A[5]++;
    b_s[1] = -b_s[1];
  } else {
    b_s[1] = 0.0;
  }

  for (qp1q = 2; qp1q + 1 < 5; qp1q++) {
    qjj = (qp1q << 2) + 1;
    if (apply_transform) {
      xaxpy_DFWrG79F(3, -(xdotc_oQ8cd8io(3, b_A, 6, b_A, qjj + 1) / b_A[5]), 6,
                     b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  for (qq = 1; qq + 1 < 5; qq++) {
    U[qq + 4] = b_A[qq + 4];
  }

  nrm = xnrm2_B4ZusOnR(2, e, 3);
  if (nrm == 0.0) {
    e[1] = 0.0;
  } else {
    if (e[2] < 0.0) {
      e[1] = -nrm;
    } else {
      e[1] = nrm;
    }

    nrm = e[1];
    if (muDoubleScalarAbs(e[1]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / e[1];
      for (qq = 2; qq < 4; qq++) {
        e[qq] *= nrm;
      }
    } else {
      for (qq = 2; qq < 4; qq++) {
        e[qq] /= nrm;
      }
    }

    e[2]++;
    e[1] = -e[1];
    for (qq = 2; qq + 1 < 5; qq++) {
      work[qq] = 0.0;
    }

    for (qq = 2; qq + 1 < 5; qq++) {
      xaxpy_Th9vy04w(2, e[qq], b_A, (qq << 2) + 3, work, 3);
    }

    for (qq = 2; qq + 1 < 5; qq++) {
      xaxpy_yKfc9eiG(2, -e[qq] / e[2], work, 3, b_A, (qq << 2) + 3);
    }
  }

  for (qq = 2; qq + 1 < 5; qq++) {
    Vf[qq + 4] = e[qq];
  }

  apply_transform = false;
  nrm = xnrm2_HfWc8I0M(2, b_A, 11);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[10] < 0.0) {
      b_s[2] = -nrm;
    } else {
      b_s[2] = nrm;
    }

    if (muDoubleScalarAbs(b_s[2]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[2];
      for (qjj = 10; qjj < 12; qjj++) {
        b_A[qjj] *= nrm;
      }
    } else {
      for (qjj = 10; qjj < 12; qjj++) {
        b_A[qjj] /= b_s[2];
      }
    }

    b_A[10]++;
    b_s[2] = -b_s[2];
  } else {
    b_s[2] = 0.0;
  }

  for (qp1q = 3; qp1q + 1 < 5; qp1q++) {
    qjj = (qp1q << 2) + 2;
    if (apply_transform) {
      xaxpy_DFWrG79F(2, -(xdotc_oQ8cd8io(2, b_A, 11, b_A, qjj + 1) / b_A[10]),
                     11, b_A, qjj + 1);
    }

    e[qp1q] = b_A[qjj];
  }

  for (qq = 2; qq + 1 < 5; qq++) {
    U[qq + 8] = b_A[qq + 8];
  }

  m = 2;
  b_s[3] = b_A[15];
  e[2] = b_A[14];
  e[3] = 0.0;
  U[12] = 0.0;
  U[13] = 0.0;
  U[14] = 0.0;
  U[15] = 1.0;
  for (qp1q = 2; qp1q >= 0; qp1q--) {
    qjj = qp1q << 2;
    qq = qjj + qp1q;
    if (b_s[qp1q] != 0.0) {
      for (qp1jj = qp1q + 1; qp1jj + 1 < 5; qp1jj++) {
        qjj = ((qp1jj << 2) + qp1q) + 1;
        xaxpy_DFWrG79F(4 - qp1q, -(xdotc_oQ8cd8io(4 - qp1q, U, qq + 1, U, qjj) /
          U[qq]), qq + 1, U, qjj);
      }

      for (qjj = qp1q; qjj + 1 < 5; qjj++) {
        qp1jj = (qp1q << 2) + qjj;
        U[qp1jj] = -U[qp1jj];
      }

      U[qq]++;
      for (qq = 0; qq < qp1q; qq++) {
        U[qq + (qp1q << 2)] = 0.0;
      }
    } else {
      U[qjj] = 0.0;
      U[1 + qjj] = 0.0;
      qp1jj = qp1q << 2;
      U[2 + qp1jj] = 0.0;
      U[3 + qp1jj] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (qq = 3; qq >= 0; qq--) {
    if ((qq + 1 <= 2) && (e[qq] != 0.0)) {
      qp1q = ((qq << 2) + qq) + 2;
      for (qjj = qq + 1; qjj + 1 < 5; qjj++) {
        qp1jj = ((qjj << 2) + qq) + 2;
        xaxpy_DFWrG79F(3 - qq, -(xdotc_oQ8cd8io(3 - qq, Vf, qp1q, Vf, qp1jj) /
          Vf[qp1q - 1]), qp1q, Vf, qp1jj);
      }
    }

    qp1q = qq << 2;
    Vf[qp1q] = 0.0;
    Vf[1 + qp1q] = 0.0;
    Vf[2 + qp1q] = 0.0;
    Vf[3 + qp1q] = 0.0;
    Vf[qq + (qq << 2)] = 1.0;
  }

  sqds = e[0];
  if (b_s[0] != 0.0) {
    rt = muDoubleScalarAbs(b_s[0]);
    nrm = b_s[0] / rt;
    b_s[0] = rt;
    sqds = e[0] / nrm;
    xscal_d9mznQDv(nrm, U, 1);
  }

  if (sqds != 0.0) {
    rt = muDoubleScalarAbs(sqds);
    nrm = rt / sqds;
    sqds = rt;
    b_s[1] *= nrm;
    xscal_d9mznQDv(nrm, Vf, 5);
  }

  e[0] = sqds;
  sqds = e[1];
  if (b_s[1] != 0.0) {
    rt = muDoubleScalarAbs(b_s[1]);
    nrm = b_s[1] / rt;
    b_s[1] = rt;
    sqds = e[1] / nrm;
    xscal_d9mznQDv(nrm, U, 5);
  }

  if (sqds != 0.0) {
    rt = muDoubleScalarAbs(sqds);
    nrm = rt / sqds;
    sqds = rt;
    b_s[2] *= nrm;
    xscal_d9mznQDv(nrm, Vf, 9);
  }

  e[1] = sqds;
  sqds = b_A[14];
  if (b_s[2] != 0.0) {
    rt = muDoubleScalarAbs(b_s[2]);
    nrm = b_s[2] / rt;
    b_s[2] = rt;
    sqds = b_A[14] / nrm;
    xscal_d9mznQDv(nrm, U, 9);
  }

  if (sqds != 0.0) {
    rt = muDoubleScalarAbs(sqds);
    nrm = rt / sqds;
    sqds = rt;
    b_s[3] = b_A[15] * nrm;
    xscal_d9mznQDv(nrm, Vf, 13);
  }

  e[2] = sqds;
  if (b_s[3] != 0.0) {
    rt = muDoubleScalarAbs(b_s[3]);
    nrm = b_s[3] / rt;
    b_s[3] = rt;
    xscal_d9mznQDv(nrm, U, 13);
  }

  e[3] = 0.0;
  qq = 0;
  nrm = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
    (b_s[0], e[0]), muDoubleScalarMax(b_s[1], e[1])), muDoubleScalarMax(b_s[2],
    sqds)), muDoubleScalarMax(b_s[3], 0.0));
  while ((m + 2 > 0) && (qq < 75)) {
    qp1jj = m + 1;
    do {
      exitg1 = 0;
      qp1q = qp1jj;
      if (qp1jj == 0) {
        exitg1 = 1;
      } else {
        rt = muDoubleScalarAbs(e[qp1jj - 1]);
        if ((rt <= (muDoubleScalarAbs(b_s[qp1jj - 1]) + muDoubleScalarAbs
                    (b_s[qp1jj])) * 2.2204460492503131E-16) || ((rt <=
              1.0020841800044864E-292) || ((qq > 20) && (rt <=
               2.2204460492503131E-16 * nrm)))) {
          e[qp1jj - 1] = 0.0;
          exitg1 = 1;
        } else {
          qp1jj--;
        }
      }
    } while (exitg1 == 0);

    if (m + 1 == qp1jj) {
      qp1jj = 4;
    } else {
      qjj = m + 2;
      k_ii = m + 2;
      exitg2 = false;
      while ((!exitg2) && (k_ii >= qp1jj)) {
        qjj = k_ii;
        if (k_ii == qp1jj) {
          exitg2 = true;
        } else {
          rt = 0.0;
          if (k_ii < m + 2) {
            rt = muDoubleScalarAbs(e[k_ii - 1]);
          }

          if (k_ii > qp1jj + 1) {
            rt += muDoubleScalarAbs(e[k_ii - 2]);
          }

          ztest = muDoubleScalarAbs(b_s[k_ii - 1]);
          if ((ztest <= 2.2204460492503131E-16 * rt) || (ztest <=
               1.0020841800044864E-292)) {
            b_s[k_ii - 1] = 0.0;
            exitg2 = true;
          } else {
            k_ii--;
          }
        }
      }

      if (qjj == qp1jj) {
        qp1jj = 3;
      } else if (m + 2 == qjj) {
        qp1jj = 1;
      } else {
        qp1jj = 2;
        qp1q = qjj;
      }
    }

    switch (qp1jj) {
     case 1:
      rt = e[m];
      e[m] = 0.0;
      for (qjj = m; qjj + 1 >= qp1q + 1; qjj--) {
        xrotg_dvm63JYW(&b_s[qjj], &rt, &ztest, &sqds);
        if (qjj + 1 > qp1q + 1) {
          rt = e[qjj - 1] * -sqds;
          e[qjj - 1] *= ztest;
        }

        xrot_aTCg27QX(Vf, 1 + (qjj << 2), 1 + ((m + 1) << 2), ztest, sqds);
      }
      break;

     case 2:
      rt = e[qp1q - 1];
      e[qp1q - 1] = 0.0;
      for (qjj = qp1q; qjj < m + 2; qjj++) {
        xrotg_dvm63JYW(&b_s[qjj], &rt, &ztest, &sqds);
        rt = -sqds * e[qjj];
        e[qjj] *= ztest;
        xrot_aTCg27QX(U, 1 + (qjj << 2), 1 + ((qp1q - 1) << 2), ztest, sqds);
      }
      break;

     case 3:
      ztest = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
        (muDoubleScalarMax(muDoubleScalarAbs(b_s[m + 1]), muDoubleScalarAbs
                           (b_s[m])), muDoubleScalarAbs(e[m])),
        muDoubleScalarAbs(b_s[qp1q])), muDoubleScalarAbs(e[qp1q]));
      rt = b_s[m + 1] / ztest;
      smm1 = b_s[m] / ztest;
      emm1 = e[m] / ztest;
      sqds = b_s[qp1q] / ztest;
      smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
      emm1 *= rt;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = muDoubleScalarSqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      rt = (sqds + rt) * (sqds - rt) + shift;
      ztest = e[qp1q] / ztest * sqds;
      for (qjj = qp1q + 1; qjj <= m + 1; qjj++) {
        xrotg_dvm63JYW(&rt, &ztest, &sqds, &smm1);
        if (qjj > qp1q + 1) {
          e[qjj - 2] = rt;
        }

        ztest = e[qjj - 1];
        emm1 = b_s[qjj - 1];
        rt = emm1 * sqds + ztest * smm1;
        e[qjj - 1] = ztest * sqds - emm1 * smm1;
        ztest = smm1 * b_s[qjj];
        b_s[qjj] *= sqds;
        xrot_aTCg27QX(Vf, 1 + ((qjj - 1) << 2), 1 + (qjj << 2), sqds, smm1);
        xrotg_dvm63JYW(&rt, &ztest, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        ztest = e[qjj - 1];
        rt = ztest * sqds + smm1 * b_s[qjj];
        b_s[qjj] = ztest * -smm1 + sqds * b_s[qjj];
        ztest = smm1 * e[qjj];
        e[qjj] *= sqds;
        xrot_aTCg27QX(U, 1 + ((qjj - 1) << 2), 1 + (qjj << 2), sqds, smm1);
      }

      e[m] = rt;
      qq++;
      break;

     default:
      if (b_s[qp1q] < 0.0) {
        b_s[qp1q] = -b_s[qp1q];
        xscal_d9mznQDv(-1.0, Vf, 1 + (qp1q << 2));
      }

      qq = qp1q + 1;
      while ((qp1q + 1 < 4) && (b_s[qp1q] < b_s[qq])) {
        rt = b_s[qp1q];
        b_s[qp1q] = b_s[qq];
        b_s[qq] = rt;
        xswap_l44VPZjd(Vf, 1 + (qp1q << 2), 1 + ((qp1q + 1) << 2));
        xswap_l44VPZjd(U, 1 + (qp1q << 2), 1 + ((qp1q + 1) << 2));
        qp1q = qq;
        qq++;
      }

      qq = 0;
      m--;
      break;
    }
  }

  for (m = 0; m < 4; m++) {
    s[m] = b_s[m];
    qq = m << 2;
    V[qq] = Vf[qq];
    V[1 + (m << 2)] = Vf[qq + 1];
    V[2 + (m << 2)] = Vf[qq + 2];
    V[3 + (m << 2)] = Vf[qq + 3];
  }
}
