#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main03()
{
	double c = 17.0; //摄氏温度
	scanf("%lf", &c);
	double f = 0; //华氏温度
	f = c * 1.8 + 32;
	printf("今天温度：摄氏%.1f 华氏：%.1f", c, f);

	return 0;
}