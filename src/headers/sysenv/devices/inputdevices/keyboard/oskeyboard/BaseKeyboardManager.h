#ifndef BaseKeyboardManager_H
#define BaseKeyboardManager_H

#include "sysenv/devices/inputdevices/keyboard/Keyboard.h"

#include <vector>

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard
{
class BaseKeyboardManager
{
  public:
    virtual void update() = 0;

  private:
    std::vector<Keyboard> devices;
};
} // namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard

#endif