#include <stdio.h>

int main(void)
{
	int num;

	printf("请输入一个数字 0 或 1：");
	scanf("%d", &num);

	// 使用三目运算
	printf("%s\n", num? "男" : "女");

	return 0;
}
