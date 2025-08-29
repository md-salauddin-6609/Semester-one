#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int line_num = n + 5;
    int speace = line_num - 1;
    int star = 1; // starting with 1 star

    if (n % 2 != 0)
    {
        if (n == 1)
        {

            for (int i = 1; i <= line_num; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 3)
        {

            for (int i = 1; i <= line_num - 1; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 5)
        {

            for (int i = 1; i <= line_num - 2; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 7)
        {

            for (int i = 1; i <= line_num - 3; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 9)
        {

            for (int i = 1; i <= line_num - 4; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 11)
        {

            for (int i = 1; i <= line_num - 5; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 13)
        {

            for (int i = 1; i <= line_num - 6; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 15)
        {

            for (int i = 1; i <= line_num - 7; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 17)
        {

            for (int i = 1; i <= line_num - 8; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 19)
        {

            for (int i = 1; i <= line_num - 9; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }

        if (n == 21)
        {

            for (int i = 1; i <= line_num - 10; i++)
            {
                for (int j = 1; j <= speace; j++)
                {
                    printf(" ");
                }
                speace--;
                for (int j = 1; j <= star; j++)
                {
                    printf("*");
                }
                star += 2;
                printf("\n");
            }
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        int speace = line_num-(n/2)-1;
        for (int i = 0; i < speace; i++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
