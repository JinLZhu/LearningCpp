#include <iostream>
using namespace std;

void func_swap(int num1, int num2);

void func_swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	swap(num1, num2);
	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

}

int main51()
{
	int a = 10;
	int b = 100;

	//值传递的时候，改变形参并不会影响实参
	func_swap(a, b);
	
	cout << "实参：" << endl;
	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;


	return 0;
}