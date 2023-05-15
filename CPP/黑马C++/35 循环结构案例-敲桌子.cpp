#include <iostream>
using namespace std;

int main35()
{
	int num = 0;

	for (num; num < 100; num++)
	{
		int units = 0;
		int tens = 0;
		units = num % 10;
		tens = num / 10;

		if ((num % 7 == 0) || units == 7 || tens == 7) {
			cout << "ÇÃ×À×Ó£¡" << endl;
		}
		else {
			cout << num << endl;
		}
	}


	system("pause");
	return 0;
}