#include "base/ApplicationConstants.h"

FSE::ApplicationConstants::ApplicationConstants(std::string_view name, Helpers::Screen::ConstantScreenSize startingScreenSize) : 
        name(name), 
        startingScreenSize(startingScreenSize) {
}