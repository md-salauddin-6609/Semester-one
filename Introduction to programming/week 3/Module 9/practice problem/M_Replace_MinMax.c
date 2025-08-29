#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=min)
        {
            min = a[i];
        }
        else if(a[i]>=max)
        {
            max = a[i];
        }

    }
    // printf("%d %d\n", max, min);

    int  tmp = max;
    max = min;
    min = tmp;
    // printf("%d %d\n", max, min);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}