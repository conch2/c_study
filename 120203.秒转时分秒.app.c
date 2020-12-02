#include <stdio.h>

int main(void)
{
	int s=0, m=0, h=0;

	printf("请输入秒数：");
	scanf("%d", &s);

	h = s / 3600;

	if (h > 23)
	{
		printf("输入错误\n");
		return 0;
	}

	m = s / 60 % 60;
	s %= 60;

	printf("%02d:%02d:%02d\n", h, m, s);

	return 0;
}
