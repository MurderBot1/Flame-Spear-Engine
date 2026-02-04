#include "sysenv/SysEnv.h"

std::vector<FSE::System::Devices::InputDevice>& FSE::System::SysEnv::getInputDevices() {
    return inputDevices;
}

std::vector<FSE::System::Devices::OutputDevice>& FSE::System::SysEnv::getOutputDevices() {
    return outputDevices;
}

void FSE::System::SysEnv::updateDevices() {
    
}
