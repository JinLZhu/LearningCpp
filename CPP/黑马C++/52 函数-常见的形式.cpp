#include <iostream>
using namespace std;

void test01();
void test02(int a);
int test03();
int test04(int a);

//1���޲��޷�
void test01()
{
	cout << "1���޲��޷�\n" << endl;
}

//2���в��޷�
void test02(int a)
{
	cout << "2���в��޷�,a = " << a << endl;
}

int test03()
{
	return 1;
}

int test04(int a)
{
	cout << "4���в��з�, a = " << a << endl;
	return a + 1;
	
}

int main52()
{
	//�����ĳ�����ʽ
	//1���޲��޷�
	test01();
	//2���в��޷�
	int a = 100;
	test02(a);
	//3���޲��з�
	cout << "3���޲��з�" << endl;
	a = 0;
	cout << "Now a = " << a << endl;
	a = test03();
	cout << "Now a = " << a << endl;
	//4���в��з�
	a = 10;
	int b = 0;

	cout << "Now b = " << b << endl;
	b = test04(a);
	cout << "Now b = " << b << endl;

	return 0;
}