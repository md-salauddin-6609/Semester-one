#include<stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    for(int i = 0; i<len_a; i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);

    return 0;
}