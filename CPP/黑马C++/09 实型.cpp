#include <iostream>
using namespace std;

int main9()
{
	//1、单精度：float
	//2、双精度：double
	//默认情况下，输出一个小数，会显示出6位有效数字

	float f1 = 3.1459265f;
	cout << "f1 = " << f1 << endl;

	double d1 = 3.14159265;
	cout << "d1 = " << d1 << endl;

	cout << "float占用内存空间是：" << sizeof(float) << endl; //4字节
	cout << "double占用内存空间是：" << sizeof(double) << endl; //8字节

	//科学计数法
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;	//3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;


	system("pause");
	return 0;
}