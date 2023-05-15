#include <iostream>
using namespace std;

int main60()
{
	//利用指针访问数组中的元素
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int* ptr = arr;		//arr就是数组的首地址
	int arr_Len= 0;
	arr_Len = sizeof(arr) / sizeof(int);
	cout << "循环次数：" << arr_Len << endl;
	cout << endl;

	//for (int i = 0; i <= arr_Len; ++i) {		//i = 10时，指针溢出
	for (int i = 0; i < arr_Len; ++i) {
		cout << "第" << i << "个元素：" << *ptr << endl;
		++ptr;		//指针向后偏移4个字节
	}

	return 0;
}