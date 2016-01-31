/**
 * @version     0.1.0 31-Jan-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#include <simple2dscene.hpp>

#ifdef _DEBUG
    #include <iostream>
#endif

Simple2DScene::Simple2DScene(void)
{
    this->_direction = sf::Vector2f(1.0f, 1.0f);
}

Simple2DScene::~Simple2DScene(void)
{
}

void Simple2DScene::init(void)
{
    this->_obj.load("assets/images/simple_tree_block.png");
}

void Simple2DScene::update(sf::RenderWindow& window)
{
    sf::Vector2u windowSize = window.getSize();
    sf::Vector2f position = this->_obj.getPosition();
    sf::IntRect objSize = this->_obj.getTextureRect();
    
    if (position.x <= 0) {
        this->_direction.x = 1.0f;
    } else if (position.x + objSize.width >= windowSize.x) {
        this->_direction.x = -1.0f;
    }
    
    if (position.y <= 0) {
        this->_direction.y = 1.0f;
    } else if (position.y + objSize.height >= windowSize.y) {
        this->_direction.y = -1.0f;
    }
    
    this->_obj.setPosition(position + (this->_direction * 5.0f));
}

void Simple2DScene::render(sf::RenderWindow& window)
{
    window.draw(this->_obj);
}