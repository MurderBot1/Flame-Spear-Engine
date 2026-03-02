#ifndef BaseMouseManager_H
#define BaseMouseManager_H

#include "sysenv/devices/inputdevices/mouse/Mouse.h"

#include <vector>

namespace FSE::System::Devices::Input::DeviceClasses::OSMouse {
class BaseMouseManager {
  private:
    std::vector<Mouse> devices;
};
} // namespace FSE::System::Devices::Input::DeviceClasses::OSMouse

#endif