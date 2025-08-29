#include <bits/stdc++.h>
using namespace std;

void shift_zero(int *a, int n)
{

    int result[1000];
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            result[idx] = a[i];
            idx++;
        }
    }

    for (int i = idx; i < n; i++)
    {
        result[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    shift_zero(a, n);

    return 0;
}