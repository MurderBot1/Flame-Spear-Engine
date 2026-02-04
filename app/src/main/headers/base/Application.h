#ifndef Application_H
#define Application_H

#include "ui/Window.h"

namespace FlameSpearEngine {
    class Application {
        public:
            Application(std::shared_ptr<ApplicationConstants> constants);
            void run();
        private:
            std::shared_ptr<ApplicationConstants> applicationConstants;
            UI::Window displayWindow;
    };
}

#endif