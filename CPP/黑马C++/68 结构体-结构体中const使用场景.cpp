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
	//s->age = 150;			//禁止修改形参的值，会报错
	cout << "姓名：" << s->name << "\n"
		<< "年龄：" << s->age << "\n"
		<< "成绩：" << s->score << endl;
	cout << endl;
}

int main68()
{
	Student s = { "张三", 20, 80 };
	printstudent(&s); //形参未定义const时，地址传递会改变实参的值

	return 0;
}