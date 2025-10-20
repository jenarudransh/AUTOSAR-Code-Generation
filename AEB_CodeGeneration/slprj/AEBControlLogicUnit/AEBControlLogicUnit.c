/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AEBControlLogicUnit.c
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

#include "AEBControlLogicUnit.h"
#include "Platform_Types.h"

/* Named constants for Chart: '<Root>/Chart' */
#define AEBControlLogicUnit_IN_Braking ((uint8)1U)
#define AEBControlLogicUnit_IN_Safe    ((uint8)2U)
#define AEBControlLogicUnit_IN_Warning ((uint8)3U)

/* Output and update for referenced model: 'AEBControlLogicUnit' */
void AEBControlLogicUnit(const float64 *rtu_EgoVehicleSpeed, const float64
  *rtu_LeadVehicleSpeed, const float64 *rtu_LeadVehicleDistance, float64
  *rty_AEB_Status, float64 *rty_BrakeCommand, DW_AEBControlLogicUnit_f_T
  *localDW)
{
  float64 rtb_TimeToCollision;

  /* Product: '<Root>/TimeToCollision' incorporates:
   *  Sum: '<Root>/RelativeSpeed'
   */
  rtb_TimeToCollision = 1.0 / (*rtu_EgoVehicleSpeed - *rtu_LeadVehicleSpeed) *
    *rtu_LeadVehicleDistance;

  /* Chart: '<Root>/Chart' */
  if (localDW->is_active_c3_AEBControlLogicUni == 0) {
    localDW->is_active_c3_AEBControlLogicUni = 1U;
    localDW->is_c3_AEBControlLogicUnit = AEBControlLogicUnit_IN_Safe;
    *rty_BrakeCommand = 0.0;
    *rty_AEB_Status = 0.0;
  } else {
    switch (localDW->is_c3_AEBControlLogicUnit) {
     case AEBControlLogicUnit_IN_Braking:
      *rty_BrakeCommand = 1.0;
      *rty_AEB_Status = 2.0;
      if (*rtu_EgoVehicleSpeed < 0.1) {
        localDW->is_c3_AEBControlLogicUnit = AEBControlLogicUnit_IN_Safe;
        *rty_BrakeCommand = 0.0;
        *rty_AEB_Status = 0.0;
      }
      break;

     case AEBControlLogicUnit_IN_Safe:
      *rty_BrakeCommand = 0.0;
      *rty_AEB_Status = 0.0;
      if (rtb_TimeToCollision < 2.5) {
        localDW->is_c3_AEBControlLogicUnit = AEBControlLogicUnit_IN_Warning;
        *rty_BrakeCommand = 0.0;
        *rty_AEB_Status = 1.0;
      }
      break;

     default:
      /* case IN_Warning: */
      *rty_BrakeCommand = 0.0;
      *rty_AEB_Status = 1.0;
      if (rtb_TimeToCollision < 1.2) {
        localDW->is_c3_AEBControlLogicUnit = AEBControlLogicUnit_IN_Braking;
        *rty_BrakeCommand = 1.0;
        *rty_AEB_Status = 2.0;
      } else if (rtb_TimeToCollision >= 2.5) {
        localDW->is_c3_AEBControlLogicUnit = AEBControlLogicUnit_IN_Safe;
        *rty_BrakeCommand = 0.0;
        *rty_AEB_Status = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
