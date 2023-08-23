#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
    printf("|------ 马氏计算器 ------|\n");
    printf("|-------★ 1.加 ★------|\n");
    printf("|-------★ 2.减 ★------|\n");
    printf("|-------★ 3.乘 ★------|\n");
    printf("|-------★ 4.除 ★------|\n");
    printf("|------ ★ 0.退出★-----|\n");
}
double Add(double x, double y)
{
    return x + y;
}
double Sub(double x, double y)
{
    return x - y;
}
double Mul(double x, double y)
{
    return x * y;
}
double Div(double x, double y)
{
    return x / y;
}
int main()
{
    menu();
    double(*p[5])(double, double) = { NULL, Add, Sub, Mul, Div };//函数指针数组!
    int input = 0;
    do
    {
        printf("请输入菜单界面上数字，选择你要使用的计算方法\n请输入:");
        scanf("%d", &input);
        if (input >= 1 && input <= 4)
        {
            double x = 0.0, y = 0.0;
            printf("\n\n请输入两个数字，空格键隔开，回车键确认\n请输入:");

            scanf("%lf %lf", &x, &y);
            double ret = (*p[input])(x, y);//下标引用
            printf("等于 = %.1f\n", ret);
            printf("-------\n");
        }
        else if (input == 0)
        {
            printf("Exit退出\n您已选择退出，请按任何键返回");
            break;
        }
        else
        {
            printf("你输入数字不在范围之内,请重新输入!\n");
        }
    } while (input);
    return 0;
}