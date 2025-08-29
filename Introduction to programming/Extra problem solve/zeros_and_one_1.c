#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    int zeros = 0, one = 0;

    for (int i = 0; i < n; i++)
    {
        if(ar[i] == 0)
        {
            zeros++;
        }
        else
        {
            one++;
        }
    }
    printf("%d %d", zeros, one);

    return 0;
}