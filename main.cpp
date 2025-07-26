#include <iostream>
#include <vector>
#include "item.h"
using namespace std;

int main() {
    vector<Item> inventory;
    int choice;
    string name;
    int quantity;

    do {
        cout << "\n1) Add Item\n2) Modify Item\n3) Delete Item\n4) Show Items\n5) Exit\n>> ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter quantity: ";
            cin >> quantity;
            inventory.push_back(Item(name, quantity));
        }

        else if (choice == 2) {
            cout << "Enter name to modify: ";
            getline(cin, name);
            bool found = false;
            for (int i = 0; i < inventory.size(); i++) {
                if (inventory[i].getName() == name) {
                    cout << "Enter new quantity: ";
                    cin >> quantity;
                    inventory[i].setQuantity(quantity);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Item not found\n";
        }

        else if (choice == 3) {
            cout << "Enter name to delete: ";
            getline(cin, name);
            bool found = false;
            for (int i = 0; i < inventory.size(); i++) {
                if (inventory[i].getName() == name) {
                    inventory.erase(inventory.begin() + i);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Item not found\n";
        }

        else if (choice == 4) {
            for (int i = 0; i < inventory.size(); i++) {
                cout << inventory[i] << endl;
            }
        }

    } while (choice != 5);

    return 0;
}
