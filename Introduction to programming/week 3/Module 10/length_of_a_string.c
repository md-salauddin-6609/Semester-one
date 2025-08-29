// #include<stdio.h>
// int main()
// {
//     char s[101];
//     scanf("%s", &s);
//     // printf("%s", s);
//     int count = 0;
//     for (int i = 0; s[i] != '\0' ; i++)  /*count lenth manually*/
//     {
//         count++;
//     }
//     printf("%d", count);

//     return 0;
// }

#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s", &s);
    int sz = strlen(s);         /*count length use build in function*/
    printf("%d", sz);

    return 0;
}