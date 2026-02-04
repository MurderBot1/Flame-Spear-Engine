#ifndef LinuxWindows_H
#define LinuxWindows_H

#if defined(__linux__)

#include "ui/oswindows/OSWindows.h"

namespace FSE::UI::OSWindows {
    class LinuxWindow : public BaseWindow {
        public: // Constructor
            LinuxWindow(std::shared_ptr<ApplicationConstants> applicationConstants);
        public:
            void updateBufferSize() override;
            void setPixel(int rgba, int index) override;
            void setPixels(std::vector<int> newPixels) override;
            void display() override;
        private:
    };
}

#endif

#endif