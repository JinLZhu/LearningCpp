#include <iostream>
using namespace std;

int main23()
{
	//选择结构，单行if语句
	//用户输入一个分数，如果分数大于600，视为考上一本大学，在屏幕上输出

	//1、用户数输入分数
	float score = 0.0f;
	cout << "输入总分：";
	cin >> score;
	//2、打印用户输入的分数
	cout << "总分：" << score << endl;
	//3、判断分数是否大于600， 如果大于，那么输出
	//注意事项，if条件后面不要加分号
	if (score >= 600)
	{
		cout << "恭喜！" << endl;
	}
	system("pause");

	return 0;
}