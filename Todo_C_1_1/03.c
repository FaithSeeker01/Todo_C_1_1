#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main03()
{
	double c = 17.0; //�����¶�
	scanf("%lf", &c);
	double f = 0; //�����¶�
	f = c * 1.8 + 32;
	printf("�����¶ȣ�����%.1f ���ϣ�%.1f", c, f);

	return 0;
}