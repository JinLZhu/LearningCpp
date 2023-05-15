#include <iostream>
using namespace std;

int main55()
{
	int a = 100;
	//定义指针
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址：" << &a << endl;
	cout << "p的值：" << p << endl;
	
	//使用指针
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	return 0;
}