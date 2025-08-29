#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string result = "";
    
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (char c : s)
    {
        c = toupper(c);
        if (c == 'E' || c == 'G' || c == 'Y' || c == 'P' || c == 'T')
        {
            result += c;
        }
    }
    
    for (char c2: result)
    {
        if(c2 == 'E')
        {
            e++;
        }
        else if(c2 == 'G')
        {
            g++;
        }
        else if(c2 == 'Y')
        {
            y++;
        }
        else if(c2 == 'P')
        {
            p++;
        }
        else if(c2 == 'T')
        {
            t++;
        }
    }
    int count_final = min({e, g, y, p, t});
    cout << count_final;
    return 0;
}