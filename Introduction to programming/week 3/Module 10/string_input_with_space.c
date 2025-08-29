#include<stdio.h>
int main()
{
    char s[20];
    // scanf("%s", &s);      //input string
    // gets(s);             //input string
    fgets(s, 14, stdin);   //input string character stander way
    printf("%s", s);

    return 0;
}