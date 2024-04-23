#pragma once

#include "GameObject.h"

// klasa przedstawiajaca Npc
class NPC : public GameObject
{

public:
    //printuje interakcje

    void interact() override;
    //zwraca complexity
    CPLX complexity() const override;
};