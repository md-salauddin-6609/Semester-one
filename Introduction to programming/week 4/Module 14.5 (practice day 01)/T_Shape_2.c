#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n-1;
    int count = 1;
    int star = (n*2) -1;

    for (int i = 1; i <= n; i++)
    {
        for (int j =1; j <=space; j++)
        {
            printf(" ");
        }
        space--;
        
        for (int j = 1; j<=count; j++)
        {
            printf("*");
        }
        printf("\n");
        count+=2;
        star--;
        
    }
    

    return 0;
}