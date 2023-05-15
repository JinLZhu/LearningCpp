#include <iostream>
using namespace std;

int main29()
{
	//switch语句
	//给一个电影打分
	//10 - 9 经典
	//8 - 7 非常好
	//6 - 5 一般
	//5以下
	
	//用户输入分数
	int User_Score = 0;
	cout << "给电影进行打分：" << endl;
	cin >> User_Score;
	//根据用户输入分数输出结果
	switch (User_Score)
	{
	case 10:
		cout << "经典电影！" << endl;
		break;

	case 9:
		cout << "经典电影！" << endl;
		break;

	case 8:
		cout << "非常好！" << endl;
		break;

	case 7:
		cout << "非常好！" << endl;
		break;

	case 6:
		cout << "一般吧" << endl;
		break;

	case 5:
		cout << "一般吧" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}


	system("pause");

	return 0;
}