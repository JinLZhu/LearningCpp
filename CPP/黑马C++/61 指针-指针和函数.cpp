#include <iostream>
using namespace std;

void swap01(int a, int b)
{
	swap(a, b);

	cout << "形参a = " << a << endl;
	cout << "形参b = " << b << endl;
}

void swap02(int *a, int *b)
{
	swap(*a, *b);

	cout << "形参a = " << *a << endl;
	cout << "形参b = " << *b << endl;
}

int main61()
{
	void swap01(int a, int b);
	void swap02(int *a, int *b);
	//1.值传递
	int a = 10;
	int b = 20;
	//swap01(a, b);

	//2.地址传递, 可以修饰实参
	swap02(&a, &b);

	cout << "实参a = " << a << endl;
	cout << "实参b = " << b << endl;

	return 0;
}