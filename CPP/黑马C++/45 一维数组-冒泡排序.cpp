#include <iostream>
using namespace std;

int main45()
{
	//√∞≈›≈≈–Ú
	int arr[9] = { 4,2,8,0,5,7,1,3,9 }, i = 0, j = 0, len = 0;
	len = end(arr) - begin(arr);

	cout << "≈≈–Ú«∞£∫";
	for (i = 0; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//≈≈–Ú
	//∑‚◊∞µΩ∫Ø ˝∏¸∫√
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	
	//≈≈–Ú∫Û
	cout << "≈≈–Ú«∞£∫";
	for (i = 0; i < (end(arr) - begin(arr)); i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
