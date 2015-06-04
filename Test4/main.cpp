#include<iostream>

using namespace std;

int main() {

	int input;

	cout << "请输入一个大于零的整数" << endl;

	cin >> input;

	int s = 0;

	for (int j = 1; j <= input; j++) {



		for (int i = 1, m = 0; i <= j; i++) {

			m += i;

		}

		s += m;

	}

	cout << "结果是" << s << endl;

	return 0;

}