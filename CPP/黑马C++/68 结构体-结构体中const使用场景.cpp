#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age = 0;
	float score = 0.0;
};

void printstudent(const Student *s)
{
	//s->age = 150;			//��ֹ�޸��βε�ֵ���ᱨ��
	cout << "������" << s->name << "\n"
		<< "���䣺" << s->age << "\n"
		<< "�ɼ���" << s->score << endl;
	cout << endl;
}

int main68()
{
	Student s = { "����", 20, 80 };
	printstudent(&s); //�β�δ����constʱ����ַ���ݻ�ı�ʵ�ε�ֵ

	return 0;
}