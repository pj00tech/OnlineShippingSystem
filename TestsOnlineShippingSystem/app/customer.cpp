//Include header file for customer
#include "customer.h"

//Default consturctor
Customer::Customer() {

}

//Parametrized consturctor to take the customer ID and name as pramerters
Customer::Customer(string ID, string name) {
	customerID = ID;
	customerName = name;
}

//Function to set the customer name
void Customer::setCustomerName(string name) {
	customerName = name;
}

//Function to return the customer name
string Customer::getCustomerName() {
	return customerName;
}

//Function to set the customer ID
void Customer::setCustomerID(string ID) {
	customerID = ID;
}

//Function to retrun the customer ID
string Customer::getCustomerID() {
	return customerID;
}
