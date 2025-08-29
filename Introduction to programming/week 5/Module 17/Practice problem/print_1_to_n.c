#include<stdio.h>

void one_n(int n)
{
    if(n==0)
    {
        return;
    }
    one_n(n-1);
    printf("%d\n", n);
    
}

int main()
{
    int n;
    scanf("%d", &n);
    one_n(n);

    return 0;
}