#include <stdio.h>

int main(void)
{
	int salary;

	printf("请输入你的工资：");

	scanf("%d", &salary);

	if (salary >= 0 && salary <= 500)
		printf("赤贫。\n");
	else if (salary > 500 && salary <= 1500)
		printf("贫困。\n");
	else if (salary > 1500 && salary <= 3000)
		printf("普通打工人。\n");
	else if (salary > 3000 && salary <= 5000)
		printf("普通清洁工。\n");
	else if (salary > 5000 && salary <= 12000)
		printf("水电工工资。\n");
	else if (salary > 12000 && salary <= 50000)
		printf("脑袋大脖子粗不是老板就是伙夫。\n");
	else if (salary > 50000)
		printf("程序员。\n");
	else 
		printf("你还有花呗没还，无法使用该程序。\n");

	return 0;
}
