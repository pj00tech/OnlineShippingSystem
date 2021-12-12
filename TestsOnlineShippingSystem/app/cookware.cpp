// Incllude headear file for cookware
#include "cookware.h"

//Default Constructor
Cookware::Cookware() {

}

//Parametrized Constructor to take the number of cookware sets as pramenter.
Cookware::Cookware(string sets) {
	numberOfCookwareSets = sets;
}

//Function to set the number of cookware sets.
void Cookware::setNumberOfCookwareSets(string sets) {
	numberOfCookwareSets = sets;
}

//Function to return the number of cookware sets.
string Cookware::GetNumberOfCookwareSets() {

	return numberOfCookwareSets;
}
