#include <iostream>
using namespace std;

int main33()
{
	//ˮ�ɻ��� - ʹ��do...whileѭ��
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
			cout << num << "��һ��ˮ�ɻ�����" << endl;
		}

		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}