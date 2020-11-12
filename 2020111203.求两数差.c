#include <stdio.h>

int sun(int, int);

int sun(int a, int b)
{
	return (a-b);
}

int main(void)
{
	printf("%d\n", sun(123, 34));
	return 0;
}
