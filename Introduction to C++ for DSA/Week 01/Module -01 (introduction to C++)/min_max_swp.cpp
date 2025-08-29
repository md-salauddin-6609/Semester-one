#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    // if(a<b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }
    // cout << min(a,b) << endl;
    // cout << max(a, b) << endl;

    // cout << min({2, 34, 5, 2, 5, 7, 45}) << endl;
    // cout << max({20, 54, 29, 384, 2, 5, 03}) << endl;


    // int temp = a;
    // a = b;
    // b = temp;

    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}