/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/github/si-lansab/Satellite/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-18T21:38:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OperationalScenario.h"

void OperationalScenario_reset(outC_OperationalScenario *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
}

/* OperationalScenario */
void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC)
{
  /* TestActuators::ActuatorsStatus */ kcg_bool last_ActuatorsStatus_1;
  /* TestActuators::MagneticTorquers */ kcg_bool last_MagneticTorquers_1;
  /* TestActuators::Reactionwheels */ kcg_bool last_Reactionwheels_1;
  /* ReadSensors::SensorsStatus */ kcg_bool last_SensorsStatus_6;
  /* ReadSensors::SunSensor */ kcg_bool last_SunSensor_6;
  /* ReadSensors::Accelerometers */ kcg_bool last_Accelerometers_6;
  /* ReadSensors::Gyroscopes */ kcg_bool last_Gyroscopes_6;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _45_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _44_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _43_OpPhases_state_nxt;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _42_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _41_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _40_color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real _39_AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _38_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _37_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _36_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _35_color4;
  /* OperationalScenario::color3 */ kcg_int _34_color3;
  /* OperationalScenario::color_2 */ kcg_int _33_color_2;
  /* OperationalScenario::color */ kcg_int color32;
  /* OperationalScenario::LaunchPhase */ kcg_bool _31_LaunchPhase;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_2_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _46_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _47_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _48_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _49_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _50_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _51_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _30_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _29_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _28_OpPhases_state_nxt;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _27_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _26_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _25_color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real _24_AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _23_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _22_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _21_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _20_color4;
  /* OperationalScenario::color3 */ kcg_int _19_color3;
  /* OperationalScenario::color_2 */ kcg_int _18_color_2;
  /* OperationalScenario::color */ kcg_int color17;
  /* OperationalScenario::LaunchPhase */ kcg_bool _16_LaunchPhase;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_1_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::AtAcquisition */ kcg_bool last_AtAcquisition_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _15_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _14_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _13_OpPhases_state_nxt;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _12_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _11_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _10_color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real _9_AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _8_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _7_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _6_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _5_color4;
  /* OperationalScenario::color3 */ kcg_int _4_color3;
  /* OperationalScenario::color_2 */ kcg_int _3_color_2;
  /* OperationalScenario::color */ kcg_int color2;
  /* OperationalScenario::LaunchPhase */ kcg_bool _1_LaunchPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool br_1_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_nxt;
  /* OperationalScenario::FuelMeterLocal */ kcg_real FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int color4;
  /* OperationalScenario::color3 */ kcg_int color3;
  /* OperationalScenario::color_2 */ kcg_int color_2;
  /* OperationalScenario::color */ kcg_int color;
  /* OperationalScenario::LaunchPhase */ kcg_bool LaunchPhase;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _60_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _59_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _58_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_1_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _57_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _56_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _55_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _54_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _53_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _52_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_act;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool last_GroundVisibleLocal;
  /* OperationalScenario::ApertarBotao */ kcg_bool last_ApertarBotao;
  /* OperationalScenario::LaunchPhase */ kcg_bool last_LaunchPhase;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool last_StartLaunchPhase;
  /* OperationalScenario::upDateSw */ kcg_bool last_upDateSw;
  /* OperationalScenario::MagneticTorquers */ kcg_bool last_MagneticTorquers;
  /* OperationalScenario::Reactionwheels */ kcg_bool last_Reactionwheels;
  /* OperationalScenario::SunSensor */ kcg_bool last_SunSensor;
  /* OperationalScenario::Accelerometers */ kcg_bool last_Accelerometers;
  /* OperationalScenario::picLocation */ kcg_real last_picLocation;
  /* OperationalScenario::takePict */ kcg_bool last_takePict;
  /* OperationalScenario::AttitudeReference */ kcg_int last_AttitudeReference;
  /* OperationalScenario::Telemetry */ kcg_int last_Telemetry;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_sel;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_prv;
  
  if (outC->init2) {
    outC->OpPhases_state_sel = SSM_st_Ground_OpPhases;
  }
  else {
    outC->OpPhases_state_sel = outC->OpPhases_state_nxt;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      _58_OpPhases_state_act = SSM_st_Ground_OpPhases;
      outC->OpPhases_state_act = _58_OpPhases_state_act;
      break;
    case SSM_st_Launch_OpPhases :
      _55_OpPhases_state_act = SSM_st_Launch_OpPhases;
      outC->OpPhases_state_act = _55_OpPhases_state_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _52_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      outC->OpPhases_state_act = _52_OpPhases_state_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      outC->OpPhases_state_act = OpPhases_state_act;
      break;
    
  }
  if (outC->init2) {
    OpPhases_reset_prv = kcg_false;
  }
  else {
    OpPhases_reset_prv = outC->OpPhases_reset_act;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      _56_OpPhases_reset_act = kcg_false;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _53_OpPhases_reset_act = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_reset_act = kcg_false;
      break;
    
  }
  if (outC->init2) {
    last_StartLaunchPhase = kcg_false;
  }
  else {
    last_StartLaunchPhase = outC->StartLaunchPhase;
  }
  if (outC->init2) {
    last_LaunchPhase = kcg_false;
  }
  else {
    last_LaunchPhase = outC->LaunchPhase;
  }
  outC->_L22 = last_LaunchPhase;
  outC->StartLaunchPhase = outC->_L22;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      br_1_guard_OpPhases_Ground = !outC->StartLaunchPhase;
      _59_OpPhases_reset_act = br_1_guard_OpPhases_Ground;
      outC->OpPhases_reset_act = _59_OpPhases_reset_act;
      break;
    case SSM_st_Launch_OpPhases :
      outC->OpPhases_reset_act = _56_OpPhases_reset_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_reset_act = _53_OpPhases_reset_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->OpPhases_reset_act = OpPhases_reset_act;
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init3 = kcg_true;
      }
      break;
    
  }
  if (outC->init2) {
    OpPhases_reset_sel = kcg_false;
  }
  else {
    OpPhases_reset_sel = outC->OpPhases_reset_nxt;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      if (outC->init3) {
        last_MagneticTorquers_1 = kcg_true;
      }
      else {
        last_MagneticTorquers_1 = outC->MagneticTorquers_1;
      }
      break;
    
  }
  outC->_L32 = kcg_true;
  outC->MagneticTorquersLocal = outC->_L32;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L35_OpPhases_Ground = outC->MagneticTorquersLocal;
      outC->MagneticTorquers_1 = outC->_L35_OpPhases_Ground;
      if (outC->init3) {
        last_SunSensor_6 = kcg_true;
      }
      else {
        last_SunSensor_6 = outC->SunSensor_6;
      }
      break;
    
  }
  outC->SunSensorLocal = outC->_L32;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L33_OpPhases_Ground = outC->SunSensorLocal;
      outC->SunSensor_6 = outC->_L33_OpPhases_Ground;
      if (outC->init3) {
        last_Accelerometers_6 = kcg_true;
      }
      else {
        last_Accelerometers_6 = outC->Accelerometers_6;
      }
      break;
    
  }
  outC->_L31 = kcg_true;
  outC->AccelerometersLocal = outC->_L31;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L32_OpPhases_Ground = outC->AccelerometersLocal;
      outC->Accelerometers_6 = outC->_L32_OpPhases_Ground;
      break;
    
  }
  if (outC->init2) {
    last_GroundVisibleLocal = kcg_true;
  }
  else {
    last_GroundVisibleLocal = outC->GroundVisibleLocal;
  }
  if (outC->init2) {
    last_ApertarBotao = kcg_false;
  }
  else {
    last_ApertarBotao = outC->ApertarBotao;
  }
  if (outC->init2) {
    last_upDateSw = kcg_false;
  }
  else {
    last_upDateSw = outC->rem_upDateSw;
  }
  if (outC->init2) {
    last_MagneticTorquers = kcg_true;
  }
  else {
    last_MagneticTorquers = outC->rem_MagneticTorquers;
  }
  if (outC->init2) {
    last_Reactionwheels = kcg_true;
  }
  else {
    last_Reactionwheels = outC->rem_Reactionwheels;
  }
  if (outC->init2) {
    last_SunSensor = kcg_true;
  }
  else {
    last_SunSensor = outC->rem_SunSensor;
  }
  if (outC->init2) {
    last_Accelerometers = kcg_true;
  }
  else {
    last_Accelerometers = outC->rem_Accelerometers;
  }
  if (outC->init2) {
    last_picLocation = 0.0;
  }
  else {
    last_picLocation = outC->rem_picLocation;
  }
  if (outC->init2) {
    last_takePict = kcg_false;
  }
  else {
    last_takePict = outC->rem_takePict;
  }
  if (outC->init2) {
    last_AttitudeReference = 0;
  }
  else {
    last_AttitudeReference = outC->rem_AttitudeReference;
  }
  if (outC->init2) {
    last_Telemetry = 0;
  }
  else {
    last_Telemetry = outC->rem_Telemetry;
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L42_OpPhases_Ground = 100.0;
      _42_FuelMeterLocal = outC->_L42_OpPhases_Ground;
      outC->FuelMeterLocal = _42_FuelMeterLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L34_OpPhases_Launch = 100.0;
      _27_FuelMeterLocal = outC->_L34_OpPhases_Launch;
      outC->FuelMeterLocal = _27_FuelMeterLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->init1) {
        outC->_L36_OpPhases_AttitudeAcquisition = 100.0;
      }
      else {
        outC->_L36_OpPhases_AttitudeAcquisition =
          outC->_L37_OpPhases_AttitudeAcquisition;
      }
      outC->_L31_OpPhases_AttitudeAcquisition = 10.0;
      outC->_L40_OpPhases_AttitudeAcquisition =
        outC->_L36_OpPhases_AttitudeAcquisition -
        outC->_L31_OpPhases_AttitudeAcquisition;
      _12_FuelMeterLocal = outC->_L40_OpPhases_AttitudeAcquisition;
      outC->FuelMeterLocal = _12_FuelMeterLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L21_OpPhases_NormalPhase = 0.0;
      FuelMeterLocal = outC->_L21_OpPhases_NormalPhase;
      outC->FuelMeterLocal = FuelMeterLocal;
      break;
    
  }
  outC->_L43 = outC->FuelMeterLocal;
  outC->_L45 = 25.0;
  outC->_L44 = outC->_L43 * outC->_L45;
  outC->_L46 = (kcg_int) outC->_L44;
  outC->FuelMeterGraphic = outC->_L46;
  outC->FuelMeter = outC->_L43;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L41_OpPhases_Ground = kcg_false;
      _41_LaunchVisibleLocal = outC->_L41_OpPhases_Ground;
      outC->LaunchVisibleLocal = _41_LaunchVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L33_OpPhases_Launch = kcg_true;
      _26_LaunchVisibleLocal = outC->_L33_OpPhases_Launch;
      outC->LaunchVisibleLocal = _26_LaunchVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L30_OpPhases_AttitudeAcquisition = kcg_false;
      _11_LaunchVisibleLocal = outC->_L30_OpPhases_AttitudeAcquisition;
      outC->LaunchVisibleLocal = _11_LaunchVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L19_OpPhases_NormalPhase = kcg_false;
      LaunchVisibleLocal = outC->_L19_OpPhases_NormalPhase;
      outC->LaunchVisibleLocal = LaunchVisibleLocal;
      break;
    
  }
  outC->_L42 = outC->LaunchVisibleLocal;
  outC->LaunchVisible = outC->_L42;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L39_OpPhases_Ground = 21;
      _40_color_5 = outC->_L39_OpPhases_Ground;
      outC->color_5 = _40_color_5;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L31_OpPhases_Launch = 21;
      _25_color_5 = outC->_L31_OpPhases_Launch;
      outC->color_5 = _25_color_5;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L28_OpPhases_AttitudeAcquisition = 21;
      _10_color_5 = outC->_L28_OpPhases_AttitudeAcquisition;
      outC->color_5 = _10_color_5;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L18_OpPhases_NormalPhase = 55;
      color_5 = outC->_L18_OpPhases_NormalPhase;
      outC->color_5 = color_5;
      break;
    
  }
  outC->_L41 = outC->color_5;
  outC->ColorIndex5 = outC->_L41;
  outC->_L36 = kcg_false;
  outC->AtNormalPhase = outC->_L36;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L37_OpPhases_Ground = 0.0;
      _39_AcRdValueLocal = outC->_L37_OpPhases_Ground;
      outC->AcRdValueLocal = _39_AcRdValueLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L29_OpPhases_Launch = 0.0;
      _24_AcRdValueLocal = outC->_L29_OpPhases_Launch;
      outC->AcRdValueLocal = _24_AcRdValueLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->init1) {
        outC->_L26_OpPhases_AttitudeAcquisition = 1.0;
      }
      else {
        outC->_L26_OpPhases_AttitudeAcquisition =
          outC->_L25_OpPhases_AttitudeAcquisition;
      }
      outC->_L22_OpPhases_AttitudeAcquisition = 1.0;
      outC->_L23_OpPhases_AttitudeAcquisition =
        outC->_L26_OpPhases_AttitudeAcquisition +
        outC->_L22_OpPhases_AttitudeAcquisition;
      _9_AcRdValueLocal = outC->_L23_OpPhases_AttitudeAcquisition;
      outC->AcRdValueLocal = _9_AcRdValueLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L13_OpPhases_NormalPhase = 10.0;
      AcRdValueLocal = outC->_L13_OpPhases_NormalPhase;
      outC->AcRdValueLocal = AcRdValueLocal;
      break;
    
  }
  outC->_L38 = outC->AcRdValueLocal;
  outC->AcRdValue = outC->_L38;
  outC->AtAcquisition = outC->_L36;
  outC->_L34 = inC->Power;
  outC->ReactionwheelsLocal = outC->_L32;
  outC->PowerLocal = outC->_L34;
  outC->GyroscopesLocal = outC->_L31;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L16_OpPhases_Ground = kcg_false;
      _38_NormalPhaseVisibleLocal = outC->_L16_OpPhases_Ground;
      outC->NormalPhaseVisibleLocal = _38_NormalPhaseVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L13_OpPhases_Launch = kcg_false;
      _23_NormalPhaseVisibleLocal = outC->_L13_OpPhases_Launch;
      outC->NormalPhaseVisibleLocal = _23_NormalPhaseVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L16_OpPhases_AttitudeAcquisition = kcg_false;
      _8_NormalPhaseVisibleLocal = outC->_L16_OpPhases_AttitudeAcquisition;
      outC->NormalPhaseVisibleLocal = _8_NormalPhaseVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L12_OpPhases_NormalPhase = kcg_true;
      NormalPhaseVisibleLocal = outC->_L12_OpPhases_NormalPhase;
      outC->NormalPhaseVisibleLocal = NormalPhaseVisibleLocal;
      break;
    
  }
  outC->_L20 = outC->NormalPhaseVisibleLocal;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L15_OpPhases_Ground = kcg_false;
      _37_AttitudeVisibleLocal = outC->_L15_OpPhases_Ground;
      outC->AttitudeVisibleLocal = _37_AttitudeVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L12_OpPhases_Launch = kcg_false;
      _22_AttitudeVisibleLocal = outC->_L12_OpPhases_Launch;
      outC->AttitudeVisibleLocal = _22_AttitudeVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L19_OpPhases_AttitudeAcquisition = kcg_true;
      _7_AttitudeVisibleLocal = outC->_L19_OpPhases_AttitudeAcquisition;
      outC->AttitudeVisibleLocal = _7_AttitudeVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L10_OpPhases_NormalPhase = kcg_false;
      AttitudeVisibleLocal = outC->_L10_OpPhases_NormalPhase;
      outC->AttitudeVisibleLocal = AttitudeVisibleLocal;
      break;
    
  }
  outC->_L19 = outC->AttitudeVisibleLocal;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L13_OpPhases_Ground = kcg_true;
      _36_GroundVisibleLocal = outC->_L13_OpPhases_Ground;
      outC->GroundVisibleLocal = _36_GroundVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L14_OpPhases_Launch = kcg_false;
      _21_GroundVisibleLocal = outC->_L14_OpPhases_Launch;
      outC->GroundVisibleLocal = _21_GroundVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L17_OpPhases_AttitudeAcquisition = kcg_false;
      _6_GroundVisibleLocal = outC->_L17_OpPhases_AttitudeAcquisition;
      outC->GroundVisibleLocal = _6_GroundVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L11_OpPhases_NormalPhase = kcg_false;
      GroundVisibleLocal = outC->_L11_OpPhases_NormalPhase;
      outC->GroundVisibleLocal = GroundVisibleLocal;
      break;
    
  }
  outC->_L16 = outC->GroundVisibleLocal;
  outC->NormalPhaseVisible = outC->_L20;
  outC->AttitudeVisible = outC->_L19;
  outC->GroundVisible = outC->_L16;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L8_OpPhases_Ground = 21;
      _35_color4 = outC->_L8_OpPhases_Ground;
      outC->color4 = _35_color4;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L10_OpPhases_Launch = 21;
      _20_color4 = outC->_L10_OpPhases_Launch;
      outC->color4 = _20_color4;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L12_OpPhases_AttitudeAcquisition = 21;
      _5_color4 = outC->_L12_OpPhases_AttitudeAcquisition;
      outC->color4 = _5_color4;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L7_OpPhases_NormalPhase = 55;
      color4 = outC->_L7_OpPhases_NormalPhase;
      outC->color4 = color4;
      break;
    
  }
  outC->_L15 = outC->color4;
  outC->ColorIndex4 = outC->_L15;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L7_OpPhases_Ground = 21;
      _34_color3 = outC->_L7_OpPhases_Ground;
      outC->color3 = _34_color3;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L7_OpPhases_Launch = 21;
      _19_color3 = outC->_L7_OpPhases_Launch;
      outC->color3 = _19_color3;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L13_OpPhases_AttitudeAcquisition = 55;
      _4_color3 = outC->_L13_OpPhases_AttitudeAcquisition;
      outC->color3 = _4_color3;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L8_OpPhases_NormalPhase = 21;
      color3 = outC->_L8_OpPhases_NormalPhase;
      outC->color3 = color3;
      break;
    
  }
  outC->_L14 = outC->color3;
  outC->ColorIndex3 = outC->_L14;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L4_OpPhases_Ground = 55;
      _33_color_2 = outC->_L4_OpPhases_Ground;
      outC->color_2 = _33_color_2;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L6_OpPhases_Launch = 21;
      _18_color_2 = outC->_L6_OpPhases_Launch;
      outC->color_2 = _18_color_2;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L14_OpPhases_AttitudeAcquisition = 21;
      _3_color_2 = outC->_L14_OpPhases_AttitudeAcquisition;
      outC->color_2 = _3_color_2;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L6_OpPhases_NormalPhase = 21;
      color_2 = outC->_L6_OpPhases_NormalPhase;
      outC->color_2 = color_2;
      break;
    
  }
  outC->_L13 = outC->color_2;
  outC->ColorIndex2 = outC->_L13;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L2_OpPhases_Ground = 21;
      color32 = outC->_L2_OpPhases_Ground;
      outC->color = color32;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L5_OpPhases_Launch = 55;
      color17 = outC->_L5_OpPhases_Launch;
      outC->color = color17;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L15_OpPhases_AttitudeAcquisition = 21;
      color2 = outC->_L15_OpPhases_AttitudeAcquisition;
      outC->color = color2;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L5_OpPhases_NormalPhase = 21;
      color = outC->_L5_OpPhases_NormalPhase;
      outC->color = color;
      break;
    
  }
  outC->_L12 = outC->color;
  outC->ColorIndex = outC->_L12;
  outC->_L11 = kcg_true;
  outC->Emit2CDS = outC->_L11;
  outC->_L7 = inC->PassarFaseBtn;
  outC->ApertarBotao = outC->_L7;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->Layer1Visible = outC->_L9;
  outC->Layer1Active = outC->_L8;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      if (br_1_guard_OpPhases_Ground) {
        _60_OpPhases_fired_strong = SSM_TR_Ground_1_OpPhases;
      }
      else {
        _60_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _60_OpPhases_fired_strong;
      break;
    case SSM_st_Launch_OpPhases :
      _57_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = _57_OpPhases_fired_strong;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _54_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = _54_OpPhases_fired_strong;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = OpPhases_fired_strong;
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->Ground_weakb_clock_OpPhases = outC->OpPhases_fired_strong !=
        SSM_TR_no_trans_OpPhases;
      if (outC->Ground_weakb_clock_OpPhases) {
        _51_OpPhases_fired = outC->OpPhases_fired_strong;
        _50_OpPhases_reset_nxt = kcg_false;
        _49_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        _45_OpPhases_fired = _51_OpPhases_fired;
        _44_OpPhases_reset_nxt = _50_OpPhases_reset_nxt;
        _43_OpPhases_state_nxt = _49_OpPhases_state_nxt;
      }
      else {
        br_2_guard_OpPhases_Ground = outC->StartLaunchPhase;
        if (br_2_guard_OpPhases_Ground) {
          _48_OpPhases_fired = SSM_TR_Ground_2_OpPhases;
        }
        else {
          _48_OpPhases_fired = SSM_TR_no_trans_OpPhases;
        }
        _47_OpPhases_reset_nxt = br_2_guard_OpPhases_Ground;
        if (br_2_guard_OpPhases_Ground) {
          _46_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
        }
        else {
          _46_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        }
        _45_OpPhases_fired = _48_OpPhases_fired;
        _44_OpPhases_reset_nxt = _47_OpPhases_reset_nxt;
        _43_OpPhases_state_nxt = _46_OpPhases_state_nxt;
      }
      outC->_L34_OpPhases_Ground = outC->ReactionwheelsLocal;
      outC->_L31_OpPhases_Ground = outC->GyroscopesLocal;
      outC->_L30_OpPhases_Ground = outC->PowerLocal;
      if (outC->init3) {
        last_SensorsStatus_6 = kcg_true;
      }
      else {
        last_SensorsStatus_6 = outC->SensorsStatus_6;
      }
      if (outC->init3) {
        last_Gyroscopes_6 = kcg_true;
      }
      else {
        last_Gyroscopes_6 = outC->Gyroscopes_6;
      }
      outC->Gyroscopes_6 = outC->_L31_OpPhases_Ground;
      outC->_L2_6 = outC->Gyroscopes_6;
      outC->_L4_6 = outC->Accelerometers_6;
      outC->_L6_6 = outC->_L2_6 | outC->_L4_6;
      outC->_L5_6 = outC->SunSensor_6;
      outC->_L8_6 = outC->_L6_6 | outC->_L5_6;
      outC->SensorsStatus_6 = outC->_L8_6;
      outC->_L22_OpPhases_Ground = outC->SensorsStatus_6;
      outC->_L23_OpPhases_Ground = outC->_L30_OpPhases_Ground &
        outC->_L22_OpPhases_Ground;
      if (outC->init3) {
        last_ActuatorsStatus_1 = kcg_true;
      }
      else {
        last_ActuatorsStatus_1 = outC->ActuatorsStatus_1;
      }
      if (outC->init3) {
        last_Reactionwheels_1 = kcg_true;
      }
      else {
        last_Reactionwheels_1 = outC->Reactionwheels_1;
      }
      outC->Reactionwheels_1 = outC->_L34_OpPhases_Ground;
      outC->_L2_1 = outC->Reactionwheels_1;
      outC->_L3_1 = outC->MagneticTorquers_1;
      outC->_L4_1 = outC->_L2_1 | outC->_L3_1;
      outC->ActuatorsStatus_1 = outC->_L4_1;
      outC->_L24_OpPhases_Ground = outC->ActuatorsStatus_1;
      outC->_L27_OpPhases_Ground = outC->_L23_OpPhases_Ground &
        outC->_L24_OpPhases_Ground;
      _31_LaunchPhase = outC->_L27_OpPhases_Ground;
      outC->OpPhases_fired = _45_OpPhases_fired;
      outC->OpPhases_reset_nxt = _44_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _43_OpPhases_state_nxt;
      outC->LaunchPhase = _31_LaunchPhase;
      break;
    case SSM_st_Launch_OpPhases :
      _16_LaunchPhase = last_LaunchPhase;
      if (outC->init) {
        last_AtAcquisition_OpPhases_Launch = kcg_false;
      }
      else {
        last_AtAcquisition_OpPhases_Launch =
          outC->AtAcquisition_OpPhases_Launch;
      }
      outC->_L28_OpPhases_Launch = outC->ApertarBotao;
      outC->AtAcquisition_OpPhases_Launch = outC->_L28_OpPhases_Launch;
      br_1_guard_OpPhases_Launch = outC->AtAcquisition_OpPhases_Launch;
      if (br_1_guard_OpPhases_Launch) {
        _30_OpPhases_fired = SSM_TR_Launch_1_OpPhases;
      }
      else {
        _30_OpPhases_fired = SSM_TR_no_trans_OpPhases;
      }
      _29_OpPhases_reset_nxt = br_1_guard_OpPhases_Launch;
      if (br_1_guard_OpPhases_Launch) {
        _28_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      }
      else {
        _28_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
      }
      outC->OpPhases_fired = _30_OpPhases_fired;
      outC->OpPhases_reset_nxt = _29_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _28_OpPhases_state_nxt;
      outC->LaunchPhase = _16_LaunchPhase;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _1_LaunchPhase = last_LaunchPhase;
      outC->_L27_OpPhases_AttitudeAcquisition = 10.0;
      outC->_L24_OpPhases_AttitudeAcquisition =
        outC->_L23_OpPhases_AttitudeAcquisition >=
        outC->_L27_OpPhases_AttitudeAcquisition;
      outC->AtNormalPhaseLocal_OpPhases_AttitudeAcquisition =
        outC->_L24_OpPhases_AttitudeAcquisition;
      br_1_guard_OpPhases_AttitudeAcquisition =
        outC->AtNormalPhaseLocal_OpPhases_AttitudeAcquisition;
      if (br_1_guard_OpPhases_AttitudeAcquisition) {
        _15_OpPhases_fired = SSM_TR_AttitudeAcquisition_1_OpPhases;
      }
      else {
        _15_OpPhases_fired = SSM_TR_no_trans_OpPhases;
      }
      _14_OpPhases_reset_nxt = br_1_guard_OpPhases_AttitudeAcquisition;
      if (br_1_guard_OpPhases_AttitudeAcquisition) {
        _13_OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      }
      else {
        _13_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      }
      outC->_L35_OpPhases_AttitudeAcquisition = 0.0;
      outC->_L39_OpPhases_AttitudeAcquisition =
        outC->_L40_OpPhases_AttitudeAcquisition ==
        outC->_L35_OpPhases_AttitudeAcquisition;
      outC->_L32_OpPhases_AttitudeAcquisition = 1.0;
      if (outC->_L39_OpPhases_AttitudeAcquisition) {
        outC->_L37_OpPhases_AttitudeAcquisition =
          outC->_L32_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L37_OpPhases_AttitudeAcquisition =
          outC->_L40_OpPhases_AttitudeAcquisition;
      }
      outC->_L21_OpPhases_AttitudeAcquisition = 1.0;
      if (outC->_L24_OpPhases_AttitudeAcquisition) {
        outC->_L25_OpPhases_AttitudeAcquisition =
          outC->_L21_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L25_OpPhases_AttitudeAcquisition =
          outC->_L23_OpPhases_AttitudeAcquisition;
      }
      outC->OpPhases_fired = _15_OpPhases_fired;
      outC->OpPhases_reset_nxt = _14_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _13_OpPhases_state_nxt;
      outC->LaunchPhase = _1_LaunchPhase;
      break;
    case SSM_st_NormalPhase_OpPhases :
      LaunchPhase = last_LaunchPhase;
      OpPhases_fired = outC->OpPhases_fired_strong;
      OpPhases_reset_nxt = kcg_false;
      OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      outC->OpPhases_fired = OpPhases_fired;
      outC->OpPhases_reset_nxt = OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = OpPhases_state_nxt;
      outC->LaunchPhase = LaunchPhase;
      break;
    
  }
  outC->rem_Telemetry = inC->Telemetry;
  outC->rem_AttitudeReference = inC->AttitudeReference;
  outC->rem_takePict = inC->takePict;
  outC->rem_picLocation = inC->picLocation;
  outC->rem_Accelerometers = inC->Accelerometers;
  outC->rem_SunSensor = inC->SunSensor;
  outC->rem_Reactionwheels = inC->Reactionwheels;
  outC->rem_MagneticTorquers = inC->MagneticTorquers;
  outC->rem_upDateSw = inC->upDateSw;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Launch_OpPhases :
      outC->init = kcg_false;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->init1 = kcg_false;
      break;
    
  }
  outC->init2 = kcg_false;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->init3 = kcg_false;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.c
** Generation date: 2014-11-18T21:38:59
*************************************************************$ */

