#include <iostream>
using namespace std;

int main9()
{
	//1�������ȣ�float
	//2��˫���ȣ�double
	//Ĭ������£����һ��С��������ʾ��6λ��Ч����

	float f1 = 3.1459265f;
	cout << "f1 = " << f1 << endl;

	double d1 = 3.14159265;
	cout << "d1 = " << d1 << endl;

	cout << "floatռ���ڴ�ռ��ǣ�" << sizeof(float) << endl; //4�ֽ�
	cout << "doubleռ���ڴ�ռ��ǣ�" << sizeof(double) << endl; //8�ֽ�

	//��ѧ������
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;	//3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;


	system("pause");
	return 0;
}