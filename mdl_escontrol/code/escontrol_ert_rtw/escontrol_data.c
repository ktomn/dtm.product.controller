/*
 * File: escontrol_data.c
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

/* Block parameters (default storage) */
P_escontrol_T escontrol_P = {
  /* Mask Parameter: ESC_DT_offset_sinwave_demodulat
   * Referenced by: '<Root>/ESC_DT'
   */
  0.0,

  /* Mask Parameter: ESC_DT1_offset_sinwave_demodula
   * Referenced by: '<Root>/ESC_DT1'
   */
  0.0,

  /* Mask Parameter: ESC_DT_offset_sinwave_modulatio
   * Referenced by: '<Root>/ESC_DT'
   */
  0.0,

  /* Mask Parameter: ESC_DT1_offset_sinwave_modulati
   * Referenced by: '<Root>/ESC_DT1'
   */
  0.0,

  /* Start of '<Root>/ESC_DT1' */
  {
    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S17>/Discrete-Time Integrator'
     */
    0.02,

    /* Expression: 0
     * Referenced by: '<S17>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S18>/Unit Delay'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S18>/Unit Delay1'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S20>/Unit Delay'
     */
    0.0,

    /* Expression: 2*pi
     * Referenced by: '<S17>/Constant3'
     */
    6.2831853071795862,

    /* Expression: 1
     * Referenced by: '<S17>/Constant'
     */
    1.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainva_e
     * Referenced by: '<S15>/Discrete-Time Integrator'
     */
    0.02,

    /* Computed Parameter: DiscreteTimeIntegrator_gainva_l
     * Referenced by: '<S19>/Discrete-Time Integrator'
     */
    0.02,

    /* Expression: 0
     * Referenced by: '<S19>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 2*pi
     * Referenced by: '<S19>/Constant3'
     */
    6.2831853071795862,

    /* Expression: 1
     * Referenced by: '<S19>/Constant'
     */
    1.0,

    /* Computed Parameter: UnitDelay_InitialCondition_i
     * Referenced by: '<S17>/Unit Delay'
     */
    false,

    /* Computed Parameter: UnitDelay_InitialCondition_j
     * Referenced by: '<S19>/Unit Delay'
     */
    false
  }
  ,

  /* End of '<Root>/ESC_DT1' */

  /* Start of '<Root>/ESC_DT' */
  {
    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S9>/Discrete-Time Integrator'
     */
    0.02,

    /* Expression: 0
     * Referenced by: '<S9>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S10>/Unit Delay'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S10>/Unit Delay1'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S12>/Unit Delay'
     */
    0.0,

    /* Expression: 2*pi
     * Referenced by: '<S9>/Constant3'
     */
    6.2831853071795862,

    /* Expression: 1
     * Referenced by: '<S9>/Constant'
     */
    1.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainva_e
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    0.02,

    /* Computed Parameter: DiscreteTimeIntegrator_gainva_l
     * Referenced by: '<S11>/Discrete-Time Integrator'
     */
    0.02,

    /* Expression: 0
     * Referenced by: '<S11>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 2*pi
     * Referenced by: '<S11>/Constant3'
     */
    6.2831853071795862,

    /* Expression: 1
     * Referenced by: '<S11>/Constant'
     */
    1.0,

    /* Computed Parameter: UnitDelay_InitialCondition_i
     * Referenced by: '<S9>/Unit Delay'
     */
    false,

    /* Computed Parameter: UnitDelay_InitialCondition_j
     * Referenced by: '<S11>/Unit Delay'
     */
    false
  }
  /* End of '<Root>/ESC_DT' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
