#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main65()
{
	//创建结构体变量
	Student s = {"张三", 18, 100};

	//创建指向结构体变量的指针
	Student *p = &s;		//定义指向结构体的指针时，struct关键字可以省略


	//通过指针访问结构体变量中的成员数据
	cout << "姓名：" << p->name << "\n"
		 "年龄：" << p->age << "\n"
		 "成绩：" << p->score << endl;
	cout << endl;

	return 0;
}