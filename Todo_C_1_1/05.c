#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	double r = 0.0;
	double s = 0.0;
	double v = 0.0;
	printf("输入球的半径：");
	scanf("%lf", &r);
	
	s = 4 * 3.14 * pow(r, 2);
	v = 4.0 / 3 * 3.14 * pow(r, 3);
	printf("球的表面积为：%.2f，体积为：%.2f", s, v);

	return 0;
}
