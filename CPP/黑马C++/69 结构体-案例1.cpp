#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Student {
	string Stu_name;
	int score;
};

struct Teacher {
	string teacher_name;
	struct Student Stu[5];
};

void init_members(struct Teacher t[], int arr_len)
{
	int random = rand() % 61 + 40;
	string nameSeed = "ABCDE";
	string teacher_Name = "��ʦ_";
	string student_Name = "ѧ��_";
	for (int i = 0; i < arr_len; i++) {
		t[i].teacher_name = teacher_Name;
		t[i].teacher_name += nameSeed[i];
		for (int j = 0; j < 5; j++) {
			t[i].Stu[j].Stu_name = student_Name;
			t[i].Stu[j].Stu_name += nameSeed[j];
			t[i].Stu[j].score = random;
		}
	}
}

void print_members(struct Teacher t[], int arr_len)
{
	for (int i = 0; i < arr_len; i++) {
		cout << t[i].teacher_name << " �����" << endl;
		for (int j = 0; j < 5; j++) {
			cout << t[i].Stu[j].Stu_name << ":" << endl;
			cout << "�ɼ���" << t[i].Stu[j].score << endl;
		}
	}
}


int main()
{
	srand((unsigned int)time(NULL));

	struct Teacher struct_Teacher[3];
	int arr_len = sizeof(struct_Teacher) / sizeof(Teacher);

	init_members(struct_Teacher, arr_len);
	print_members(struct_Teacher, arr_len);

	return 0;
}

/*
Teacher teacher_A[3];
string Teacher_name[3] = { "��ʦ0", "��ʦ1", "��ʦ2" };
string Student_name[3][5] = {
	{ "ѧ��0-1", "ѧ��0-2", "ѧ��0-3", "ѧ��0-4", "ѧ��0-5" },
	{ "ѧ��1-1", "ѧ��1-2", "ѧ��1-3", "ѧ��1-4", "ѧ��1-5" },
	{ "ѧ��2-1", "ѧ��2-2", "ѧ��2-3", "ѧ��2-4", "ѧ��2-5" }
};
*/
//int arr_len = sizeof(Teacher_name) / sizeof(string);
//cout << arr_len << endl;