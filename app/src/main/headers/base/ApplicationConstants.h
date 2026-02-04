#ifndef ApplicationConstants_H
#define ApplicationConstants_H

#include "helpers/Helpers.h"

#include <string>

namespace FSE {
    struct ApplicationConstants {
        public:
            ApplicationConstants(std::string_view name, Helpers::Screen::ConstantScreenSize startingScreenSize);
        public:
            const std::string name;
            const Helpers::Screen::ConstantScreenSize startingScreenSize;
    };
}

#endif