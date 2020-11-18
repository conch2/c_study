#include <stdio.h>

int fruion(int x)
{
	if (x < 1)
		return x;
	else if (x <= 1 && x <10)
		return (2*x - 1);
	else 
		return (3*x - 11);
}

int main(void)
{
	int x;

	printf("请输入x："), scanf("%d", &x);

	printf("执行函数后的结果是：%d\n", fruion(x));

	return 0;
}
