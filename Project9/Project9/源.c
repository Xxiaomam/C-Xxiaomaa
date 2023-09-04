#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b && b >= c)
		printf("%d %d %d", a,  b,  c);
	if (a >= c && c >= b)
		printf("%d %d %d", a,  c,  b);


	return 0;
}