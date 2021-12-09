#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;

class Customer
{
private:
	// Members
public:
	string customerName;
	string customerID;

public:
	Customer();
	Customer(string ID, string name);
	void setCustomerName(string name);
	string getCustomerName();
	void setCustomerID(string ID);
	string getCustomerID();

};

#endif 
