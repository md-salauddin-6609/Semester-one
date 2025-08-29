
//no return+parameter
// #include<stdio.h>

// void even_num(int n)
// {

//     if(n%2==0)
//     {
//         printf("Even--> %d\n", n);
//     }
//     else
//     {
//         printf("Odd--> %d\n", n);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     even_num(n);

//     return 0;
// }



//no return + no parameter
// #include<stdio.h>
// void even_odd()
// {
//     int n;
//     scanf("%d", &n);
//     if(n%2 == 0)
//     {
//         printf("Even");
//     }
//     else
//     {
//         printf("Odd");
//     }
// }
// int main()
// {
//     even_odd();

//     return 0;
// }


//retrun + parameter;
// #include<stdio.h>

// int evenOdd(int n)
// {
//     if(n%2 == 0)
//     {
//         printf("even");
//     }
//     else
//     {
//         printf("odd");
//     }
//     return n;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     evenOdd(n);
//     return 0;
// }


//return + no parameter;
#include<stdio.h>
int even_odd()
{
    int n;
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return n;
}
int main()
{
    
    even_odd();
    return 0;
}