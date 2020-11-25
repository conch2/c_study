#include <stdio.h>
#include <windows.h>

int main()
{
	int i;
	
	system("pause");

	for (i = 1; ;i++)
	{
		Sleep(1000);
		printf("现在是第 %d 秒。\n", i);
	}

	return 0;
}
