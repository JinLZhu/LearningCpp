#include <iostream>
#include <string>
using namespace std;

//����ѧ���ṹ��
struct Student {
	string name;
	int age = 0;
	float score = 0.0;
};

//������ʦ�ṹ��
struct Teacher {
	int id = 0;//��ʦ���
	string name;//��ʦ����
	int age = 0;//����
	struct Student stu;	//������ѧ��
};

int main66()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	Teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60.5;

	cout << "��ʦ������" << t.name << "\n"
		<< "��ʦ��ţ�" << t.id << "\n"
		<< "��ʦ���䣺" << t.age << "\n"
		<< "����ѧ��������" << t.stu.name << "\n"
		<< "����ѧ�����䣺" << t.stu.age << "\n"
		<< "����ѧ���ɼ���" << t.stu.score << endl;
	cout << endl;

	return 0;
}