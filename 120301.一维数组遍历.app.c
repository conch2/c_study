#include <stdio.h>

int main(void)
{
	int n;
	int array[5] = {1,2,3,4,5};

	for(n=0; n<sizeof(array)/sizeof(array[0]); n++)
	{
		printf("%d ", array[n]);
	}
	putchar('\n');

	return 0;
}
