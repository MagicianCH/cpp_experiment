
#ifndef _VEHICLE_H
#define _VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
public:
	Vehicle(const int doors, const int cylinders,
		char *color, double initialFuel,
		const int transmission);
	~Vehicle();
	void setColor(char *color);
	void setFuelLevel(double amount);
	const char *getColor() const;
	double getFuelLevel() const;
	const int getTransmissionType() const;
	const int getNumberOfDoors() const;
	const int getNumberOfCylinders() const;
	void setClassName(const char*);
	const char *getClassName() const;
	void printVehicle();

private:
	const int numberOfDoors;    //门的个数
	const int numberOfCylinders;   // 汽缸的个数
	char *vehicleColor;  // 交通工具的颜色
	double fuelLevel;    //
	const int transmissionType;
	char *className;
};

#endif