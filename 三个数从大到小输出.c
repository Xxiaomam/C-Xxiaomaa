#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("���������������Կո���������س���ȷ��\n�����룺");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c)
		printf("�����������к�Ӵ�С���Ϊ��%d %d %d", a, b, c);
	else if (a >= c && c >= b)
		printf("�����������к�Ӵ�С���Ϊ��%d %d %d", a, c, b);
	else if (b >= a && a >= c)
		printf("�����������к�Ӵ�С���Ϊ��%d %d %d", b, a, c);
	else if (b >= c && c >= a)
		printf("�����������к�Ӵ�С���Ϊ��%d %d %d", b, c, a);
	else if (c >= a && a >= b)
		printf("�����������к�Ӵ�С���Ϊ��%d %d %d", c, a, b);
	else if (c >= b && b >= a)
		printf("�����������к�Ӵ�С���Ϊ��%d %d %d\n", c, b, a);
	printf("\n--------��л����ʹ�ã���ӭ�´�������--------\n");

	return 0;
}