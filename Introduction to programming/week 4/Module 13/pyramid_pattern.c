#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)  //for printing lines
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <=star; j++)  // for printing star
        {
            printf("*");
        }
        printf("\n");
        star+=2;

    }
    

    return 0;
}