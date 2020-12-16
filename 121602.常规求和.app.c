#include <stdio.h>

int myFunstion( int num )
{
	int j=0;
	for(; num >=0; num--)
	{
		j+=num;
	}

	return j;
}

int main()
{
	int num;

	printf("请输入一个数：");
	scanf( "%d", &num );
	while( num <= 0 )
	{
		printf( "请输入大于0的数！\n" );
		scanf( "%d", &num );
	}

	printf( "\n %d 的递加结果是 %d \n\n", num, myFunstion( num ) );

	return 0;
}
