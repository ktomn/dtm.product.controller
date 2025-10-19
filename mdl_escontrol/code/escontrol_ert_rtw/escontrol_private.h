/*
 * File: escontrol_private.h
 *
 * Code generated for Simulink model 'escontrol'.
 *
 * Model version                  : 1.38
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Oct 11 22:38:37 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef escontrol_private_h_
#define escontrol_private_h_
#include "rtwtypes.h"
#include "escontrol.h"
#include "escontrol_types.h"

extern void escontrol_ESC_DT_Init(DW_ESC_DT_escontrol_T *localDW,
  P_ESC_DT_escontrol_T *localP);
extern real_T escontrol_ESC_DT(real_T rtu_parameters_Inport_1, real_T
  rtu_parameters_Inport_1_p, real_T rtu_parameters_Inport_1_d, real_T
  rtu_parameters_Inport_1_h, real_T rtu_parameters_Inport_1_a, real_T
  rtu_parameters_Inport_1_e, real_T rtu_parameters_Inport_1_at, real_T
  rtu_parameters_Inport_1_f, real_T rtu_parameters_Inport_1_pf, real_T
  rtu_parameters_Inport_1_a2, real_T rtu_parameters_Inport_1_m, real_T
  rtu_parameters_Inport_1_b, real_T rtu_parameters_Inport_1_g, real_T rtu_y,
  real_T rtp_offset_sinwave_modulation, real_T rtp_offset_sinwave_demodulation,
  DW_ESC_DT_escontrol_T *localDW, P_ESC_DT_escontrol_T *localP);

#endif                                 /* escontrol_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
