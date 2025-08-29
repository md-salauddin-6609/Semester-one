#include<stdio.h>

void change_it(int ar[], int n)
{

} 

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    change_it(&ar, n);

    return 0;
}

//wrong ans: