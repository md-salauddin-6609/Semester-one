#include<stdio.h>

void fun(int x)
{
    x = 20;
    printf("fun function er address: %d\n", &x);
}

int main()
{
    int x = 10;
    fun(x);
    // printf("%d", x);
    printf("main function er address: %d\n", &x);

    return 0;
}