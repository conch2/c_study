#include <stdio.h>

int main(void)
{
	int num, i, j, m, arr[3]={0};

	printf("输入1：[0-1024]的奇数\n输入2：[0-1024]的偶数\n");
	printf("输入3：升序排序\n输入4：降序排序  ：");
	scanf("%d", &num);
	// 判断是第几题
	if (num < 3 && num >0)
	{
		for (i=0; i < 1025; i++)
		{
			// 判断用户是要输出奇数还是偶数
			if (i%2 && num == 1)  //  奇数判断
			{
				printf("%d\n", i);
			} else if (!(i%2) && num == 2)  // 偶数判断
				printf("%d\n", i);
		}
	} else
	{
		printf("请输入三个数并用空格分开，例如：1 2 3：\n");
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		for (i=0; i<3;i++)
		{
			for (j=i+1; j<3;j++)
			{
				// 升序排序
				if(arr[i] > arr[j] && num==3)
				{
					// 交换数据
					m = arr[i];
					arr[i] = arr[j];
					arr[j] = m;
				} 
				// 降序排序
				else if (arr[i] < arr[j] && num==4)
				{
					// 交换数据
					m = arr[i];
					arr[i] = arr[j];
					arr[j] = m;
				}
			}
		}

		// 输出
		for (i=0;i<3;i++)
		{
			printf("%d ", arr[i]);

		}
	}
	return 0;
}
