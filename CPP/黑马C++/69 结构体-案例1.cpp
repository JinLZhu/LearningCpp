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
	string teacher_Name = "教师_";
	string student_Name = "学生_";
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
		cout << t[i].teacher_name << " 情况：" << endl;
		for (int j = 0; j < 5; j++) {
			cout << t[i].Stu[j].Stu_name << ":" << endl;
			cout << "成绩：" << t[i].Stu[j].score << endl;
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
string Teacher_name[3] = { "老师0", "老师1", "老师2" };
string Student_name[3][5] = {
	{ "学生0-1", "学生0-2", "学生0-3", "学生0-4", "学生0-5" },
	{ "学生1-1", "学生1-2", "学生1-3", "学生1-4", "学生1-5" },
	{ "学生2-1", "学生2-2", "学生2-3", "学生2-4", "学生2-5" }
};
*/
//int arr_len = sizeof(Teacher_name) / sizeof(string);
//cout << arr_len << endl;