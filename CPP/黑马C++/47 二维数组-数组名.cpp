#include <iostream>
using namespace std;

int main47() {
	// 二维数组名称用途
	// 1、可以查看占用内存大小
	int arr[2][3] =
	{
		{ 1,2,3 },
		{ 4,5,6 }
	};

	cout << "arr占用内存：" << sizeof(arr) << endl;
	cout << "arr第一行占用内存：" << sizeof(arr[0]) << endl;
	cout << "arr第一个元素占用内存：" << sizeof(arr[0][0]) << endl;
	cout << "arr行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "arr列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << endl;

	//2. 可以查看二维数组的首地址
	cout << "arr首地址："<< (int)arr << endl;
	cout << "arr第一行首地址："<< (int)arr[0] << endl;
	cout << "arr第二行首地址："<< (int)arr[1] << endl;

	cout << "arr第一个元素首地址：" << (int)&arr[0][0] << endl;
	cout << "arr第二个元素首地址：" << (int)&arr[0][1] << endl;



	return 0;
}