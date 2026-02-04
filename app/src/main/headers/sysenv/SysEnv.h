#ifndef SysEnv_H
#define SysEnv_H

#include "sysenv/devices/inputdevices/InputDevice.h"
#include "sysenv/devices/outputdevices/OutputDevice.h"

#include <vector>

namespace FlameSpearEngine::System {
    class SysEnv {
        public: 
            static std::vector<Devices::InputDevice>& getInputDevices(); 
            static std::vector<Devices::OutputDevice>& getOutputDevices(); 
        private:
            inline static std::vector<Devices::InputDevice> inputDevices;
            inline static std::vector<Devices::OutputDevice> outputDevices;
        private:
            static void updateDevices();
    };
}

#endif