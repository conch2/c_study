#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, j, i;
	// 设置随机因子
	srand(time(NULL));

	num = rand() % 100;

	printf("--------小霸王猜数字--------\n\n");
	printf("请输入0-100的数\n\n");

	for (j=0; j < 10; j++)
	{
		printf("请输入(你还有%d次机会)：", 10-j), scanf("%d", &i);

		if (i == num)
		{
			printf("\n恭喜你猜对了！\n\n");
			return 0;
		} else if (i < num)
			printf("你猜小了！\n");
		else
			printf("你猜大了！\n");
	}

	printf("哈哈，没猜出来吗？我告诉你吧，答案是：%d\n", num);

	return 0;
}
