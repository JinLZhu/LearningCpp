#include <iostream>
using namespace std;

int main8()
{
	//���ͣ� short(2)	int(4)	long(4)		longlong(8)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨��sizeof(��������/������

	short num1 = 0;
	cout << "shortռ���ڴ�ռ�Ϊ: " << sizeof(num1) << endl;

	int num2 = 0;
	cout << "intռ���ڴ�ռ�Ϊ: " << sizeof(num2) << endl;

	long num3 = 0;
	cout << "longռ���ڴ�ռ�Ϊ: " << sizeof(num3) << endl;

	long long num4 = 0;
	cout << "long longռ���ڴ�ռ�Ϊ: " << sizeof(num4) << endl;
	//���ʹ�С�Ƚ�
	// short < int <= long <= long long

	system("pause");

	return 0;
}