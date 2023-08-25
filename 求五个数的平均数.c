#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入五个数，以空格键隔开，回车键确认\n请输入：");
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int i = (a + b + c + d + e) / 5;
	printf("这五个数的平均数为：%d\n", i);

	return 0;
}