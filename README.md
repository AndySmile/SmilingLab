# SmilingLab

Inside this repository I'll store all the little projects I create to check out new features, technologies
or simply some new ideas. Often I just want to find out whether an idea or something is actually working. 
Without having the need to create an absolutely perfect code at the end, I can test stuff really quickly this way.
So, please be aware that the source code will not be really nice or effective or reliable (at least not always ;)).

## Dependencies

The projects are based on the SFML framework and the GLM library. 
The last one was added to the project as a submodule. So, in case u haven't clone this project with the
``--recursive`` parameter, you have to execute those parameters in the root of the project to download all
the defined submodules:

    git submodule init
    git submodule update

For the case you want to learn more about submodules in GIT, take a look here:
https://git-scm.com/book/en/v2/Git-Tools-Submodules

## PerPixelLigthing

This project is a simple demo to demonstrate PerPixelLighting using GLSL.

## Simple2D

It's a basic project to see how to use the SFML framework by implementing a simple 2D scene where an image
is bouncing from one edge of the window to another. 

![Simple2D](Doc/Images/Simple2D.png)