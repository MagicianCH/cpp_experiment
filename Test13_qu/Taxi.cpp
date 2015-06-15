#include "taxi.h"

Taxi::Taxi(double f)
	:Vehicle(4, 6, "yellow", f, 5)
{
	customers = false;
	setClassName("Taxi");
}

void Taxi::setCustomers(bool cust)
{
	customers = cust;
}

/*  实现Taxi类的成员函数hasCustomers*/
bool Taxi::hasCustomers() const
{
	return customers;
}

void Taxi::printTaxi() const
{
	cout << getClassName() << "\n"
		<< "\tNumber of doors:"
		<< getNumberOfDoors()
		<< "\n\tNumber of cylinders: "
		<< getNumberOfCylinders()
		<< "\n\tTransmission Type: "
		<< getTransmissionType()
		<< "\n\tColor: " <<getColor()
		<< "\n\tFuel level: "
		<< getFuelLevel() << "\n";
	if (customers)
		cout << "\t The Taxi has passengers.\n";
	else
		cout << "\t The Taxi has no passengers.\n";
}
