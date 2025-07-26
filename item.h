#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
using namespace std;

class Item {
private:
    string m_name;
    int m_quantity;

public:
    Item(string name = "", int quantity = 0);
    string getName() const;
    int getQuantity() const;

    void setName(string name);
    void setQuantity(int quantity);

    bool operator==(const Item& other) const;
    friend ostream& operator<<(ostream& out, const Item& item);
};

#endif
