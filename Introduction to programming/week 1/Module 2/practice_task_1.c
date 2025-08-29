#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("The number is Even: %d", num);
    }
    else
    {
        printf("The number is Odd: %d", num);
    }

    return 0;
}