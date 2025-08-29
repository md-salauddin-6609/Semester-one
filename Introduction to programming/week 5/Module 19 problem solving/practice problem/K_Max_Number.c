#include <stdio.h>

int max_value(int a[], int n, int idx)
{
    if (idx == n-1)
    {
        return a[idx];
    }

    int big = max_value(a, n, idx + 1);
    if (a[idx]>big)
    {
        return a[idx];
    }
    else
    {
        return big;
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

    int ans = max_value(a, n, 0);
    printf("%d", ans);
    return 0;
}