#include <iostream>
using namespace std;

int main10()
{
	//1. �ַ��ͱ���������ʽ
	//char ch = 'a';
	char ch = 'b';
	cout << "ch = " << ch << endl;

	//2. �ַ��ͱ���ռ���ڴ��С
	cout << "char����ռ���ڴ�ռ䣺" << sizeof(char) << endl;

	//3.�ַ��ͱ�����������
	//char ch2 = "b";		//�����ַ��ͱ���Ҫ�õ�����
	//char ch2 = 'abcdef';	//�����ַ��ͱ�����������ֻ����һ���ַ�

	//4.�ַ��ͱ�����ӦASCII����
	// a - 97
	// A - 65
	cout << (int)ch << endl;

	system("pause");
	return 0;
}