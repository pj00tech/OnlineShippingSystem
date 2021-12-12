// Include header file for shipping.
#include "shippingDepartment.h"

// Default constructor.
ShippingDepartment::ShippingDepartment() {
	
}

// Parameterized constructor to take order number, customer ID and name, number of cookware sets, and shipping priority as parameters.
ShippingDepartment::ShippingDepartment(string order, string ID, string name, string sets, string priority) {
	orderID = order;
	customerID=ID;
	customerName=name;
	numberOfCookwareSets=sets;
	shippingPriority = priority;
}

// Parameterized constructor to take order number as parameter.
ShippingDepartment::ShippingDepartment(string order) {
	orderID = order;
}

// Function to set the order number.
void ShippingDepartment::setOrderID(string ID) {
	orderID = ID;
}

// Function to return the order number.
string ShippingDepartment::getOrderID() {
	return orderID;
}
