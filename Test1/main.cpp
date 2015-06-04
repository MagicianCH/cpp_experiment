#include <iostream>
#include <iomanip>

using namespace std;

void Program_1()
{
	cout << "学号： s20140874" << endl;
	cout << "姓名： 陈浩" << endl;
	cout << "性别： 男" << endl;
	cout << "年龄： 24" << endl; 
	cout << "专业： 计算机科学与技术" << endl; 
	cout << "班级： 计研144" << endl;
}

void Program_2_1()
{
	cout << "     *" << endl;
	cout << "    * *" << endl;
	cout << "   * * *" << endl;
	cout << "  * * * *" << endl;
	cout << " * * * * *" << endl;
	cout << "* * * * * * " << endl;
}

void Program_2_2()
{
	cout << setw(6) << "*" << endl;
	cout << setw(7) << "* *" << endl;
	cout << setw(8) << "* * *" << endl;
	cout << setw(9) << "* * * *" << endl;
	cout << setw(10) << "* * * * *" << endl;
	cout << setw(11) << "* * * * * *" << endl;
}

int main()
{
	cout << "第一题：" << endl;
	//	Program_1();
	cout << endl << "第二题：" << endl;
	//	Program_2_2();
	char c = 42;

	int i, k, j;

	for (i = 1; i <= 6; i++)

	{
		for (k = 1; k <= 6 - i; k++)

			cout << " ";

		for (j = 1; j <= i; j++)

			cout << (char)(c) << " ";

		cout << "\n";

	}

	return 0;
}