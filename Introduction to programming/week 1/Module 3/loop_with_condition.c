// #include<stdio.h>
// int main()
// {
//     int n = 14;
    
//     if(n % 2 == 0)
//     {
//         printf("Even number");
//     }
//     else
//     {
//         printf("Odd number");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    for(int i = 1; i<=15; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d -Even\n", i);
        }
        else
        {
            printf("%d -Odd\n", i);
        }
    }
}