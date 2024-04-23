#pragma once

#include "Person.h"

class Student : public Person
{
    //atrubuty
    int _year;
    
    public:
    //konstruktory
    Student(const std::string &name, int year)
    {
        std::cout << "~" << _year << " (student)" << std::endl;
    }

    ~Student() override
    {
        std::cout << "~" << _year << " (student)" << std::endl;
    }
    //metody
    std::ostream &Print(std::ostream &stream) const override
    {
        Person::Print(stream);                   
        stream << ", year (student): " << _year;
        return stream;                           
    }
};