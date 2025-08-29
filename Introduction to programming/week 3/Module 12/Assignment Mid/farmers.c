#include<stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int howManyDays = m1*d / (m1 + m2);
        int reduceDay = d - howManyDays;
    
        printf("%d\n", reduceDay);
    }
    
    return 0;
}