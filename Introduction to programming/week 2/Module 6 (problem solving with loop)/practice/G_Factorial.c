
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int j = 1; j<=n; j++)
    {
        long long int x;
        scanf("%lld", &x);
        long long int fact = 1;
        for(int i=1; i<=x; i++)
        {
            fact = fact * i;
        }
        printf("%lld\n", fact);
    }
 
    return 0;
}
