#include <stdio.h>
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

    int last_row = n - 1;
    for (int i = 0; i < m; i++)
    {
        printf("%d ", matrix[last_row][i]);
    }
    printf("\n");

    int last_column = m - 1;
    for (int j = 0; j < n; j++)
    {
        printf("%d ", matrix[j][last_column]);
    }
    printf("\n");

    return 0;
}