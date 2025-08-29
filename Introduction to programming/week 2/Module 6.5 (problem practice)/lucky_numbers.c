#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int f = num/10;
    int s = num%10;

    if(s%f== 0 || f%s == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

    return 0;
}