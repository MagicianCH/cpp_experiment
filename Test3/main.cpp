#include <iostream>
using namespace std;

void Program_1()
{
	int sec = 40000;
	int h, m, s;

	h = sec / 60 / 60;
	m = (sec - h * 60 * 60) / 60;
	s = (sec - (60 * 60)) % 60;

	cout << "40000s is " << h << "h" << m << "min" << s << "s" << endl;
}

void Program_2()
{
	int a, b, c;
	int temp;
	int flag = 1;

	cout << "����3���߳����ÿո������";
	cin >> a >> b >> c;

	if (a >= b){
		temp = a;
		a = b;
		b = temp;
	}
	if (c <= a){
		temp = a;
		a = c;
		c = temp;
	}
	if (c <= b){
		temp = b;
		b = c;
		c = temp;
	}
//	cout << a << b << c << endl;
	if ((a + b) > c && (a + c) > b) {
		if ((a == b) || (b == c)) {
			if ((a == b) && (b == c))
				cout << "����һ���ȱ�������" << endl;
			else
				cout << "����һ������������" << endl;
		}
		else if (a*a + b*b == c*c)
			cout << "����һ��ֱ��������" << endl;
		else
			cout << "�����һ����ͨ������" << endl;
	}
	else
		cout << "���ܹ���������" << endl;
}

void Program_3()
{
	float r, h;
	float v;
	
	cout << "������Բ׶��İ뾶�͸ߣ��ÿո������";
	cin >> r >> h;

	v = 3.14 * r * r * h / 3; //����֮һ������˸�

	cout << "Բ׶������Ϊ��" << v << endl;


}

void Program_4()
{
	int num, count = 0;
	int temp;

	cout << "������һ��С��6λ����������";
	cin >> num;

	temp = num;
	while (num) {
		num = num / 10;
		count++;
	}

	cout << "����һ��" << count << "λ��" << endl;
	
	cout << "����������Ϊ��";
	while (temp) {
		cout << (temp % 10);
		temp /= 10;
	}
	cout << endl;
}

void Program_5()
{
	int a, b, c, d;
	int temp;
	
	cout << "������4���������ÿո������";
	cin >> a >> b >> c >> d;

	if(b <= a) {
		temp = a;
		a = b;
		b = temp;
	}
	if (c <= a) {
		temp = a;
		a = c;
		c = temp;
	}
	if (c <= b) {
		temp = c;
		c = b;
		b = temp;
	}
	if (d <= a) {
		temp = d;
		d = c;;
		c = b;
		b = a;
		a = temp;
	}
	else if (d <= b) {
		temp = d;
		d = c;
		c = b;
		b = temp;
	}
	else if (d <= c) {
		temp = d;
		d = c;
		c = temp;
	}

	cout <<"�������Ϊ��" << a << b << c << d << endl;
}

void Program_6()
{
	int score;
	
	cout << "������ɼ���";
	cin >> score;

	if (score >= 90)
		cout << "����" << endl;
	else if (score >= 80)
		cout << "����" << endl;
	else if (score >= 70)
		cout << "�е�" << endl;
	else if (score >= 60)
		cout << "����" << endl;
	else
		cout << "������" << endl;
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

	cout << endl << "�����⣺" << endl;
	Program_5();

	cout << endl << "�����⣺" << endl;
	Program_6();

}