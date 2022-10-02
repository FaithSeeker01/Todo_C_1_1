#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{	
	int money = 368;//钱数
	printf("368元，其中：\n");
	
	printf("100元需要%d张，", money / 100);
	money %= 100;//先取余数，再存回
	
	printf("50元需要%d张，", money / 50);
	money %= 50;
	
	printf("10元需要%d张，", money / 10);
	money %= 10;

	printf("5元需要%d张，", money / 5);
	money %= 5;

	printf("1元需要%d张，", money / 1);
	money %= 1;

	return 0;
}
