#include <iostream>
using namespace std;

int main16()
{
	//取模=求余数
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;

	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//除数为0 错误
	//cout << a3 % b3 << endl;

	//小数间不能取模
	//double d1 = 3.14, d2 = 1.1;

	//cout << d1 % d2 << endl;


	system("pause");
	return 0;
}