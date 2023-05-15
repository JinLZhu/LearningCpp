#include <iostream>
#include <string>
using namespace std;

int main48()
{
	//1、创建二维数组
	int Stu_Scores[3][3] =
	{
		{ 100, 100, 100 },
		{ 90, 50, 100},
		{ 60, 70, 80}
	};
	int Scores_Sum[3] = { 0, 0, 0 };
	string Stu_Name[3] = {{"张三"}, {"李四"}, {"王五"}};

	//2、统计每个人的分数总和
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Scores_Sum[i] += Stu_Scores[i][j];
		}
		cout << Stu_Name[i] << "的成绩和：" << Scores_Sum[i] << endl;
	}

	return 0;
}