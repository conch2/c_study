#include<stdio.h>
#include<string.h>

int main(void)
{
	int i;
	char array[257];
	char *str[][2] = 
	{
		{"春节", "饺子"},
		{"端午节", "粽子"},
		{"中秋节", "月饼"},
		{"元宵节", "元宵"}
	};

	printf("欢迎使用吃货小程序，现在是什么节？  ");

	scanf("%s", &array);

	for(i=0; i<4; i++)
	{
		if(!strcmp(array, str[i][0]))
		{
			printf("给我安排%s。\n", str[i][1]);
		}
	}

	return 0;
}
