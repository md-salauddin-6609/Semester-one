#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int found = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    found = false;
                }
            }
            else if (i + j == n - 1)
            {
                if (matrix[i][j] != 1)
                {
                    found = false;
                }
            }
            else if (matrix[i][j] != 0)
            {
                found = false;
            }
        }
    }

    if (found)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}