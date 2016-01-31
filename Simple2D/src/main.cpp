/**
 * @version     0.1.0 31-Jan-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com) 
 */
#include <app.hpp>
#include <simple2dscene.hpp>

int main(void)
{
    App app(1024, 786, "Simple2D");
    
    return app.run(new Simple2DScene());
}