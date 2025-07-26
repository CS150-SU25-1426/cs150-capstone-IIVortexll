#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
private:
    std::string name;
    int quantity;

public:
    Item(std::string n, int q);
    std::string getName() const;
    int getQuantity() const;

    bool operator==(const Item& other) const;
    friend std::ostream& operator<<(std::ostream& out, const Item& item);
};

#endif
