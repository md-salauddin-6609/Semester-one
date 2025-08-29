#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int half = n / 2;
            cout << abs(even - half) << endl;
        }
    }

    return 0;
}