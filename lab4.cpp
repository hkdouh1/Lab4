#include <iostream>
#include "cart.h"
#include "item.h"
#include "taxable.h"
#include "perishable.h"
#include <ctime>

using namespace std;

int main() 
{
    
    Item orange("Orange", 5, 0.5); // non taxable item

    // 10% taxable item
    TaxableItem medicine("Medicine", 2, 15.0, 0.10);

    // Perishable item with expiration date
    tm expirationDate = {};

    expirationDate.tm_year = 2023 - 1900; 
    expirationDate.tm_mon = 10 - 1;       
    expirationDate.tm_mday = 15;          

    PerishableItem milk("Milk", 1, 2.0, expirationDate);

    // creating a shopping cart with items
    ShoppingCart cart;

    // cart of items
    cart.addItem(&orange);
    cart.addItem(&medicine);
    cart.addItem(&milk);

    
    cout << cart.receipt();

    return 0;
}