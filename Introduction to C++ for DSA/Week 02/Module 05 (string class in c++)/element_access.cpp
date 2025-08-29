#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[0] << endl; //first letter print
    cout << s.at(0) << endl;     // first letter print
    cout << s[s.size()-1] << endl;  // last letter print
    cout << s.back() << endl;   //last letter print
    cout << s.front() << endl;  //first letter print

    return 0;
}