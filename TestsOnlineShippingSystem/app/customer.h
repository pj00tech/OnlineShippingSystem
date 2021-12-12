// Customer header file.
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;

// Customer class.
class Customer
{
// Customer member variables.	
public:
	string customerName;
	string customerID;
// Customer member functions.
public:
	Customer();
	Customer(string ID, string name);
	void setCustomerName(string name);
	string getCustomerName();
	void setCustomerID(string ID);
	string getCustomerID();

};

#endif 
