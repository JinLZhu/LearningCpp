#include <iostream>
using namespace std;

int main33()
{
	//水仙花数 - 使用do...while循环
	int num = 100, 
		units = 0, 
		tens = 0, 
		hundreds = 0;

	do
	{
		units = num % 10;
		tens = (num / 10) % 10;
		hundreds = num / 100;

		units = units * units * units;
		tens = tens * tens * tens;
		hundreds = hundreds * hundreds * hundreds;

		if (num == (hundreds + tens + units)) {
			cout << num << "是一个水仙花数！" << endl;
		}

		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}