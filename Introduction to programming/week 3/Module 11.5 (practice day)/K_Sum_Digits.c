#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);

    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%s\n", s[i]);
        count++;
    }
    printf("%d", count);

    return 0;
}