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
	cout << today_weather.today.year << "年"
		<< today_weather.today.month<< "月"
		<<today_weather.today.day << "日的天气是："
		<< today_weather.temp<< "度，风力：" << today_weather.wind << "级" << endl;
}

const int N = 3;
struct Student {
	int num;
	char name[50];
	float score[3];
	float total;
	float average;
};           /*定义结构体类型student，声明成员num为int型,name为10个元素的字符数组，score为3个元素的float数组，total和average为float型。*/

void input_student(Student *sp)
// 输入一个学生的信息，形参为指向student结构体类型的指针变量sp
{
	cout << "please input a student's information:" << endl;
	cout << "num: ";
	cin >> sp->num;
	cout << "name: ";
	cin >> sp->name;   //输入学生姓名
	cout << "score[0]: ";
	cin >> sp->score[0];
	cout << "score[1]: ";
	cin >> sp->score[1];
	cout << "score[2]: ";
	cin >> sp->score[2];   //输入第3门课的成绩
}

void cal_student(Student &sp)
// 计算学生的总分和平均分，利用结构体的引用作为函数参数
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

