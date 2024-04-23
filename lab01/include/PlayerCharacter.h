#pragma once
#include <iostream>

// Game object class
class GameObject {
    public:
    virtual ~GameObject();
    virtual void attack();

    // constructors
    GameObject() = default;
    GameObject(GameObject& other) = default;
};

// Renderable class
class Renderable {
    public:
    virtual ~Renderable();
    virtual void attack();

    // constructors
    Renderable() = default;
    Renderable(Renderable& other) = default;
};

// Player Character class
class PlayerCharacter : public GameObject, public Renderable {
    public:
    void attack() override;

    // constructors
    PlayerCharacter(PlayerCharacter& other) = default;
    PlayerCharacter() = default;
};

// Gutils namespace
namespace gutils {
    void handleGameObject(GameObject* object);
    void handleRenderable(Renderable* renderable);
};
