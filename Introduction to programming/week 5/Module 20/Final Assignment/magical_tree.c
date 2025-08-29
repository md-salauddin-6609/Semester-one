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
        int reduce = (n - 1) / 2; 
        for (int i = 1; i <= line_num - reduce; i++)
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


    // second part
    for (int i = 1; i <= 5; i++)
    {
        int speace = line_num - (n / 2) - 1;
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
