/**
 * @version     0.2.0 26-Jul-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#ifndef __APP_HPP__
#define __APP_HPP__

#include <string>
#include <iscene.hpp>

namespace AndySmiles4Games
{
    namespace Framework
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
}

#endif