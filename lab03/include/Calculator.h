#pragma once
#include <iostream>
#include <functional>
#include <ostream>


class Calculator {
public:
    //konstruktor
    Calculator() : _value(0) {}
    //operatory 
    int operator()() const { return _value; }
    Calculator& operator=(int value);
    int operator++();
    int operator++(int tmp);
    int operator--();
    Calculator operator*(int value) const;
    friend Calculator operator*(int x, const Calculator& y);
    int operator()(std::function<int(int)> func) const;
    int operator()(std::function<int(int, int)> func, int value) const;
    friend std::ostream& operator<<(std::ostream& stream, const Calculator& other);

    //prywatne zmienne 
private:
    int _value;
};
