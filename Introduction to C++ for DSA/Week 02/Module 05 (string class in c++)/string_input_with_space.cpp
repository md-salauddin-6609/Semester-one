#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s;
    // cin.getline(s, 100) // this is use for char s[100];
    // cin.ignore();
    getline(cin, s); //this is use for built in string function.
    cout << x << endl;
    cout << s << endl;
    return 0;
}