#include <stdio.h>

int make(void);

int make(void)
{
	return 1234;
}

int main(void)
{
	printf("The make return is %d\n", make());
	return 0;
}
