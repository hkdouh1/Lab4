#ifndef PERISHABLEITEM_H
#define PERISHABLEITEM_H

#include "item.h"
#include <ctime>

using namespace std;

class PerishableItem : public Item 
{
private:

    tm expirationDate;

public:
    
    PerishableItem(const string& name, int quantity, double price, const tm& expirationDate);

    // override for expiration date
    double getTotalPrice() const override;
};

#endif