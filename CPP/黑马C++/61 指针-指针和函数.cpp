#include <iostream>
using namespace std;

void swap01(int a, int b)
{
	swap(a, b);

	cout << "�β�a = " << a << endl;
	cout << "�β�b = " << b << endl;
}

void swap02(int *a, int *b)
{
	swap(*a, *b);

	cout << "�β�a = " << *a << endl;
	cout << "�β�b = " << *b << endl;
}

int main61()
{
	void swap01(int a, int b);
	void swap02(int *a, int *b);
	//1.ֵ����
	int a = 10;
	int b = 20;
	//swap01(a, b);

	//2.��ַ����, ��������ʵ��
	swap02(&a, &b);

	cout << "ʵ��a = " << a << endl;
	cout << "ʵ��b = " << b << endl;

	return 0;
}