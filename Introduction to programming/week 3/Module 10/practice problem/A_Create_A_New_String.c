#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    char t[1001];
    scanf("%s", t);
    int len1 = strlen(s);
    int len2 = strlen(t);
    printf("%d %d\n", len1, len2);
    printf("%s %s\n", s, t);

    return 0;
}