#include <iostream>
using namespace std;

int main23()
{
	//ѡ��ṹ������if���
	//�û�����һ�������������������600����Ϊ����һ����ѧ������Ļ�����

	//1���û����������
	float score = 0.0f;
	cout << "�����ܷ֣�";
	cin >> score;
	//2����ӡ�û�����ķ���
	cout << "�ܷ֣�" << score << endl;
	//3���жϷ����Ƿ����600�� ������ڣ���ô���
	//ע�����if�������治Ҫ�ӷֺ�
	if (score >= 600)
	{
		cout << "��ϲ��" << endl;
	}
	system("pause");

	return 0;
}