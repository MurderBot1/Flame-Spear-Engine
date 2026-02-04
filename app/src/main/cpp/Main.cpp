#include "base/FlameSpearEngine.h"
#include "base/Application.h"
#include "base/ApplicationConstants.h"
#include "helpers/Helpers.h"

#include <memory>

// extern std::shared_ptr<FlameSpearEngine::Application> app;

int main () {
    const std::shared_ptr<FlameSpearEngine::ApplicationConstants> appConstants = std::make_shared<FlameSpearEngine::ApplicationConstants>(FlameSpearEngine::ApplicationConstants("", FlameSpearEngine::Helpers::Screen::ConstantScreenSize(0, 0)));
    const std::shared_ptr<FlameSpearEngine::Application> app = std::make_shared<FlameSpearEngine::Application>(FlameSpearEngine::Application(appConstants));
    FlameSpearEngine::startGame(app);
}
