#include<stdio.h>

void even(int a[], int n, int idx)
{
    if(idx == n)
    {
        return;
    }
    even(a, n, idx+1);
    if(a[idx]>0 && a[idx]%2==0)
    {
        printf("%d ", idx);
    }
    
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
    
    even(a, n, 0);

    return 0;
}