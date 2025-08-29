#include<stdio.h>
#include<limits.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int min = INT_MAX;
    for (int i = 0; i < x; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        // printf("%d ", arr[i]);
    }
    printf("%d", min);

    return 0;
}