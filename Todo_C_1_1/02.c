#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main02()
{	
	int money = 368;//Ǯ��
	printf("368Ԫ�����У�\n");
	
	printf("100Ԫ��Ҫ%d�ţ�", money / 100);
	money %= 100;//��ȡ�������ٴ��
	
	printf("50Ԫ��Ҫ%d�ţ�", money / 50);
	money %= 50;
	
	printf("10Ԫ��Ҫ%d�ţ�", money / 10);
	money %= 10;

	printf("5Ԫ��Ҫ%d�ţ�", money / 5);
	money %= 5;

	printf("1Ԫ��Ҫ%d�ţ�", money / 1);
	money %= 1;

	return 0;
}