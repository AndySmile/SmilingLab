/**
 * @author      Andy Liebke <info@andysmiles4games.com>
 * @version     0.1.0 16-May-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#ifndef __GAME_SCENE_HPP__
#define __GAME_SCENE_HPP__

#include <engine/IScene.hpp>

namespace ScannerFx
{
    class DemoScene : public Engine::IScene
    {
        public:
            DemoScene(void);
            virtual ~DemoScene(void);
            
            void init(void);
            void update(sf::RenderWindow& window);
            void render(sf::RenderWindow& window);
    };
}

#endif