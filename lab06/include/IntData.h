#pragma once
#include "Data.h"

class IntData : public Data {
    int value;
public:
    IntData(int v) : value(v) {}
    void print(std::ostream& os) const override {
        os << value;
    }
    IntData* clone() const override {
        return new IntData(*this);
    }
};
