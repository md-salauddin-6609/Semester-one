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

    int star2 = n*2 - 1;
    int space2 = 0;
    for (int  i = 1; i <=n; i++)
    {
        for(int j =1; j<=space2; j++ )
        {
            printf(" ");
        }
        space2++;

        for (int j = 1; j <=star2; j++)
        {
            printf("*");
        }
        printf("\n");
        star2-=2;
        
    }
    

    return 0;
}