#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ
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
//������
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
//�ж�һ�����ǲ��Ǽ���
//Ϊʲô��������Ŀ�������أ�
int main()
{
	int i = 0;
	scanf("%d\n", &i);
	char a = ( i% 2 == 0?"��":"����");
	printf("%c", a);
	return 0;
}


//seitch ���
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
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
		printf("�������\n");
	}
	return 0;
}



//������벻����,����
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

//��i++  ��ǰ
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		continue;//Ҫ���߼���ϵ�������ص�ѭ��
		if (i == 8)
			break;
		printf("%d ", i);
	}
	return 0;
}