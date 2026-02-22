#ifndef SpeakerManager_H
#define SpeakerManager_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/outputdevices/speaker/osspeaker/windows/WindowsSpeakerManager.h"
#elif defined(__linux__)
    #include "sysenv/devices/outputdevices/speaker/osspeaker/linux/LinuxSpeakerManager.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/outputdevices/speaker/osspeaker/mac/MacSpeakerManager.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class Speaker 
    #if defined(_WIN32) || defined(_WIN64)
        : OSSpeaker::WindowsSpeakerManager
    #elif defined(__linux__)
        : OSSpeaker::LinuxSpeakerManager
    #elif defined(__APPLE__)
        : OSSpeaker::MacSpeakerManager
    #endif
    {
    };
}

#endif