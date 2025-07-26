#include <iostream>
#include "Item.h"

int main() {
    Item item1("Pencil", 10);
    Item item2("Pencil", 10);
    Item item3("Notebook", 5);

    std::cout << item1 << std::endl;

    if (item1 == item2) {
        std::cout << "item1 is equal to item2" << std::endl;
    }

    if (!(item1 == item3)) {
        std::cout << "item1 is not equal to item3" << std::endl;
    }

    return 0;
}
