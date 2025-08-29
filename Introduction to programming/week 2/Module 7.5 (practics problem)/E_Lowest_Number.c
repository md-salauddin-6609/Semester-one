#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lowest = 100000, pos = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<lowest)
        {
            lowest = arr[i];
            pos = i + 1;
        }
    }
    printf("%d %d",lowest, pos);
    

    return 0;
}
