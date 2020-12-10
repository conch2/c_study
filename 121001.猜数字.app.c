#include<stdio.h>
#include<string.h>

int main(void)
{
	int i=17, j=10, num;
	char array[257];

	while(1)
	{
		printf("今天你是谁：");
		scanf("%s", &array);

		if(!strcmp(array, "干饭人"))
		{
			while(j != 0)
			{
				printf("你还有%d次机会，请输入数字：", j);
				scanf("%d", &num);
				if(i == num)
				{
					printf("\n恭喜你猜对了！\n\n");
					break;
				}
				else if(i < num)
					printf("你猜大了\n");
				else 
					printf("你猜小了\n");
				j--;
			}
			if(!j)
				printf("\n噢，看来你今天不太走运。\n\n正确答案是%d\n\n", i);
			break;
		}
		else 
			printf("\n指令错误！\n\n");
	}

	return 0;
}
