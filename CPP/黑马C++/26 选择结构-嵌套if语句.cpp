#include <iostream>
using namespace std;

int main26()
{
	//1. �û��������
	float score = 0.0f;
	cout << "���������";
	cin >> score;

	//2. ��ʾ�û��ķ���
	cout << "������" << score << endl;

	//3. �ж�
	if (score >= 600) {
		if (score >= 700) {
			cout << "��ϲA!" << endl;
		}
		else if (score >= 650) {
			cout << "��ϲB!" << endl;
		}
		else {
			cout << "��ϲC!" << endl;
		}
	}
	else if (score >= 500) {
		cout << "����Ŭ��!" << endl;
	}
	else if (score > 400) {
		cout << "�ٽ�����!" << endl;
	}
	else if (score <= 400) {
		cout << "��ͷ����!" << endl;
	}


	system("pause");

	return 0;
}