#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public :
	float area();
	Triangle(float a,float b,float c);
private:
	float a, b, c;
};

float Triangle::area()
{
	float s = 0;
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		s = (a + b + c) / 2;
		s = s * (s - a) *(s - b)*(s - c);
		s = sqrt(s);
		return s;
	} else{
		return -1;
	}
}

Triangle::Triangle(float aa, float bb, float cc)
{
	a = aa;
	b = bb;
	c = cc;
}

void Program_1()
{
	float area = 0;
	Triangle tr(3, 4, 5);
	if ((area = tr.area()) != -1)
		cout << "三角形面积为：" << area << endl;
	else
		cout << "不能够成三角形" << endl;
}


class Book
{
private:
	char *name, *author, *press;
	int numberOfPages;

public:
	Book(char *n, char *a, char *p, int num);
	~Book();
	void printBook()
	{
		cout << "书名：" << name << endl;
		cout << "作者：" << author << endl;
		cout << "出版社：" << press << endl;
		cout << "页数：" << numberOfPages << endl;
	}
	void setPress(char *p);
};

Book::Book(char *n, char *a, char *p, int num)
{
	if ((name = new char[strlen(n) + 1]) != 0)
		strcpy(name, n);
	if ((author = new char[strlen(a) + 1]) != 0)
		strcpy(author, a);
	if ((press = new char[strlen(p) + 1]) != 0)
		strcpy(press, p);
	numberOfPages = num;
}
Book::~Book()
{
	delete []name;
	delete []author;
	delete []press;
}

void Book::setPress(char *p = "清华大学出版社")
{
	press = new char[strlen(p) + 1];
	if (press != 0)
		strcpy(press, p);
}

void Program_2()
{
	Book book("C++程序设计", "陈小二", "高等教育出版社", 334);
	cout << "修改前：" << endl;
	book.printBook();
	cout << endl << "修改后：" << endl;
	book.setPress();
	book.printBook();
}


class Engineer
{
private:
	int id;
	char *name;
	char *position;
public:
	Engineer(int _id, char *pName, char *pPosition);
	~Engineer();
	void printEngineer();
};

Engineer::Engineer(int _id, char *pName, char *pPosition)
{
	id = _id;
	if ((name = new char[strlen(pName) + 1]) != 0)
		strcpy(name, pName);
	if ((position = new char[strlen(pPosition) + 1]) != 0)
		strcpy(position, pPosition);
}
Engineer::~Engineer()
{
	delete[] name;
	delete[] position;
}

void Engineer::printEngineer()
{
	cout << "编号：" << id << endl;
	cout << "姓名：" << name << endl;
	cout << "职称：" << position << endl;
}

void Program_3()
{
	Engineer engineer[4] = { { 1, "tom", "high" }, { 2, "jack", "middle" }, { 3, "lucy", "high" }, { 4, "lilei", "middle" } };
	Engineer *eng1 = new Engineer(5,"xiaoming","low");
	Engineer *eng2 = new Engineer(6, "xiaohong", "high");

	for (int i = 0; i < 4; ++i)
		engineer[i].printEngineer();
	eng1->printEngineer();
	eng2->printEngineer();
}

class Computer
{
private:
	int id;
	char *brand;
	float mainFrequency;
	int hardDisk;

public:
	void printComputer();
	void setId(int _id);
	void setBrand(char *p);
	void setMainFrequency(float m);
	void setHardDisk(int h);
	Computer();
	Computer(int _id, char *pBrand, float _m, int h);
	Computer(Computer &com);
	~Computer();

};

Computer::Computer(int _id, char *pBrand, float m, int h)
{
	id = _id;
	if ((brand = new char[strlen(pBrand) + 1]) != 0)
		strcpy(brand, pBrand);
	mainFrequency = m;
	hardDisk = h;
}
Computer::Computer(Computer &com)
{
	id = com.id;
	if (brand = new char(strlen(com.brand + 1) != 0))
		strcpy(brand, com.brand);
	mainFrequency = com.mainFrequency;
	hardDisk = com.hardDisk;
}
Computer::Computer()
{
	delete[] brand;
}
Computer::~Computer()
{
	delete[] brand;
}

void Computer::setId(int _id)
{
	id = _id;
}
void Computer::setBrand(char *p)
{
	brand = p;
}
void Computer::setMainFrequency(float m)
{
	mainFrequency = m;
}
void Computer::setHardDisk(int h)
{
	hardDisk = h;
}
void Computer::printComputer()
{
	cout << "编号：" << id << endl;
	cout << "品牌：" << brand << endl;
	cout << "主频：" << mainFrequency << "GHz" << endl;
	cout << "硬盘：" << hardDisk << endl;
}
void Program_4()
{
	Computer computer(1, "IBM", 3.5, 500);
	Computer *com[4];
	for (int i = 0; i < 4; ++i){
		com[i] = new Computer(computer);
	}
	com[0]->setId(2);
	com[0]->setBrand("acer");
	com[0]->setMainFrequency(3.2);
	com[0]->setHardDisk(720);

	com[1]->setId(3);
	com[1]->setBrand("hp");
	com[1]->setMainFrequency(2.7);
	com[1]->setHardDisk(1024);

	com[2]->setId(4);
	com[2]->setBrand("dell");
	com[2]->setMainFrequency(3.2);
	com[2]->setHardDisk(720);

	com[3]->setId(5);
	com[3]->setBrand("apple");
	com[3]->setMainFrequency(2.2);
	com[3]->setHardDisk(256);

	computer.printComputer();
	cout << endl;
	for (int i = 0; i < 4; ++i) {
		com[i]->printComputer();
		cout << endl;
	}
}
int main()
{
	cout << "1" << endl;
//	Program_1();
	cout << endl << 2 << endl;
//	Program_2();
	cout << endl << 3 << endl;
//	Program_3();
	cout << endl << 4 << endl;
	Program_4();
}