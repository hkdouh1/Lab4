#include "taxable.h"


TaxableItem::TaxableItem(const string& name, int quantity, double price, double taxRate)
    : Item(name, quantity, price) 
{
    if (taxRate > 1) 
    {
        this->taxRate = taxRate / 100.0;
    }
    else 
    {
        this->taxRate = taxRate;
    }
}

// total price adds tax
double TaxableItem::getTotalPrice() const 
{
    double basePrice = Item::getTotalPrice();
    return basePrice + (basePrice * taxRate);
}