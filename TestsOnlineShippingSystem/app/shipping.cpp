// Include header file for shipping.
#include "shipping.h"

// Default constructor.
Shipping::Shipping() {

}

// Parameterized constructor to take the shipping priority as parameter.
Shipping::Shipping(string priority) {
	shippingPriority = priority;
}

// Function to set the shipping priority.
void Shipping::setShippingChoice(string priority) {
	shippingPriority = priority;

}

// Function to return the shipping priority.
string Shipping::getShippingChoice() {
	return shippingPriority;
}
