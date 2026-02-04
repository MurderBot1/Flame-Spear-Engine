#ifndef MacWindows_H
#define MacWindows_H

#if defined(__APPLE__)

#include "ui/oswindows/OSWindows.h"

namespace FlameSpearEngine::UI::OSWindows {
    class MacWindow : public BaseWindow {
        public: // Constructor
            MacWindow(std::shared_ptr<ApplicationConstants> applicationConstants);
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