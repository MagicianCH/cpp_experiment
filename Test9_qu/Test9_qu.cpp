#include <iostream>
#include <cstring>
using namespace std;
struct date
{
	int year;
	int month;
	int day;
};
struct weather
{
	date today;
	double temp;
	double wind;
};
void Program_1()
{
	weather today_weather = { 2004, 11, 30, 10.0, 3.1 };
	cout << today_weather.today.year << "��"
		<< today_weather.today.month<< "��"
		<<today_weather.today.day << "�յ������ǣ�"
		<< today_weather.temp<< "�ȣ�������" << today_weather.wind << "��" << endl;
}

const int N = 3;
struct Student {
	int num;
	char name[50];
	float score[3];
	float total;
	float average;
};           /*����ṹ������student��������ԱnumΪint��,nameΪ10��Ԫ�ص��ַ����飬scoreΪ3��Ԫ�ص�float���飬total��averageΪfloat�͡�*/

void input_student(Student *sp)
// ����һ��ѧ������Ϣ���β�Ϊָ��student�ṹ�����͵�ָ�����sp
{
	cout << "please input a student's information:" << endl;
	cout << "num: ";
	cin >> sp->num;
	cout << "name: ";
	cin >> sp->name;   //����ѧ������
	cout << "score[0]: ";
	cin >> sp->score[0];
	cout << "score[1]: ";
	cin >> sp->score[1];
	cout << "score[2]: ";
	cin >> sp->score[2];   //�����3�ſεĳɼ�
}

void cal_student(Student &sp)
// ����ѧ�����ֺܷ�ƽ���֣����ýṹ���������Ϊ��������
{
	sp.total = 0;
	sp.average = 0;
	for (int i = 0; i < 3; ++i) {
		sp.total += sp.score[i];
	}
	sp.average = sp.total / 3;
}

void print_student(Student &s)
{
	cout << s.num << "\t" << s.name << "\t" << s.total << "\t" << s.average << endl;
}

void Program_2()
{
	Student Class[N];

	for (int i = 0; i<N; i++)
		input_student(&Class[i]);

	for (int i = 0; i<N; i++)
		cal_student(Class[i]);

	for (int i = 0; i<N; i++)
		print_student(Class[i]);
}

int main()
{
	Program_1();
	Program_2();
}

