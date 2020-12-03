#include <stdio.h>
#include <windows.h>

/*
array：要遍历的2维数组
i：要修改数组每个元素的值
*/
void fun(int (*array)[20][10], int i)
{
	int n, l, row, column;

	row = sizeof(*array)/sizeof((*array)[0]);
	column = sizeof(*array)/sizeof((*array)[0][0])/row;

	for(n=0; n<row; n++)
	{
		for(l=0; l<column; l++)
		{
			(*array)[n][l] = i;
			printf("%d ", (*array)[n][l]);
		}
		putchar('\n');
	}
}

int main(void)
{
	int array[20][10];

	fun(&array, 999);

	printf("\n数据清零中，请等待5秒...\n\n");
	Sleep(5000);

	fun(&array, 0);

	return 0;
}
