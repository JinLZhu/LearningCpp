#include <iostream>
using namespace std;

int main42()
{
	//��������;
	//1. ����ͨ��������ͳ����������ռ���ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "int arr[10] ռ���ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "�����е���Ԫ��ռ���ڴ�ռ䣺" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ�����" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. ����ͨ�����������鿴������׵�ַ
	cout << "�׵�ַ��" << arr << endl;
	cout << "��һ��Ԫ�ص�ַ��" << &arr[0] << endl;
	cout << "�ڶ���Ԫ�ص�ַ��" << &arr[1] << endl;
	
	//�������ǳ����������Խ��и�ֵ����
	//arr = 100;
	return 0;
}