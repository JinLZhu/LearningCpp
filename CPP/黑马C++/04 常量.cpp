#include <iostream>
using namespace std;
//�����Ķ��巽ʽ
//1.#define->�곣��
//2.const���εı���

//1��#define�곣��
#define Day 7

int main4()
{
	cout << "һ���ܹ��У�" << Day << " ��" << endl;
	// Day = 14;				//����һ���޸ľͻᱨ��
	
	//2��cont���γ���
	const int month = 12;
	cout << "һ�����ܹ��� " << month << " ���·�" << endl;
	//month = 24;			//����const���εı���Ҳ��Ϊ����
	system("pause");
	return 0;
}