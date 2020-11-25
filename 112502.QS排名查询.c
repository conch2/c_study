#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	if (num == 1)
		printf("麻省理工学院 United States 5+ QS Stars\n");
	else if (num == 2)
		printf("斯坦福大学 United States 5 QS Stars\n");
	else if (num == 3)
		printf("哈佛大学 United States\n");
	else if (num == 4)
		printf("加州理工大学（Caltech) United States\n");
	else if (num == 5)
		printf("牛津大学 United Kingdom\n");
	else if (num == 6)
		printf("苏黎世联邦理工大学（瑞士联邦理工学院） Switzerland\n");
	else if (num == 7)
		printf("剑桥大学 United Kingdom\n");
	else if (num == 8)
		printf("帝国理工学院 United Kingdom\n");
	else if (num == 9)
		printf("芝加哥大学 United States\n");
	else if (num == 10)
		printf("伦敦大学学院 United Kingdom\n");
	else
		printf("老铁的排名太靠后了，请输入1-10\n");

	return 0;
}
