#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//方法一
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (1 == i % 2)
			printf("%d ", i);
		i++;
	}
	return 0;
}
//方法二
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (0 != i % 2)
			printf("%d ", i);
		i++;
	}
	return 0;
}
//判断一个数是不是姬数
//为什么不可以三目操作符呢？
int main()
{
	int i = 0;
	scanf("%d\n", &i);
	char a = ( i% 2 == 0?"是":"不是");
	printf("%c", a);
	return 0;
}


//seitch 语句
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}
	return 0;
}


int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("workday\n");
		break;
	case 6:
	case 7:
		printf("weekday\n");
		break;
	default:
		printf("输入错误\n");
	}
	return 0;
}



//这个代码不可以,哭了
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			i++;
			continue;
		if (i == 6)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}

//把i++  提前
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		continue;//要有逻辑关系，跳出回到循环
		if (i == 8)
			break;
		printf("%d ", i);
	}
	return 0;
}