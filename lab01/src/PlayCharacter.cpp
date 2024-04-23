#include "PlayerCharacter.h"

// Game Object class
GameObject::~GameObject() {}
void GameObject::attack() {
    std::cout << "Object attacks!\n";
}

// Renderable class
Renderable::~Renderable() {}
void Renderable::attack() {
    std::cout << "Renderable attacks!\n";
}


// Player Character class
void PlayerCharacter::attack() {
    std::cout << "PlayerCharacter attacking!\n";
}

// Gutils namespace
// Game object handling
void gutils::handleGameObject(GameObject* object) {
    if(object) {
        std::cout << "Rendering GameObject\n";
        object->attack();
    }
}

// Renderable object handling
void gutils::handleRenderable(Renderable* renderable) {
    if(renderable) {
        std::cout << "Drawing Renderable\n";
        renderable->attack();
    }
}