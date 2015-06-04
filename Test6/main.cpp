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

	cout << "�������ַ���: ";
	gets(s);

	cout << "ɾ��T����Ϊ��";
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

	cout << "����������������";
	cin >> a >> b >> c;

	cout << "������������������";
	cin >> d >> e >> f;

	cout << "����������ǰ�����ϴ����" << Max(a, b) << endl;
	cout << "���������������ǣ�" << Max(a, b, c) << endl;
	cout << "������������ǰ�����ϴ���ǣ�" << Max(d, e) << endl;
	cout << "�����������������ǣ�" << Max(d, e, f) << endl;
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
	case 12:return 31;//1��3��5��7��8��10��12����ÿ����31�� 
	case 4:
	case 6:
	case 9:
	case 11:return 30;//4��6��9��11��ÿ��31�� 
	case 2:
		if (IsleapYear(year))
			return 29;//����ÿ�����29�� 
		else
			return 28;//���������28�� 
	}
}
int showofMonth(int month, int year, int spaceday)

{
	int i, days;
	cout << endl << endl << endl;
	cout << setw(4) << month << "��" << endl;
	cout << setw(4) << "��" << setw(4) << "һ" << setw(4) << "��" << setw(4) << "��" << setw(4) << "��" << setw(4) << "��" << setw(4) << "��" << endl;
	for (i = 1; i <= spaceday; i++)//���������ڵ���� 
		cout << setw(4) << " ";
	days = dayofMonth(month, year);//�õ�ÿ�µ����� 
	for (i = 1; i <= days; i++)
	{
		cout << setw(4) << i;
		spaceday = (spaceday + 1) % 7;//������������ڼ� 
		if (spaceday == 0)
			cout << endl << endl;

	}
	return spaceday;
}
long FirstdayofYear(int year)
{
	long n;
	int i;
	n = year * 365;//�ӹ�Ԫ1 ��1 ����ʼ�㣬 �����������������ж����� 
	for (i = 1; i <= year; i++)
		if (IsleapYear(i))
			n++;//�����һ�� 
	return n % 7;//���������� 
}

void Program_3()
{
	int year, day;
	cout << "��������ݣ� ";
	cin >> year;
	day = FirstdayofYear(year);
	cout << endl << year << "������";
	for (int i = 1; i <= 12; i++)//����·�
	{
		day = showofMonth(i, year, day);
	}
	cout << endl;
}

void Program_4() //��ٷ�
{
	int n = 1; //��nΪ������
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
	cout << "��ײ�����ǣ� " << 128 * n << endl;
}

void Program_5()
{
	int num;
	int sum = 0,a = 0;
	cout << "������һ������: ";
	cin >> num;

	do {
		sum = (sum * 10 + a);
		a = num % 10;
		num = num / 10;
	} while (num);
	sum = (sum * 10 + a);
	cout << "����������Ϊ��" << sum << endl;
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
	cout << "��һ�⣺" << endl;
//	Program_1();

	cout << endl << "�ڶ��⣺" << endl;
//	Program_2();

	cout << endl << "�����⣺" << endl;
//	Program_3();

	cout << endl << "�����⣺" << endl;
//	Program_4();

	cout << endl << "�����⣺" << endl;
//	Program_5();

	cout << endl << "�����⣺" << endl;
	Program_6();
}