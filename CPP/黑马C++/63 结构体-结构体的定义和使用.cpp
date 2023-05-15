#include <iostream>
#include <string>
using namespace std;


//1.创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age = 0;
	//成绩
	int score = 0;
}s3 = { "王五", 
		18, 
		98 };

int main63() {
	//2. 通过学生类型创建具体学生
	//2.1 struct Student s1
	Student s1;		//创建变量时，struct关键字可省略
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << "\n"
		<< "年龄：" << s1.age << "\n"
		<< "成绩：" << s1.score << endl;

	//2.2 struct Student s2
	struct Student s2 = { "李四", 18, 99 };
	cout << "姓名：" << s2.name << "\n"
		<< "年龄：" << s2.age << "\n"
		<< "成绩：" << s2.score << endl;

	//2.3 定义结构体时顺便定义结构体变量
	cout << "姓名：" << s3.name << "\n"
		<< "年龄：" << s3.age << "\n"
		<< "成绩：" << s3.score << endl;

	return 0;
}
