#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main07()
{
	int n = 0;
	printf("������һ����λ����");
	scanf("%d", &n);
	n = n * 1000 + n;
	printf("������Ϊ��%d\n", n);

	printf("������Ϊ��%d", n / 7 / 11 / 13);

	return 0;
}