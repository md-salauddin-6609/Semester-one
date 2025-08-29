#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        long long int m, a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);
        long long int mul = a * b * c;
        long long int res = m / mul;
        if(m % mul == 0)
        {
            printf("%lld\n", res);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}