#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int f = num/10;
    int s = num%10;

    if(f%s == 0 || s%f== 0)