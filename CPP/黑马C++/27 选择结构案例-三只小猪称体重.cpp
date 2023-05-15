#include <iostream>
using namespace std;

int main27()
{
	//三只小猪称体重， 判断哪只最重
	//三只小猪体重变量
	float pig_A_weight = 0.0f;
	float pig_B_weight = 0.0f;
	float pig_C_weight = 0.0f;

	//用户输入三只小猪体重
	cout << "输入三只小猪的体重：";
	cin >> pig_A_weight;
	cin >> pig_B_weight;
	cin >> pig_C_weight;

	cout << "小猪A,B,C的体重是：\n" <<
		pig_A_weight << "\n" <<
		pig_B_weight << "\n" <<
		pig_C_weight <<
		endl;

	//对三只小猪体重做比较
	if (pig_A_weight > pig_B_weight) {	//A比B重
		if (pig_A_weight > pig_C_weight) {
			cout << "A最重" << endl;
		}
		else {
			cout << "C最重" << endl;
		}
	}
	else {	//B比A重
		if (pig_B_weight > pig_C_weight) {	//B比C重
			cout << "B最重" << endl;
		}
		else {
			cout << "C最重" << endl;
		}
	}

	system("pause");

	return 0;
}