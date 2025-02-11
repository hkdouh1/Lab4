#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item 
{
private:

    string name;
    int quantity;
    double price;

public:
    
    Item(const string& name, int quantity, double price);

   
    string getName() const;

    int getQuantity() const;
    double getPrice() const;

   
    void setQuantity(int newQuantity);
    void setPrice(double newPrice);

    // calculating the total price
    virtual double getTotalPrice() const;

    
    virtual ~Item();
};

#endif