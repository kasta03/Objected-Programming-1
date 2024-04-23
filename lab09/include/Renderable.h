#pragma once
#include "Updatable.h"

class Renderable : virtual public Updatable 
{
public:
    //virtual destructor
    virtual ~Renderable() = default;
    //virtual function
    virtual void render();
};
