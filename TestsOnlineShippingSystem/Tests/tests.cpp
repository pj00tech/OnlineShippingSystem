#include <QtTest>
#include "customer.h"
#include "shipping.h"
#include "cookware.h"
#include "shippingDepartment.h"


class Tests : public QObject
{
	Q_OBJECT

public:
	Tests();
	~Tests();

private slots:
	void testSetCustomerName();
	void testGetCustomerName();
	void testSetCustomerID();
	void testGetCustomerID();
	void testSetNumberOfCookwareSets();
	void testGetNumberOfCookwareSets();
	void testSetShippingChoice();
	void testGetShippingChoice();
	void setOrderID();
	void getOrderID();

};

Tests::Tests()
{

}

Tests::~Tests()
{

}


void Tests::testSetCustomerName() {
	// ARRANGE
	Customer customer = Customer();
	string item = "John";
	string actual;
	string expected = item;
	// ACT
	customer.setCustomerName(item);
	actual = customer.getCustomerName();
	// ASSERT
	QCOMPARE(actual, expected);
}

void Tests::testGetCustomerName() {
	// ARRANGE
	Customer customer = Customer("12345","John");
	string item = "John";
	string actual;
	string expected = item;
	// ACT
	actual = customer.getCustomerName();
	// ASSERT
	QCOMPARE(actual, expected);
}

void Tests::testSetCustomerID() {
	// ARRANGE
	Customer customer = Customer();
	string item = "9876";
	string actual;
	string expected = item;
	// ACT
	customer.setCustomerID(item);
	actual = customer.getCustomerID();
	// ASSERT
	QCOMPARE(actual, expected);
}

void Tests::testGetCustomerID() {
	// ARRANGE
	Customer customer = Customer("12345", "John");
	string item = "12345";
	string actual;
	string expected = item;
	// ACT
	actual = customer.getCustomerID();
	// ASSERT
	QCOMPARE(actual, expected);
}


void Tests::testSetNumberOfCookwareSets() {
	// ARRANGE
	Cookware cookware = Cookware();
	string item = "5";
	string actual;
	string expected = item;
	// ACT
	cookware.setNumberOfCookwareSets(item);
	actual = cookware.GetNumberOfCookwareSets();
	// ASSERT
	QCOMPARE(actual, expected);
}

void Tests::testGetNumberOfCookwareSets() {
	// ARRANGE
	Cookware cookware = Cookware("10");
	string item = "10";
	string actual;
	string expected = item;
	// ACT
	actual = cookware.GetNumberOfCookwareSets();
	// ASSERT
	QCOMPARE(actual, expected);
}
void Tests::testSetShippingChoice() {
    // ARRANGE
    Shipping shipping = Shipping();
    string item = "3";
    string actual;
    string expected = item;
    // ACT
    shipping.setShippingChoice(item);
    actual = shipping.getShippingChoice();
    // ASSERT
    QCOMPARE(actual, expected);
}

void Tests::testGetShippingChoice() {
    // ARRANGE
    Shipping shipping = Shipping("2");
    string item = "2";
    string actual;
    string expected = item;
    // ACT
    actual = shipping.getShippingChoice();
    // ASSERT
    QCOMPARE(actual, expected);
}
void Tests::setOrderID() {
	// ARRANGE
	ShippingDepartment shippingdepartment = ShippingDepartment();
	string item = "3";
	string actual;
	string expected = item;
	// ACT
	shippingdepartment.setOrderID(item);
	actual = shippingdepartment.getOrderID();
	// ASSERT
	QCOMPARE(actual, expected);
}

void Tests::getOrderID() {
	// ARRANGE
	ShippingDepartment shippingdepartment = ShippingDepartment("10");
	string item = "10";
	string actual;
	string expected = item;
	// ACT
	actual = shippingdepartment.getOrderID();
	// ASSERT
	QCOMPARE(actual, expected);
}
QTEST_APPLESS_MAIN(Tests)

#include "tests.moc"
