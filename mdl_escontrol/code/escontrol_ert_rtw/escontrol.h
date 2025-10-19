/*
 * File: escontrol.h
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

#ifndef escontrol_h_
#define escontrol_h_
#ifndef escontrol_COMMON_INCLUDES_
#define escontrol_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* escontrol_COMMON_INCLUDES_ */

#include "escontrol_types.h"
#include <string.h>
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>/ESC_DT' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S9>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S10>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S10>/Unit Delay1' */
  real_T UnitDelay_DSTATE_o;           /* '<S12>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S7>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S11>/Discrete-Time Integrator' */
  boolean_T UnitDelay_DSTATE_d;        /* '<S9>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_f;        /* '<S11>/Unit Delay' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S9>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_f;/* '<S11>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S7>/Discrete-Time Integrator' */
} DW_ESC_DT_escontrol_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_ESC_DT_escontrol_T ESC_DT1;       /* '<Root>/ESC_DT1' */
  DW_ESC_DT_escontrol_T ESC_DT;        /* '<Root>/ESC_DT' */
} DW_escontrol_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T y;                            /* '<Root>/y' */
  real_T parameters_w;                 /* '<Root>/parameters_w' */
  real_T parameters_w_2;               /* '<Root>/parameters_w_2' */
  real_T parameters_a;                 /* '<Root>/parameters_a' */
  real_T parameters_a_2;               /* '<Root>/parameters_a_2' */
  real_T parameters_phi1;              /* '<Root>/parameters_phi1' */
  real_T parameters_phi1_2;            /* '<Root>/parameters_phi1_2' */
  real_T parameters_enable_hpf;        /* '<Root>/parameters_enable_hpf' */
  real_T parameters_enable_hpf_2;      /* '<Root>/parameters_enable_hpf_2' */
  real_T parameters_w_hpf;             /* '<Root>/parameters_w_hpf' */
  real_T parameters_w_hpf_2;           /* '<Root>/parameters_w_hpf_2' */
  real_T parameters_k;                 /* '<Root>/parameters_k' */
  real_T parameters_k_2;               /* '<Root>/parameters_k_2' */
  real_T parameters_enable_lpf;        /* '<Root>/parameters_enable_lpf' */
  real_T parameters_enable_lpf_2;      /* '<Root>/parameters_enable_lpf_2' */
  real_T parameters_w_lpf;             /* '<Root>/parameters_w_lpf' */
  real_T parameters_w_lpf_2;           /* '<Root>/parameters_w_lpf_2' */
  real_T parameters_theta0;            /* '<Root>/parameters_theta0' */
  real_T parameters_theta0_2;          /* '<Root>/parameters_theta0_2' */
  real_T parameters_b;                 /* '<Root>/parameters_b' */
  real_T parameters_b_2;               /* '<Root>/parameters_b_2' */
  real_T parameters_phi2;              /* '<Root>/parameters_phi2' */
  real_T parameters_phi2_2;            /* '<Root>/parameters_phi2_2' */
  real_T parameters_theta_max;         /* '<Root>/parameters_theta_max' */
  real_T parameters_theta_max_2;       /* '<Root>/parameters_theta_max_2' */
  real_T parameters_theta_min;         /* '<Root>/parameters_theta_min' */
  real_T parameters_theta_min_2;       /* '<Root>/parameters_theta_min_2' */
} ExtU_escontrol_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T theta[2];                     /* '<Root>/theta' */
} ExtY_escontrol_T;

/* Parameters for system: '<Root>/ESC_DT' */
struct P_ESC_DT_escontrol_T_ {
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S9>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S9>/Discrete-Time Integrator'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S10>/Unit Delay'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S10>/Unit Delay1'
                                        */
  real_T UnitDelay_InitialCondition_k; /* Expression: 0
                                        * Referenced by: '<S12>/Unit Delay'
                                        */
  real_T Constant3_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S9>/Constant3'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainva_e;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_e
                           * Referenced by: '<S7>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_gainva_l;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_l
                           * Referenced by: '<S11>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_i;  /* Expression: 0
                                        * Referenced by: '<S11>/Discrete-Time Integrator'
                                        */
  real_T Constant3_Value_n;            /* Expression: 2*pi
                                        * Referenced by: '<S11>/Constant3'
                                        */
  real_T Constant_Value_b;             /* Expression: 1
                                        * Referenced by: '<S11>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_i;
                             /* Computed Parameter: UnitDelay_InitialCondition_i
                              * Referenced by: '<S9>/Unit Delay'
                              */
  boolean_T UnitDelay_InitialCondition_j;
                             /* Computed Parameter: UnitDelay_InitialCondition_j
                              * Referenced by: '<S11>/Unit Delay'
                              */
};

/* Parameters (default storage) */
struct P_escontrol_T_ {
  real_T ESC_DT_offset_sinwave_demodulat;
                              /* Mask Parameter: ESC_DT_offset_sinwave_demodulat
                               * Referenced by: '<Root>/ESC_DT'
                               */
  real_T ESC_DT1_offset_sinwave_demodula;
                              /* Mask Parameter: ESC_DT1_offset_sinwave_demodula
                               * Referenced by: '<Root>/ESC_DT1'
                               */
  real_T ESC_DT_offset_sinwave_modulatio;
                              /* Mask Parameter: ESC_DT_offset_sinwave_modulatio
                               * Referenced by: '<Root>/ESC_DT'
                               */
  real_T ESC_DT1_offset_sinwave_modulati;
                              /* Mask Parameter: ESC_DT1_offset_sinwave_modulati
                               * Referenced by: '<Root>/ESC_DT1'
                               */
  P_ESC_DT_escontrol_T ESC_DT1;        /* '<Root>/ESC_DT1' */
  P_ESC_DT_escontrol_T ESC_DT;         /* '<Root>/ESC_DT' */
};

/* Real-time Model Data Structure */
struct tag_RTM_escontrol_T {
  const char_T * volatile errorStatus;
  DW_escontrol_T *dwork;
};

/* Block parameters (default storage) */
extern P_escontrol_T escontrol_P;

/* Model entry point functions */
extern void escontrol_initialize(RT_MODEL_escontrol_T *const escontrol_M,
  ExtU_escontrol_T *escontrol_U, ExtY_escontrol_T *escontrol_Y);
extern void escontrol_step(RT_MODEL_escontrol_T *const escontrol_M,
  ExtU_escontrol_T *escontrol_U, ExtY_escontrol_T *escontrol_Y);
extern void escontrol_terminate(RT_MODEL_escontrol_T *const escontrol_M);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'escontrol'
 * '<S1>'   : 'escontrol/ESC_DT'
 * '<S2>'   : 'escontrol/ESC_DT1'
 * '<S3>'   : 'escontrol/map_parameters'
 * '<S4>'   : 'escontrol/map_parameters1'
 * '<S5>'   : 'escontrol/ESC_DT/Demodulation'
 * '<S6>'   : 'escontrol/ESC_DT/Modulation'
 * '<S7>'   : 'escontrol/ESC_DT/Parameter update'
 * '<S8>'   : 'escontrol/ESC_DT/Saturate'
 * '<S9>'   : 'escontrol/ESC_DT/Demodulation/Sine wave'
 * '<S10>'  : 'escontrol/ESC_DT/Demodulation/hpf'
 * '<S11>'  : 'escontrol/ESC_DT/Modulation/Sine wave'
 * '<S12>'  : 'escontrol/ESC_DT/Parameter update/Subsystem'
 * '<S13>'  : 'escontrol/ESC_DT1/Demodulation'
 * '<S14>'  : 'escontrol/ESC_DT1/Modulation'
 * '<S15>'  : 'escontrol/ESC_DT1/Parameter update'
 * '<S16>'  : 'escontrol/ESC_DT1/Saturate'
 * '<S17>'  : 'escontrol/ESC_DT1/Demodulation/Sine wave'
 * '<S18>'  : 'escontrol/ESC_DT1/Demodulation/hpf'
 * '<S19>'  : 'escontrol/ESC_DT1/Modulation/Sine wave'
 * '<S20>'  : 'escontrol/ESC_DT1/Parameter update/Subsystem'
 */
#endif                                 /* escontrol_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
