#pragma once
#include "Collidable.h"
#include "GameObject.h"
#include "Renderable.h"

class Player : public GameObject, public Renderable, public Collidable 
{
public:
    //constructor
    Player(const std::string& string = "Unnamed Player");

    //overrided functions
    
    void render() override;

    void collide() override;

    void action() override;
};