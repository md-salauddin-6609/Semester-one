#include <bits/stdc++.h>
using namespace std;
void printcharacter(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N;
        char C;
        cin >> N >> C;
        printcharacter(N, C);
    }

    return 0;
}