#include <iostream>
using namespace std;
//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ
int func_compare(int num1, int num2);

int func_compare(int num1, int num2)
{
	//if (num1 > num2) {
	//	return num1;
	//}
	//else if (num1 < num2) {
	//	return num2;
	//}
	//else {
	//	return 0;
	//}
	if (num1 != num2) {
		return num1 > num2 ? num1 : num2;
	}else {
		return 0;
	}
}

int main53()
{
	int a = 0, b = 0, x = 0;

	cout << "���������������֣�";
	cin >> a;
	cin >> b;

	x = func_compare(a, b);
	if (x != 0) {
		cout << "�Ƚϴ�����ǣ�" << x << endl;
	}
	else {
		cout << "������ȣ�" << endl;
	}

	return 0;
}
