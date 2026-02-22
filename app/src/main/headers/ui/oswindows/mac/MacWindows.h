#ifndef MacWindows_H
#define MacWindows_H

#if defined(__APPLE__)

#include "ui/oswindows/OSWindows.h"

namespace FSE::UI::OSWindows {
    class MacWindow : public BaseWindow {
        public: // Constructor
            MacWindow();
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