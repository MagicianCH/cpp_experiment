#include <iostream>
#include <cstring>
using namespace std;

class Engineer

{

public:

	Engineer();

	Engineer(int pid, char *pname, char *pposition);

	void printEngineer();

private:

	int id;

	char *name;

	char *position;

};

Engineer::Engineer(int pid, char *pname, char *pposition)

{

	id = pid;

	strcpy(name, pname);

	strcpy(position, pposition);

}

void Engineer::printEngineer()

{

	cout << "ID:" << id << "," << "姓名:" << name << "," << "职位:" << position << endl;

}

void main()

{

	Engineer member0(45, "张三", "技术总监");

	Engineer member1(54, "李四", "技术顾问");

	Engineer* pmember1 = new Engineer(56, "王五", "总经理");

	Engineer* pmember2 = new Engineer(65, "赵六", "董事长");

	member0.printEngineer();

	member1.printEngineer();

	pmember1->printEngineer();

	pmember2->printEngineer();

	delete pmember1;

	delete pmember2;

}