#include <iostream>
using namespace std;
//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值
int func_compare(int num1, int num2);

int func_compare(int num1, int num2)
{
	//if (num1 > num2) {
	//	return num1;
	//}
	//else if (num1 < num2) {
	//	return num2;
	//}
	//else {
	//	return 0;
	//}
	if (num1 != num2) {
		return num1 > num2 ? num1 : num2;
	}else {
		return 0;
	}
}

int main53()
{
	int a = 0, b = 0, x = 0;

	cout << "输入两个整型数字：";
	cin >> a;
	cin >> b;

	x = func_compare(a, b);
	if (x != 0) {
		cout << "比较大的数是：" << x << endl;
	}
	else {
		cout << "两数相等！" << endl;
	}

	return 0;
}
