#include <iostream>
using namespace std;

int main38()
{
	//breakʹ��ʱ��
	//1��������switch�����
	//cout << "ѡ�񸱱��Ѷ�" << endl;
	//cout << "1.��ͨ" << endl;
	//cout << "2.�е�" << endl;
	//cout << "3.����" << endl;

	//int User_Select = 0;
	//cin >> User_Select;
	//switch (User_Select){
	//case 1:
	//	cout << "��ͨ�Ѷ�" << endl;
	//	break;
	//
	//case 2:
	//	cout << "�е��Ѷ�" << endl;
	//	break;

	//case 3:
	//	cout << "�����Ѷ�" << endl;
	//	break;

	//default:
	//	cout << "ѡ�����" << endl;
	//	break;
	//}

	////2.������ѭ�������
	//char User_Num = 0;
	//while (true) {
	//	cout << "����һ���ַ���(���� x �˳�)";
	//	cin >> User_Num;

	//	if (User_Num == 'x') {
	//		break;
	//	}
	//}

	//3.������Ƕ�׵�ѭ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << " * ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
} 