#include "item.h"


Item::Item(const string& name, int quantity, double price)
    : name(name), quantity(quantity), price(price) {}


string Item::getName() const { return name; }

int Item::getQuantity() const { return quantity; }
double Item::getPrice() const { return price; }


void Item::setQuantity(int newQuantity) { quantity = newQuantity; }
void Item::setPrice(double newPrice) { price = newPrice; }

// calculating the total price
double Item::getTotalPrice() const 
{
    return quantity * price;
}

// Destructor
Item::~Item() {}