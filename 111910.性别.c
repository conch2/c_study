#include <stdio.h>

int main(void)
{
	int num;

	printf("请输入一个数字 0 或 1：");
	scanf("%d", &num);

	if (num != 0 || num != 1)
	{
		printf("输入有误！\n");
		return 0;
	}
	
	// 使用三目运算
	printf("%s\n", num? "男" : "女");

	return 0;
}
