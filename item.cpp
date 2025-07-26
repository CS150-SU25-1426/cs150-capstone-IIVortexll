#include "Item.h"

Item::Item(std::string n, int q) {
    name = n;
    quantity = q;
}

std::string Item::getName() const {
    return name;
}

int Item::getQuantity() const {
    return quantity;
}

bool Item::operator==(const Item& other) const {
    return name == other.name && quantity == other.quantity;
}

std::ostream& operator<<(std::ostream& out, const Item& item) {
    out << "Item: " << item.name << ", Quantity: " << item.quantity;
    return out;
}
