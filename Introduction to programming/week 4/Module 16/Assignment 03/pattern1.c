#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int hash = 1;
    int hash2 = n * 2 - 3;
    int line = 1;

    // first part
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        if (line % 2 == 1)
        {
            for (int k = 1; k <= hash; k++)
            {
                printf("#");
            }
        }
        else
        {
            for (int k = 1; k <= hash; k++)
            {
                printf("-");
            }
        }

        printf("\n");
        hash += 2;
        line++;
    }

    // second part
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        if (line % 2 == 1)
        {
            for (int k = 1; k <= hash2; k++)
            {
                printf("#");
            }
        }
        else
        {
            for (int k = 1; k <= hash2; k++)
            {
                printf("-");
            }
        }

        printf("\n");
        hash2 -= 2;
        line++;
    }

    return 0;
}
