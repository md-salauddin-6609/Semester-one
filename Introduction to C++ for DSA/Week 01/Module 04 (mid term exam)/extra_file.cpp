#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int len = s.length();
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')
            {
                temp = temp + s[i];
            }
        }
        sort(temp.begin(), temp.end());
        cout << temp << endl;
    }
    


    return 0;
}