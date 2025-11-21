#pragma once

// This file contains the inline implementations for the methods in DMParams.h
// It should only be included at the end of DMMotor.h, after the Motor class is fully defined.

namespace damiao {

inline float DMParams::UV_Value_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::UV_Value, timeout_ms).value_or(0.0f);
}
inline bool DMParams::UV_Value_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::UV_Value, value, timeout_ms);
}
inline float DMParams::KT_Value_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::KT_Value, timeout_ms).value_or(0.0f);
}
inline bool DMParams::KT_Value_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::KT_Value, value, timeout_ms);
}
inline float DMParams::OT_Value_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::OT_Value, timeout_ms).value_or(0.0f);
}
inline bool DMParams::OT_Value_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::OT_Value, value, timeout_ms);
}
inline float DMParams::OC_Value_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::OC_Value, timeout_ms).value_or(0.0f);
}
inline bool DMParams::OC_Value_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::OC_Value, value, timeout_ms);
}
inline float DMParams::ACC_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::ACC, timeout_ms).value_or(0.0f);
}
inline bool DMParams::ACC_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::ACC, value, timeout_ms);
}
inline float DMParams::Dec_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Dec, timeout_ms).value_or(0.0f);
}
inline bool DMParams::Dec_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::Dec, value, timeout_ms);
}
inline float DMParams::MAX_SPD_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::MAX_SPD, timeout_ms).value_or(0.0f);
}
inline bool DMParams::MAX_SPD_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::MAX_SPD, value, timeout_ms);
}
inline uint32_t DMParams::MST_ID_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::MST_ID, timeout_ms).value_or(0);
}
inline bool DMParams::MST_ID_t::set(uint32_t value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamUint32(RID::MST_ID, value, timeout_ms);
}
inline uint32_t DMParams::ESC_ID_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::ESC_ID, timeout_ms).value_or(0);
}
inline bool DMParams::ESC_ID_t::set(uint32_t value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamUint32(RID::ESC_ID, value, timeout_ms);
}
inline uint32_t DMParams::TIMEOUT_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::TIMEOUT, timeout_ms).value_or(0);
}
inline bool DMParams::TIMEOUT_t::set(uint32_t value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamUint32(RID::TIMEOUT, value, timeout_ms);
}
inline uint32_t DMParams::CTRL_MODE_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::CTRL_MODE, timeout_ms).value_or(0);
}
inline bool DMParams::CTRL_MODE_t::set(uint32_t value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamUint32(RID::CTRL_MODE, value, timeout_ms);
}
inline float DMParams::Damp_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Damp, timeout_ms).value_or(0.0f);
}
inline float DMParams::Inertia_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Inertia, timeout_ms).value_or(0.0f);
}
inline uint32_t DMParams::hw_ver_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::hw_ver, timeout_ms).value_or(0);
}
inline uint32_t DMParams::sw_ver_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::sw_ver, timeout_ms).value_or(0);
}
inline uint32_t DMParams::SN_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::SN, timeout_ms).value_or(0);
}
inline uint32_t DMParams::NPP_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::NPP, timeout_ms).value_or(0);
}
inline float DMParams::Rs_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Rs, timeout_ms).value_or(0.0f);
}
inline float DMParams::Ls_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Ls, timeout_ms).value_or(0.0f);
}
inline float DMParams::Flux_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Flux, timeout_ms).value_or(0.0f);
}
inline float DMParams::Gr_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Gr, timeout_ms).value_or(0.0f);
}
inline float DMParams::PMAX_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::PMAX, timeout_ms).value_or(0.0f);
}
inline bool DMParams::PMAX_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::PMAX, value, timeout_ms);
}
inline float DMParams::VMAX_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::VMAX, timeout_ms).value_or(0.0f);
}
inline bool DMParams::VMAX_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::VMAX, value, timeout_ms);
}
inline float DMParams::TMAX_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::TMAX, timeout_ms).value_or(0.0f);
}
inline bool DMParams::TMAX_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::TMAX, value, timeout_ms);
}
inline float DMParams::I_BW_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::I_BW, timeout_ms).value_or(0.0f);
}
inline bool DMParams::I_BW_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::I_BW, value, timeout_ms);
}
inline float DMParams::KP_ASR_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::KP_ASR, timeout_ms).value_or(0.0f);
}
inline bool DMParams::KP_ASR_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::KP_ASR, value, timeout_ms);
}
inline float DMParams::KI_ASR_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::KI_ASR, timeout_ms).value_or(0.0f);
}
inline bool DMParams::KI_ASR_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::KI_ASR, value, timeout_ms);
}
inline float DMParams::KP_APR_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::KP_APR, timeout_ms).value_or(0.0f);
}
inline bool DMParams::KP_APR_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::KP_APR, value, timeout_ms);
}
inline float DMParams::KI_APR_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::KI_APR, timeout_ms).value_or(0.0f);
}
inline bool DMParams::KI_APR_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::KI_APR, value, timeout_ms);
}
inline float DMParams::OV_Value_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::OV_Value, timeout_ms).value_or(0.0f);
}
inline bool DMParams::OV_Value_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::OV_Value, value, timeout_ms);
}
inline float DMParams::GREF_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::GREF, timeout_ms).value_or(0.0f);
}
inline bool DMParams::GREF_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::GREF, value, timeout_ms);
}
inline float DMParams::Deta_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::Deta, timeout_ms).value_or(0.0f);
}
inline bool DMParams::Deta_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::Deta, value, timeout_ms);
}
inline float DMParams::V_BW_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::V_BW, timeout_ms).value_or(0.0f);
}
inline bool DMParams::V_BW_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::V_BW, value, timeout_ms);
}
inline float DMParams::IQ_c1_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::IQ_c1, timeout_ms).value_or(0.0f);
}
inline bool DMParams::IQ_c1_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::IQ_c1, value, timeout_ms);
}
inline float DMParams::VL_c1_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::VL_c1, timeout_ms).value_or(0.0f);
}
inline bool DMParams::VL_c1_t::set(float value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamFloat(RID::VL_c1, value, timeout_ms);
}
inline uint32_t DMParams::can_br_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::can_br, timeout_ms).value_or(0);
}
inline bool DMParams::can_br_t::set(uint32_t value, std::optional<uint32_t> timeout_ms) {
  return motor_.writeParamUint32(RID::can_br, value, timeout_ms);
}
inline uint32_t DMParams::sub_ver_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamUint32(RID::sub_ver, timeout_ms).value_or(0);
}
inline float DMParams::u_off_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::u_off, timeout_ms).value_or(0.0f);
}
inline float DMParams::v_off_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::v_off, timeout_ms).value_or(0.0f);
}
inline float DMParams::k1_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::k1, timeout_ms).value_or(0.0f);
}
inline float DMParams::k2_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::k2, timeout_ms).value_or(0.0f);
}
inline float DMParams::m_off_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::m_off, timeout_ms).value_or(0.0f);
}
inline float DMParams::dir_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::dir, timeout_ms).value_or(0.0f);
}
inline float DMParams::p_m_t::get(std::optional<uint32_t> timeout_ms) {
  return motor_.readParamFloat(RID::p_m, timeout_ms).value_or(0.0f);
}

}  // namespace damiao
