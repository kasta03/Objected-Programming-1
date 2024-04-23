#ifndef LIST_H
#define LIST_H

#include "Data.h"
#include "IntData.h"
#include "StringData.h"
#include <vector>

class List {
    std::vector<Data*> items; // Wektor wskaźników do Data
public:
    enum Position { Begin, End };

    List() = default;

    List(const List& other) { // Konstruktor kopiujący
        for (auto item : other.items) {
            items.push_back(item->clone());
        }
    }

    ~List() { // Destruktor
        for (auto* item : items) {
            delete item;
        }
    }

    List& insert(const Data& data, Position pos = End) {
        Data* clone = data.clone();
        if (pos == Begin) {
            items.insert(items.begin(), clone);
        } else {
            items.push_back(clone);
        }
        return *this;
    }

    void print() const {
        std::cout << "[";
        bool first = true;
        for (const auto item : items) {
            if (!first) std::cout << ", ";
            item->print(std::cout);
            first = false;
        }
        std::cout << "] " << std::endl;
    }

    List& operator=(const List& other) {
        if (this != &other) {
            for (auto* item : items) {
                delete item;
            }
            items.clear();
            for (auto* item : other.items) {
                items.push_back(item->clone());
            }
        }
        return *this;
    }
};

#endif