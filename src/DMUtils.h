#pragma once

#include "DMMotor.h"

namespace damiao {

inline const char* statusToString(Status s) {
  switch (s) {
    case Status::DISABLED: return "DISABLED";
    case Status::ENABLED: return "ENABLED";
    case Status::SENSOR_ERROR: return "SENSOR_ERROR";
    case Status::PARAM_ERROR: return "PARAM_ERROR";
    case Status::OVER_VOLTAGE: return "OVER_VOLTAGE";
    case Status::UNDER_VOLTAGE: return "UNDER_VOLTAGE";
    case Status::OVER_CURRENT: return "OVER_CURRENT";
    case Status::MOS_OVER_TEMP: return "MOS_OVER_TEMP";
    case Status::COIL_OVER_TEMP: return "COIL_OVER_TEMP";
    case Status::COMM_LOST: return "COMM_LOST";
    case Status::OVER_LOAD: return "OVER_LOAD";
    default: return "UNKNOWN";
  }
}

inline const char* modeToString(Mode m) {
  switch (m) {
    case Mode::UNREAD: return "UNREAD";
    case Mode::MIT: return "MIT";
    case Mode::POS_VEL: return "POS_VEL";
    case Mode::VEL: return "VEL";
    default: return "UNKNOWN";
  }
}

inline const char* ridToString(RID rid) {
  switch (rid) {
    case RID::UV_Value: return "UV_Value";
    case RID::KT_Value: return "KT_Value";
    case RID::OT_Value: return "OT_Value";
    case RID::OC_Value: return "OC_Value";
    case RID::ACC: return "ACC";
    case RID::Dec: return "Dec";
    case RID::MAX_SPD: return "MAX_SPD";
    case RID::MST_ID: return "MST_ID";
    case RID::ESC_ID: return "ESC_ID";
    case RID::TIMEOUT: return "TIMEOUT";
    case RID::CTRL_MODE: return "CTRL_MODE";
    case RID::Damp: return "Damp";
    case RID::Inertia: return "Inertia";
    case RID::hw_ver: return "hw_ver";
    case RID::sw_ver: return "sw_ver";
    case RID::SN: return "SN";
    case RID::NPP: return "NPP";
    case RID::Rs: return "Rs";
    case RID::Ls: return "Ls";
    case RID::Flux: return "Flux";
    case RID::Gr: return "Gr";
    case RID::PMAX: return "PMAX";
    case RID::VMAX: return "VMAX";
    case RID::TMAX: return "TMAX";
    case RID::I_BW: return "I_BW";
    case RID::KP_ASR: return "KP_ASR";
    case RID::KI_ASR: return "KI_ASR";
    case RID::KP_APR: return "KP_APR";
    case RID::KI_APR: return "KI_APR";
    case RID::OV_Value: return "OV_Value";
    case RID::GREF: return "GREF";
    case RID::Deta: return "Deta";
    case RID::V_BW: return "V_BW";
    case RID::IQ_c1: return "IQ_c1";
    case RID::VL_c1: return "VL_c1";
    case RID::can_br: return "can_br";
    case RID::sub_ver: return "sub_ver";
    case RID::u_off: return "u_off";
    case RID::v_off: return "v_off";
    case RID::k1: return "k1";
    case RID::k2: return "k2";
    case RID::m_off: return "m_off";
    case RID::dir: return "dir";
    case RID::p_m: return "p_m";
    default: return "UNKNOWN_RID";
  }
}

}  // namespace damiao
