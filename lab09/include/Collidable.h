#pragma once
#include "Updatable.h"

class Collidable : virtual public Updatable 
{
public:
    // virtual destructor
    virtual ~Collidable() = default;
    // virtual fun
    virtual void collide();
};

