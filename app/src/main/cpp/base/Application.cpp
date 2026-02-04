#include "base/Application.h"

#include "base/ApplicationConstants.h"

#include <iostream>
#include <chrono>
#include <thread>

FSE::Application::Application(std::shared_ptr<ApplicationConstants> constants)
        : displayWindow(constants) {
    applicationConstants = constants;
}

void FSE::Application::run() {
    int i = 0;
    while (i < 5) {
        std::cout << "running\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        i++;
    }
}
