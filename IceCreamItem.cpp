

#include "IceCreamItem.h"

#include <map>
#include <string>
#include <vector>

//IceCreamItem
IceCreamItem :: IceCreamItem(std::string size) {
	this->size = size; 
	// using a map here so that small can be mapped to price etc etc
	//have to include header
	std::map<std::string, double> costs{{"small", 3.00}, {"medium", 5.00}, {"large", 6.50}}; 
	//matching map toinputted size
	price = costs.at(size); 
}



