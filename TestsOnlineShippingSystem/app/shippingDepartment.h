#ifndef SHIPPINGDEPARTMENT_H
#define SHIPPINGDEPARTMENT_H
#include <string>
#include "customer.h"
#include "cookware.h"
#include "shipping.h"
using namespace std;

class ShippingDepartment: public Customer, public Cookware, public Shipping
{
private:
	// Members
public:
	string orderID;
	//string customerName;
	//string customerID;
	//string numberOfCookwareSets;

public:
	ShippingDepartment();
	ShippingDepartment(string order, string ID, string name, string sets, string priority);
	ShippingDepartment(string order);
	void setOrderID(string ID);
	string getOrderID();
};

#endif 
