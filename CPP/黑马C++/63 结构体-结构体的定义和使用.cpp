#include <iostream>
#include <string>
using namespace std;


//1.����ѧ���������ͣ�ѧ�����������������䣬������
struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age = 0;
	//�ɼ�
	int score = 0;
}s3 = { "����", 
		18, 
		98 };

int main63() {
	//2. ͨ��ѧ�����ʹ�������ѧ��
	//2.1 struct Student s1
	Student s1;		//��������ʱ��struct�ؼ��ֿ�ʡ��
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << "\n"
		<< "���䣺" << s1.age << "\n"
		<< "�ɼ���" << s1.score << endl;

	//2.2 struct Student s2
	struct Student s2 = { "����", 18, 99 };
	cout << "������" << s2.name << "\n"
		<< "���䣺" << s2.age << "\n"
		<< "�ɼ���" << s2.score << endl;

	//2.3 ����ṹ��ʱ˳�㶨��ṹ�����
	cout << "������" << s3.name << "\n"
		<< "���䣺" << s3.age << "\n"
		<< "�ɼ���" << s3.score << endl;

	return 0;
}
