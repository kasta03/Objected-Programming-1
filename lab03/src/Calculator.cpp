#include "Calculator.h"

Calculator& Calculator::operator=(int value) 
{
    _value = value;
    return *this;
}

int Calculator::operator++() 
{
    return ++_value;
}

int Calculator::operator++(int tmp) 
{
    tmp = _value;
    _value++;
    return tmp;
}

int Calculator::operator--() 
{
    return --_value;
}

Calculator Calculator::operator*(int value) const 
{
    Calculator temp;
    temp._value = _value * value;
    return temp;
}

std::ostream& operator<<(std::ostream& stream, const Calculator& other) 
{
    stream << other._value << std::endl;
    return stream;
}

Calculator operator*(int x, const Calculator& other) 
{
    Calculator temp;
    temp._value = x * other._value;
    return temp;
}

int Calculator::operator()(std::function<int(int)> func) const 
{
    return func(4*_value);
}

int Calculator::operator()(std::function<int(int, int)> func, int value) const 
{
    return _value + value;
}