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

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    int is_primary_diagonal = 0;
    int is_secondary_diagonal = 0;
    if (n == n) // this is diagonal matrix;
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    is_primary_diagonal += a[i][j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i+j == n-1)
                {
                    is_secondary_diagonal += a[i][j];
                }
            }
        }
    }

    int difference = is_primary_diagonal-is_secondary_diagonal;
    printf("%d", abs(difference));
    return 0;
}