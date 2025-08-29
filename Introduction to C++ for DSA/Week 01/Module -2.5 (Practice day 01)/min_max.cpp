#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int small = min(a, b);
    int final_small = min(small, c);
    int big = max(a, b);
    int final_big = max(big, c);

    cout << final_small << " " << final_big;
    return 0;
}