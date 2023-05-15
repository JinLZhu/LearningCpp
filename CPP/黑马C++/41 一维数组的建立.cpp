#include <iostream>
using namespace std;

int main41()
{
	//int arr[5];

	//arr[0] = 1;
	//arr[1] = 2;
	//arr[2] = 3;
	//arr[3] = 4;
	//arr[4] = 5;
	//
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;

	//第二种初始化方式
	//int arr2[5] = { 10, 20, 30, 40, 50 };
	//cout << arr2[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;
	//cout << arr2[3] << endl;
	//cout << arr2[4] << endl;

	//用for循环迭代数组
	//int i = 0;
	//for (i; i < (end(arr2) - begin(arr2)); i++) {
	//	cout << arr2[i] << endl;
	//}

	//第三种初始化方式
	//定义数组的时候必须有初始长度
	int arr3[] = { 90,80,70,60,50,40,30 };
	int i = 0;
	for (i; i < (end(arr3) - begin(arr3)); i++) {
		cout << arr3[i] << endl;
	}

	return 0;
}
