#ifndef Speaker_H
#define Speaker_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/outputdevices/speaker/osspeaker/windows/WindowsSpeaker.h"
#elif defined(__linux__)
    #include "sysenv/devices/outputdevices/speaker/osspeaker/linux/LinuxSpeaker.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/outputdevices/speaker/osspeaker/mac/MacSpeaker.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class Speaker 
    #if defined(_WIN32) || defined(_WIN64)
        : OSSpeaker::WindowsSpeaker
    #elif defined(__linux__)
        : OSSpeaker::LinuxSpeaker
    #elif defined(__APPLE__)
        : OSSpeaker::MacSpeaker
    #endif
    {
    };
}

#endif