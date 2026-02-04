#ifndef WindowsWindows_H
#define WindowsWindows_H

#if defined(_WIN32) || defined(_WIN64)

#include "ui/oswindows/OSWindows.h"

namespace FlameSpearEngine::UI::OSWindows {
    class WindowsWindow : public BaseWindow {
        public: // Constructor
            WindowsWindow(std::shared_ptr<ApplicationConstants> applicationConstants);
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