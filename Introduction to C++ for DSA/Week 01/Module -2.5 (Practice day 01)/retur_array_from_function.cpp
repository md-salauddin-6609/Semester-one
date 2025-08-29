#include <bits/stdc++.h>
using namespace std;
int *get_arry(int n)
{

    int* a = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *get_arr = get_arry(n);
    for (int i = 0; i < n; i++)
    {
        cout << get_arr[i] << " ";
    }
    return 0;
}