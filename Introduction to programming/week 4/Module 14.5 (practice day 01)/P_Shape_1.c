// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int star_count = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=star_count; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star_count--;
        
//     }
    
//     return 0;
// }


#include<stdio.h>
void patter(int n)
{
    int count = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            printf("*");
        }
        printf("\n");
        count--;
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    patter(n);
    return 0;
}