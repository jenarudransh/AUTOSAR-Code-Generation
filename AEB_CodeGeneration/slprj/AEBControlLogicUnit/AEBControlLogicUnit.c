/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AEBControlLogicUnit.c
 *
 * Code generated for Simulink model 'AEBControlLogicUnit'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Wed Oct 22 03:29:19 2025
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
  *rtu_LeadVehicleDistance, const float64 *rtu_LeadVehicleSpeed, float64
  *rty_BrakeCommand, float64 *rty_AEB_Status, DW_AEBControlLogicUnit_f_T
  *localDW)
{
  float64 rtb_RelativeSpeed;

  /* Sum: '<Root>/RelativeSpeed' */
  rtb_RelativeSpeed = *rtu_EgoVehicleSpeed - *rtu_LeadVehicleSpeed;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant2'
   *  Product: '<Root>/TimeToCollision'
   *  RelationalOperator: '<Root>/Relational Operator'
   */
  if (rtb_RelativeSpeed > 0.0) {
    rtb_RelativeSpeed = 1.0 / rtb_RelativeSpeed * *rtu_LeadVehicleDistance;
  } else {
    rtb_RelativeSpeed = 999.0;
  }

  /* End of Switch: '<Root>/Switch' */

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
      if (rtb_RelativeSpeed < 2.5) {
        localDW->is_c3_AEBControlLogicUnit = AEBControlLogicUnit_IN_Warning;
        *rty_BrakeCommand = 0.0;
        *rty_AEB_Status = 1.0;
      }
      break;

     default:
      /* case IN_Warning: */
      *rty_BrakeCommand = 0.0;
      *rty_AEB_Status = 1.0;
      if (rtb_RelativeSpeed < 1.2) {
        localDW->is_c3_AEBControlLogicUnit = AEBControlLogicUnit_IN_Braking;
        *rty_BrakeCommand = 1.0;
        *rty_AEB_Status = 2.0;
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
