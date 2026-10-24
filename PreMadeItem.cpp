
#include "PreMadeItem.h"
#include <map>
#include <iomanip>
#include <sstream>


//PreMadeItem
PreMadeItem :: PreMadeItem(std::string name, std::string size) : IceCreamItem(size), name(name)
{
	std::map<std::string, double> costs{{"small", 4.00}, {"medium", 6.00}, {"large", 7.50}}; 

	//matching map toinputted size
	price = costs.at(size); 

}

std::string PreMadeItem::composeItem(){
	std::stringstream out;

	out << "Pre-made Size: " << size <<"\n";;
	out << "Pre-made Item: " << name <<"\n";; 
	out << "Price: $" << std::fixed
        << std::setprecision(2) << price << "\n";

	return out.str();

}
double PreMadeItem::getPrice(){
	return price; 

}

PreMadeItem::~PreMadeItem(){
	
}


