#include<iostream>

using namespace std;

int main() {

	int input;

	cout << "������һ�������������" << endl;

	cin >> input;

	int s = 0;

	for (int j = 1; j <= input; j++) {



		for (int i = 1, m = 0; i <= j; i++) {

			m += i;

		}

		s += m;

	}

	cout << "�����" << s << endl;

	return 0;

}