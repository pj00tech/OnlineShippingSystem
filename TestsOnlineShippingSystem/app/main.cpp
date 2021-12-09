//#include "shipping.h"
#include "customer.h"
#include "shippingDepartment.h"
#include "cookware.h"
#include <queue>
#include<string>

// Return true when second customer has greater priority
bool operator<(const ShippingDepartment& c1, const ShippingDepartment& c2)
{

    return stoi(c1.shippingPriority) < stoi(c2.shippingPriority);
}

int main()
{
    //Shipping shipping;
	Customer customer;
	Cookware cookware;
	ShippingDepartment shippingdepartment;

	return 0;
}
