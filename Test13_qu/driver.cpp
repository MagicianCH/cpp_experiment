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

	/* ��д�����ӡ���ж��󣬰���Vehicle����Taxi����Truck����*/
	return 0;
}
