#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>


#include "IceCreamOrder.h"
#include "IceCreamItem.h"

#include "CustomItem.h"


//CustomItem
CustomItem :: CustomItem(std::string size) : IceCreamItem(size) {}
double CustomItem :: getPrice()  { return price;}

void CustomItem :: addTopping(std::string topping) { 
	toppings[topping]++;
    price += 0.40;
}

std::string CustomItem::composeItem(){
	//has size, price, and toppings
	std::stringstream out;

	out << "Custom Size: " << size <<"\n";
	out << "Toppings:\n";

	//loop thru toppings maps
	for (const auto& x : toppings) {
        out << x.first << ": " << x.second << " oz\n";
    }

	out << "Price: $" << std::fixed
        << std::setprecision(2) << price << "\n";

	return out.str();
}

//CustomItem Destructor
CustomItem:: ~CustomItem() {}