#pragma once
#include "GameObject.h"
#include <iostream>

// klasa przedstawiajaca player
class Player : public GameObject
{

public:
    //printuje interakcje
    void interact() override
    {
        std::cout << "Player moves!" << std::endl;
    }
    //zwraca complexity
    CPLX complexity() const override
    {
        return CPLX::HIGHEST;
    }
    //printuje compexity
    CPLX printComplexity()
    {
        return CPLX::HIGHEST;
    }
};