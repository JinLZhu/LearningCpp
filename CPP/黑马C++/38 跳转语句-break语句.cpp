#include <iostream>
using namespace std;

int main38()
{
	//break使用时机
	//1、出现在switch语句中
	//cout << "选择副本难度" << endl;
	//cout << "1.普通" << endl;
	//cout << "2.中等" << endl;
	//cout << "3.困难" << endl;

	//int User_Select = 0;
	//cin >> User_Select;
	//switch (User_Select){
	//case 1:
	//	cout << "普通难度" << endl;
	//	break;
	//
	//case 2:
	//	cout << "中等难度" << endl;
	//	break;

	//case 3:
	//	cout << "困难难度" << endl;
	//	break;

	//default:
	//	cout << "选择错误" << endl;
	//	break;
	//}

	////2.出现在循环语句中
	//char User_Num = 0;
	//while (true) {
	//	cout << "输入一个字符：(输入 x 退出)";
	//	cin >> User_Num;

	//	if (User_Num == 'x') {
	//		break;
	//	}
	//}

	//3.出现在嵌套的循环语句中
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << " * ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
} 