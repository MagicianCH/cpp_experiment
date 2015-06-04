#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

inline void deleteT(char a[])
{
	for (int i = 0; a[i]; i++) {
		if (a[i] != 'T')
			cout << a[i];
	}

}

void Program_1()
{
	char s[100] = " ";

	cout << "请输入字符串: ";
	gets(s);

	cout << "删除T后结果为：";
	deleteT(s);

	cout << endl;
}

int Max(int a, int b)
{
	return a >= b ? a : b;
}

int Max(int a, int b, int c)
{
	int max = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}

double Max(double a, double b)
{
	return a > b ? a : b;
}

double Max(double a, double b, double c)
{
	double max = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}

void Program_2()
{
	int a, b, c;
	double d, e, f;

	cout << "请输入三个整数：";
	cin >> a >> b >> c;

	cout << "请输入三个浮点数：";
	cin >> d >> e >> f;

	cout << "三个整数，前两个较大的是" << Max(a, b) << endl;
	cout << "三个整数，最大的是：" << Max(a, b, c) << endl;
	cout << "三个浮点数，前两个较大的是：" << Max(d, e) << endl;
	cout << "三个浮点数，最大的是：" << Max(d, e, f) << endl;
}

int IsleapYear(int year)
{
	return(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}
int dayofMonth(int month, int year)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:return 31;//1，3，5，7，8，10，12，月每月有31天 
	case 4:
	case 6:
	case 9:
	case 11:return 30;//4，6，9，11月每月31天 
	case 2:
		if (IsleapYear(year))
			return 29;//闰年每年二月29天 
		else
			return 28;//非闰年二月28天 
	}
}
int showofMonth(int month, int year, int spaceday)

{
	int i, days;
	cout << endl << endl << endl;
	cout << setw(4) << month << "月" << endl;
	cout << setw(4) << "日" << setw(4) << "一" << setw(4) << "二" << setw(4) << "三" << setw(4) << "四" << setw(4) << "五" << setw(4) << "六" << endl;
	for (i = 1; i <= spaceday; i++)//控制是星期的输出 
		cout << setw(4) << " ";
	days = dayofMonth(month, year);//得到每月的天数 
	for (i = 1; i <= days; i++)
	{
		cout << setw(4) << i;
		spaceday = (spaceday + 1) % 7;//算出当天是星期几 
		if (spaceday == 0)
			cout << endl << endl;

	}
	return spaceday;
}
long FirstdayofYear(int year)
{
	long n;
	int i;
	n = year * 365;//从公元1 月1 日天始算， 到现在所输入年月有多少天 
	for (i = 1; i <= year; i++)
		if (IsleapYear(i))
			n++;//闰年多一天 
	return n % 7;//返回星期数 
}

void Program_3()
{
	int year, day;
	cout << "请输入年份： ";
	cin >> year;
	day = FirstdayofYear(year);
	cout << endl << year << "年年历";
	for (int i = 1; i <= 12; i++)//输出月份
	{
		day = showofMonth(i, year, day);
	}
	cout << endl;
}

void Program_4() //穷举法
{
	int n = 1; //设n为最顶层灯数
	int sum = 0;
	
	while (n){
		for (int j = 0; j < 8; j++)
			sum += pow(2, j) * n;
		if (sum == 765)
			break;
		else {
			sum = 0;
			n++;
		}
	}
	cout << "最底层灯树是： " << 128 * n << endl;
}

void Program_5()
{
	int num;
	int sum = 0,a = 0;
	cout << "请输入一个整数: ";
	cin >> num;

	do {
		sum = (sum * 10 + a);
		a = num % 10;
		num = num / 10;
	} while (num);
	sum = (sum * 10 + a);
	cout << "倒序输出结果为：" << sum << endl;
}

void Program_6()
{
	int num,trynum;
	char charge = 'y';

	while (charge == 'y'){
		int flag = 1;
		num = rand() % 1001;
		cout << "I have a number between 1 and 1000." << endl;
		cout << "Can you guess my number?" << endl;
		cout << "Please type your first guess." << endl;
		while (flag){
			cin >> trynum;
			if (trynum == num){
				cout << "Excellent You guessed the number!" << endl;
				flag = 0;
			}
			else if (trynum < num)
				cout << "Too low. Try again: ";
			else
				cout << "Too high. Try again: ";
		}
		cout << "Would you like to play again (y or n)? ";
		getchar();
		charge = getchar();
	}
}


int main()
{
	cout << "第一题：" << endl;
//	Program_1();

	cout << endl << "第二题：" << endl;
//	Program_2();

	cout << endl << "第三题：" << endl;
//	Program_3();

	cout << endl << "第四题：" << endl;
//	Program_4();

	cout << endl << "第五题：" << endl;
//	Program_5();

	cout << endl << "第六题：" << endl;
	Program_6();
}