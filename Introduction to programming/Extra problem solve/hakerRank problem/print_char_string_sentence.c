#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    
    char s[100];
    scanf("%s", s);
    getchar();


    char sen[100];
    fgets(sen, 100, stdin);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}