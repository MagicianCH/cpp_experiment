#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int num_letter[26];    //字符串中字母个数统计数组，为全局变量
int num_number[10];    // 数字个数统计数组num_number，为全局变量
int num_space;         // 空格个数num_space，为全局变量
int num_else;          // 其他字符个数num_else，为全局变量

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
	for (i = 0; i < strlen(s) ; i++)   //依次遍历字符串的字符
	{
		if (s[i] >= 'a' && s[i] <= 'z')   //如果是小写英文字母，则统计相应字母个数
			num_letter[s[i] - 'a']++;
		else if (s[i] >= 'A' && s[i] <= 'Z')         //如果是大写英文字母，则统计相应字母个数
			num_letter[s[i] - 'A']++;
		else if (s[i] >= '0' && s[i] <= '9')  //如果是数字，则统计相应数字个数
			num_number[s[i] - '0']++;
		else if (s[i] == ' ') num_space++;   //如果是空格，空格计数自增
		else num_else++;       //是其他字符
	}

}

bool Program7_3(int n)
{
	int i;
	static double s;   //声明静态局部变量s，double类型

	double p = 1;
	// 求n!
	for (int i = 1; i <= n; i++)
	{
		p *= i;
	}
	s += (n + 1) / p;   //向s中累加

	if ((n + 1) / p < 1e-6) return 0;
	else return 1;
}

// a表示输入的十进制数
// numerci表示要转换的进制数，2表示二进制，16表示16进制
// res表示转换结果
// resLen表示转换结果长度
// 返回值为0表示转换成功，其余表示转换失败
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
	// 第一题
	cout << "第一题：" << endl;
	int *a;
	int n;
	cout << "输入数组大小：" << endl;
	cin >> n;
	a = (int *)malloc(sizeof(int) * n); // 分配数组空间
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];  // 键盘输入 n 个数
	}
	cout << "平均值：" << Program7_1(a, n) << endl;
	fflush(stdin); //清空输入缓冲区

	// 第二题
	cout << endl << "第二题：" << endl; 
	char s[80];
	gets(s); // 调用字符串统计函数统计s中出现的字符个数
	Program7_2(s);
	// 输出字母出现的个数
	for (int i = 0; i<26; i++)
		cout << char('a' + i) << ":  " << num_letter[i] << endl; 
	// 输出数字出现的个数
	for (int i = 0; i < 10; i++)
		cout << char('0' + i) << "：" << num_number[i] << endl;
	cout << "空格个数：" << num_space << endl;  //输出空格的个数
	cout << "其他字符个数:" << num_else << endl; // 输出其他字符出现的个数


	// 第三题
	cout << endl << "第三题：" << endl;
	int m = 1;
	while (Program7_3(m))
		m++;
	cout << "求得运算上界m = " << m << endl;

	// 第四题
	int i;
	char res[100];
	cout << endl << "第四题：" << endl;
	cout << "输入十进制数" << endl;
	cin >> i;
	Program7_4(i, 2, res);

	if (!Program7_4(i, 2, res))
	{
		cout << "相应的二进制数为：" << res << endl;
	}

	if (!Program7_4(i, 16, res))
	{
		cout << "相应的十六进制数为：" << res << endl;
	}
	return 0;
}