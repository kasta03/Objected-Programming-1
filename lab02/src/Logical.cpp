#include "Logical.h"

int OR::result(bool arg1, bool arg2) const 
{
    return arg1 || arg2;
}

int AND::result(bool arg1, bool arg2) const 
{
    return arg1 && arg2;
}

int NOT::result(bool arg) const 
{
    return !arg;
}

int Logical::eval(const TwoArg& op, bool arg1, bool arg2) 
{
    return op.result(arg1, arg2);
}

int Logical::eval(const OneArg& op, bool arg) 
{
    return op.result(arg);
}