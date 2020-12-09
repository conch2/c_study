#include <stdio.h>

int main(void)
{
	int row, colunm;
	int i=1;
	//除了初始化的元素其他元素自动赋值为0
	int array[19][20]={0};

	for(row=0;row<19;row++)
	{
		for(colunm=0;colunm<20;colunm++)
		{
			array[row][colunm] = i++;
			//array[row][colunm]=row*10+colunm + 1;
			printf("%d ", array[row][colunm]);
		}
		putchar('\n');
	}

	return 0;
}
