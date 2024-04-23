#pragma once
// #include "GameObject.h"
// #include <iostream>
// #include "perform.h"
// #include "Collidable.h"
// #include "Updatable.h"
// #include "Renderable.h"
#include <iostream>
#include <vector>
//klasa GameObject
class GameObject
{
    static std::vector<GameObject *> _pointers_to_objects;

public:
    virtual ~GameObject() {}
    
    //metody statyczne
    static GameObject *addGameObject(GameObject *ptr)
    {
        // _pointers_to_objects.push_back(ptr);
        return ptr;
    }

    static void destroyGameObject(GameObject *ptr)
    {
        delete ptr;
        std::cout << "Usuwam cie" << std::endl;
    }
    static std::vector<GameObject *> ActiveGameObjects()
    {
        std::vector<GameObject *> _pointers;
        for (auto each : _pointers)
        {
            _pointers.push_back(each);
        }
        return _pointers;
    }
    virtual void action() = 0;
};
//klasa renderable
class Renderable
{
public:
    //virtualna metoda
    virtual void render()
    {
        std::cout << "Rendering object\n";
    }
    virtual ~Renderable() {}
};

//klasa Updatable
class Updatable
{
public:
    //virtualna metoda
    virtual void update()
    {
        std::cout << "Updatable object\n";
    }
    virtual ~Updatable() {}
};

//klasa Collidable
class Collidable
{
public:
    //virtualna metoda
    virtual void collide()
    {
        std::cout << "Handling collision" << std::endl;
    }
    virtual ~Collidable() {}
};

//klasa Player
class Player : public GameObject, public Renderable, public Collidable
{
public:
    //metoda overrided
    void action() override
    {
        std::cout << "Performing player-specific action..." <<std::endl;
        collide();
        render();
    }
};

//klasa Enemy
class Enemy : public GameObject, public Renderable, public Collidable, public Updatable
{
public:
    //metoda overrided
    void action() override
    {
        std::cout << "Performing enemy-specific action"<<std::endl;
        collide();
        update();
        render();
    }
};

//globalna funckja performRuntimeTypeChecking
void performRuntimeTypeChecking(GameObject *ptr)
{
    if (dynamic_cast<Player *>(ptr))
    {
        std::cout << "Player object is renderable collidable" << std::endl;
    }
    if (dynamic_cast<Enemy *>(ptr))
    {
        std::cout << " Enemy object is renderable collidable updatable" << std::endl;
    }
    std::cout << std::endl;
}
