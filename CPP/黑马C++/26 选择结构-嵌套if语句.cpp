#include <iostream>
using namespace std;

int main26()
{
	//1. 用户输入分数
	float score = 0.0f;
	cout << "输入分数：";
	cin >> score;

	//2. 提示用户的分数
	cout << "分数：" << score << endl;

	//3. 判断
	if (score >= 600) {
		if (score >= 700) {
			cout << "恭喜A!" << endl;
		}
		else if (score >= 650) {
			cout << "恭喜B!" << endl;
		}
		else {
			cout << "恭喜C!" << endl;
		}
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