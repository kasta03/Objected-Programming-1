#include "Enemy.h"
#include <iostream>

void Enemy::interact() 
{
    std::cout << "Enemy moves!" << std::endl;
}

GameObject::CPLX Enemy::complexity() const 
{
    return CPLX::MID;
}