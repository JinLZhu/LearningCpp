#include <iostream>
using namespace std;

int main28()
{
	//��Ŀ�����

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "C = " << c << endl;
	//��C++�У���Ŀ���ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a = " << a << " b = " << b << endl;

	system("pause");

	return 0;
}