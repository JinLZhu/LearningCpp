#include <iostream>
using namespace std;

int main47() {
	// ��ά����������;
	// 1�����Բ鿴ռ���ڴ��С
	int arr[2][3] =
	{
		{ 1,2,3 },
		{ 4,5,6 }
	};

	cout << "arrռ���ڴ棺" << sizeof(arr) << endl;
	cout << "arr��һ��ռ���ڴ棺" << sizeof(arr[0]) << endl;
	cout << "arr��һ��Ԫ��ռ���ڴ棺" << sizeof(arr[0][0]) << endl;
	cout << "arr������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "arr������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << endl;

	//2. ���Բ鿴��ά������׵�ַ
	cout << "arr�׵�ַ��"<< (int)arr << endl;
	cout << "arr��һ���׵�ַ��"<< (int)arr[0] << endl;
	cout << "arr�ڶ����׵�ַ��"<< (int)arr[1] << endl;

	cout << "arr��һ��Ԫ���׵�ַ��" << (int)&arr[0][0] << endl;
	cout << "arr�ڶ���Ԫ���׵�ַ��" << (int)&arr[0][1] << endl;



	return 0;
}