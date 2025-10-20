/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "AEB_CodeGeneration"
   ARXML schema: "R23-11"
   File generated on: "Mon Oct 20 14:22:11 2025"  */

#ifndef Rte_AEB_CodeGeneration_h
#define Rte_AEB_CodeGeneration_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_AEB_CodeGeneration_Step_EgoVehicleSpeed_EgoVehicleSpeed Rte_IRead_AEB_CodeGeneration_AEB_CodeGeneration_Step_EgoVehicleSpeed_EgoVehicleSpeed

float64 Rte_IRead_AEB_CodeGeneration_Step_EgoVehicleSpeed_EgoVehicleSpeed(void);

#define Rte_IRead_AEB_CodeGeneration_Step_LeadVehicleDistance_LeadVehicleDistance Rte_IRead_AEB_CodeGeneration_AEB_CodeGeneration_Step_LeadVehicleDistance_LeadVehicleDistance

float64
  Rte_IRead_AEB_CodeGeneration_Step_LeadVehicleDistance_LeadVehicleDistance(void);

#define Rte_IRead_AEB_CodeGeneration_Step_LeadVehicleSpeed_LeadVehicleSpeed Rte_IRead_AEB_CodeGeneration_AEB_CodeGeneration_Step_LeadVehicleSpeed_LeadVehicleSpeed

float64 Rte_IRead_AEB_CodeGeneration_Step_LeadVehicleSpeed_LeadVehicleSpeed(void);

#define Rte_IWrite_AEB_CodeGeneration_Step_BrakeCommand_BrakeCommand Rte_IWrite_AEB_CodeGeneration_AEB_CodeGeneration_Step_BrakeCommand_BrakeCommand

void Rte_IWrite_AEB_CodeGeneration_Step_BrakeCommand_BrakeCommand(float64 u);

#define Rte_IWriteRef_AEB_CodeGeneration_Step_BrakeCommand_BrakeCommand Rte_IWriteRef_AEB_CodeGeneration_AEB_CodeGeneration_Step_BrakeCommand_BrakeCommand

float64* Rte_IWriteRef_AEB_CodeGeneration_Step_BrakeCommand_BrakeCommand(void);

#define Rte_IWrite_AEB_CodeGeneration_Step_AEB_Status_AEB_Status Rte_IWrite_AEB_CodeGeneration_AEB_CodeGeneration_Step_AEB_Status_AEB_Status

void Rte_IWrite_AEB_CodeGeneration_Step_AEB_Status_AEB_Status(float64 u);

#define Rte_IWriteRef_AEB_CodeGeneration_Step_AEB_Status_AEB_Status Rte_IWriteRef_AEB_CodeGeneration_AEB_CodeGeneration_Step_AEB_Status_AEB_Status

float64* Rte_IWriteRef_AEB_CodeGeneration_Step_AEB_Status_AEB_Status(void);

/* Entry point functions */
extern FUNC(void, AEB_CodeGeneration_CODE) AEB_CodeGeneration_Init(void);
extern FUNC(void, AEB_CodeGeneration_CODE) AEB_CodeGeneration_Step(void);

#endif
