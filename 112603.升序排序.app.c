#include <stdio.h>

int main()
{
	int i, j, m, arr[3];
	printf("请输入三个数并用空格分开，例如：1 2 3：");
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	for (i=0; i<3;i++)
	{
		for (j=i+1; j<3;j++)
		{
			if(arr[i] > arr[j])
			{
				m = arr[i];
				arr[i] = arr[j];
				arr[j] = m;
			}
		}
	}

	for (i=0;i<3;i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}
