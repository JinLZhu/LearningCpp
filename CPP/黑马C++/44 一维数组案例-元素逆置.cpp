#include <iostream>
using namespace std;

int main44()
{
	//��������
	int arr[5] = { 1,3,2,5,4 }, i = 0;
	cout << "ԭ���飺";
	for (i; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i];
	}
	cout << endl;

	//������ʼ��
	int arr_start = 0;
	//���鳤��
	int arr_end = (end(arr) - begin(arr)) - 1;	//end - begin ����Ϊ_int64, ת��Ϊint���ܶ�ʧ����
	int arr_buffer = 0;

	for (i = 0; i < (end(arr) - begin(arr)); i++) {
		if (arr_start == arr_end) {
			break;
		}

		arr_buffer = arr[arr_start];
		arr[arr_start] = arr[arr_end];
		arr[arr_end] = arr_buffer;

		arr_start++;
		arr_end--;
	}

	cout << "�����飺";
	for (i; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i];
	}

	return 0;
}