/**
 * @version     0.1.0 31-Jan-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#include <gameobject.hpp>

GameObject::GameObject(void)
{
    
}

GameObject::~GameObject(void)
{
    
}

bool GameObject::load(const std::string path)
{
    if (!this->_texture.loadFromFile(path)) {
        return false;
    }
    
    this->setTexture(this->_texture);
    
    return true;
}