#ifndef Logger_H
#define Logger_H

#include "base/Application.h"

#include <fstream>
#include <chrono>
#include <string>
#include <sstream>

namespace FSE {
    class Logger {
        public:
            static void startLogger();
            static void enterStart();
            static void nextFrame();
            static void enterShutdown();
            static void addData(const std::string& name, const std::string& data);
            static void addHeaderData(const std::string& name, const std::string& data);
        private:
            static inline std::ofstream file;
            static inline int frameCount;
            static inline uint64_t programStartTime;
    };
}

#endif