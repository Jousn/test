#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 1;
//	int num = i % 2;
//	while (i <= 100)
//	{
//		if (1 == num);
//			printf("%d\n", i);
//			i++;
//	}
//	return 0;
//}

//这是一个简单的加法运算     这是成功的例子
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}


//失败的例子
//int main()
//{
//	int num1 =0;
//	int num2 =0;
//	int sum = num1 + num2;//sum 初始值已经被确认 所以不对
//	scanf("%d%d", &num1, &num2);
//	printf("sum=%d", sum);
//	return 0;
//}
//


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("num1=%d num2=%d", &num1, &num2);//这种语法好像是错误的
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}


//最大值函数
int Max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;

};

int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	int ret = scanf("%d%d", &num1, &num2);
	max = Max(num1, num2);
	printf("%d\n", max);
	return 0;
}












