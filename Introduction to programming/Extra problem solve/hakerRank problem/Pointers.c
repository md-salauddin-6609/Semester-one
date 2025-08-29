#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d\n %d\n", &a, &b);

    int temp1 = a;
    int temp2 = b;
    a = a + b;
    b = temp1 - b;

    printf("%d\n", a);
    printf("%d", abs(b));

    return 0;
}