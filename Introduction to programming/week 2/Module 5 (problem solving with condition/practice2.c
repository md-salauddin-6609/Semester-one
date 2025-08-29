#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int x = (a*b)-(c*d);
    printf("Difference = %d", x);

    return 0;
}