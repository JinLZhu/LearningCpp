#include <iostream>
using namespace std;

int main43()
{
	//��ֻС������أ��ҳ����ص�һֻ
	int pig_weight[5] = { 300,350,200,400,250 };
	int max_weight = pig_weight[0];
	int i = 0;

	for (i; i < (end(pig_weight) - begin(pig_weight)); i++) {
		if (max_weight <= pig_weight[i]) {
			max_weight = pig_weight[i];
		}
	}

	cout << "���ص�С�������ǣ�" << max_weight << endl;

	return 0;
}