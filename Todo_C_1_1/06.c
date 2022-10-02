#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n, m;
	printf("请输入四位数值：");
	scanf("%d", &n);
	//算法：取数位上的数字
	//1234/1000 = 1
	//1234%1000/100 = 2
	//1234%100/10 = 3
	//1234%10 = 4
	int q, b, s, g;
	q = n / 1000;
	b = n % 1000  / 100;
	s = n % 100 / 10;
	g = n % 10;
	m = g * 1000 + s * 100 + b * 10 + q;
	printf("%d%d", n, m);

	return 0;
}
