/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/mldivide_I8OBiDMa.cpp
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
#include <string.h>
#include "xgetrf_vu1x6Wed.h"
#include "mldivide_I8OBiDMa.h"

/* Function for MATLAB Function: '<S5>/INDI' */
void mldivide_I8OBiDMa(const real_T A[16], real_T B[16])
{
  real_T temp;
  int32_T ip;
  real_T b_A[16];
  int32_T ipiv[4];
  int32_T info;
  int32_T ip_tmp;
  int32_T tmp;
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 4U);
  xgetrf_vu1x6Wed(b_A, ipiv, &info);
  for (info = 0; info < 3; info++) {
    if (info + 1 != ipiv[info]) {
      ip = ipiv[info] - 1;
      temp = B[info];
      B[info] = B[ip];
      B[ip] = temp;
      temp = B[info + 4];
      B[info + 4] = B[ip + 4];
      B[ip + 4] = temp;
      temp = B[info + 8];
      B[info + 8] = B[ip + 8];
      B[ip + 8] = temp;
      temp = B[info + 12];
      B[info + 12] = B[ip + 12];
      B[ip + 12] = temp;
    }
  }

  for (info = 0; info < 4; info++) {
    ip_tmp = info << 2;
    if (B[ip_tmp] != 0.0) {
      for (ip = 2; ip < 5; ip++) {
        tmp = (ip + ip_tmp) - 1;
        B[tmp] -= b_A[ip - 1] * B[ip_tmp];
      }
    }

    if (B[1 + ip_tmp] != 0.0) {
      for (ip = 3; ip < 5; ip++) {
        tmp = (ip + ip_tmp) - 1;
        B[tmp] -= B[1 + ip_tmp] * b_A[ip + 3];
      }
    }

    if (B[2 + ip_tmp] != 0.0) {
      B[ip_tmp + 3] -= B[2 + ip_tmp] * b_A[11];
    }
  }

  for (info = 0; info < 4; info++) {
    tmp = info << 2;
    if (B[3 + tmp] != 0.0) {
      B[3 + tmp] /= b_A[15];
      for (ip = 0; ip < 3; ip++) {
        ip_tmp = ip + tmp;
        B[ip_tmp] -= B[3 + tmp] * b_A[ip + 12];
      }
    }

    if (B[2 + tmp] != 0.0) {
      B[2 + tmp] /= b_A[10];
      for (ip = 0; ip < 2; ip++) {
        ip_tmp = ip + tmp;
        B[ip_tmp] -= B[2 + tmp] * b_A[ip + 8];
      }
    }

    if (B[1 + tmp] != 0.0) {
      B[1 + tmp] /= b_A[5];
      B[tmp] -= B[1 + tmp] * b_A[4];
    }

    if (B[tmp] != 0.0) {
      B[tmp] /= b_A[0];
    }
  }
}
