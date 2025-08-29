#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n-1;
    int space =0;
    
    for (int i = 1; i <= n; i++)  // for printing lines
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        space++;

        for (int j = 1; j <= star; j++) // for print star
        {
            printf("*");
        }
        
        printf("\n");
        star--;
    }
   

    return 0;
}