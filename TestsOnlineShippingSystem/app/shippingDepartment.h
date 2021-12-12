// Shipping Department header file.
#ifndef SHIPPINGDEPARTMENT_H
#define SHIPPINGDEPARTMENT_H
#include <string>
#include "customer.h"
#include "cookware.h"
#include "shipping.h"
using namespace std;

// Shipping Department class inherits shipping class.
class ShippingDepartment: public Shipping {

// Class member variables.
public:
	string orderID;

// Class member functions.
public:
	ShippingDepartment();
	ShippingDepartment(string order, string ID, string name, string sets, string priority);
	ShippingDepartment(string order);
	void setOrderID(string ID);
	string getOrderID();
};

#endif 
