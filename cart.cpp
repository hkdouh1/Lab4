#include "cart.h"
#include <iomanip> 
#include <sstream> 

using namespace std;

// adding an item to the cart
void ShoppingCart::addItem(Item* item) 
{
    items.push_back(item);
}


string ShoppingCart::receipt() const 
{
    ostringstream receipt; 

    double total = 0;

    receipt << "Receipt\n\n";

    for (const auto& item : items) 
    {
        double price = item->getTotalPrice();

        receipt << item->getName() << ": $" << fixed << setprecision(2) << price << "\n"; 
        total += price;
    }

    receipt << "-----------------\n\n";
    receipt << "Total: $" << fixed << setprecision(2) << total << "\n";

    return receipt.str(); 
}