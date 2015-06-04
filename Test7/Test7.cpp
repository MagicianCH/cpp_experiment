#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int num_letter[26];    //�ַ�������ĸ����ͳ�����飬Ϊȫ�ֱ���
int num_number[10];    // ���ָ���ͳ������num_number��Ϊȫ�ֱ���
int num_space;         // �ո����num_space��Ϊȫ�ֱ���
int num_else;          // �����ַ�����num_else��Ϊȫ�ֱ���

float Program7_1(int array[], int array_num)
{
	float sum = 0;
	float aver = 0;
	int index;

	for (index = 0; index < array_num; index++)
	{
		sum += array[index];
	}

	aver = sum / array_num;

	return aver;
}

void Program7_2(char s[])
{
	int i;
	for (i = 0; i < strlen(s) ; i++)   //���α����ַ������ַ�
	{
		if (s[i] >= 'a' && s[i] <= 'z')   //�����СдӢ����ĸ����ͳ����Ӧ��ĸ����
			num_letter[s[i] - 'a']++;
		else if (s[i] >= 'A' && s[i] <= 'Z')         //����Ǵ�дӢ����ĸ����ͳ����Ӧ��ĸ����
			num_letter[s[i] - 'A']++;
		else if (s[i] >= '0' && s[i] <= '9')  //��������֣���ͳ����Ӧ���ָ���
			num_number[s[i] - '0']++;
		else if (s[i] == ' ') num_space++;   //����ǿո񣬿ո��������
		else num_else++;       //�������ַ�
	}

}

bool Program7_3(int n)
{
	int i;
	static double s;   //������̬�ֲ�����s��double����

	double p = 1;
	// ��n!
	for (int i = 1; i <= n; i++)
	{
		p *= i;
	}
	s += (n + 1) / p;   //��s���ۼ�

	if ((n + 1) / p < 1e-6) return 0;
	else return 1;
}

// a��ʾ�����ʮ������
// numerci��ʾҪת���Ľ�������2��ʾ�����ƣ�16��ʾ16����
// res��ʾת�����
// resLen��ʾת���������
// ����ֵΪ0��ʾת���ɹ��������ʾת��ʧ��
int Program7_4(int a, int numeric, char* res)
{
	if (numeric != 2 && numeric != 16)
		return 1;

	int i = 0x00, b;
	b = a;
	while (b)
	{
		b /= numeric;
		i++;
	}

	res[i--] = 0x00;
	for (; i >= 0 && a != 0; i--, a /= numeric)
	{
		b = a % numeric;
		b < 10 ? res[i] = b + 0x30 : res[i] = b - 9 + 0x40;
	}

	return 0;
}



int main()
{
	// ��һ��
	cout << "��һ�⣺" << endl;
	int *a;
	int n;
	cout << "���������С��" << endl;
	cin >> n;
	a = (int *)malloc(sizeof(int) * n); // ��������ռ�
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];  // �������� n ����
	}
	cout << "ƽ��ֵ��" << Program7_1(a, n) << endl;
	fflush(stdin); //������뻺����

	// �ڶ���
	cout << endl << "�ڶ��⣺" << endl; 
	char s[80];
	gets(s); // �����ַ���ͳ�ƺ���ͳ��s�г��ֵ��ַ�����
	Program7_2(s);
	// �����ĸ���ֵĸ���
	for (int i = 0; i<26; i++)
		cout << char('a' + i) << ":  " << num_letter[i] << endl; 
	// ������ֳ��ֵĸ���
	for (int i = 0; i < 10; i++)
		cout << char('0' + i) << "��" << num_number[i] << endl;
	cout << "�ո������" << num_space << endl;  //����ո�ĸ���
	cout << "�����ַ�����:" << num_else << endl; // ��������ַ����ֵĸ���


	// ������
	cout << endl << "�����⣺" << endl;
	int m = 1;
	while (Program7_3(m))
		m++;
	cout << "��������Ͻ�m = " << m << endl;

	// ������
	int i;
	char res[100];
	cout << endl << "�����⣺" << endl;
	cout << "����ʮ������" << endl;
	cin >> i;
	Program7_4(i, 2, res);

	if (!Program7_4(i, 2, res))
	{
		cout << "��Ӧ�Ķ�������Ϊ��" << res << endl;
	}

	if (!Program7_4(i, 16, res))
	{
		cout << "��Ӧ��ʮ��������Ϊ��" << res << endl;
	}
	return 0;
}