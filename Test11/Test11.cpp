#include <iostream> 
#include <cstring>
using namespace std;

class Sale
{
private:
	int idOfSale;
	int numOfSale;
	double priceOfSale;

public:
	static int n;
	static double sum;
	static double discount;

	Sale(int pidOfSale, int pnumOfSale, double ppriceOfSale)
	{
		idOfSale = pidOfSale;
		numOfSale = pnumOfSale;
		priceOfSale = ppriceOfSale;
		n += numOfSale;
		if (priceOfSale >= 10)
			sum += priceOfSale * numOfSale * discount;
		else
			sum += priceOfSale * numOfSale;
	}
	static double average()
	{
		return sum / n;
	}
};
int Sale::n = 0;
double Sale::sum = 0.0;
double Sale::discount = 0.98;

void Program_1()
{
	Sale s1(101, 5, 23.5);
	Sale s2(102,12,24.56);
	Sale s3(103, 100, 21.5);

	cout << "总销售款：" << Sale::sum << endl;
	cout << "平均售价：" << Sale::average() << endl;
}

class Employee
{
private:
	int id;
	char *name;
	int age;
public:
	friend class Manager;
	Employee(int _id, char *_name, int _age);
	Employee(Employee &e);
	~Employee();
};

Employee::Employee(int _id, char *_name, int _age)
{
	id = _id;
	if ((name = new char[strlen(_name) + 1]) != 0)
		strcpy(name, _name);
	age = _age;
}

Employee::Employee(Employee &e)
{
	id = e.id;
	age = e.age;
	if ((name = new char[strlen(e.name) + 1]) != 0)
		strcpy(name, e.name);
}

Employee::~Employee()
{
	delete[] name;
}

class Manager
{
private:
	int id;
	char *name;
	int age;
public:
	Manager(int _id, char *_name, int _age);
	~Manager();
	void printEmployeeInfo(Employee e);
};

Manager::Manager(int _id, char *_name, int _age)
{
	id = _id;
	if ((name = new char[strlen(_name) + 1]) != 0)
		strcpy(name, _name);
	age = _age;
}

Manager::~Manager()
{
	delete[] name;
}

void Manager::printEmployeeInfo(Employee ee)
{
	cout << "id: " << ee.id << endl;
	cout << "name: " << ee.name << endl;
	cout << "age: " << ee.age << endl;
}

void Program_2()
{
	Manager m(101, "Tom", 30);
	Employee e(201, "Jack", 21);

	m.printEmployeeInfo(e);
}


class Chip
{
public:
	Chip()
	{
		cout << "Now Chip() is called" << endl;
	}
};
class HardDisk 
{
public:
	HardDisk()
	{
		cout << "Now HardDisk() is called" << endl;
	}
};
class Monitor
{
public:
	Monitor()
	{
		cout << "Now Monitor() is called" << endl; 
	}
};
class Keyboard
{
public:
	Keyboard()
	{
		cout << "Now Keyboard() is called" << endl;
	}
};

class Computer
{
public:
	Computer()
	{
		cout << "Now Computer() is called" << endl;
	}
private:
	Chip chip;
	HardDisk harddisk;
	Monitor monitor;
	Keyboard keyboard;
};

void Program_3()
{
	Computer computer;
}

template <class T>
class Max
{
public:
	Max(T _a, T _b, T _c, T _d);
	T getMax();
private:
	T a, b, c, d;
};

template <class T>
Max<T>::Max(T _a, T _b, T _c, T _d)
{
	a = _a;
	b = _b;
	c = _c;
	d = _d;
}
template <class T>
T Max<T>::getMax()
{
	T m1, m2;
	m1 = a > b ? a : b;
	m2 = c > d ? c : d;
	return m1 > m2 ? m1 : m2;
}

void Program_4()
{
	Max<int> mint(1, 2, 3, 4);
	Max<float> mfloat(1.1, 2.1, 3.1, 4.1);
	Max<char> mchar('a', 'b', 'c', 'd');
	Max<double>mdouble(5.2, 6.2, 7.2, 8.2);

	cout << "The Max of int:" << mint.getMax() << endl; 
	cout << "The Max of float:" << mfloat.getMax() << endl;
	cout << "The Max of char:" << mchar.getMax() << endl;
	cout << "The Max of double:" << mdouble.getMax() << endl;
}
int main()
{
	cout << "第一题：" << endl;
	Program_1();

	cout << endl << "第二题" << endl;
	Program_2();

	cout << endl << "第三题" << endl;
	Program_3();

	cout << endl << "第四题" << endl;
	Program_4();
}