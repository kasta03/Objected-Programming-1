// #pragma once
// #include <iostream>

// class OneArg 
// {
// public:
//     virtual int result(bool val) const = 0;
//     virtual ~OneArg() {}
// };


// class TwoArg 
// {
// public:
//     virtual int result(bool val1, bool val2) const = 0;
//     virtual ~TwoArg() {}
// };

// class NOT : public OneArg 
// {
//     int result(bool val1, bool val2) const;
    
// };

// class OR : public OneArg 
// {
//     int result(bool val1, bool val2) const;
    
// };
// class AND : public OneArg 
// {
// };



#pragma once

class OneArg 
{
public:
    virtual int result(bool arg) const = 0;
    virtual ~OneArg() = default;
};

class TwoArg 
{
public:
    virtual int result(bool arg1, bool arg2) const = 0;
    // virtual ~TwoArg() = default;
};

class OR : public TwoArg 
{
public:
    int result(bool arg1, bool arg2) const override;
};

class AND : public TwoArg 
{
public:
    int result(bool arg1, bool arg2) const override;
};

class NOT : public OneArg 
{
public:
    int result(bool arg) const override;
};

// class Logical 
// {
// public:
//     static int eval(const TwoArg& op, bool arg1, bool arg2);
//     static int eval(const OneArg& op, bool arg);
// };

namespace Logical
{
    int eval(const TwoArg& op, bool arg1, bool arg2);
    int eval(const OneArg& op, bool arg);
}
