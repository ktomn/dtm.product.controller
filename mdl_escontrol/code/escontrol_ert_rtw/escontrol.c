/*
 * File: escontrol.c
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

#include "escontrol.h"
#include "rtwtypes.h"
#include "escontrol_private.h"
#include <math.h>
#include <string.h>

/*
 * System initialize for atomic system:
 *    '<Root>/ESC_DT'
 *    '<Root>/ESC_DT1'
 */
void escontrol_ESC_DT_Init(DW_ESC_DT_escontrol_T *localDW, P_ESC_DT_escontrol_T *
  localP)
{
  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
  localDW->UnitDelay_DSTATE_d = localP->UnitDelay_InitialCondition_i;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;
  localDW->DiscreteTimeIntegrator_PrevRese = 2;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
  localDW->UnitDelay1_DSTATE = localP->UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay' */
  localDW->UnitDelay_DSTATE_o = localP->UnitDelay_InitialCondition_k;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_IC_LOADI = 1U;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay' */
  localDW->UnitDelay_DSTATE_f = localP->UnitDelay_InitialCondition_j;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_j = localP->DiscreteTimeIntegrator_IC_i;
  localDW->DiscreteTimeIntegrator_PrevRe_f = 2;
}

/*
 * Output and update for atomic system:
 *    '<Root>/ESC_DT'
 *    '<Root>/ESC_DT1'
 */
real_T escontrol_ESC_DT(real_T rtu_parameters_Inport_1, real_T
  rtu_parameters_Inport_1_p, real_T rtu_parameters_Inport_1_d, real_T
  rtu_parameters_Inport_1_h, real_T rtu_parameters_Inport_1_a, real_T
  rtu_parameters_Inport_1_e, real_T rtu_parameters_Inport_1_at, real_T
  rtu_parameters_Inport_1_f, real_T rtu_parameters_Inport_1_pf, real_T
  rtu_parameters_Inport_1_a2, real_T rtu_parameters_Inport_1_m, real_T
  rtu_parameters_Inport_1_b, real_T rtu_parameters_Inport_1_g, real_T rtu_y,
  real_T rtp_offset_sinwave_modulation, real_T rtp_offset_sinwave_demodulation,
  DW_ESC_DT_escontrol_T *localDW, P_ESC_DT_escontrol_T *localP)
{
  real_T rty_theta_0;
  real_T rtb_DiscreteTimeIntegrator_j;
  boolean_T rtb_UnitDelay;
  boolean_T rtb_UnitDelay_f;

  /* UnitDelay: '<S9>/Unit Delay' */
  rtb_UnitDelay = localDW->UnitDelay_DSTATE_d;

  /* DiscreteIntegrator: '<S9>/Discrete-Time Integrator' incorporates:
   *  UnitDelay: '<S9>/Unit Delay'
   */
  if (localDW->UnitDelay_DSTATE_d && (localDW->DiscreteTimeIntegrator_PrevRese <=
       0)) {
    localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;
  }

  /* Sum: '<S10>/Add' incorporates:
   *  Product: '<S10>/Product'
   *  Sum: '<S10>/Subtract'
   *  UnitDelay: '<S10>/Unit Delay'
   *  UnitDelay: '<S10>/Unit Delay1'
   */
  localDW->UnitDelay_DSTATE = localDW->UnitDelay_DSTATE *
    rtu_parameters_Inport_1_h + (rtu_y - localDW->UnitDelay1_DSTATE);

  /* Switch: '<S5>/Switch' incorporates:
   *  UnitDelay: '<S10>/Unit Delay'
   */
  if (rtu_parameters_Inport_1_a != 0.0) {
    rtb_DiscreteTimeIntegrator_j = localDW->UnitDelay_DSTATE;
  } else {
    rtb_DiscreteTimeIntegrator_j = rtu_y;
  }

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<S5>/Constant'
   *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
   *  Product: '<S9>/Product'
   *  Product: '<S9>/Product1'
   *  Sum: '<S9>/Add'
   *  Sum: '<S9>/Add1'
   *  Switch: '<S5>/Switch'
   *  Trigonometry: '<S9>/Trigonometric Function'
   */
  rtb_DiscreteTimeIntegrator_j *= sin(localDW->DiscreteTimeIntegrator_DSTATE *
    rtu_parameters_Inport_1 + rtu_parameters_Inport_1_p) *
    rtu_parameters_Inport_1_d + rtp_offset_sinwave_modulation;

  /* Sum: '<S12>/Add' incorporates:
   *  Product: '<S12>/Product'
   *  UnitDelay: '<S12>/Unit Delay'
   */
  localDW->UnitDelay_DSTATE_o = localDW->UnitDelay_DSTATE_o *
    rtu_parameters_Inport_1_e + rtb_DiscreteTimeIntegrator_j;

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  Constant: '<S9>/Constant3'
   *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  localDW->UnitDelay_DSTATE_d = (localDW->DiscreteTimeIntegrator_DSTATE ==
    localP->Constant3_Value);

  /* DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  if (localDW->DiscreteTimeIntegrator_IC_LOADI != 0) {
    localDW->DiscreteTimeIntegrator_DSTATE_n = rtu_parameters_Inport_1_pf;
  }

  /* UnitDelay: '<S11>/Unit Delay' */
  rtb_UnitDelay_f = localDW->UnitDelay_DSTATE_f;

  /* DiscreteIntegrator: '<S11>/Discrete-Time Integrator' incorporates:
   *  UnitDelay: '<S11>/Unit Delay'
   */
  if (localDW->UnitDelay_DSTATE_f && (localDW->DiscreteTimeIntegrator_PrevRe_f <=
       0)) {
    localDW->DiscreteTimeIntegrator_DSTATE_j =
      localP->DiscreteTimeIntegrator_IC_i;
  }

  /* Sum: '<S6>/Add' incorporates:
   *  Constant: '<S6>/Constant5'
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
   *  Product: '<S11>/Product'
   *  Product: '<S11>/Product1'
   *  Sum: '<S11>/Add'
   *  Sum: '<S11>/Add1'
   *  Trigonometry: '<S11>/Trigonometric Function'
   */
  rty_theta_0 = (sin(localDW->DiscreteTimeIntegrator_DSTATE_j *
                     rtu_parameters_Inport_1 + rtu_parameters_Inport_1_a2) *
                 rtu_parameters_Inport_1_m + rtp_offset_sinwave_demodulation) +
    localDW->DiscreteTimeIntegrator_DSTATE_n;

  /* Switch: '<S8>/Switch' incorporates:
   *  RelationalOperator: '<S8>/Relational Operator1'
   */
  if (rty_theta_0 <= rtu_parameters_Inport_1_b) {
    rty_theta_0 = rtu_parameters_Inport_1_b;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  RelationalOperator: '<S8>/Relational Operator2'
   */
  if (rty_theta_0 >= rtu_parameters_Inport_1_g) {
    rty_theta_0 = rtu_parameters_Inport_1_g;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* RelationalOperator: '<S11>/Relational Operator' incorporates:
   *  Constant: '<S11>/Constant3'
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
   *  UnitDelay: '<S11>/Unit Delay'
   */
  localDW->UnitDelay_DSTATE_f = (localDW->DiscreteTimeIntegrator_DSTATE_j ==
    localP->Constant3_Value_n);

  /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S9>/Constant'
   */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * localP->Constant_Value;
  localDW->DiscreteTimeIntegrator_PrevRese = (int8_T)rtb_UnitDelay;

  /* Update for UnitDelay: '<S10>/Unit Delay1' */
  localDW->UnitDelay1_DSTATE = rtu_y;

  /* Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_IC_LOADI = 0U;

  /* Switch: '<S7>/Switch' incorporates:
   *  UnitDelay: '<S12>/Unit Delay'
   */
  if (rtu_parameters_Inport_1_at != 0.0) {
    rtb_DiscreteTimeIntegrator_j = localDW->UnitDelay_DSTATE_o;
  }

  /* Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' incorporates:
   *  Product: '<S7>/Product'
   *  Switch: '<S7>/Switch'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_n += rtb_DiscreteTimeIntegrator_j *
    rtu_parameters_Inport_1_f * localP->DiscreteTimeIntegrator_gainva_e;

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S11>/Constant'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_j +=
    localP->DiscreteTimeIntegrator_gainva_l * localP->Constant_Value_b;
  localDW->DiscreteTimeIntegrator_PrevRe_f = (int8_T)rtb_UnitDelay_f;
  return rty_theta_0;
}

/* Model step function */
void escontrol_step(RT_MODEL_escontrol_T *const escontrol_M, ExtU_escontrol_T
                    *escontrol_U, ExtY_escontrol_T *escontrol_Y)
{
  DW_escontrol_T *escontrol_DW = escontrol_M->dwork;
  real_T rtb_Switch1;
  real_T rtb_Switch1_e;

  /* Outputs for Atomic SubSystem: '<Root>/ESC_DT' */
  /* Outputs for Atomic SubSystem: '<Root>/ESC_DT' */
  rtb_Switch1_e = escontrol_ESC_DT(escontrol_U->parameters_w,
    escontrol_U->parameters_phi1, escontrol_U->parameters_a,
    escontrol_U->parameters_w_hpf, escontrol_U->parameters_enable_hpf,
    escontrol_U->parameters_w_lpf, escontrol_U->parameters_enable_lpf,
    escontrol_U->parameters_k, escontrol_U->parameters_theta0,
    escontrol_U->parameters_phi2, escontrol_U->parameters_b,
    escontrol_U->parameters_theta_min, escontrol_U->parameters_theta_max,
    escontrol_U->y, escontrol_P.ESC_DT_offset_sinwave_modulatio,
    escontrol_P.ESC_DT_offset_sinwave_demodulat, &escontrol_DW->ESC_DT,
    &escontrol_P.ESC_DT);

  /* End of Outputs for SubSystem: '<Root>/ESC_DT' */
  /* End of Outputs for SubSystem: '<Root>/ESC_DT' */

  /* Outputs for Atomic SubSystem: '<Root>/ESC_DT1' */
  /* Outputs for Atomic SubSystem: '<Root>/ESC_DT1' */
  rtb_Switch1 = escontrol_ESC_DT(escontrol_U->parameters_w_2,
    escontrol_U->parameters_phi1_2, escontrol_U->parameters_a_2,
    escontrol_U->parameters_w_hpf_2, escontrol_U->parameters_enable_hpf_2,
    escontrol_U->parameters_w_lpf_2, escontrol_U->parameters_enable_lpf_2,
    escontrol_U->parameters_k_2, escontrol_U->parameters_theta0_2,
    escontrol_U->parameters_phi2_2, escontrol_U->parameters_b_2,
    escontrol_U->parameters_theta_min_2, escontrol_U->parameters_theta_max_2,
    escontrol_U->y, escontrol_P.ESC_DT1_offset_sinwave_modulati,
    escontrol_P.ESC_DT1_offset_sinwave_demodula, &escontrol_DW->ESC_DT1,
    &escontrol_P.ESC_DT1);

  /* End of Outputs for SubSystem: '<Root>/ESC_DT1' */
  /* End of Outputs for SubSystem: '<Root>/ESC_DT1' */

  /* Outport generated from: '<Root>/theta' */
  escontrol_Y->theta[0] = rtb_Switch1_e;
  escontrol_Y->theta[1] = rtb_Switch1;
}

/* Model initialize function */
void escontrol_initialize(RT_MODEL_escontrol_T *const escontrol_M,
  ExtU_escontrol_T *escontrol_U, ExtY_escontrol_T *escontrol_Y)
{
  DW_escontrol_T *escontrol_DW = escontrol_M->dwork;

  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)escontrol_DW, 0,
                sizeof(DW_escontrol_T));

  /* external inputs */
  (void)memset(escontrol_U, 0, sizeof(ExtU_escontrol_T));

  /* external outputs */
  (void)memset(escontrol_Y, 0, sizeof(ExtY_escontrol_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/ESC_DT' */
  escontrol_ESC_DT_Init(&escontrol_DW->ESC_DT, &escontrol_P.ESC_DT);

  /* End of SystemInitialize for SubSystem: '<Root>/ESC_DT' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/ESC_DT1' */
  escontrol_ESC_DT_Init(&escontrol_DW->ESC_DT1, &escontrol_P.ESC_DT1);

  /* End of SystemInitialize for SubSystem: '<Root>/ESC_DT1' */
}

/* Model terminate function */
void escontrol_terminate(RT_MODEL_escontrol_T *const escontrol_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(escontrol_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
