#include <stdio.h>

int main(void)
{
	int row, colunm;
	//int i=90;
	int array[9][10]={0};

	for(row=0;row<9;row++)
	{
		for(colunm=0;colunm<10;colunm++)
		{
			//array[row][colunm] = i--;
			array[row][colunm]=(8-row)*10+(9-colunm) + 1;
			printf("%-2d ", array[row][colunm]);
		}
		putchar('\n');
	}

	return 0;
}
