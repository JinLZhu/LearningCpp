#include <iostream>
using namespace std;

int main56()
{
	int a = 100;
	int* p = &a;

	//x86下，所有数据类型均为4字节，x64下，均为8字节
	cout << "p占用空间：" << sizeof(p) << endl;
	cout << "int * 占用空间：" << sizeof(int *) << endl;
	cout << "float * 占用空间：" << sizeof(float *) << endl;
	cout << "double * 占用空间：" << sizeof(double *) << endl;
	cout << "char * 占用空间：" << sizeof(char *) << endl;

	return 0;
}