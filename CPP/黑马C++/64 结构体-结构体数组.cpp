#include <iostream>
#include <string>
using namespace std;

//1.定义结构体
struct Student {
	string name;
	int age;
	int score;
};

int main64()
{
	//2.创建结构体数组
	struct Student stuArray[3] = {
		{"张三", 18, 100},
		{"李四", 18, 90},
		{"王五", 18, 80}
	};

	//3.给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArray[i].name << "\n"
			<< "年龄：" << stuArray[i].age << "\n"
			<< "成绩：" << stuArray[i].score << endl;
		cout << endl;
	}

	return 0;
}