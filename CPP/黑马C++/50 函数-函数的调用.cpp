#include <iostream>
using namespace std;
int func_add(int num1, int num2);

//定义加法函数
int func_add2(int num1, int num2)
{
	return num1 + num2;
}

int main50()
{
	int num1 = 100;
	int num2 = 200;

	int sum = func_add2(num1, num2);

	cout << "sum is " << sum << endl;

	return 0;
}