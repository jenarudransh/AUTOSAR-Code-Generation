/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AEB_CodeGeneration.h
 *
 * Code generated for Simulink model 'AEB_CodeGeneration'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Tue Oct 21 22:38:51 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef AEB_CodeGeneration_h_
#define AEB_CodeGeneration_h_
#ifndef AEB_CodeGeneration_COMMON_INCLUDES_
#define AEB_CodeGeneration_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_AEB_CodeGeneration.h"
#endif                                 /* AEB_CodeGeneration_COMMON_INCLUDES_ */

#include "AEB_CodeGeneration_types.h"
#include "AEBControlLogicUnit.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  MdlrefDW_AEBControlLogicUnit_T AEBControlLogicUnit_InstanceDat;/* '<Root>/AEBControlLogicUnit' */
  float64 BrakeCommand;                /* '<Root>/AEBControlLogicUnit' */
  float64 AEB_Status;                  /* '<Root>/AEBControlLogicUnit' */
} ARID_DEF_AEB_CodeGeneration_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_AEB_CodeGeneration_T AEB_CodeGeneration_ARID_DEF;/* '<Root>/AEBControlLogicUnit' */

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
 * '<Root>' : 'AEB_CodeGeneration'
 */
#endif                                 /* AEB_CodeGeneration_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
