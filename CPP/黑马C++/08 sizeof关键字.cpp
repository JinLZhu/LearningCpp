#include <iostream>
using namespace std;

int main8()
{
	//整型： short(2)	int(4)	long(4)		longlong(8)
	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof(数据类型/变量）

	short num1 = 0;
	cout << "short占用内存空间为: " << sizeof(num1) << endl;

	int num2 = 0;
	cout << "int占用内存空间为: " << sizeof(num2) << endl;

	long num3 = 0;
	cout << "long占用内存空间为: " << sizeof(num3) << endl;

	long long num4 = 0;
	cout << "long long占用内存空间为: " << sizeof(num4) << endl;
	//整型大小比较
	// short < int <= long <= long long

	system("pause");

	return 0;
}