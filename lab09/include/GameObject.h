#pragma once
#include <iostream>
#include <vector>


class GameObject {
    
protected:
    static std::vector<GameObject*> activeGameObjects;
    std::string _name;

public:

    //function that destroys game objects
    static void destroyGameObject(GameObject* obj);
    //function that destroys all game objects
    static void destroyGameObjects();
    //funktion ActiveObj
    static const std::vector<GameObject*>& ActiveGameObjects();
    //function that retunrs name
    virtual std::string Name() const;

    //constructor
    GameObject(const std::string& name = "Unamed");
    //virtual destructor
    virtual ~GameObject() = default;
    //virtual fun action
    virtual void action() = 0;
    //funct adding object
    static GameObject* addGameObject(GameObject* obj);

};

