#include <iostream>
#include <string>		//用C++风格字符串的时候，要包含这个头文件
using namespace std;

int main12()
{
	//1. C风格字符串
	//注意事项 char 字符串名[]
	//注意事项2 等号后面 要用双引号 包含起来字符串
	char str[] = "str1 string";
	cout << str << endl;

	//2. C++风格字符串
	string str2 = "str2 string";
	cout << str2 << endl;


	system("pause");
	return 0;
}