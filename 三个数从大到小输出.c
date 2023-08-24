#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("请输入三个数，以空格键隔开，回车键确认\n请输入：");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c)
		printf("这三个数排列后从大到小结果为：%d %d %d", a, b, c);
	else if (a >= c && c >= b)
		printf("这三个数排列后从大到小结果为：%d %d %d", a, c, b);
	else if (b >= a && a >= c)
		printf("这三个数排列后从大到小结果为：%d %d %d", b, a, c);
	else if (b >= c && c >= a)
		printf("这三个数排列后从大到小结果为：%d %d %d", b, c, a);
	else if (c >= a && a >= b)
		printf("这三个数排列后从大到小结果为：%d %d %d", c, a, b);
	else if (c >= b && b >= a)
		printf("这三个数排列后从大到小结果为：%d %d %d\n", c, b, a);
	printf("\n--------感谢您的使用，欢迎下次再来！--------\n");

	return 0;
}