#include <iostream>
using namespace std;
//�ӷ�������ʵ����������������ӣ������������
int func_add(int num1, int num2);

int func_add(int num1, int num2)
{
	return num1 + num2;
}

int main49()
{
	int num1 = 0, num2 = 0, result = 0;

	cout << "����������������:";
	cin >> num1;
	cin >> num2;

	cout << func_add(num1, num2) << endl;
	
	return 0;
}
