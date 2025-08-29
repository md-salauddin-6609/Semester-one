#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        int copy_arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
            copy_arr[i] = ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (copy_arr[i] > copy_arr[j])
                {
                    int tmp = copy_arr[i];
                    copy_arr[i] = copy_arr[j];
                    copy_arr[j] = tmp;
                }
            }
        }

        int c_arr[n];
        for (int i = 0; i < n; i++)
        {
            c_arr[i] = ar[i] - copy_arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int result = abs(c_arr[i]);
            printf("%d ", result);
        }
        printf("\n");
    }
    return 0;
}