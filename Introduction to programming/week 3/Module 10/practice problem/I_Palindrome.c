#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int f = 0, l = strlen(s) - 1;
    int palindrome = 1;

    while (f < l)
    {
        if(f[s] != l[s])
        {
            palindrome = 0;
            break;
        }

        f++;
        l--;
    }

    if(palindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    

    return 0;
}