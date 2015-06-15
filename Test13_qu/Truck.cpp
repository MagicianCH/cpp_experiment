#include "truck.h"

/* 实现Truck类构造函数*/
Truck::Truck(double f)
	:Vehicle(4, 6, "red", f, 5)
{
	cargo = false;
	setClassName("Truck");
}

bool Truck::hasCargo() const 
{ 
	return cargo; 
}

void Truck::setCargo(bool c) 
{ 
	cargo = c; 
}

void Truck::printTruck() const
{
	cout << getClassName() << "\n"
		<< "\tNumber of doors: "
		<< getNumberOfDoors()
		<< "\n\tNumber of cylinders: "
		<< getNumberOfCylinders()
		<< "\n\tTransmission type: "
		<< getTransmissionType()
		<< "\n\tColor: " << getColor()
		<< "\n\tFuel level: "
		<< getFuelLevel() << "\n";
	if (cargo)
		cout << "\tThe truck is carrying cargo.\n";
	else
		cout << "\tThe truck is not carrying cargo.\n";

}
