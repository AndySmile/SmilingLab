/**
 * @author      Andy Liebke <info@andysmiles4games.com>
 * @version     0.1.0 16-May-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#include <cstdlib>
#include <engine/App.hpp>
#include <DemoScene.hpp>

int main(void)
{
    Engine::App app(1024, 768, "Scanner FX Demo");
    
    return app.run(new ScannerFx::DemoScene());
}