#include <iostream>
#include <string>
using namespace std;

int main48()
{
	//1��������ά����
	int Stu_Scores[3][3] =
	{
		{ 100, 100, 100 },
		{ 90, 50, 100},
		{ 60, 70, 80}
	};
	int Scores_Sum[3] = { 0, 0, 0 };
	string Stu_Name[3] = {{"����"}, {"����"}, {"����"}};

	//2��ͳ��ÿ���˵ķ����ܺ�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Scores_Sum[i] += Stu_Scores[i][j];
		}
		cout << Stu_Name[i] << "�ĳɼ��ͣ�" << Scores_Sum[i] << endl;
	}

	return 0;
}