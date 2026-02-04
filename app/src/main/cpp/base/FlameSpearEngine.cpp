#include "base/FlameSpearEngine.h"
#include "sysenv/SysEnv.h"

void FlameSpearEngine::startGame(std::shared_ptr<FlameSpearEngine::Application> app) {
    app->run();
}