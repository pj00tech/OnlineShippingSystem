#ifndef SHIPPING_H
#define SHIPPING_H
#include <iostream>
#include <string>

using namespace std;

class Shipping
{

	// Members
public:
	string shippingPriority;

public:
	Shipping();
	Shipping(string priority);
	void setShippingChoice(string priority);
	string getShippingChoice();

};

#endif 
