#include <stdio.h>

long long int sum_rec(int ar[], int n, int idx)
{
    if (idx == n)
    {
        return 0;
    }
    long long int sum = sum_rec(ar, n, idx+1);
    return ar[idx]+sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    long long int total = sum_rec(ar, n, 0);

    printf("%lld", total);
    return 0;
}