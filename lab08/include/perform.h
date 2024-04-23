#pragma once
#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"

class GameObject;

void performRuntimeTypeChecking(GameObject* ptr) 
{
    if (dynamic_cast<Player*>(ptr)) 
    {
        std::cout << "Player object is renderable collidable"<< std::endl;
    }
    if (dynamic_cast<Enemy*>(ptr)) 
    {
        std::cout << " Enemy object is renderable collidable updatable" << std::endl;
    }
    std::cout << std::endl;
}