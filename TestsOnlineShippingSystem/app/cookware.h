// Cookware header file.
#ifndef COOKWARE_H
#define COOKWARE_H
#include <string>
using namespace std;

// Cookware class inherits customer class.
class Cookware: public Customer {

// Cookware member variables.	
public:
	string numberOfCookwareSets;
	
// Cookware member functions.
public:
	Cookware();
	Cookware(string sets);
	void setNumberOfCookwareSets(string set);
	string GetNumberOfCookwareSets();

};

#endif 
