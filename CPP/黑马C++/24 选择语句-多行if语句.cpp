#include <iostream>
using namespace std;

int main24()
{
	//ѡ��ṹ-����if���
	//���뿼�Է����������������600���������ϲ
	//�������600�֣���ӡ�ٽ�����
	float score = 0.0f;
	cout << "���������";
	cin >> score;
	cout << "������" << score << endl;
	if (score >= 600)
	{
		cout << "��ϲ!" << endl;
	}
	else{
		cout << "�ٽ�����!" << endl;
	}
	system("pause");

	return 0;
}