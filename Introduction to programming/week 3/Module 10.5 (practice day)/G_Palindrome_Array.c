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

    int f = 0, l = n -1;
    int palindrome = 1;
    while (f<l)
    {
        if(arr[f] != arr[l])
        {
            palindrome = 0;
            break;
        }
        f++;
        l--;
    }
    if(palindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    return 0;
}