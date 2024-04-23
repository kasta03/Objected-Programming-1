#include "GameObject.h"
#include "Enemy.h"
#include "Player.h"
#include <vector>


std::vector<GameObject*> GameObject::activeGameObjects;

GameObject::GameObject(const std::string& name) : _name(name) {}

GameObject* GameObject::addGameObject(GameObject* other) 
{
    activeGameObjects.push_back(other);
    return other;
}


const std::vector<GameObject*>& GameObject::ActiveGameObjects() 
{
    return activeGameObjects;
}

std::string GameObject::Name() const 
{
    return _name;
}

void GameObject::destroyGameObjects() {
    for(GameObject* other: activeGameObjects) {
        delete other;
    }
    activeGameObjects.clear();
}



void GameObject::destroyGameObject(GameObject* other) {
    for (auto it = activeGameObjects.begin(); it != activeGameObjects.end(); ++it) {
        if (*it == other) {
            delete *it;
            activeGameObjects.erase(it);
            break;
        }
    }
}
