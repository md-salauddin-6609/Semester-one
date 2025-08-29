#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = 0, max = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
        if (a[i] > a[max])
        {
            max = i;
        }
    }

    swap(a[min], a[max]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}