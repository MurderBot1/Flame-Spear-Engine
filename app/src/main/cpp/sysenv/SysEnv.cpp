#include "sysenv/SysEnv.h"

std::vector<FlameSpearEngine::System::Devices::InputDevice>& FlameSpearEngine::System::SysEnv::getInputDevices() {
    return inputDevices;
}

std::vector<FlameSpearEngine::System::Devices::OutputDevice>& FlameSpearEngine::System::SysEnv::getOutputDevices() {
    return outputDevices;
}

void FlameSpearEngine::System::SysEnv::updateDevices() {
    
}
