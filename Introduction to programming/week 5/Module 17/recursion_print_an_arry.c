#include<stdio.h>


void print_arry(int a[], int n, int idx)
{
    if(idx==n)
    {
        return;
    }
    printf("%d\n", a[idx]);
    print_arry(a,n,idx+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    

    print_arry(a, n, 0);

    return 0;
}