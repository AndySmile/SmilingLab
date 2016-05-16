/**
 * @version     0.1.0 16-May-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#ifndef __APP_HPP__
#define __APP_HPP__

#include <string>
#include <engine/IScene.hpp>

namespace Engine
{
    class App final 
    {
        public:
            explicit App(const unsigned int width, const unsigned int height, const std::string title);
            ~App(void);
            
            int run(IScene* scene);
        
        private:
            unsigned int width;
            unsigned int height;
            std::string title;
    };
}

#endif