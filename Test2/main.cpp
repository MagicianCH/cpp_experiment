#include <iostream>
using namespace std;

void Program_1()
{
	int a = 5;
	double x = 0.0;
	float f = 10;
	char c = '\141';

	cout << sizeof(char) << "," << sizeof(c) << "\n";
	cout << sizeof(int) << "," << sizeof(a) << "\n";
	cout << sizeof(float) << "," << sizeof(f) << "\n";
	cout << sizeof(double) << "," << sizeof(x) << "\n";
}

void Program_2()
{
	int a = 6, b = 6;
	
	cout << a << "," << ++a << endl;
	cout << b << "," << b++ << endl;  //�ҽ��

}

void Program_3()
{
	int i;
	
	for (i = 0; i < 7; i++) {
		if (i%3 == 0)
			cout << "  ####" << endl;
		else
			cout << "  #  #" << endl;
	}
}

void Program_4()
{
	int m, n;
	int sum, diff, ji, shang;

	cout << "������m��n���ÿո������";
	cin >> m >> n;
	
	sum = m + n;
	diff = m - n;
	ji = m * n;
	shang = m / n;

	cout << "�ͣ�" << sum << endl;
	cout << "�" << diff << endl;
	cout << "����" << ji << endl;
	cout << "�̣�" << shang << endl;
}

int main()
{
	cout << "��һ�⣺" << endl;
	Program_1();

	cout << endl << "�ڶ��⣺" << endl;
	Program_2();

	cout << endl << "�����⣺" << endl;
	Program_3();

	cout << endl << "�����⣺" << endl;
	Program_4();

}