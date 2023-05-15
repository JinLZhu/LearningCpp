#include <iostream>
using namespace std;

int main42()
{
	//数组名用途
	//1. 可以通过数组名统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "int arr[10] 占用内存空间：" << sizeof(arr) << endl;
	cout << "数组中单个元素占用内存空间：" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. 可以通过数组名来查看数组的首地址
	cout << "首地址：" << arr << endl;
	cout << "第一个元素地址：" << &arr[0] << endl;
	cout << "第二个元素地址：" << &arr[1] << endl;
	
	//数组名是常量，不可以进行赋值操作
	//arr = 100;
	return 0;
}