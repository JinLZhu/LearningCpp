#include <iostream>
using namespace std;

int main60()
{
	//����ָ����������е�Ԫ��
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int* ptr = arr;		//arr����������׵�ַ
	int arr_Len= 0;
	arr_Len = sizeof(arr) / sizeof(int);
	cout << "ѭ��������" << arr_Len << endl;
	cout << endl;

	//for (int i = 0; i <= arr_Len; ++i) {		//i = 10ʱ��ָ�����
	for (int i = 0; i < arr_Len; ++i) {
		cout << "��" << i << "��Ԫ�أ�" << *ptr << endl;
		++ptr;		//ָ�����ƫ��4���ֽ�
	}

	return 0;
}