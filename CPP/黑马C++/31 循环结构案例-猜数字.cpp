#include <iostream>
using namespace std;

int main31()
{
	int random_num = 0;
	int user_num = 0;
	srand(time(0));

	random_num = rand() % 100 + 1;
	cout << "����һ��100�ڵ����֣�";
	cin >> user_num;
	while (user_num != random_num) {
		if (user_num > random_num) {
			cout << "����������������" << endl;
		}
		else {
			cout << "��������������С��" << endl;
		}
		cout << "�ٴ��������֣�";
		cin >> user_num;
	}
	cout << "�¶���!" << endl;

	system("pause");
	return 0;
}