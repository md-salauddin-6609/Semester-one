#include <stdio.h>
#include <limits.h>

void fun(int ar[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (ar[i] > max)
        {
            max = ar[i];
        }
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    printf("%d %d", min, max);
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

    fun(ar, n);

    return 0;
}