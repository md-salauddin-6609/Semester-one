#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    int mult = x * y;
    int sub = x - y;
    printf("%d + %d = %d\n", x, y, sum);
    printf("%d * %d = %d\n", x, y, mult);
    printf("%d - %d = %d\n", x, y, sub);

    return 0;
}