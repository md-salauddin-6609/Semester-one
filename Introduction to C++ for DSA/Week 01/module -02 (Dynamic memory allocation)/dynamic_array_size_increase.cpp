#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[3];  //static array;
    int *a = new int[3];    //dynamic array;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // int b[5];   //static array
    int *b = new int[5];    //dynamic array;
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    b[3] = 4;
    b[4] = 5;
    delete[] a;     //delete array of a;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}