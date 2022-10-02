#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main04()
{
	int a, b, c, d, t;
	//Ëã·¨£º½»»»Êý×Ö
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("before:A:%d B:%d C:%d D:%d\n", a, b, c, d);
	t = a; a = b; b = t;
	t = c; c = d; d = t;
	printf("after:A:%d B:%d C:%d D:%d\n", a, b, c, d);

	return 0;
}