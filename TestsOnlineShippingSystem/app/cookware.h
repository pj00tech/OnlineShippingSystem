#ifndef COOKWARE_H
#define COOKWARE_H
#include <string>
using namespace std;

class Cookware
{
private:
	// Members
public:
	string numberOfCookwareSets;

public:
	Cookware();
	Cookware(string sets);
	void setNumberOfCookwareSets(string set);
	string GetNumberOfCookwareSets();

};

#endif 
