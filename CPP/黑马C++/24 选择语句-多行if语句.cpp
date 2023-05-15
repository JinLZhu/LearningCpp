#include <iostream>
using namespace std;

int main24()
{
	//选择结构-多行if语句
	//输入考试分数，如果分数大于600，则输出恭喜
	//如果低于600分，打印再接再厉
	float score = 0.0f;
	cout << "输入分数：";
	cin >> score;
	cout << "分数：" << score << endl;
	if (score >= 600)
	{
		cout << "恭喜!" << endl;
	}
	else{
		cout << "再接再厉!" << endl;
	}
	system("pause");

	return 0;
}