#ifndef LoggerConstants_H
#define LoggerConstants_H

#include <string_view>
#include <string>
#include <chrono>

namespace FSE::Logging::Constants {
    namespace CompileTime {
        constexpr std::string_view LOG_FOLDER_PATH = std::string_view("logs");
    }

    namespace Runtime {
        const int64_t programStartTime = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        const std::string LOG_PATH = std::string(FSE::Logging::Constants::CompileTime::LOG_FOLDER_PATH) + "/" + std::to_string(programStartTime) + ".fselog";
    };
}

#endif