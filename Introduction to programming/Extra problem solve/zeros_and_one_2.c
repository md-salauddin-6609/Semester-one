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
    int m;
    scanf("%d", &m);

    if(ar[m-1] == 0)
    {
        ar[m-1] = 1;
    }
    else
    {
        ar[m-1] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}