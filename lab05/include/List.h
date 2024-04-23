// #pragma once
// #include "Data.h"
// #include "IntData.h"
// #include "StringData.h"
// #include <vector>

// class List {
//     std::vector<Data*> items; // Wektor wskaźników do Data
// public:
//     enum Position { Begin, End };

//     List() = default;

//     List(const List& other) { // Konstruktor kopiujący
//         for (auto item : other.items) {
//             items.push_back(item->clone());
//         }
//     }

//     ~List() { // Destruktor
//         for (auto* item : items) {
//             delete item;
//         }
//     }

//     List& insert(const Data& data, Position pos = End) {
//         Data* clone = data.clone();
//         if (pos == Begin) {
//             items.insert(items.begin(), clone);
//         } else {
//             items.push_back(clone);
//         }
//         return *this;
//     }

//     void print() const {
//         std::cout << "[";
//         bool first = true;
//         for (const auto item : items) {
//             if (!first) std::cout << ", ";
//             item->print(std::cout);
//             first = false;
//         }
//         std::cout << "] " << std::endl;
//     }

//     List& operator=(const List& other) {
//         if (this != &other) {
//             for (auto* item : items) {
//                 delete item;
//             }
//             items.clear();
//             for (auto* item : other.items) {
//                 items.push_back(item->clone());
//             }
//         }
//         return *this;
//     }
// };

// inline std::ostream& operator<<(std::ostream& stream, const List& list) {
//     list.print(stream);
//     return stream;
// }




// class List {
//     struct Node {
//         LData* m_value;
//         Node* m_next;
//         Node(LData* value) : m_value(value), m_next(nullptr) {}
//         ~Node() { delete m_value; }
//     };
//     Node* m_head;
//     Node* m_tail;

// public:
//     enum InsertionMode { Begin, End };

//     List() : m_head(nullptr), m_tail(nullptr) {}
//     List(const List& other) : m_head(nullptr), m_tail(nullptr) {
//         Node* current = other.m_head;
//         while (current) {
//             insert(*current->m_value);
//             current = current->m_next;
//         }
//     }
//     ~List() {
//         while (m_head) {
//             Node* temp = m_head;
//             m_head = m_head->m_next;
//             delete temp;
//         }
//     }
//     List& insert(const LData& value, InsertionMode mode = End) {
//         Node* newNode = new Node(value.clone());
//         if (!m_head) {
//             m_head = m_tail = newNode;
//         } else {
//             if (mode == Begin) {
//                 newNode->m_next = m_head;
//                 m_head = newNode;
//             } else {
//                 m_tail->m_next = newNode;
//                 m_tail = newNode;
//             }
//         }
//         return *this;
//     }
//     bool find(const LData& value) const {
//         Node* current = m_head;
//         while (current) {
//             if (current->m_value->isSame(value)) {
//                 return true;
//             }
//             current = current->m_next;
//         }
//         return false;
//     }
//     void print(std::ostream& os = std::cout) const {
//         os << "[";
//         Node* current = m_head;
//         while (current) {
//             current->m_value->print(os);
//             if (current->m_next) os << ", ";
//             current = current->m_next;
//         }
//         os << "]";
//     }
// };

// inline std::ostream& operator<<(std::ostream& os, const List& list) {
//     list.print(os);
//     return os;
// }

#pragma once

#include "Data.h"
#include <vector>

class Node
{
private:
    Data *data;
    Node *next;

public:
    Node *getNext() const { return next; }
    Node(const Data &data2, Node *node = nullptr);

    ~Node();

    friend class List;
};

class List
{
private:
    Node *tail;
    Node *head;
    void copyList(const List &obj);

public:
    enum position
    {
        Begin,
        End
    };

    List();

    List(const List &obj);

    List &insert(const Data &obj, position pos = End);

    void print();

    List &operator=(const List &obj);

    ~List();

    bool find(const Data &data) const;

    List& concat(List& other) {
        if (!this->head) {
            this->head = other.head;
            this->tail = other.tail;
        } else if (other.head) {
            this->tail->next = other.head; 
            this->tail = other.tail;
        }
        other.head = nullptr;
        other.tail = nullptr;
        return *this;
    }
};