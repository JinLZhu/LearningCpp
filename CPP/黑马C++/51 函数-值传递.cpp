#include <iostream>
using namespace std;

void func_swap(int num1, int num2);

void func_swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	swap(num1, num2);
	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

}

int main51()
{
	int a = 10;
	int b = 100;

	//ֵ���ݵ�ʱ�򣬸ı��ββ�����Ӱ��ʵ��
	func_swap(a, b);
	
	cout << "ʵ�Σ�" << endl;
	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;


	return 0;
}