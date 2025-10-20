/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AEB_CodeGeneration.c
 *
 * Code generated for Simulink model 'AEB_CodeGeneration'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Mon Oct 20 14:22:02 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AEB_CodeGeneration.h"
#include "Platform_Types.h"
#include "AEBControlLogicUnit.h"

/* PublicStructure Variables for Internal Data */
ARID_DEF_AEB_CodeGeneration_T AEB_CodeGeneration_ARID_DEF;/* '<Root>/AEBControlLogicUnit' */

/* Model step function */
void AEB_CodeGeneration_Step(void)
{
  float64 tmpIRead;
  float64 tmpIRead_0;
  float64 tmpIRead_1;

  /* Inport: '<Root>/LeadVehicleSpeed' */
  tmpIRead_1 =
    Rte_IRead_AEB_CodeGeneration_Step_LeadVehicleSpeed_LeadVehicleSpeed();

  /* Inport: '<Root>/LeadVehicleDistance' */
  tmpIRead_0 =
    Rte_IRead_AEB_CodeGeneration_Step_LeadVehicleDistance_LeadVehicleDistance();

  /* Inport: '<Root>/EgoVehicleSpeed' */
  tmpIRead = Rte_IRead_AEB_CodeGeneration_Step_EgoVehicleSpeed_EgoVehicleSpeed();

  /* ModelReference: '<Root>/AEBControlLogicUnit' */
  AEBControlLogicUnit(&tmpIRead, &tmpIRead_1, &tmpIRead_0,
                      &AEB_CodeGeneration_ARID_DEF.AEB_Status,
                      &AEB_CodeGeneration_ARID_DEF.BrakeCommand,
                      &(AEB_CodeGeneration_ARID_DEF.AEBControlLogicUnit_InstanceDat.rtdw));

  /* Outport: '<Root>/BrakeCommand' */
  Rte_IWrite_AEB_CodeGeneration_Step_BrakeCommand_BrakeCommand
    (AEB_CodeGeneration_ARID_DEF.BrakeCommand);

  /* Outport: '<Root>/AEB_Status' */
  Rte_IWrite_AEB_CodeGeneration_Step_AEB_Status_AEB_Status
    (AEB_CodeGeneration_ARID_DEF.AEB_Status);
}

/* Model initialize function */
void AEB_CodeGeneration_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
