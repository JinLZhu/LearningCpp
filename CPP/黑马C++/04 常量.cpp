#include <iostream>
using namespace std;
//常量的定义方式
//1.#define->宏常量
//2.const修饰的变量

//1、#define宏常量
#define Day 7

int main4()
{
	cout << "一周总共有：" << Day << " 天" << endl;
	// Day = 14;				//错误，一旦修改就会报错
	
	//2、cont修饰常量
	const int month = 12;
	cout << "一年里总共有 " << month << " 个月份" << endl;
	//month = 24;			//错误，const修饰的变量也称为常量
	system("pause");
	return 0;
}