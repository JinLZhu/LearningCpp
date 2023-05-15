#include <iostream>
using namespace std;

int main10()
{
	//1. 字符型变量创建方式
	//char ch = 'a';
	char ch = 'b';
	cout << "ch = " << ch << endl;

	//2. 字符型变量占用内存大小
	cout << "char变量占用内存空间：" << sizeof(char) << endl;

	//3.字符型变量常见错误
	//char ch2 = "b";		//创建字符型变量要用单引号
	//char ch2 = 'abcdef';	//创建字符型变量单引号内只能有一个字符

	//4.字符型变量对应ASCII编码
	// a - 97
	// A - 65
	cout << (int)ch << endl;

	system("pause");
	return 0;
}