#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main65()
{
	//�����ṹ�����
	Student s = {"����", 18, 100};

	//����ָ��ṹ�������ָ��
	Student *p = &s;		//����ָ��ṹ���ָ��ʱ��struct�ؼ��ֿ���ʡ��


	//ͨ��ָ����ʽṹ������еĳ�Ա����
	cout << "������" << p->name << "\n"
		 "���䣺" << p->age << "\n"
		 "�ɼ���" << p->score << endl;
	cout << endl;

	return 0;
}