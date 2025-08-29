#include<stdio.h>
int main()
{
    int x = 10; //variable declare and initialization
    int a[5] = {20, 30, 40, 50, 60}; //array declare and initialization(this is work for fix size arry)
    for(int i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}