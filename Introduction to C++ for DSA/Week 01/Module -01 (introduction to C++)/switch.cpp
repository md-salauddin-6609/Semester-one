#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
        case 1:
            cout << "Saturday\n";
            break;
        case 2:
            cout << "Sunday\n";
            break;
        case 3:
            cout << "monday\n";
            break;
        case 4:
            cout << "tuesday\n";
            break;
        case 5:
            cout << "wednesday\n";
            break;
        case 6:
            cout << "thusday\n";
            break;
        case 7:
            cout << "friday\n";
            break;
        default:
            cout << "Wrong Input\n";
            break;
    }

    return 0;
}