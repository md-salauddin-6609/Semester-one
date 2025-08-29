#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int is_primary = 0;
    int is_secondary = 0 ;
    if (n == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    is_primary += a[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i+j == n-1)
                {
                    is_secondary += a[i][j];
                }
            }
        }
    }

    int sum = is_primary - is_secondary;
    printf("%d", abs(sum));
    return 0;
}