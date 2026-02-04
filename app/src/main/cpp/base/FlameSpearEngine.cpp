#include "base/FlameSpearEngine.h"
#include "sysenv/SysEnv.h"

void FSE::startGame(std::shared_ptr<FSE::Application> app) {
    app->run();
}