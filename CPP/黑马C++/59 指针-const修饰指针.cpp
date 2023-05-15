#include <iostream>
using namespace std;

int main59()
{
	//1. const修饰指针、常量指针
	int a = 10;
	int b = 10;

	const int *p = &a;
	//指针指向值不可变，指针指向可变

	//*p = 20;  错误
	p = &b; //改变指向

	//2. const修饰常量、指针常量
	//指针的指向不可变，指针指向的值可变
	int* const p2 = &a;
	*p2 = 100;
	//p2 = &b;		//错误，指针指向不可变

	//3. const修饰指针和常量
	const int* const p3 = &a;
	//指针指向及指向的值均不可改
	// *p3 = 100; // 错误
	// p3 = &a;   //错误

	return 0;
	
}