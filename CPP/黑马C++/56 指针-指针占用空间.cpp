#include <iostream>
using namespace std;

int main56()
{
	int a = 100;
	int* p = &a;

	//x86�£������������;�Ϊ4�ֽڣ�x64�£���Ϊ8�ֽ�
	cout << "pռ�ÿռ䣺" << sizeof(p) << endl;
	cout << "int * ռ�ÿռ䣺" << sizeof(int *) << endl;
	cout << "float * ռ�ÿռ䣺" << sizeof(float *) << endl;
	cout << "double * ռ�ÿռ䣺" << sizeof(double *) << endl;
	cout << "char * ռ�ÿռ䣺" << sizeof(char *) << endl;

	return 0;
}