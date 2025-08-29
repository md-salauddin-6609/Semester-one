#include<stdio.h>


void hello()
{
    printf("Hi");
    hello();
}
int main()
{
    printf("Hello");
    hello();

    return 0;
}