#ifndef BaseControllerManager_H
#define BaseControllerManager_H

#include "sysenv/devices/inputdevices/controller/Controller.h"

#include <vector>

namespace FSE::System::Devices::Input::DeviceClasses::OSController
{
class BaseControllerManager
{
  private:
    std::vector<Controller> devices;
};
} // namespace FSE::System::Devices::Input::DeviceClasses::OSController

#endif