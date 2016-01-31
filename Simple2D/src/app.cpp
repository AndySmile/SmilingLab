/**
 * @version     0.1.0 31-Jan-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#include <app.hpp>
#include <cstdlib>

App::App(const unsigned int width, const unsigned int height, const std::string title) :
    _width(width),
    _height(height),
    _title(title)
{
}
        
App::~App(void)
{
    
}
        
int App::run(IScene* scene)
{
    if (scene == nullptr) {
        return EXIT_FAILURE;
    }
    
    sf::RenderWindow window(sf::VideoMode(this->_width, this->_height), this->_title);
    
    scene->init();
    
    while (window.isOpen()) {
        sf::Event event;
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        
        window.clear(sf::Color::Blue);
        
        scene->update(window);
        scene->render(window);
        
        window.display();
    }
    
    delete scene;
    scene = nullptr;
    
    return EXIT_SUCCESS;
}