#include <iostream>
#include <cstring>
using namespace std;


//ʵ��strcmp()
int my_strcmp(char *str1, char *str2)    //���������ַ�ָ�����str1��str2
{
	while (*str1 == *str2&&*str1 != '\0'&&*str2 != '\0')   // ����Ӧ�ַ�����������ַ���δ����ʱѭ����ע��*str1��*str2֮���ǡ�==�����ǡ�=�������������ַ�����Ҫ�ж��Ƿ����ѭ��
	{
		str1++;
		str2++; // ��str2ָ��ָ����һ���ַ�
	}

	if ((*str1 - *str2) > 0)
		return 1;  
	else if ((*str1 - *str2) < 0)
		return -1;
	else
		return 0;
}

void Program_1()  //ʵ��8 5t
{
	char s1[50], s2[50];
	cout << "please input the first string : ";
	cin >> s1;
	cout << "please input the second string : ";
	cin >> s2;
	int r;
	r = my_strcmp(s1, s2); // �������÷���ֵ��ֵ��r
	if (r>0)
		cout << s1 << " is larger!" << endl;
	else  if (r<0)
		cout << s2 << " is larger" << endl;
	else
		cout << s1 << " and " << s2 << " is eqaul" << endl;
}

void Program_2()  //ʵ��8 9t
{
	char num[20];
	char *all = num;
	char *p;
	int quhao = 0;
	long int haoma = 0;

	cout << "�밴(999)99999-999�ĸ�ʽ����һ���绰���룺 " << endl;
	cin >> num;

	while (all[0] == '(' && all[4] == ')' && all[10] == '-') {

		++all; //�˵�������
		p = strtok(all, ")"); //�õ������ַ���
		sscanf(p, "%d", &quhao);
		cout << "����Ϊ�� " << quhao << endl;

		p = strtok(NULL, "-"); //�õ�������

		p = strcat(p, strtok(NULL, "-")); //�õ��ֻ��Ų�ƴ�ӵ�������
		sscanf(p, "%ld", &haoma);
		cout << "�绰����Ϊ��" << haoma << endl;

		cout << "�밴(999)99999-999�ĸ�ʽ����һ���绰���룺 " << endl;
		cin >> num;
		all = num;
	}
	
	cout << "�������" << endl;
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
		cout << "�������" << i + 1 <<"��ѧ����ѧ�ţ�"; cin >> st->num;
		cout << "�������" << i + 1 << "��ѧ����������"; cin >> st->name;
		cout << "�������" << i + 1 << "��ѧ�������ſγ̳ɼ���";
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
		cout << "ѧ�ţ� " << st->num << endl;
		cout << "������ " << st->name << endl;
		cout << "�ܷ֣� " << st->total << endl;
		cout << "ƽ���֣�" << st->average << endl << endl;
		++st;
	}
}
void Program_3()  //ʵ��9 2t
{
	int n;
	cout << "������ѧ�������� ";
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

