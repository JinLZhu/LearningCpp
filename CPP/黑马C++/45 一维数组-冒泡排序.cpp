#include <iostream>
using namespace std;

int main45()
{
	//ð������
	int arr[9] = { 4,2,8,0,5,7,1,3,9 }, i = 0, j = 0, len = 0;
	len = end(arr) - begin(arr);

	cout << "����ǰ��";
	for (i = 0; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//����
	//��װ����������
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	
	//�����
	cout << "����ǰ��";
	for (i = 0; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
