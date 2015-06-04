#include <iostream>
#include <cstring>
using namespace std;

int Sum(int *p,int m, int n)
{
	int sum = 0;

	for(int i = 0; i < m*n; ++i) {
		sum += *p;
		p++;
	}
	return sum;
}

void Program_1()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};

	cout << Sum(a[0],3,3) << endl;
}

void Program_2()
{
	char s[] = "hello world!";
	int len;
	char *p = s;

	len = strlen(s);

	for(int i = len -1; i >= 0; i--)
		cout << *(p+i);

	cout << endl;
}

int sumArray(int a[][100],int n)
{
	int sum = 0;

	for(int i = 0; i < n ; i++)
		sum += a[i][i];

	return sum;
}

void Program_3()
{
	int a[100][100] = {0};
	int n;

	cout << "请输入阶数：";
	cin >> n;

	cout << "请输入方阵：" << endl;
	for (int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	
	cout << "主对角线上元素和为： " << sumArray(a ,n) << endl;
}

char * city_sort(char a[][50], int num)
{
	char temp[100] = "";
	int k;
	int d;

	for (int i = 0; i < num ; i++) {
		k = i;
		for (int j = i + 1; j < num; j++){
			if (d = strcmp(a[k], a[j]) > 0) {
				k = j;
			}
		}
		if (k != i) {
			strcpy_s(temp, a[k]);
			strcpy_s(a[k], a[i]);
			strcpy_s(a[i], temp);
		}
	}
	return a[0];
}
void Program_4()
{
	char city[20][50] = { " " };
	char (*p)[50] = city;
	int city_num;

	cout << "Please input the number of city: ";
	cin >> city_num;

	for (int i = 0; i < city_num; i++){
		cin >> *(p+i);
	}

	city_sort(p, city_num);

	for (int i = 0; i < city_num; i++)
		cout << city[i] << endl;
}

int main()
{
	cout << "1" << endl;
//	Program_1();

	cout << endl << "2" << endl;
//	Program_2();

//	Program_3();

	Program_4();

}