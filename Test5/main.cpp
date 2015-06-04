#include <iostream>
#include <string>

using namespace std;

void Program_1()
{
	char s[100] = " ";
	int letter[26];
	
	for(int i = 0; i < 26; i++)
		letter[i] = 0;

	gets(s);

	for(int i = 0; s[i]; i++) {
		if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
			break;
		else if(s[i] > 'a' && s[i] < 'z') {
			letter[s[i]-'a'] ++;
		}
		else
			letter[s[i]-32-'a']++;
	}

 	for(int i = 0; i < 26; i++) {
		if( i != 0 && i%10 == 0)
			cout << endl;
		cout << (char)('a'+i) << ": "<< letter[i] << "  ";
	}

	cout << endl;
}

void Program_2()
{
	int num[8];
	int max, min, max_i, min_i;
	cout << "������8���������ÿո������" << endl;

	for (int i = 0; i < 8; i++) {
		cin >> num[i];
	}

	max = num[0];
	min = num[0];
	max_i = 0;
	min_i = 0;
	for (int i = 1; i < 8; i++) {
		if (num[i] > max) {
			max = num[i];
			max_i = i;
		}
		else if (num[i] < min) {
			min = num[i];
			min_i = i;
		}
		else
			continue;
	}

	cout << "���ֵ��" << max << ",���±���" << max_i << endl;
	cout << "��Сֵ��" << min << ",���±���" << min_i << endl;
}

void Program_3()
{
	int a[4][4], b[4][4];

	cout << "������A���ͷ���ֻ�����0���֣��������룺" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++){
			cin >> a[i][j];
		}
	}

	cout << "������B���ͷ���ֻ�����0���֣��������룺" << endl;
	for (int j = 0; j < 4; j++)
		for (int i = 3-j; i <= 3; i++){
			cin >> b[i][j];
		}
	
	cout << "���A�ͷ���" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j <= i)
				cout << a[i][j] << " ";
			else
				cout << 0 << " ";
		}
		cout << endl;
	}

	cout << "���B�ͷ���" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j < 3 - i)
				cout << 0 << " ";
			else
				cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

void Program_4()
{
	int m, n, monkey[1000];
	int staynum,count,start;

	cout << "������M��N��ֵ���ÿո����:";
	cin >> m >> n;

	for (int i = 1; i <= m; i++)
		monkey[i-1] = i; 

	staynum = m;
	count = 1;
	start = 0;
	while (staynum > 1) {
		while (monkey[start] != 0){
			if (count % n == 0){
				staynum--;
				monkey[start] = 0;
				count = 1;
				break;
			}
			count++;
			start = (++start) % m;
		}
		start = (++start) % m;
	}

	for (int i = 0; i < m; i++)
		if (monkey[i] != 0)
			cout << "��ѡΪ�����ĺ��ӱ��Ϊ��" << i + 1 << endl;
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
	Program_4();


return 0;
}