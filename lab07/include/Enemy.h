#pragma once

#include "GameObject.h"

// klasa przedstawiajaca enemy
class Enemy : public GameObject
{
public:

    //printuje interakcje
    void interact() override;
    //zwara complexity
    CPLX complexity() const override;
};
