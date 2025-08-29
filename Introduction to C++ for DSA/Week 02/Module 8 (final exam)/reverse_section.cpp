#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id;
    }

    for(int i = 0; i < n/2; i++)
    {
        swap(ar[i].s, ar[n-1-i].s);
    }
    for (int i = 0; i < n; i++)
    {
        
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << endl;
    }
    

    return 0;
}