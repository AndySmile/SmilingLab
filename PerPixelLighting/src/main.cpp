/**
 * @version     0.2.0 26-Jul-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com) 
 */
#include <app.hpp>
#include <perpixellightingscene.hpp>

using namespace AndySmiles4Games;

int main(void)
{
    Framework::App app(1024, 786, "PerPixelLighting");
    
    return app.run(new PerPixelLighting::PerPixelLightingScene());
}