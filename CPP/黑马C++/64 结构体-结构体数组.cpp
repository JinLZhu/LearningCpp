#include <iostream>
#include <string>
using namespace std;

//1.����ṹ��
struct Student {
	string name;
	int age;
	int score;
};

int main64()
{
	//2.�����ṹ������
	struct Student stuArray[3] = {
		{"����", 18, 100},
		{"����", 18, 90},
		{"����", 18, 80}
	};

	//3.���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name << "\n"
			<< "���䣺" << stuArray[i].age << "\n"
			<< "�ɼ���" << stuArray[i].score << endl;
		cout << endl;
	}

	return 0;
}