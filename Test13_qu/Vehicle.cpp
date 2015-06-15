#include <iostream>
#include <cstring>
#include "vehicle.h"

using namespace std;

Vehicle::Vehicle(const int doors, const int cylinders,
			     char * color, double initialFuel,
	             const int transmission) :numberOfDoors(doors), numberOfCylinders(cylinders), transmissionType(transmission)
{
	if ((vehicleColor = new char[strlen(color) + 1]) != 0)
		strcpy(vehicleColor, color);
	else
		cout << "vehicle construct:color failed" << endl;
	fuelLevel = initialFuel;
}

Vehicle::~Vehicle()
{
	delete[] vehicleColor;
	delete[] className;
}

void Vehicle::printVehicle()
{
	cout << className << "\n"
		<< "\tNumber of doors: " << numberOfDoors
		<< "\n\tNumber of cylinders: " << numberOfCylinders
		<< "\n\tTransmission Type:" << transmissionType
		<< "\n\tColor:" << vehicleColor
		<< "\n\tFuel Level:" << fuelLevel << endl;
}

/*实现Vehicle类成员函数setColor的定义*/
void Vehicle::setColor(char *color)
{
	if ((vehicleColor = new char[strlen(color) + 1]) != 0)
		strcpy(vehicleColor, color);
	else
		cout << "vehicle set color failed" << endl;
}

void Vehicle::setFuelLevel(double amount)
{
	//假设满箱为20加仑
	if (amount > 0.0 && amount <= 20.0)
		fuelLevel = amount;
	else
		fuelLevel = 5.0;

}

// caller is responsible for deleting memory

const char *Vehicle::getColor() const
{
	return vehicleColor;
}

double Vehicle::getFuelLevel() const
{
	return fuelLevel;
}

const int Vehicle::getTransmissionType() const
{
	return transmissionType;
}

const int Vehicle::getNumberOfDoors() const
{
	return numberOfDoors;
}

const int Vehicle::getNumberOfCylinders() const
{
	return numberOfCylinders;
}

void Vehicle::setClassName(const char *newName)
{
	if (className != 0)
		delete[] className;
	className = new char[strlen(newName) + 1];
	strcpy(className, newName);
}

// caller is responsible for deleting memory
const char *Vehicle::getClassName() const { return className; }
