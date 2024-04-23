#pragma once
#include <iostream>

class Renderable : public GameObject
{
public:
    virtual void render() 
    {
        std::cout << "Rendering object\n";
    }
    virtual ~Renderable() {}
};

