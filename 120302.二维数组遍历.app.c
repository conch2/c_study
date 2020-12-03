#include <stdio.h>

int main(void)
{
	int n,l;
	int array2d[][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	for(n=0; n<2; n++)
	{
		for(l=0; l<3; l++)
			printf("%d ", array2d[n][l]);
		putchar('\n');
	}

	return 0;
}
