#include<stdio.h>


int is_palindrome(char s[])
{
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
    return palindrome;
    
}

int main()
{
    char s[1001];
    scanf("%s", s);
    char res = is_palindrome(s);
    if(res == 1)
    {
        printf("Palindrome");
    }
    else if(res == 0)
    {
        printf("Not Palindrome");
    }

    return 0;
}


