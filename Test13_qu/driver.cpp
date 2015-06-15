#include <iostream>
using namespace std;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
	Vehicle car(2, 6, "blue", 14.6, 3);
	Taxi cab(3.3);
	Truck mack(7.54);

	mack.setCargo(true);

	/* 编写代码打印所有对象，包括Vehicle对象、Taxi对象、Truck对象*/
	return 0;
}
