#pragma once
#include <iostream>

class Updatable 
{
public:
    //destruktor wirtualny
    virtual ~Updatable() = default;
    //funkcja wirtualna
    virtual void update();
};
