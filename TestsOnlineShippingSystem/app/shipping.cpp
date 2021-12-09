#include "shipping.h"


Shipping::Shipping() {

}

Shipping::Shipping(string priority) {
	shippingPriority = priority;
}

void Shipping::setShippingChoice(string priority) {
	shippingPriority = priority;

}
string Shipping::getShippingChoice() {
	return shippingPriority;
}