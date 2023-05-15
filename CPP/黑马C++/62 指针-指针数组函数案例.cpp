#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len)
{
	for (int i = 0; i < len - 1; ++i) {
		for (int j = 0; j < len - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void printArray(int* arr, int len)
{
	int *arrPtr = &arr[0];

	for (int i = 0; i < len; ++i) {
		cout << *arrPtr << endl;
		++arrPtr;
	}
}

int main62()
{
	void bubbleSort(int *arr, int len);
	void printArray(int *arr, int len);

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int arrLen = sizeof(arr) / sizeof(int);
	//cout << arrLen << endl;
	cout << "ÅÅÐòÇ°£º" << endl;
	printArray(arr, arrLen);

	//ÅÅÐò
	bubbleSort(arr, arrLen);

	cout << "ÅÅÐòºó£º" << endl;
	printArray(arr, arrLen);

	return 0;
}