#include<stdio.h>
#include<string.h>

int main(void)
{
	char array1[]="干饭人干饭魂，干饭都是人上人";
	char array2[]="干饭人干饭魂，干饭都是人上人";

	if(!strcmp(array1, array2))
		printf("两个字符串是相同的。\n");
	else 
		printf("两个字符串是不相同的。\n");

	return 0;
}
