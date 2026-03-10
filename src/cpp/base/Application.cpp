#include "base/Application.h"

#include <chrono>
#include <iostream>
#include <thread>

namespace FSE {

    void Application::run() {
        int i = 0;
        while (i < 5) {
            std::cout << "running\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            i++;
        }
    }

    void FSE::Application::setName(const std::string& name) {
        appName = name;
    }

    void FSE::Application::setStartingScreenSize(Helpers::Screen::ScreenSize size) {
        startingScreenSize = size;
    }

    void FSE::Application::setStartingScreenSize(int x, int y) {
        startingScreenSize = Helpers::Screen::ScreenSize(x, y);
    }

    const std::string& FSE::Application::getName() {
        return appName;
    }

    Helpers::Screen::ScreenSize FSE::Application::getStartingScreenSize() {
        return startingScreenSize;
    }
} // namespace FSE
