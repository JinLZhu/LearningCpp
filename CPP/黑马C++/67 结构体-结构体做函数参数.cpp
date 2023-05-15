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
		<< "姓名：" << s.name << "\n"
		<< "年龄：" << s.age << "\n"
		<< "成绩：" << s.score << endl;
	cout << endl;
}

void printStudent2(Student *ptr_s)
{
	ptr_s->score = 100;
	cout << "function_ptr:\n"
		<< "姓名：" << ptr_s->name << "\n"
		<< "年龄：" << ptr_s->age << "\n"
		<< "成绩：" << ptr_s->score << endl;
	cout << endl;
}

int main67()
{
	void printStudent1(Student s);
	void printStudent2(Student *s);
	//将结构体作为参数传入函数
	Student s;
	s.name = "张三";
	s.age = 20;
	s.score = 80.6;
	cout << "main:\n"
		<< "姓名：" << s.name << "\n"
		<< "年龄：" << s.age << "\n"
		<< "成绩：" << s.score << endl;
	cout << endl;

	//值传递
	printStudent1(s);

	//地址传递
	printStudent2(&s);
	cout << "成绩变更为：" << s.score << endl;//地址传递可更改实参的值

	return 0;
}
