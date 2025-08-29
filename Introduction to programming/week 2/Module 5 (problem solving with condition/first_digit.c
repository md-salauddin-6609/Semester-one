#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int first = x / 1000;
    if(first%2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}