#include "base/ApplicationConstants.h"

FlameSpearEngine::ApplicationConstants::ApplicationConstants(std::string_view name, Helpers::Screen::ConstantScreenSize startingScreenSize) : 
        name(name), 
        startingScreenSize(startingScreenSize) {
}