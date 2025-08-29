#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);

    int a = 0, b = strlen(s)-1;
    int palindrome = 1;
    while (a<b)
    {
        if(s[a] != s[b])
        {
            palindrome = 0;
            break;
        }
        a++;
        b--;
    }
    if(palindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    

    return 0;
}