/**
 * @version     0.1.0 16-May-16
 * @copyright   Copyright (c) 2016 by Andy Liebke. All rights reserved. (http://andysmiles4games.com)
 */
#include <engine/App.hpp>
#include <cstdlib>

namespace Engine
{
    App::App(const unsigned int width, const unsigned int height, const std::string title) :
        width(width),
        height(height),
        title(title)
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
        
        sf::RenderWindow window(sf::VideoMode(this->width, this->height), this->title);
        
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
}
