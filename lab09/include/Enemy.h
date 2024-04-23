#pragma once
#include "GameObject.h"
#include "Renderable.h"
#include "Collidable.h"
#include "Updatable.h"

class Enemy : public GameObject, public Renderable, public Collidable 
{
public:
    //Constructor
    Enemy(const std::string& name = "Unnamed Enemy");

    //overrided functions
    void action() override;
    void render() override;
    void collide() override;

};