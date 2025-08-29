#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    int sum = a+b;
    int sub = a-b;
    int mult = a*b;
    if(s == '+' && q == '=')
    {
        if(sum == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    if(s == '-' && q == '=')
    {
        if(sub == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sub << endl;
        }
    }
    if(s == '*' && q == '=')
    {
        if(mult == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << mult << endl;
        }
    }

    return 0;
}