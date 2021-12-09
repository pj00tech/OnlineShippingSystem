#include "cookware.h"

Cookware::Cookware() {

}
Cookware::Cookware(string sets) {
	numberOfCookwareSets = sets;
}

void Cookware::setNumberOfCookwareSets(string sets) {
	numberOfCookwareSets = sets;
}
string Cookware::GetNumberOfCookwareSets() {

	return numberOfCookwareSets;
}