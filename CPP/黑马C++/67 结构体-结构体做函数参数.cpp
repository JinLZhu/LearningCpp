#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age = 0;
	float score = 0.0;
};

void printStudent1(Student s)
{
	cout << "function:\n"
		<< "������" << s.name << "\n"
		<< "���䣺" << s.age << "\n"
		<< "�ɼ���" << s.score << endl;
	cout << endl;
}

void printStudent2(Student *ptr_s)
{
	ptr_s->score = 100;
	cout << "function_ptr:\n"
		<< "������" << ptr_s->name << "\n"
		<< "���䣺" << ptr_s->age << "\n"
		<< "�ɼ���" << ptr_s->score << endl;
	cout << endl;
}

int main67()
{
	void printStudent1(Student s);
	void printStudent2(Student *s);
	//���ṹ����Ϊ�������뺯��
	Student s;
	s.name = "����";
	s.age = 20;
	s.score = 80.6;
	cout << "main:\n"
		<< "������" << s.name << "\n"
		<< "���䣺" << s.age << "\n"
		<< "�ɼ���" << s.score << endl;
	cout << endl;

	//ֵ����
	printStudent1(s);

	//��ַ����
	printStudent2(&s);
	cout << "�ɼ����Ϊ��" << s.score << endl;//��ַ���ݿɸ���ʵ�ε�ֵ

	return 0;
}
