#ifndef WindowsWindows_H
#define WindowsWindows_H

#if defined(_WIN32) || defined(_WIN64)

#include "ui/oswindows/OSWindows.h"

namespace FSE::UI::OSWindows {
    class WindowsWindow : public BaseWindow {
        public: // Constructor
            WindowsWindow();
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