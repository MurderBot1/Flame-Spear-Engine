#ifndef Window_H
#define Window_H

#if defined(_WIN32) || defined(_WIN64)
    #include "ui/oswindows/windows/WindowsWindows.h"
#elif defined(__linux__)
    #include "ui/oswindows/linux/LinuxWindows.h"
#elif defined(__APPLE__)
    #include "ui/oswindows/mac/MacWindows.h"
#endif

namespace FSE::UI {
    class Window 
        #if defined(_WIN32) || defined(_WIN64)
            : public OSWindows::WindowsWindow {
        #elif defined(__linux__)
            : public OSWindows::LinuxWindow {
        #elif defined(__APPLE__)
            : public OSWindows::MacWindow {
        #endif
            public: // Constructor
                Window(std::shared_ptr<ApplicationConstants> applicationConstants);
    };

}

#endif