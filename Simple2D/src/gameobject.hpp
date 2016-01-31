/**
 * @version     0.1.0 31-Jan-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#ifndef __GAMEOBJECT_HPP__
#define __GAMEOBJECT_HPP__

#include <string>
#include <SFML/Graphics.hpp>

class GameObject : public sf::Sprite
{
    public:
        GameObject(void);
        virtual ~GameObject(void);
        
        bool load(const std::string path);
        
    private:
        sf::Texture _texture;
};

#endif