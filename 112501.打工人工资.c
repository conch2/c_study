#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	if (num < 0)
		printf("你花呗还没还\n");
	else if (num <= 100)
		printf("贫困打工人\n");
	else if (num <= 1000)
		printf("普通打工人\n");
	else if (num <= 20000)
		printf("土豪打工人\n");
	else
		printf("程序员\n");
	

	return 0;
}
