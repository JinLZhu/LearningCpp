#include <iostream>
using namespace std;

int main59()
{
	//1. const����ָ�롢����ָ��
	int a = 10;
	int b = 10;

	const int *p = &a;
	//ָ��ָ��ֵ���ɱ䣬ָ��ָ��ɱ�

	//*p = 20;  ����
	p = &b; //�ı�ָ��

	//2. const���γ�����ָ�볣��
	//ָ���ָ�򲻿ɱ䣬ָ��ָ���ֵ�ɱ�
	int* const p2 = &a;
	*p2 = 100;
	//p2 = &b;		//����ָ��ָ�򲻿ɱ�

	//3. const����ָ��ͳ���
	const int* const p3 = &a;
	//ָ��ָ��ָ���ֵ�����ɸ�
	// *p3 = 100; // ����
	// p3 = &a;   //����

	return 0;
	
}