#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("��������������Կո���������س���ȷ��\n�����룺");
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int i = (a + b + c + d + e) / 5;
	printf("���������ƽ����Ϊ��%d\n", i);

	return 0;
}