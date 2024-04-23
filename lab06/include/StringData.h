#pragma once

#include "Data.h"
#include <string>

class StringData : public Data {
    std::string value;
public:
    StringData(std::string v) : value(std::move(v)) {}
    void print(std::ostream& os) const override {
        os << value;
    }
    StringData* clone() const override {
        return new StringData(*this);
    }
};
