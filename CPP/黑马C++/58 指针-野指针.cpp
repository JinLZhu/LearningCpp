#include <iostream>
using namespace std;

int main58()
{
	//野指针
	int* p = (int *)0x1100;
	//程序中要避免出现野指针

	cout << *p << endl;

	return 0;
}