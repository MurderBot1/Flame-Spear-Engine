#ifndef SysEnv_H
#define SysEnv_H

#include "sysenv/devices/outputdevices/OutputDevice.h"

#include <vector>

namespace FSE::System {
    class SysEnv {
        public: 
            static std::vector<Devices::OutputDevice>& getOutputDevices(); 
        private:
            inline static std::vector<Devices::OutputDevice> outputDevices;
        private:
            static void updateDevices();
    };
}

#endif