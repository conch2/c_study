/* 学生管理系统
 * 
 * 目前功能：
 *  增加学生
 *  查看全部学生
 *  删除学生
 *  添加学生成绩
 *
 * 作者：
 * QQ：2946859498
 * */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1024  // 内存池的大小

typedef struct Report
{
	int english : 9;
	int mathematics : 9;  // 最高存放（-255~255）的十进制数
} REPORT;

typedef struct Student
{
	unsigned int sex : 1;  // 只能存放0和1
	unsigned int age : 9;
	REPORT report;
	struct Student *next;
	char name[48];
} STUDENT;

STUDENT *pool;           // 内存池
unsigned short conent;   // 用于记录内存池当前的大小
unsigned int num_of_std; // 当前学生数量

void addGredes(STUDENT **);
void reset_sdt(STUDENT **);
void addStudent(STUDENT **);
void delStudent(STUDENT **);
void showStudents(STUDENT *);
short whetherOrNotPrint(STUDENT *, short *);

void reset_sdt(STUDENT **student)  // 重置一个学生
{
	(*student)->sex = 0;
	(*student)->age = 0;
	(*student)->next = NULL;
	memset(&((*student)->report), -1, sizeof(REPORT));
	memset((*student)->name, 0, sizeof((*student)->name));
}

void addStudent(STUDENT **students)   // 增加一个学生
{
	char *str;
	STUDENT *now;
	unsigned int i;

	// 如果内存池中还有空间就在内存池中生成
	if (conent)
	{
		conent--;
		now = pool;
		reset_sdt(&now);
		pool = pool->next;
	} else  // 内存池不为空，申请一个新的内存空间
	{
		now = (STUDENT *)malloc(sizeof(STUDENT));
		if (now == NULL)
		{
			printf("内存分配失败！\n");
			exit(1);
		}
	}

	// 录入信息
	printf("请输入姓名：");
	scanf("%s", now->name);
	printf("请输入性别：");
	scanf("%s", str);
	while (1)
	{
		if (!strcmp(str, "男"))
		{
			now->sex = 1;
			break;
		}
		else if (!strcmp(str, "女"))
		{
			now->sex = 0;
			break;
		} else 
		{
			fprintf(stdout, "请输入一个正确的性别（男、女）");
			scanf("%s", str);
		}
	}
	printf("请输入年龄：");
	scanf("%u", &i), getchar();
	now->age = i;
	memset(&(now->report), -1, sizeof(REPORT));
	fprintf(stdout, "录入学生成功，开始写入内存...\n");

	// 先判断students是否为空，防止踩空
	if (*students != NULL)
	{
		now->next = *students;
		*students = now;
	} else
	{
		*students = now;
		now->next = NULL;
	}

	num_of_std++;  // 当前学生数量自加1
	fprintf(stdout, "成功添加一名学生！\n\n");
}

void showStudents(STUDENT *students)
{
	char s;
	int num = 0, i;
	STUDENT *coent;
	coent = students;
	char *cou[] = {"数学", "英语"}; // 记得对应学科数量

	if (students == NULL)
	{
		fprintf(stdout, "当前系统没有学生，快去添加吧！\n");
		return ;
	}

	printf("是否要显示学生成绩？(Y/N)");
	scanf("%c", &s);
	switch (s)
	{
		case 10:
		case 'y':
		case 'Y':
			i = 1;
			break;
		default :
			i = 0;
			break;
	}
	while (coent != NULL)
	{
		num++;
		fprintf(stdout, "\n学生 %d\n", num);
		fprintf(stdout, "姓名：%s\n", coent->name);
		if (coent->sex)
			fprintf(stdout, "性别：男\n");
		else 
			fprintf(stdout, "性别：女\n");
		fprintf(stdout, "年龄：%u\n", coent->age);
		if (i)
		{
			for (int i=0; i < 2; i++)
			{
				if (coent->report.mathematics < 0)
					printf("还未录入%s的成绩，快去录入吧！\n", cou[i]);
				else 
					printf("%s：%d\n", cou[i], coent->report.mathematics);
			}
		}

		coent = coent->next;
	}

	num_of_std = num;  // 刷新一次学生数量
}

/* 找到要找的学生
 *
 * Iput:
 *  *students: 学生链表
 *  *num: 学生所在的链表位置
 * Return:
 *  是否找到学生，找到返回1，没找到返回0
 * */
short whetherOrNotPrint(STUDENT *students, short *num)
{
	char ca;

	if (students == NULL)
	{
		printf("当前没有学生信息，快去添加吧！\n");
		return 0;
	}

	fprintf(stdout, "是否需要打印一次学生信息？(Y/N) ");
	scanf("%c", &ca);
	switch (ca)
	{
		case 10:
		case 'y':
		case 'Y':
		{
			showStudents(students);
			break;
		}
		default :
			break;
	}

	do
	{
		printf("请输入学生号码：");
		scanf("%hd", num);
	} while(*num == 0 || (*num > num_of_std && *num*(-1) > num_of_std));

	// 支持倒序删除
	if (*num == -1)
	{
		*num = num_of_std + *num + 1;
	}

	return 1;
}

/* 删除学生
 *
 * Input:
 *   **students：指向STUDENT指针的指针，要删除成员的单链表
 * Output: void
 * */
void delStudent(STUDENT **students)
{
	short num;
	STUDENT *cen;
	STUDENT *old;
	old = (cen = *students);

	if (!whetherOrNotPrint(*students, &num))
	{
		return ;
	}

	while (num != 1)
	{
		num--;
		old = cen;
		cen = cen->next;
	}

	// 防止students的头指针被删除
	if (cen != *students)
	{
		old->next = cen->next;
	} else 
	{
		*students = (*students)->next;
	}
	// 内存池没满就丢到内存池中，满了就删除
	if (conent < MAX)
	{
		cen->next = pool;
		pool = cen;
		conent++;
	} else 
	{
		free(cen);
	}

	printf("成功删除一个学生信息！\n");
}

void addGredes(STUDENT **students)
{
	short num;
	STUDENT *coent;
	coent = *students;

	whetherOrNotPrint(*students, &num);

	while (num != 1)
	{
		num--;
		coent = coent->next;
	}

	printf("请输入数学成绩：");
	scanf("%hd", &num);
	coent->report.mathematics = num;
	printf("请输入英语成绩：");
	scanf("%hd", &num);
	coent->report.english = num;
	printf("录入成功！\n");
}

int main(void)
{
	int inp;
	STUDENT *students = NULL;

	fprintf(stdout, "~~~~~~学生管理系统~~~~~~\n");
	fprintf(stdout, "\t1、添加一个学生\n");
	fprintf(stdout, "\t2、查看全部学生\n");
	fprintf(stdout, "\t3、删除一个学生\n");
	fprintf(stdout, "\t4、添加一个学生成绩\n");
	fprintf(stdout, "\t-1、退出系统\n");

	while (inp != -1)
	{
		printf("请输入序号：");
		scanf("%d", &inp), getchar();

		switch (inp)
		{
			case 1:
				addStudent(&students);
				break;
			case 2:
				showStudents(students);
				break;
			case 3:
				delStudent(&students);
				break;
			case 4:
				addGredes(&students);
				break;
			default:
				break;
		}
	}
	return 0;
}
