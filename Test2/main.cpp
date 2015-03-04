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
	cout << b << "," << b++ << endl;  //右结合

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

	cout << "请输入m和n，用空格隔开：";
	cin >> m >> n;
	
	sum = m + n;
	diff = m - n;
	ji = m * n;
	shang = m / n;

	cout << "和：" << sum << endl;
	cout << "差：" << diff << endl;
	cout << "积：" << ji << endl;
	cout << "商：" << shang << endl;
}

int main()
{
	cout << "第一题：" << endl;
	Program_1();

	cout << endl << "第二题：" << endl;
	Program_2();

	cout << endl << "第三题：" << endl;
	Program_3();

	cout << endl << "第四题：" << endl;
	Program_4();

}