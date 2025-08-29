#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int panjabi = 1000;
    if(n > panjabi)
    {
        printf("I will buy Punjabi\n");
        int remainTk = n - panjabi;
        if(remainTk >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    return 0;
}