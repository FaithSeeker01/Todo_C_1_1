#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//%整体宽度.其中小数位数f
	//- 左对齐 默认右对齐
	printf("%7d*%-7.1f=%.1f\n", 3, 0.7, 3 * 0.7);
	printf("%7.1f*%-7.1f=%.2f\n", 3.3, 6.7, 3.3 * 6.7);
	printf("%7.2f*%-7.1f=%.3f\n", 3.33, 66.7, 3.33 * 66.7);
	printf("%7.3f*%-7.1f=%.4f\n", 3.333, 666.7, 3.333 * 666.7);
	printf("%7.4f*%-7.1f=%.5f\n", 3.3333, 6666.7, 3.3333 * 6666.7);
	printf("%7.5f*%-7.1f=%.6f\n", 3.33333, 66666.7, 3.33333 * 66666.7);

	return 0;
}


