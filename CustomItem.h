#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include <map>
#include <string>

class CustomItem : public IceCreamItem {
public:
    CustomItem(std::string size);
    ~CustomItem() override;

    std::string composeItem() override;
    double getPrice() override;

    void addTopping(std::string topping);

private: 
    //adding toppings map
    std::map<std::string, int> toppings; 

};

#endif