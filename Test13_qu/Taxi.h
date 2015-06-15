#ifndef TAXI_H
#define TAXI_H
#include <iostream>
using namespace std;
#include "vehicle.h"

class Taxi : public Vehicle
{
public:
	Taxi(double);
	bool hasCustomers() const;
	void setCustomers(bool cust);
	void printTaxi() const;
private:
	bool customers;
};

#endif
