#include<stdio.h>
int main()
{
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(ar[i]>ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ar[i]);
    }

    



    return 0;
}