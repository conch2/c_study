#include <stdio.h>

int main(void)
{
	int a=3, b=4, c=5;
	int x, y;

	printf("%s\n", (a+b>c && b==c)? "True" : "False");

	a=3, b=4, c=5;
	printf("%s\n", (a || b+c && b-c)? "True" : "False");

	a=3, b=4, c=5;
	printf("%s\n", (!(a>b) && !c || 1)? "True" : "False");

	a=3, b=4, c=5;
	printf("%s\n", (!(x=a) && (y=b) && 0)? "True" : "False");

	a=3, b=4, c=5;
	printf("%s\n", (!(a+b)+c-1 && b+c/2)? "True" : "False");

	return 0;
}
