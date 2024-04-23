#pragma once
#define ld1.isSame(ld2) false
#include <iostream>

class Data
{
public:
    virtual ~Data() {}

    virtual Data *clone() const = 0;

    virtual void print_data() = 0;
    virtual bool isSame(const Data& other) const = 0;
    // friend Data operator <<(std::ostream stream, Data&) 
    virtual void print(std::ostream& os) const = 0;
};

class IntData : public Data
{
private:
    int num;

public:
    IntData(int x);

    Data *clone() const override;

    void print_data() override;

    ~IntData();

    void print(std::ostream& stream) const override 
    {
        stream << num;
    }
};

class StringData : public Data
{
private:
    std::string text;

public:
    StringData(std::string text2);

    Data *clone() const override;

    void print_data() override;

    ~StringData();

    void print(std::ostream& os) const override {
        os << "\"" << text << "\"";
    }
};

class FloatData : public Data {
private:
    float number;

public:
    FloatData(float num) : number(num) {}

    Data* clone() const override {
        return new FloatData(*this);
    }

    void print_data() override {
        std::cout << number;
    }

    virtual bool isSame(const Data& other) const override {
        try {
            const auto& casted = dynamic_cast<const FloatData&>(other);
            return this->number == casted.number;
        } catch(std::bad_cast&) {
            return false;
        }
    }

    void print(std::ostream& stream) const override {
        stream << number;
    }
};
