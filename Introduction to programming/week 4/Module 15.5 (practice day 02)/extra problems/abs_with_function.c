#include<stdio.h>
#include<math.h>

int my_abs(int n)
{
    int absulate = abs(n);
    return absulate;
}
int main()
{
    int n;
    scanf("%d", &n);
    int res = my_abs(n);
    printf("%d", res);

    return 0;
}