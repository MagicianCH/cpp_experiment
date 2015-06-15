#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
using namespace std;

#include "vehicle.h"

class Truck : public Vehicle
{
public:
	Truck(double);
	bool hasCargo() const;
	void setCargo(bool);
	void printTruck() const;
private:
	bool cargo;
};

#endif
