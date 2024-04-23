#pragma once
#include <iostream>

class Updatable
{
public:
    virtual void render() 
    {
        std::cout << "Updatable object\n";
    }
    virtual ~Updatable() {}
};