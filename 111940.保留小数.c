#include <stdio.h>

int main(void)
{
	double num;

	printf("请输入一个小数：");
	scanf("%lf", &num);

	printf("你输入的小数是：%.3lf\n", num);

	return 0;
}
