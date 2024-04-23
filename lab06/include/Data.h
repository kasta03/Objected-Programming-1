#ifndef DATA_H
#define DATA_H

#include <iostream>

// Klasa bazowa Data
class Data {
public:
    virtual ~Data() = default; // Wirtualny destruktor
    virtual void print(std::ostream& os) const = 0; // Czysta funkcja wirtualna do wydruku
    virtual Data* clone() const = 0; // Czysta funkcja wirtualna do klonowania
};

#endif

