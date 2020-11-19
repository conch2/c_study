#include <stdio.h>

int main(void)
{
	int i;
	int array[] = {2020, 2021, 2022, 2023};

	for (i=0; i < (sizeof(array) / sizeof(array[0])); i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n");

	return 0;
}
