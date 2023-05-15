#include <iostream>
using namespace std;

int main44()
{
	//数组逆置
	int arr[5] = { 1,3,2,5,4 }, i = 0;
	cout << "原数组：";
	for (i; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i];
	}
	cout << endl;

	//数组起始点
	int arr_start = 0;
	//数组长度
	int arr_end = (end(arr) - begin(arr)) - 1;	//end - begin 返回为_int64, 转换为int可能丢失数据
	int arr_buffer = 0;

	for (i = 0; i < (end(arr) - begin(arr)); i++) {
		if (arr_start == arr_end) {
			break;
		}

		arr_buffer = arr[arr_start];
		arr[arr_start] = arr[arr_end];
		arr[arr_end] = arr_buffer;

		arr_start++;
		arr_end--;
	}

	cout << "现数组：";
	for (i; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i];
	}

	return 0;
}