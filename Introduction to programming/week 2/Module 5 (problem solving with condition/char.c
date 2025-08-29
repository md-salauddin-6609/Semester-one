// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     char x;
//     scanf("%c", &x);
//     char lower = tolower(x);
//     char upper = toupper(x);
//     if(x == lower)
//     {
//         printf("%c", upper);
//     }
//     if(x == upper)
//     {
//         printf("%c", lower);
//     }

//     return 0;
// }



#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("%c", ch);
    }

    return 0;
}