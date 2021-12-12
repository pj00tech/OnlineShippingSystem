//Shipping header file
#ifndef SHIPPING_H
#define SHIPPING_H
#include <iostream>
#include <string>

using namespace std;

//Shipping class
class Shipping
{

//Shipping member variables
public:
	string shippingPriority;
//Shipping member functions
public:
	Shipping();
	Shipping(string priority);
	void setShippingChoice(string priority);
	string getShippingChoice();

};

#endif 
