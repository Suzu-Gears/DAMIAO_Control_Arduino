#pragma once

#include <optional>
#include <cstdint>

// Forward declaration of Motor class
namespace damiao {
class Motor;
}

namespace damiao {

// DAMIAO Motor Parameter Register IDs
enum class RID : uint8_t {
  UV_Value = 0,    // 0x00 float RW (10.0,fmax]
  KT_Value = 1,    // 0x01 float RW [0.0,fmax]
  OT_Value = 2,    // 0x02 float RW [80.0,200)
  OC_Value = 3,    // 0x03 float RW (0.0,1.0)
  ACC = 4,         // 0x04 float RW (0.0,fmax)
  Dec = 5,         // 0x05 float RW [-fmax,0.0) Used 'Dec' to avoid conflict with Arduino's DEC macro
  MAX_SPD = 6,     // 0x06 float RW (0.0,fmax]
  MST_ID = 7,      // 0x07 uint32 RW [0,0x7FF]
  ESC_ID = 8,      // 0x08 uint32 RW [0,0x7FF]
  TIMEOUT = 9,     // 0x09 uint32 RW [0,2^32-1]
  CTRL_MODE = 10,  // 0x0A uint32 RW [0,4]
  Damp = 11,       // 0x0B float RO
  Inertia = 12,    // 0x0C float RO
  hw_ver = 13,     // 0x0D uint32 RO
  sw_ver = 14,     // 0x0E uint32 RO
  SN = 15,         // 0x0F uint32 RO
  NPP = 16,        // 0x10 uint32 RO
  Rs = 17,         // 0x11 float RO
  Ls = 18,         // 0x12 float RO
  Flux = 19,       // 0x13 float RO
  Gr = 20,         // 0x14 float RO
  PMAX = 21,       // 0x15 float RW (0.0,fmax]
  VMAX = 22,       // 0x16 float RW (0.0,fmax]
  TMAX = 23,       // 0x17 float RW (0.0,fmax]
  I_BW = 24,       // 0x18 float RW [100.0,1.0e4]
  KP_ASR = 25,     // 0x19 float RW [0.0,fmax]
  KI_ASR = 26,     // 0x1A float RW [0.0,fmax]
  KP_APR = 27,     // 0x1B float RW [0.0,fmax]
  KI_APR = 28,     // 0x1C float RW [0.0,fmax]
  OV_Value = 29,   // 0x1D float RW TBD
  GREF = 30,       // 0x1E float RW (0.0,1.0]
  Deta = 31,       // 0x1F float RW [1.0,30.0]
  V_BW = 32,       // 0x20 float RW (0.0,500.0)
  IQ_c1 = 33,      // 0x21 float RW [100.0,1.0e4]
  VL_c1 = 34,      // 0x22 float RW (0.0,1.0e4]
  can_br = 35,     // 0x23 uint32 RW [0,4]
  sub_ver = 36,    // 0x24 uint32 RO
  u_off = 50,      // 0x32 float RO
  v_off = 51,      // 0x33 float RO
  k1 = 52,         // 0x34 float RO
  k2 = 53,         // 0x35 float RO
  m_off = 54,      // 0x36 float RO
  dir = 55,        // 0x37 float RO
  p_m = 80,        // 0x50 float RO
};

class DMParams {
private:
  Motor& motor_;

public:
  DMParams(Motor& motor)
    : motor_(motor),
      UV_Value(motor),
      KT_Value(motor),
      OT_Value(motor),
      OC_Value(motor),
      ACC(motor),
      Dec(motor),
      MAX_SPD(motor),
      MST_ID(motor),
      ESC_ID(motor),
      TIMEOUT(motor),
      CTRL_MODE(motor),
      Damp(motor),
      Inertia(motor),
      hw_ver(motor),
      sw_ver(motor),
      SN(motor),
      NPP(motor),
      Rs(motor),
      Ls(motor),
      Flux(motor),
      Gr(motor),
      PMAX(motor),
      VMAX(motor),
      TMAX(motor),
      I_BW(motor),
      KP_ASR(motor),
      KI_ASR(motor),
      KP_APR(motor),
      KI_APR(motor),
      OV_Value(motor),
      GREF(motor),
      Deta(motor),
      V_BW(motor),
      IQ_c1(motor),
      VL_c1(motor),
      can_br(motor),
      sub_ver(motor),
      u_off(motor),
      v_off(motor),
      k1(motor),
      k2(motor),
      m_off(motor),
      dir(motor),
      p_m(motor) {}  // 最後のカンマは削除する

  struct UV_Value_t {
    Motor& motor_;
    UV_Value_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } UV_Value;

  struct KT_Value_t {
    Motor& motor_;
    KT_Value_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } KT_Value;

  struct OT_Value_t {
    Motor& motor_;
    OT_Value_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } OT_Value;

  struct OC_Value_t {
    Motor& motor_;
    OC_Value_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } OC_Value;

  struct ACC_t {
    Motor& motor_;
    ACC_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } ACC;

  struct Dec_t {
    Motor& motor_;
    Dec_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } Dec;

  struct MAX_SPD_t {
    Motor& motor_;
    MAX_SPD_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } MAX_SPD;

  struct MST_ID_t {
    Motor& motor_;
    MST_ID_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(uint32_t value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } MST_ID;

  struct ESC_ID_t {
    Motor& motor_;
    ESC_ID_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(uint32_t value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } ESC_ID;

  struct TIMEOUT_t {
    Motor& motor_;
    TIMEOUT_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(uint32_t value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } TIMEOUT;

  struct CTRL_MODE_t {
    Motor& motor_;
    CTRL_MODE_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(uint32_t value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } CTRL_MODE;

  struct Damp_t {
    Motor& motor_;
    Damp_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } Damp;

  struct Inertia_t {
    Motor& motor_;
    Inertia_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } Inertia;

  struct hw_ver_t {
    Motor& motor_;
    hw_ver_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } hw_ver;

  struct sw_ver_t {
    Motor& motor_;
    sw_ver_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } sw_ver;

  struct SN_t {
    Motor& motor_;
    SN_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } SN;

  struct NPP_t {
    Motor& motor_;
    NPP_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } NPP;

  struct Rs_t {
    Motor& motor_;
    Rs_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } Rs;

  struct Ls_t {
    Motor& motor_;
    Ls_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } Ls;

  struct Flux_t {
    Motor& motor_;
    Flux_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } Flux;

  struct Gr_t {
    Motor& motor_;
    Gr_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } Gr;

  struct PMAX_t {
    Motor& motor_;
    PMAX_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } PMAX;

  struct VMAX_t {
    Motor& motor_;
    VMAX_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } VMAX;

  struct TMAX_t {
    Motor& motor_;
    TMAX_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } TMAX;

  struct I_BW_t {
    Motor& motor_;
    I_BW_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } I_BW;

  struct KP_ASR_t {
    Motor& motor_;
    KP_ASR_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } KP_ASR;

  struct KI_ASR_t {
    Motor& motor_;
    KI_ASR_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } KI_ASR;

  struct KP_APR_t {
    Motor& motor_;
    KP_APR_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } KP_APR;

  struct KI_APR_t {
    Motor& motor_;
    KI_APR_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } KI_APR;

  struct OV_Value_t {
    Motor& motor_;
    OV_Value_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } OV_Value;

  struct GREF_t {
    Motor& motor_;
    GREF_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } GREF;

  struct Deta_t {
    Motor& motor_;
    Deta_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } Deta;

  struct V_BW_t {
    Motor& motor_;
    V_BW_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } V_BW;

  struct IQ_c1_t {
    Motor& motor_;
    IQ_c1_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } IQ_c1;

  struct VL_c1_t {
    Motor& motor_;
    VL_c1_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(float value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } VL_c1;

  struct can_br_t {
    Motor& motor_;
    can_br_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
    bool set(uint32_t value, std::optional<uint32_t> timeout_ms = std::nullopt);
  } can_br;

  struct sub_ver_t {
    Motor& motor_;
    sub_ver_t(Motor& m) : motor_(m) {}
    uint32_t get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } sub_ver;

  struct u_off_t {
    Motor& motor_;
    u_off_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } u_off;

  struct v_off_t {
    Motor& motor_;
    v_off_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } v_off;

  struct k1_t {
    Motor& motor_;
    k1_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } k1;

  struct k2_t {
    Motor& motor_;
    k2_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } k2;

  struct m_off_t {
    Motor& motor_;
    m_off_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } m_off;

  struct dir_t {
    Motor& motor_;
    dir_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } dir;

  struct p_m_t {
    Motor& motor_;
    p_m_t(Motor& m) : motor_(m) {}
    float get(std::optional<uint32_t> timeout_ms = std::nullopt);
  } p_m;
};

}  // namespace damiao
