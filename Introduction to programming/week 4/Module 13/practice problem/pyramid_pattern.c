#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n-1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= star; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        star ++;
    }
    

    return 0;
}