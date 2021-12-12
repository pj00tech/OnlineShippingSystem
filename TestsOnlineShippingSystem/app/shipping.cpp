//Include header file for shipping
#include "shipping.h"

//Default consturctor
Shipping::Shipping() {

}

//Parametrized consturctor to take the shipping priority as prameter.
Shipping::Shipping(string priority) {
	shippingPriority = priority;
}

//Funtion to set the shipping priority
void Shipping::setShippingChoice(string priority) {
	shippingPriority = priority;

}

//Funtion to return the shipping priority
string Shipping::getShippingChoice() {
	return shippingPriority;
}
