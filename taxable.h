#ifndef TAXABLEITEM_H
#define TAXABLEITEM_H

#include "item.h"

using namespace std;

class TaxableItem : public Item 
{
private:

    double taxRate;

public:
    
    TaxableItem(const string& name, int quantity, double price, double taxRate);

    // overrides to add tax
    double getTotalPrice() const override;
};

#endif
