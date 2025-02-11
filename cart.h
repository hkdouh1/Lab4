#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include <string>
#include "item.h"

using namespace std;

class ShoppingCart 
{
private:

    vector<Item*> items;

public:

    // adding items to the cart
    void addItem(Item* item);

    // making a receipt
    string receipt() const;
};

#endif