#include "Npc.h"
#include <iostream>

void NPC::interact()
{
    std::cout << "Npc talsk" << std::endl;
}

GameObject::CPLX  NPC::complexity() const
{
    return CPLX::LOWEST;
}