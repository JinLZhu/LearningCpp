#include <iostream>
using namespace std;

int main28()
{
	//三目运算符

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "C = " << c << endl;
	//在C++中，三目返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a = " << a << " b = " << b << endl;

	system("pause");

	return 0;
}