/**
 * @version     0.1.0 31-Jan-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#ifndef __SIMPLE2DSCENE_HPP__
#define __SIMPLE2DSCENE_HPP__

#include <iscene.hpp>
#include <gameobject.hpp>

class Simple2DScene final : public IScene
{
    public:
        Simple2DScene(void);
        ~Simple2DScene(void);
        
        void init(void);
        void update(sf::RenderWindow& window);
        void render(sf::RenderWindow& window);
        
    private:
        sf::Vector2f _direction;
        GameObject _obj;
};

#endif