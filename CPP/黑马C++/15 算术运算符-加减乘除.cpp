#include <iostream>
using namespace std;

int main15()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;
	//两个整数相除，结果依然为整数，小数部分被舍去

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;

	//int a3 = 10;
	//int b3 = 0;

	//cout << a3 / b3 << endl;
	//除数不可为0

	//小数相除
	double d1 = 0.5;
	double d2 = 0.22;

	cout << d1 / d2 << endl;

	system("pause");
	return 0;
}