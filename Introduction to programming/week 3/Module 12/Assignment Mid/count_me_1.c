#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    int divid_1 = 0, divid_2 = 0;
    
    for (int i = 0; i < n; i++)
    {
        // printf("%d", ar[i]);
        if(ar[i]%2==0 && ar[i]%3==0 || ar[i]%2==0)
        {
            divid_1++;
        }
        else if(ar[i]%3==0)
        {
            divid_2++;
        }
        
        
    }
    printf("%d ", divid_1);
    printf("%d", divid_2);

    return 0;
}