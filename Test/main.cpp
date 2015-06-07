#include<iostream>
using namespace std;
class Manager
{
private:
	int id;
	char *name;
	int age;
public:
	Manager(int pid, char *pname, int page)
	{
		id = pid;
		name = new char[strlen(pname) + 1];
		if (name != 0)
			strcpy(name, pname);
		age = page;
	}
	void printEmployee(Employee e);
};
class Employee
{
	friend class Manager;
private:
	int id;
	char *name;
	int age;
public:
	Employee(int pid, char *pname, int page)
	{
		id = pid;
		name = new char[strlen(pname) + 1];
		if (name != 0)
			strcpy(name, pname);
		age = page;
	}
};
void Manager::printEmployee(Employee e)
{
	cout << "id:" << e.id << "name:" << e.name << "age:" << e.age << endl;
}
int main()
{
	Manager  man1(01, "wang", 19);
	man1.printEmployee();
	return 0;
}
