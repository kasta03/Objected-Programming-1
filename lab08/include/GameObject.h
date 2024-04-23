#pragma once
#include <vector>
#include <memory>
#include "perform.h"


class GameObject
{
    static std::vector<GameObject*> _pointers_to_objects;

    public:
    virtual ~GameObject() {}
    
    static GameObject* addGameObject(GameObject* ptr)
    {
        // _pointers_to_objects.push_back(ptr);
        return ptr;
    }

    static void destroyGameObject(GameObject* ptr)
    {
        delete ptr;
        std::cout << "Usuwam cie" << std::endl;
    }
    static std::vector<GameObject*> ActiveGameObjects()
    {
        std::vector<GameObject*> _pointers;
        for(auto each : _pointers)
        {
            _pointers.push_back(each);
        }
        return _pointers;
    }
    virtual void action() = 0;
};

void performRuntimeTypeChecking(GameObject* ptr);

class Renderable : public GameObject
{
public:
    virtual void render() 
    {
        std::cout << "Rendering object\n";
    }
    virtual ~Renderable() {}
};