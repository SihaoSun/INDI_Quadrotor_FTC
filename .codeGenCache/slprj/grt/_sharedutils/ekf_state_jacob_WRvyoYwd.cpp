/*
 * /home/sihao/src/monorepo/simulink_model/.codeGenCache/slprj/grt/_sharedutils/ekf_state_jacob_WRvyoYwd.cpp
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
#include "rt_powd_snf.h"
#include "ekf_state_jacob_WRvyoYwd.h"

/*
 * Function for MATLAB Function: '<S32>/Predict'
 * function A = ekf_state_jacob(x,u)
 */
void ekf_state_jacob_WRvyoYwd(const real_T x[10], const real_T u[6], real_T A
  [100])
{
  static const real_T b[10] = { 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static const real_T c[10] = { 0.0, 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static const real_T d[10] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0,
    0.0 };

  int32_T i;
  real_T a_tmp;
  real_T b_a_tmp;
  real_T c_a_tmp;
  real_T d_a_tmp;
  real_T A_tmp;
  real_T A_tmp_0;
  real_T A_tmp_1;
  real_T A_tmp_2;
  real_T A_tmp_3;
  real_T A_tmp_tmp;
  real_T d_a_tmp_tmp;
  real_T a_tmp_tmp;
  real_T b_a_tmp_tmp;
  real_T c_a_tmp_tmp;

  /* 'ekf_state_jacob:7' posx = x(1); */
  /* 'ekf_state_jacob:8' posy = x(2); */
  /* 'ekf_state_jacob:9' posz = x(3); */
  /* 'ekf_state_jacob:11' velx = x(4); */
  /* 'ekf_state_jacob:12' vely = x(5); */
  /* 'ekf_state_jacob:13' velz = x(6); */
  /* 'ekf_state_jacob:15' q1 = x(7); */
  /* 'ekf_state_jacob:16' q2 = x(8); */
  /* 'ekf_state_jacob:17' q3 = x(9); */
  /* 'ekf_state_jacob:18' q4 = x(10); */
  /* 'ekf_state_jacob:20' accBx = u(1); */
  /* 'ekf_state_jacob:21' accBy = u(2); */
  /* 'ekf_state_jacob:22' accBz = u(3); */
  /* 'ekf_state_jacob:24' omegax = u(4); */
  /* 'ekf_state_jacob:25' omegay = u(5); */
  /* 'ekf_state_jacob:26' omegaz = u(6); */
  /* 'ekf_state_jacob:28' dt = 0.002; */
  /* 'ekf_state_jacob:65' A = ... */
  /* 'ekf_state_jacob:66' [ 1, 0, 0, dt,  0,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0; */
  /* 'ekf_state_jacob:67'  0, 1, 0,  0, dt,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0; */
  /* 'ekf_state_jacob:68'  0, 0, 1,  0,  0, dt,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0; */
  /* 'ekf_state_jacob:69'  0, 0, 0,  1,  0,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     dt*(2*accBx*q1 - 2*accBy*q4 + 2*accBz*q3),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q2 + 2*accBy*q3 + 2*accBz*q4),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBy*q2 - 2*accBx*q3 + 2*accBz*q1),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -dt*(2*accBy*q1 + 2*accBx*q4 - 2*accBz*q2); */
  /* 'ekf_state_jacob:70'  0, 0, 0,  0,  1,  0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     dt*(2*accBy*q1 + 2*accBx*q4 - 2*accBz*q2),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -dt*(2*accBy*q2 - 2*accBx*q3 + 2*accBz*q1),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q2 + 2*accBy*q3 + 2*accBz*q4),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q1 - 2*accBy*q4 + 2*accBz*q3); */
  /* 'ekf_state_jacob:71'  0, 0, 0,  0,  0,  1,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     dt*(2*accBy*q2 - 2*accBx*q3 + 2*accBz*q1),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBy*q1 + 2*accBx*q4 - 2*accBz*q2),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -dt*(2*accBx*q1 - 2*accBy*q4 + 2*accBz*q3),                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       dt*(2*accBx*q2 + 2*accBy*q3 + 2*accBz*q4); */
  /* 'ekf_state_jacob:72'  0, 0, 0,  0,  0,  0,               1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)); */
  /* 'ekf_state_jacob:73'  0, 0, 0,  0,  0,  0, (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),                 1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),   (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)); */
  /* 'ekf_state_jacob:74'  0, 0, 0,  0,  0,  0, (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),                 1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),   (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)); */
  /* 'ekf_state_jacob:75'  0, 0, 0,  0,  0,  0, (dt*omegaz)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q1 - 2*dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2) + dt*omegax*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) + dt*omegay*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) + dt*omegaz*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),   (dt*omegay)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q2 + 2*dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2) - dt*omegax*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegay*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegaz*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)), - (dt*omegax)/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2)) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q3 + 2*dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2) - dt*omegax*(q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2)) - dt*omegay*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2)) + dt*omegaz*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2)),                 1/((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(1/2) - ((q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))*(2*q4 + 2*dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2) + dt*omegax*(q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2)) - dt*omegay*(q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2)) - dt*omegaz*(q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))))/(2*((q2 + dt*((omegax*q1)/2 - (omegay*q4)/2 + (omegaz*q3)/2))^2 + (q3 + dt*((omegay*q1)/2 + (omegax*q4)/2 - (omegaz*q2)/2))^2 + (q4 + dt*((omegay*q2)/2 - (omegax*q3)/2 + (omegaz*q1)/2))^2 + (q1 - dt*((omegax*q2)/2 + (omegay*q3)/2 + (omegaz*q4)/2))^2)^(3/2))]; */
  a_tmp_tmp = (u[3] * x[6] / 2.0 - u[4] * x[9] / 2.0) + u[5] * x[8] / 2.0;
  a_tmp = a_tmp_tmp * 0.002 + x[7];
  b_a_tmp_tmp = (u[4] * x[6] / 2.0 + u[3] * x[9] / 2.0) - u[5] * x[7] / 2.0;
  b_a_tmp = b_a_tmp_tmp * 0.002 + x[8];
  c_a_tmp_tmp = (u[4] * x[7] / 2.0 - u[3] * x[8] / 2.0) + u[5] * x[6] / 2.0;
  c_a_tmp = c_a_tmp_tmp * 0.002 + x[9];
  d_a_tmp_tmp = (u[3] * x[7] / 2.0 + u[4] * x[8] / 2.0) + u[5] * x[9] / 2.0;
  d_a_tmp = x[6] - d_a_tmp_tmp * 0.002;
  for (i = 0; i < 10; i++) {
    A[10 * i] = b[i];
    A[1 + 10 * i] = c[i];
    A[2 + 10 * i] = d[i];
  }

  A[3] = 0.0;
  A[13] = 0.0;
  A[23] = 0.0;
  A[33] = 1.0;
  A[43] = 0.0;
  A[53] = 0.0;
  A_tmp_tmp = (2.0 * u[0] * x[6] - 2.0 * u[1] * x[9]) + 2.0 * u[2] * x[8];
  A_tmp_2 = A_tmp_tmp * 0.002;
  A[63] = A_tmp_2;
  A_tmp_1 = ((2.0 * u[0] * x[7] + 2.0 * u[1] * x[8]) + 2.0 * u[2] * x[9]) *
    0.002;
  A[73] = A_tmp_1;
  A_tmp_0 = (2.0 * u[1] * x[7] - 2.0 * u[0] * x[8]) + 2.0 * u[2] * x[6];
  A_tmp_3 = A_tmp_0 * 0.002;
  A[83] = A_tmp_3;
  A_tmp = (2.0 * u[1] * x[6] + 2.0 * u[0] * x[9]) - 2.0 * u[2] * x[7];
  A[93] = A_tmp * -0.002;
  A[4] = 0.0;
  A[14] = 0.0;
  A[24] = 0.0;
  A[34] = 0.0;
  A[44] = 1.0;
  A[54] = 0.0;
  A_tmp *= 0.002;
  A[64] = A_tmp;
  A[74] = A_tmp_0 * -0.002;
  A[84] = A_tmp_1;
  A[94] = A_tmp_2;
  A[5] = 0.0;
  A[15] = 0.0;
  A[25] = 0.0;
  A[35] = 0.0;
  A[45] = 0.0;
  A[55] = 1.0;
  A[65] = A_tmp_3;
  A[75] = A_tmp;
  A[85] = A_tmp_tmp * -0.002;
  A[95] = A_tmp_1;
  A[6] = 0.0;
  A[16] = 0.0;
  A[26] = 0.0;
  A[36] = 0.0;
  A[46] = 0.0;
  A[56] = 0.0;
  A_tmp_2 = ((a_tmp * (0.002 * u[3]) + (2.0 * x[6] - d_a_tmp_tmp * 0.004)) +
             b_a_tmp * (0.002 * u[4])) + c_a_tmp * (0.002 * u[5]);
  A[66] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_2 * d_a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
  A_tmp_1 = (((a_tmp_tmp * 0.004 + 2.0 * x[7]) - d_a_tmp * (0.002 * u[3])) +
             c_a_tmp * (0.002 * u[4])) - b_a_tmp * (0.002 * u[5]);
  A[76] = -(0.002 * u[3]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_1 * d_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A_tmp_0 = (((b_a_tmp_tmp * 0.004 + 2.0 * x[8]) - c_a_tmp * (0.002 * u[3])) -
             d_a_tmp * (0.002 * u[4])) + a_tmp * (0.002 * u[5]);
  A[86] = -(0.002 * u[4]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_0 * d_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A_tmp_3 = ((b_a_tmp * (0.002 * u[3]) + (c_a_tmp_tmp * 0.004 + 2.0 * x[9])) -
             a_tmp * (0.002 * u[4])) - d_a_tmp * (0.002 * u[5]);
  A[96] = -(0.002 * u[5]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_3 * d_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[7] = 0.0;
  A[17] = 0.0;
  A[27] = 0.0;
  A[37] = 0.0;
  A[47] = 0.0;
  A[57] = 0.0;
  A[67] = 0.002 * u[3] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_2 * a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[77] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_1 * a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
  A[87] = 0.002 * u[5] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_0 * a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[97] = -(0.002 * u[4]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_3 * a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[8] = 0.0;
  A[18] = 0.0;
  A[28] = 0.0;
  A[38] = 0.0;
  A[48] = 0.0;
  A[58] = 0.0;
  A[68] = 0.002 * u[4] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_2 * b_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[78] = -(0.002 * u[5]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_1 * b_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[88] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_0 * b_a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
  A[98] = 0.002 * u[3] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_3 * b_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[9] = 0.0;
  A[19] = 0.0;
  A[29] = 0.0;
  A[39] = 0.0;
  A[49] = 0.0;
  A[59] = 0.0;
  A[69] = 0.002 * u[5] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_2 * c_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[79] = 0.002 * u[4] / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_1 * c_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[89] = -(0.002 * u[3]) / (std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) +
    c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp) * 2.0) - A_tmp_0 * c_a_tmp /
    (rt_powd_snf(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) +
                 d_a_tmp * d_a_tmp, 1.5) * 2.0);
  A[99] = 1.0 / std::sqrt(((a_tmp * a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp *
    c_a_tmp) + d_a_tmp * d_a_tmp) - A_tmp_3 * c_a_tmp / (rt_powd_snf(((a_tmp *
    a_tmp + b_a_tmp * b_a_tmp) + c_a_tmp * c_a_tmp) + d_a_tmp * d_a_tmp, 1.5) *
    2.0);
}
