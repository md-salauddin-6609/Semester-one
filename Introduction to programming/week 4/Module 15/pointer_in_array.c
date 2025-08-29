#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);

    printf("%p\n", a);
    printf("%d\n", *a);

    *a = 100;
    printf("%d\n", *a);
    return 0;
}