#pragma once
#include <iostream>

class Collidable
{
public:
    virtual void collide() 
    {
        std::cout << "Handling collision" << std::endl;
    }
    virtual ~Collidable() {}
};
