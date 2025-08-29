#include<stdio.h>
#include<string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        char s[10001];
        scanf("%s", s);
        
        int small_count = 0;
        int capital_count = 0;
        int digit_count = 0;
        int len = strlen(s);
        for (int i = 0; i <len; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                small_count++;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                capital_count++;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                digit_count++;
            }
        }
        printf("%d %d %d\n",capital_count, small_count, digit_count);
    }
    

    return 0;
}