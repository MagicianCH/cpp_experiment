#include <iostream>
#include <cstring>
using namespace std;


//实现strcmp()
int my_strcmp(char *str1, char *str2)    //声明两个字符指针变量str1和str2
{
	while (*str1 == *str2&&*str1 != '\0'&&*str2 != '\0')   // 当对应字符相等且两个字符串未结束时循环，注意*str1和*str2之间是“==”不是“=”，并且两个字符串都要判断是否结束循环
	{
		str1++;
		str2++; // 将str2指针指向下一个字符
	}

	if ((*str1 - *str2) > 0)
		return 1;  
	else if ((*str1 - *str2) < 0)
		return -1;
	else
		return 0;
}

void Program_1()  //实验8 5t
{
	char s1[50], s2[50];
	cout << "please input the first string : ";
	cin >> s1;
	cout << "please input the second string : ";
	cin >> s2;
	int r;
	r = my_strcmp(s1, s2); // 函数调用返回值赋值给r
	if (r>0)
		cout << s1 << " is larger!" << endl;
	else  if (r<0)
		cout << s2 << " is larger" << endl;
	else
		cout << s1 << " and " << s2 << " is eqaul" << endl;
}

void Program_2()  //实验8 9t
{
	char num[20];
	char *all = num;
	char *p;
	int quhao = 0;
	long int haoma = 0;

	cout << "请按(999)99999-999的格式输入一个电话号码： " << endl;
	cin >> num;

	while (all[0] == '(' && all[4] == ')' && all[10] == '-') {

		++all; //滤掉左括号
		p = strtok(all, ")"); //得到区号字符串
		sscanf(p, "%d", &quhao);
		cout << "区号为： " << quhao << endl;

		p = strtok(NULL, "-"); //得到主机号

		p = strcat(p, strtok(NULL, "-")); //得到分机号并拼接到主机号
		sscanf(p, "%ld", &haoma);
		cout << "电话号码为：" << haoma << endl;

		cout << "请按(999)99999-999的格式输入一个电话号码： " << endl;
		cin >> num;
		all = num;
	}
	
	cout << "输入错误" << endl;
}


struct Student {
	int num;
	char name[50];
	float score[3];
	float total;
	float average;
}stu[30];

void input(Student *st, int n)
{
	for (int i = 0; i < n; ++i) {
		cout << "请输入第" << i + 1 <<"个学生的学号："; cin >> st->num;
		cout << "请输入第" << i + 1 << "个学生的姓名："; cin >> st->name;
		cout << "请输入第" << i + 1 << "个学生的三门课程成绩：";
		for (int j = 0; j < 3; ++j)
			cin >> st->score[j];
		++st;
	}
}
void calc(Student *st, int n)
{
	for (int i = 0; i < n; ++i) {
		st->average = 0;
		st->total = 0;
		for (int j = 0; j < 3; ++j)
			st->total += st->score[j];
		st->average = st->total / 3;
		++st;
	}
}
void output(Student *st, int n)
{
	for (int i = 0; i < n; ++i) {
		cout << "学号： " << st->num << endl;
		cout << "姓名： " << st->name << endl;
		cout << "总分： " << st->total << endl;
		cout << "平均分：" << st->average << endl << endl;
		++st;
	}
}
void Program_3()  //实验9 2t
{
	int n;
	cout << "请输入学生人数： ";
	cin >> n;

	input(stu, n);
	cout << endl;
	calc(stu, n);
	output(stu, n);
}
int main()
{
	cout << "1: " << endl; 
//	Program_1();

	cout << endl << "2:" << endl;
//	Program_2();

	cout << endl << "3:" << endl;
//	Program_3();
}

