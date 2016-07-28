/**
 * @version     0.2.0 26-Jul-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#ifndef __PERPIXELLIGHTINGSCENE_HPP__
#define __PERPIXELLIGHTINGSCENE_HPP__

#include <iscene.hpp>

namespace AndySmiles4Games
{
    namespace PerPixelLighting
    {
        class PerPixelLightingScene final : public AndySmiles4Games::Framework::IScene
        {
            public:
                PerPixelLightingScene(void);
                ~PerPixelLightingScene(void);
                
                void init(void);
                void update(sf::RenderWindow& window);
                void render(sf::RenderWindow& window);
        };
    }
}


#endif