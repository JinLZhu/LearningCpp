#include <iostream>
using namespace std;

int maini30()
{
	//while循环
	//在屏幕中打印 0 ~ 9 这10个数字
	int num = 0;
	while (num <= 9) {
		cout << "Now num is " << num << endl;
		num++;
	}

	system("pause");
	return 0;
}