#include <iostream>
using namespace std;

int main31()
{
	int random_num = 0;
	int user_num = 0;
	srand(time(0));

	random_num = rand() % 100 + 1;
	cout << "输入一个100内的数字：";
	cin >> user_num;
	while (user_num != random_num) {
		if (user_num > random_num) {
			cout << "输入的数比随机数大！" << endl;
		}
		else {
			cout << "输入的数比随机数小！" << endl;
		}
		cout << "再次输入数字：";
		cin >> user_num;
	}
	cout << "猜对了!" << endl;

	system("pause");
	return 0;
}