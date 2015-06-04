#include <iostream>
using namespace std;

void Program_1()
{
	int sec = 40000;
	int h, m, s;

	h = sec / 60 / 60;
	m = (sec - h * 60 * 60) / 60;
	s = (sec - (60 * 60)) % 60;

	cout << "40000s is " << h << "h" << m << "min" << s << "s" << endl;
}

void Program_2()
{
	int a, b, c;
	int temp;
	int flag = 1;

	cout << "输入3个边长，用空格隔开：";
	cin >> a >> b >> c;

	if (a >= b){
		temp = a;
		a = b;
		b = temp;
	}
	if (c <= a){
		temp = a;
		a = c;
		c = temp;
	}
	if (c <= b){
		temp = b;
		b = c;
		c = temp;
	}
//	cout << a << b << c << endl;
	if ((a + b) > c && (a + c) > b) {
		if ((a == b) || (b == c)) {
			if ((a == b) && (b == c))
				cout << "这是一个等边三角形" << endl;
			else
				cout << "这是一个等腰三角形" << endl;
		}
		else if (a*a + b*b == c*c)
			cout << "这是一个直角三角形" << endl;
		else
			cout << "这就是一个普通三角形" << endl;
	}
	else
		cout << "不能构成三角形" << endl;
}

void Program_3()
{
	float r, h;
	float v;
	
	cout << "请输入圆锥体的半径和高，用空格隔开：";
	cin >> r >> h;

	v = 3.14 * r * r * h / 3; //三分之一地面积乘高

	cout << "圆锥体的体积为：" << v << endl;


}

void Program_4()
{
	int num, count = 0;
	int temp;

	cout << "请输入一个小于6位的正整数：";
	cin >> num;

	temp = num;
	while (num) {
		num = num / 10;
		count++;
	}

	cout << "这是一个" << count << "位数" << endl;
	
	cout << "倒序输出结果为：";
	while (temp) {
		cout << (temp % 10);
		temp /= 10;
	}
	cout << endl;
}

void Program_5()
{
	int a, b, c, d;
	int temp;
	
	cout << "请输入4个整数，用空格隔开：";
	cin >> a >> b >> c >> d;

	if(b <= a) {
		temp = a;
		a = b;
		b = temp;
	}
	if (c <= a) {
		temp = a;
		a = c;
		c = temp;
	}
	if (c <= b) {
		temp = c;
		c = b;
		b = temp;
	}
	if (d <= a) {
		temp = d;
		d = c;;
		c = b;
		b = a;
		a = temp;
	}
	else if (d <= b) {
		temp = d;
		d = c;
		c = b;
		b = temp;
	}
	else if (d <= c) {
		temp = d;
		d = c;
		c = temp;
	}

	cout <<"排序后结果为：" << a << b << c << d << endl;
}

void Program_6()
{
	int score;
	
	cout << "请输入成绩：";
	cin >> score;

	if (score >= 90)
		cout << "优秀" << endl;
	else if (score >= 80)
		cout << "良好" << endl;
	else if (score >= 70)
		cout << "中等" << endl;
	else if (score >= 60)
		cout << "及格" << endl;
	else
		cout << "不及格" << endl;
}

int main()
{
	cout << "第一题：" << endl;
	Program_1();

	cout << endl << "第二题：" << endl;
	Program_2();

	cout << endl << "第三题：" << endl;
	Program_3();
	cout << endl << "第四题：" << endl;
	Program_4();

	cout << endl << "第五题：" << endl;
	Program_5();

	cout << endl << "第六题：" << endl;
	Program_6();

}