#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num >= 0)
    {
        printf("The number is Positive: %d", num);
    }
    else
    {
        printf("The number is negative: %d", num);
    }

    return 0;
}