#include <iostream>
using namespace std;

void test01();
void test02(int a);
int test03();
int test04(int a);

//1、无参无返
void test01()
{
	cout << "1、无参无返\n" << endl;
}

//2、有参无返
void test02(int a)
{
	cout << "2、有参无返,a = " << a << endl;
}

int test03()
{
	return 1;
}

int test04(int a)
{
	cout << "4、有参有返, a = " << a << endl;
	return a + 1;
	
}

int main52()
{
	//函数的常见样式
	//1、无参无返
	test01();
	//2、有参无返
	int a = 100;
	test02(a);
	//3、无参有返
	cout << "3、无参有返" << endl;
	a = 0;
	cout << "Now a = " << a << endl;
	a = test03();
	cout << "Now a = " << a << endl;
	//4、有参有返
	a = 10;
	int b = 0;

	cout << "Now b = " << b << endl;
	b = test04(a);
	cout << "Now b = " << b << endl;

	return 0;
}