#include <iostream>
using namespace std;

int main25()
{
	//选择结构 多条件if语句
	//输入一个考试的分数，如果大于等于600分，则输出恭喜
	//大于500，则输出继续努力
	//大于400，则输出再接再厉
	//小于等于400，输出从头再来:
	
	//1. 用户输入分数
	float score = 0.0f;
	cout << "输入分数：";
	cin >> score;

	//2. 提示用户的分数
	cout << "分数：" << score << endl;

	//3. 判断
	if (score >= 600) {
		cout << "恭喜!" << endl;
	}
	else if (score >= 500) {
		cout << "继续努力!" << endl;
	}
	else if (score > 400) {
		cout << "再接再厉!" << endl;
	}
	else if (score <= 400) {
		cout << "从头再来!" << endl;
	}
	

	system("pause");

	return 0;
}