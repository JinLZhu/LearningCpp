#include <iostream>
using namespace std;

int main25()
{
	//ѡ��ṹ ������if���
	//����һ�����Եķ�����������ڵ���600�֣��������ϲ
	//����500�����������Ŭ��
	//����400��������ٽ�����
	//С�ڵ���400�������ͷ����:
	
	//1. �û��������
	float score = 0.0f;
	cout << "���������";
	cin >> score;

	//2. ��ʾ�û��ķ���
	cout << "������" << score << endl;

	//3. �ж�
	if (score >= 600) {
		cout << "��ϲ!" << endl;
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