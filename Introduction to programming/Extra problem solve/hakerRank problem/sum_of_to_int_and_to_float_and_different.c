#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float x, y;
    scanf("%f %f", &x, &y);

    int sum_int = a + b;
    int different_int = a - b;

    float sum_float = x + y;
    float different_float = x - y;

    printf("%d %d\n", sum_int, different_int);
    printf("%.1f %.1f\n", sum_float, different_float);

    return 0;
}