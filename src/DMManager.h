#pragma once

#include <array>
#include <cassert>
#include "DMMotor.h"

namespace damiao {

template<size_t NUM_MOTORS>
class MotorManager {
public:
  template<typename... MotorPtrs>
  MotorManager(arduino::HardwareCAN* can, MotorPtrs... motors)
    : can_(can), motors_{ motors... } {
    static_assert(sizeof...(motors) == NUM_MOTORS, "Number of motors provided does not match the template argument NUM_MOTORS.");
    for (auto& motor : motors_) {
      motor->setCAN(can_);
    }
  }

  constexpr size_t size() const {
    return NUM_MOTORS;
  }

  void initializeAll() {
    for (auto& motor : motors_) {
      motor->initialize();
    }
  }

  void update() {
    while (can_->available()) {
      CanMsg msg = can_->read();
      for (auto& motor : motors_) {
        motor->readFeedback(msg);
      }
    }
  }

  Motor& getMotor(size_t index) {
    assert(index < NUM_MOTORS);
    return *motors_[index];
  }

  Motor* findMotor(uint32_t masterId, uint32_t slaveId) {
    for (auto& motor : motors_) {
      if (motor->getMasterId() == masterId && motor->getSlaveId() == slaveId) {
        return motor;
      }
    }
    return nullptr;
  }

  void enableAll() {
    for (auto& motor : motors_) {
      motor->enable();
    }
  }

  void disableAll() {
    for (auto& motor : motors_) {
      motor->disable();
    }
  }

  void setZeroPositionAll() {
    for (auto& motor : motors_) {
      motor->setZeroPosition();
    }
  }

  void setControlModeAll(Mode mode) {
    for (auto& motor : motors_) {
      motor->setControlMode(mode);
    }
  }

private:
  arduino::HardwareCAN* can_;
  std::array<Motor*, NUM_MOTORS> motors_;
};

}  // namespace damiao
