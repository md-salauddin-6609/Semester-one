#include<stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);
    int max = 0;
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d", max);

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int mx = 0;
//     for(int i = 1; i<=n; i++)
//     {
//         int val;
//         scanf("%d", &val);
//         if(val > mx)
//         {
//             mx = val;
//         }
//     }
//     printf("%d", mx);

//     return 0;
// }