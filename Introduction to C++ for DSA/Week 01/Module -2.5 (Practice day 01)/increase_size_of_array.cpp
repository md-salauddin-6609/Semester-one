#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int *c = new int[n+m];

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[n+i] = b[i];
    }
    delete[] a;
    delete[] b;
    
    for (int i = 0; i < m; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}