#include "Item.h"

Item::Item(string name, int quantity) {
    m_name = name;
    m_quantity = quantity;
}

string Item::getName() const {
    return m_name;
}

int Item::getQuantity() const {
    return m_quantity;
}

void Item::setName(string name) {
    m_name = name;
}

void Item::setQuantity(int quantity) {
    m_quantity = quantity;
}

bool Item::operator==(const Item& other) const {
    return m_name == other.m_name && m_quantity == other.m_quantity;
}

ostream& operator<<(ostream& out, const Item& item) {
    out << "Item [" << item.m_name << ", Quantity: " << item.m_quantity << "]";
    return out;
}
