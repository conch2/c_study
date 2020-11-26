#include <stdio.h>

int main()
{
	int i;
	for (i=0; i < 1025; i++)
	{
		if (!(i%2))
			printf("%d\n", i);
	}

	return 0;
}
