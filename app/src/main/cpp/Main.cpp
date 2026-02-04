#include "base/FlameSpearEngine.h"
#include "base/Application.h"
#include "base/ApplicationConstants.h"
#include "helpers/Helpers.h"

#include <memory>

// extern std::shared_ptr<FSE::Application> app;

int main () {
    const std::shared_ptr<FSE::ApplicationConstants> appConstants = std::make_shared<FSE::ApplicationConstants>(FSE::ApplicationConstants("", FSE::Helpers::Screen::ConstantScreenSize(0, 0)));
    const std::shared_ptr<FSE::Application> app = std::make_shared<FSE::Application>(FSE::Application(appConstants));
    FSE::startGame(app);
}
