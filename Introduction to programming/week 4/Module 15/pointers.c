#include<stdio.h>
int main()
{
    int x = 10;
    printf("x value--> %d\n", x);
    int* ptr;
    ptr = &x;
    printf("x address--> %p\n", ptr);
    printf("ptr address--> %p\n", &ptr);
    printf("dereference value--> %d", *ptr);


    return 0;
}