#include <iostream>
using namespace std;

int main39() 
{
	//continue���
	int i = 0;
	for (i; i < 11; i++) {
		if (i % 2 == 0){
			continue;
		}

		cout << "i = " << i << endl;
	}


	return 0;
}