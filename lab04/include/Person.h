#pragma once
#include <iostream>
#include <ostream>
class Person 
{
protected:
    std::string _name;
public:
    //konstruktor, destruktor
    Person() = default;
    Person(const std::string& name);
    //metody
    virtual ~Person();
    virtual std::ostream& Print(std::ostream& stream) const;
    friend std::ostream& operator<<(std::ostream& stream, const Person& person);
};

Person::Person(const std::string& name) : _name(name) {}

Person::~Person() {
    std::cout << "~" << _name << " (person)" << std::endl;
}

std::ostream& Person::Print(std::ostream& stream) const {
    return stream << "name (person): " << _name;
}

std::ostream& operator<<(std::ostream& stream, const Person& person) {
    return person.Print(stream);
}