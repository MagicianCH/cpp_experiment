#include <iostream>
#include <iomanip>

using namespace std;

void Program_1()
{
	cout << "ѧ�ţ� s20140874" << endl;
	cout << "������ �º�" << endl;
	cout << "�Ա� ��" << endl;
	cout << "���䣺 24" << endl; 
	cout << "רҵ�� �������ѧ�뼼��" << endl; 
	cout << "�༶�� ����144" << endl;
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
	cout << "��һ�⣺" << endl;
	//	Program_1();
	cout << endl << "�ڶ��⣺" << endl;
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