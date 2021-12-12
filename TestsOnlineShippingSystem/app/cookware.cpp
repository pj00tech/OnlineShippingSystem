// Include header file for cookware.
#include "cookware.h"

// Default constructor.
Cookware::Cookware() {

}

// Parameterized constructor to take the number of cookware sets as parameter.
Cookware::Cookware(string sets) {
	numberOfCookwareSets = sets;
}

// Function to set the number of cookware sets.
void Cookware::setNumberOfCookwareSets(string sets) {
	numberOfCookwareSets = sets;
}

// Function to return the number of cookware sets.
string Cookware::GetNumberOfCookwareSets() {

	return numberOfCookwareSets;
}
