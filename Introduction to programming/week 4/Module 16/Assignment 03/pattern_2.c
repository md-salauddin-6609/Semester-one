#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for(int k=space; k>=1; k--)
        {
            printf(" ");
        }
        space--;
        for (int j = 1; j <= i; j++)
        {
            // printf("%d", j);
            printf("%d", (i-j+1));
        }
        printf("\n");
    }

    return 0;
}