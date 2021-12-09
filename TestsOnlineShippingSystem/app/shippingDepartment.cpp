#include "shippingDepartment.h"

ShippingDepartment::ShippingDepartment() {
	
}

ShippingDepartment::ShippingDepartment(string order, string ID, string name, string sets, string priority) {
	orderID = order;
	customerID=ID;
	customerName=name;
	numberOfCookwareSets=sets;
	shippingPriority = priority;
}

ShippingDepartment::ShippingDepartment(string order) {
	orderID = order;
}

void ShippingDepartment::setOrderID(string ID) {
	orderID = ID;
}
string ShippingDepartment::getOrderID() {
	return orderID;
}