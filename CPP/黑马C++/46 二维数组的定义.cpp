#include <iostream>
using namespace std;

int main46()
{
	//二维数组定义方式
	//1.数据类型 数组名[行][列]
	//int arr[2][3];
	//arr[0][0] = 0;
	//arr[0][1] = 1;
	//arr[0][2] = 2;
	//arr[1][0] = 4;
	//arr[1][1] = 5;
	//arr[1][2] = 6;

	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr[i][j] << endl;
	//	}
	//}

	//2. 数据类型 数组名[行][列] = {{数据, 数据2}, {数据3}, {数据4}, ...,{数据n}, {数据n}}
	//int arr[2][3] =
	//{
	//	{1,2,3},
	//	{4,5,6}
	//};

	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//	cout << arr[i][j] << endl;
	//	}
	//}

	//3. 数据类型 数组名[ 行数 ] [ 列数 ] = { 数据1, 数据2, 数据3, 数据4 };
	//int arr[2][3] = { 1,2,3,4,5,6 };
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr[i][j] << endl;
	//	}
	//}

	//4. 数据类型 数组名[ ] [ 列数 ] = { 数据1, 数据2, 数据3, 数据4 };
	int arr[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << endl;
		}
	}

	return 0;
}

