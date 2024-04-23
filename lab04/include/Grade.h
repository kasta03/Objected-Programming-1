#pragma once
#include "Student.h"
#include "Faculty.h"
#include "Student.h"
#include <iostream>

class Grade : public Student, public Faculty
{
    //atrubuty
    double _grade;

    public: 
    //konstruktory
    Grade(const std::string& name, int year, const std::string& faculty, double grade) : Student(name, year), Faculty(name, faculty), _grade(grade) {}
    ~Grade() override;

    //metody
    std::ostream& Print(std::ostream& stream) const override;
};
    Grade::~Grade() 
    {
    std::cout << "~" << _grade << " (grade)" << std::endl;
    }

std::ostream& Grade::Print(std::ostream& stream) const 
{
    stream << "As a Student: ";
    Student::Print(stream) << std::endl;
    stream << "As a Faculty: ";
    Faculty::Print(stream) << std::endl;
    return stream << "Grade value (grade): " << _grade;
}