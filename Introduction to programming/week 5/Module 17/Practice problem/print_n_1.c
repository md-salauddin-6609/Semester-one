#include <stdio.h>

void one_n(int n)
{
    if (n == 1)
    {
      printf("%d", n);
      return;  
        
    }

    
    printf("%d ", n);
    one_n(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    one_n(n);

    return 0;
}