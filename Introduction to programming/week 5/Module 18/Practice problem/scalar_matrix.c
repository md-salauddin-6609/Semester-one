#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 0;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(i==j)
                {
                    printf("%d", a[i][j]);
                }
            }
        }
    }

    // if()
    // {
    //     printf("this is  scalar matrix");
    // }
    // else
    // {
    //     printf("this is not scalar matrix");
    // }
    return 0;
}