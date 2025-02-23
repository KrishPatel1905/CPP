#include <iostream>
#include <string>
using namespace std;

class InventoryItem {
private:
    int itemID;
    string itemName;
    double price;
    int quantity;

public:
    // Default constructor
    InventoryItem() {
        itemID = 0;
        itemName = "Unknown";
        price = 0.0;
        quantity = 0;
    }

    // Parameterized constructor
    InventoryItem(int id, string name, double p, int qty) {
        itemID = id;
        itemName = name;
        price = p;
        quantity = qty;
    }

    // Add stock
    void addStock(int qty) {
        quantity += qty;
        cout << qty << " added to " << itemName << ". Total: " << quantity << endl;
    }

    // Sell item
    void sellItem(int qty) {
        if (qty <= quantity) {
            quantity -= qty;
            cout << qty << " sold from " << itemName << ". Left: " << quantity << endl;
        } else {
            cout << "Not enough stock for " << itemName << endl;
        }
    }

    // Display details
    void displayItem() {
        cout << "ID: " << itemID << ", Name: " << itemName << ", Price: $" << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    // Create items
    InventoryItem items[3] = {
        InventoryItem(101, "Notebook", 2.5, 100),
        InventoryItem(102, "Pen", 1.2, 200),
        InventoryItem(103, "Eraser", 0.5, 150)
    };

    // Show initial inventory
    cout << "Initial Inventory:\n";
    for (int i = 0; i < 3; i++)
        items[i].displayItem();

    // Add stock
    items[0].addStock(20);
    items[1].addStock(50);

    // Sell items
    items[0].sellItem(10);
    items[1].sellItem(300);
    items[2].sellItem(50);

    // Show updated inventory
    cout << "Updated Inventory:\n";
    for (int i = 0; i < 3; i++)
        items[i].displayItem();

    return 0;
}
