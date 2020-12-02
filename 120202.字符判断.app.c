#include <stdio.h>

int main(void)
{
	char c;

	printf("点击Esc退出\n\n");

	while(c != 27)
	{
		c = getch();
		switch(c)
		{
			case 'A':
			case 'a':
				printf("你在点击左键\n"); break;
			case 'W':
			case 'w':
				printf("你在点击上键\n"); break;
			case 'S':
			case 's':
				printf("你在点击下键\n"); break;
			case 'D':
			case 'd':
				printf("你在点击右键\n"); break;
			default :
				printf("你在点击%c键\n", c);
		}
	}

	return 0;
}
