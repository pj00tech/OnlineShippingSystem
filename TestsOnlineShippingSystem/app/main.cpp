// Include header files.
#include "shipping.h"
#include "customer.h"
#include "shippingDepartment.h"
#include "cookware.h"
#include <queue>
#include<string>

// Return true when second customer has greater priority.
bool operator<(const ShippingDepartment& c1, const ShippingDepartment& c2)
{

    return stoi(c1.shippingPriority) < stoi(c2.shippingPriority);
}

int main()
{
	// Declare shipping class object.
    	Shipping shipping;
	// Declare customer class object.
	Customer customer;
	// Declare cookware class object.
	Cookware cookware;
	// Declare shippingdepartment class object.
	ShippingDepartment shippingdepartment;

	return 0;
}
