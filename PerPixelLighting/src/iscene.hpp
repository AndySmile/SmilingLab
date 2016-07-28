/**
 * @version     0.2.0 26-Jul-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#ifndef __ISCENE_HPP__
#define __ISCENE_HPP__

#include <SFML/Graphics.hpp>

namespace AndySmiles4Games
{
    namespace Framework
    {
        struct IScene
        {
            virtual ~IScene(void) 
            {
            }
            
            virtual void init(void) = 0;
            virtual void update(sf::RenderWindow& window) = 0;
            virtual void render(sf::RenderWindow& window) = 0;
        };
    }
}
#endif