/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AEBControlLogicUnit.h
 *
 * Code generated for Simulink model 'AEBControlLogicUnit'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Mon Oct 20 14:21:39 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef AEBControlLogicUnit_h_
#define AEBControlLogicUnit_h_
#ifndef AEBControlLogicUnit_COMMON_INCLUDES_
#define AEBControlLogicUnit_COMMON_INCLUDES_
#include "Platform_Types.h"
#endif                                /* AEBControlLogicUnit_COMMON_INCLUDES_ */

#include "AEBControlLogicUnit_types.h"

/* Block states (default storage) for model 'AEBControlLogicUnit' */
typedef struct {
  uint8 is_active_c3_AEBControlLogicUni;/* '<Root>/Chart' */
  uint8 is_c3_AEBControlLogicUnit;     /* '<Root>/Chart' */
} DW_AEBControlLogicUnit_f_T;

typedef struct {
  DW_AEBControlLogicUnit_f_T rtdw;
} MdlrefDW_AEBControlLogicUnit_T;

extern void AEBControlLogicUnit(const float64 *rtu_EgoVehicleSpeed, const
  float64 *rtu_LeadVehicleSpeed, const float64 *rtu_LeadVehicleDistance, float64
  *rty_AEB_Status, float64 *rty_BrakeCommand, DW_AEBControlLogicUnit_f_T
  *localDW);

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
 * '<Root>' : 'AEBControlLogicUnit'
 * '<S1>'   : 'AEBControlLogicUnit/Chart'
 */
#endif                                 /* AEBControlLogicUnit_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
