#pragma once

//klasa bazowa GameObject
class GameObject
{
    public:
    enum CPLX
    {
        LOWEST, MID, HIGHEST
    };
    virtual void interact() = 0;         // metoda wirtualna printuaca interakcje gameobjectu
    virtual CPLX complexity() const = 0; // metoda wirtualna zwracająca complexity
    virtual ~GameObject() {} // virtualny destruktor
};


//klasa zawierajca operator poznego wizaania
class CompareCplx
{
public:
    //operator 
    bool operator()(const GameObject *first, const GameObject *sec)
    {
        return static_cast<int>(first->complexity()) < static_cast<int>(sec->complexity());
    }
};

