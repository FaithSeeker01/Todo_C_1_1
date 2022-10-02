#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	printf("请输入一个三位数：");
	scanf("%d", &n);
	n = n * 1000 + n;
	printf("运算结果为：%d\n", n);

	printf("运算结果为：%d", n / 7 / 11 / 13);

	return 0;
}
