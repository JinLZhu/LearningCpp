#include <iostream>
using namespace std;

int main55()
{
	int a = 100;
	//����ָ��
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "p��ֵ��" << p << endl;
	
	//ʹ��ָ��
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	return 0;
}