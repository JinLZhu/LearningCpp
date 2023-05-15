#include <iostream>
using namespace std;

int main13()
{
	//1.创建bool类型
	bool flag = true;//true代表真
	cout << flag << endl;

	flag = false;// false 代表假
	cout << flag << endl;
	//本质上 1代表真 0代表假

	//2.查看bool类型占用内存空间
	cout << "bool类型占用内存空间：" << sizeof(bool) << endl;

	system("pause");
	return 0;
}