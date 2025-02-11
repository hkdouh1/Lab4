#include "perishable.h"
#include <ctime>
#include <iostream>

using namespace std;


PerishableItem::PerishableItem(const string& name, int quantity, double price, const tm& expirationDate)
    : Item(name, quantity, price), expirationDate(expirationDate) {}

// total price checks date
double PerishableItem::getTotalPrice() const 
{
    time_t now = time(nullptr);

    
    tm currentDate = {};
    localtime_s(&currentDate, &now);

  
    if (mktime(const_cast<tm*>(&currentDate)) > mktime(const_cast<tm*>(&expirationDate))) 
    {
        return 0; // Expired item has no value
    }

    return Item::getTotalPrice();
}
