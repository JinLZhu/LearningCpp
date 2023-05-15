#include <iostream>
#include <string>
using namespace std;

//定义学生结构体
struct Student {
	string name;
	int age = 0;
	float score = 0.0;
};

//定义老师结构体
struct Teacher {
	int id = 0;//教师编号
	string name;//教师姓名
	int age = 0;//年龄
	struct Student stu;	//辅导的学生
};

int main66()
{
	//结构体嵌套结构体
	//创建老师
	Teacher t;
	t.id = 10000;
	t.name = "老张";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60.5;

	cout << "教师姓名：" << t.name << "\n"
		<< "教师编号：" << t.id << "\n"
		<< "教师年龄：" << t.age << "\n"
		<< "辅导学生姓名：" << t.stu.name << "\n"
		<< "辅导学生年龄：" << t.stu.age << "\n"
		<< "辅导学生成绩：" << t.stu.score << endl;
	cout << endl;

	return 0;
}