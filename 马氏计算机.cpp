#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
    printf("|------ ���ϼ����� ------|\n");
    printf("|-------�� 1.�� ��------|\n");
    printf("|-------�� 2.�� ��------|\n");
    printf("|-------�� 3.�� ��------|\n");
    printf("|-------�� 4.�� ��------|\n");
    printf("|------ �� 0.�˳���-----|\n");
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
    double(*p[5])(double, double) = { NULL, Add, Sub, Mul, Div };//����ָ������!
    int input = 0;
    do
    {
        printf("������˵����������֣�ѡ����Ҫʹ�õļ��㷽��\n������:");
        scanf("%d", &input);
        if (input >= 1 && input <= 4)
        {
            double x = 0.0, y = 0.0;
            printf("\n\n�������������֣��ո���������س���ȷ��\n������:");

            scanf("%lf %lf", &x, &y);
            double ret = (*p[input])(x, y);//�±�����
            printf("���� = %.1f\n", ret);
            printf("-------\n");
        }
        else if (input == 0)
        {
            printf("Exit�˳�\n����ѡ���˳����밴�κμ�����");
            break;
        }
        else
        {
            printf("���������ֲ��ڷ�Χ֮��,����������!\n");
        }
    } while (input);
    return 0;
}