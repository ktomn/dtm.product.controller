/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'escontrol'.
 *
 * Model version                  : 1.34
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Oct 11 16:44:08 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stddef.h>
#include <stdio.h>            /* This example main program uses printf/fflush */
#include "escontrol.h"                 /* Model header file */

static RT_MODEL_escontrol_T escontrol_M_;
static RT_MODEL_escontrol_T *const escontrol_MPtr = &escontrol_M_;/* Real-time model */
static DW_escontrol_T escontrol_DW;    /* Observable states */
static ExtU_escontrol_T escontrol_U;   /* External inputs */
static ExtY_escontrol_T escontrol_Y;   /* External outputs */

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL_escontrol_T *const escontrol_M);
void rt_OneStep(RT_MODEL_escontrol_T *const escontrol_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(escontrol_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  escontrol_step(escontrol_M, &escontrol_U, &escontrol_Y);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific. This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  RT_MODEL_escontrol_T *const escontrol_M = escontrol_MPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */
  escontrol_M->dwork = &escontrol_DW;

  /* Initialize model */
  escontrol_initialize(escontrol_M, &escontrol_U, &escontrol_Y);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.02 seconds (base rate of the model) here.
   * The call syntax for rt_OneStep is
   *
   *  rt_OneStep(escontrol_M);
   */

  for(int_T i=0; i<100; i++)
  {
    //Update inputs to model
    /* Paramter inputs */
    real_T Ts = 0.02;
    real_T T = 10*Ts;
    real_T PI = 3.14159265359;

    escontrol_U.parameters_w = 2*PI*(1/T);
    escontrol_U.parameters_phi1 = 0*PI/2; escontrol_U.parameters_a = 1;
    escontrol_U.parameters_w_hpf = 0.01*escontrol_U.parameters_w; escontrol_U.parameters_enable_hpf = 0;
    escontrol_U.parameters_w_lpf = 0.01*escontrol_U.parameters_w; escontrol_U.parameters_enable_lpf = 0;
    escontrol_U.parameters_k = 10; escontrol_U.parameters_theta0 = 1;
    escontrol_U.parameters_phi2 = 0; escontrol_U.parameters_b = 0.1*escontrol_U.parameters_a;
    escontrol_U.parameters_theta_min = -10000, escontrol_U.parameters_theta_max = 10000;

    real_T T_2 = 15*Ts;
    escontrol_U.parameters_w_2 = 2*PI*(1/T_2);
    escontrol_U.parameters_phi1_2 = 0*PI/2; escontrol_U.parameters_a_2 = 1;
    escontrol_U.parameters_w_hpf_2 = 0.01*escontrol_U.parameters_w_2; escontrol_U.parameters_enable_hpf_2 = 0;
    escontrol_U.parameters_w_lpf_2 = 0.01*escontrol_U.parameters_w_2; escontrol_U.parameters_enable_lpf_2 = 0;
    escontrol_U.parameters_k_2 = 10; escontrol_U.parameters_theta0_2 = 1;
    escontrol_U.parameters_phi2_2 = 0; escontrol_U.parameters_b_2 = 0.1*escontrol_U.parameters_a_2;
    escontrol_U.parameters_theta_min_2 = -10000, escontrol_U.parameters_theta_max_2 = 10000;
    
    /* Feedback inputs (from plant) */
    escontrol_U.y = -1*(escontrol_Y.theta[0])*(escontrol_Y.theta[0]) - (escontrol_Y.theta[1] - 1)*(escontrol_Y.theta[1] - 1);

    // step the model
    rt_OneStep(escontrol_M);
    printf("[%d]: y = %f\t theta1 = %f \t theta2 = %f\n", i,escontrol_U.y, escontrol_Y.theta[0], escontrol_Y.theta[1]);

  } 

  /* Terminate model */
  escontrol_terminate(escontrol_M);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
