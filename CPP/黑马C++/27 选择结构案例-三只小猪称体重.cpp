#include <iostream>
using namespace std;

int main27()
{
	//��ֻС������أ� �ж���ֻ����
	//��ֻС�����ر���
	float pig_A_weight = 0.0f;
	float pig_B_weight = 0.0f;
	float pig_C_weight = 0.0f;

	//�û�������ֻС������
	cout << "������ֻС������أ�";
	cin >> pig_A_weight;
	cin >> pig_B_weight;
	cin >> pig_C_weight;

	cout << "С��A,B,C�������ǣ�\n" <<
		pig_A_weight << "\n" <<
		pig_B_weight << "\n" <<
		pig_C_weight <<
		endl;

	//����ֻС���������Ƚ�
	if (pig_A_weight > pig_B_weight) {	//A��B��
		if (pig_A_weight > pig_C_weight) {
			cout << "A����" << endl;
		}
		else {
			cout << "C����" << endl;
		}
	}
	else {	//B��A��
		if (pig_B_weight > pig_C_weight) {	//B��C��
			cout << "B����" << endl;
		}
		else {
			cout << "C����" << endl;
		}
	}

	system("pause");

	return 0;
}