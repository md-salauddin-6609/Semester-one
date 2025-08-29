// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         printf("%d\n", a[i]);
//     }

//     return 0;
// }



//Reverse way
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}