#include "customer.h"

Customer::Customer() {

}
Customer::Customer(string ID, string name) {
	customerID = ID;
	customerName = name;
}
void Customer::setCustomerName(string name) {
	customerName = name;
}
string Customer::getCustomerName() {
	return customerName;
}
void Customer::setCustomerID(string ID) {
	customerID = ID;
}
string Customer::getCustomerID() {
	return customerID;
}