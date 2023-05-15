#include <iostream>
using namespace std;

int main57()
{
	//空指针
	//初始化空指针
	int* p = NULL;
	//空指针不可访问
	//0-255之间的内存编号是系统占用，不可访问
	// *p = 100;

	cout << "p = " << p << endl;


	return 0;
}