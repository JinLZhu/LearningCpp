#include <iostream>
using namespace std;

int main29()
{
	//switch���
	//��һ����Ӱ���
	//10 - 9 ����
	//8 - 7 �ǳ���
	//6 - 5 һ��
	//5����
	
	//�û��������
	int User_Score = 0;
	cout << "����Ӱ���д�֣�" << endl;
	cin >> User_Score;
	//�����û��������������
	switch (User_Score)
	{
	case 10:
		cout << "�����Ӱ��" << endl;
		break;

	case 9:
		cout << "�����Ӱ��" << endl;
		break;

	case 8:
		cout << "�ǳ��ã�" << endl;
		break;

	case 7:
		cout << "�ǳ��ã�" << endl;
		break;

	case 6:
		cout << "һ���" << endl;
		break;

	case 5:
		cout << "һ���" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}


	system("pause");

	return 0;
}