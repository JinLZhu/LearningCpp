#include <iostream>
using namespace std;

//标识符命名规则
//1、标识符不可以是关键字
//2、标识符由字母、数字、下划线组成
//3、标识符第一个字符只能是字母或下划线
//4、标识符区分大小写
int main6()
{
	//1. 标识符不可以是关键字
	//int int = 88;

	//2. 标识符是由字母、数字、下划线构成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;

	//3. 标识符第一个字符只能是字母和下划线
	// int 123abc = 40;

	//4. 标识符区分大小写
	int aaa = 100;
	//cout << AAA << endl;	//AAA 和 aaa 不是同一个名称

	//建议： 给变量起名的时候，最好能做到见名知意
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;


	system("pause");
	return 0;
}