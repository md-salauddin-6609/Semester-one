#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        string s, x;
        cin >> s;
        cin >> x;
        while(s.find(x) != string :: npos)
        {
            s.replace(s.find(x), x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}