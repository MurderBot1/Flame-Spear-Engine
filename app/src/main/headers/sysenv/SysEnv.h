#ifndef SysEnv_H
#define SysEnv_H

#include "sysenv/devices/inputdevices/InputDeviceManager.h"

namespace FSE::System {
    class SysEnv {    
        static Devices::Input::InputDeviceManager inputManager;
    };
}

#endif