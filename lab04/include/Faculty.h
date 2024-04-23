#pragma once
#include <cstring>
#include "Person.h"

class Faculty : public Person 
{
    //atrubuty
    std::string _faculty;

    public:
    //konstruktory

    Faculty(const std::string& name, const std::string& faculty) : Person(name), _faculty(faculty) {}
    //metody
    void print() const;
};

void Faculty::print() const 
{
    std::cout << "Name: " << _name << ", spec: " << _faculty << std::endl;
}