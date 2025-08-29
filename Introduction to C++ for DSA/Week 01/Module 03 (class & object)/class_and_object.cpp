// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//     char name[100];
//     int roll;
//     double gpa;
// };
// int main()
// {
//     Student a, b;
//     //with user input
//     cin >> a.name >> a.roll >> a.gpa;
//     cin >> b.name >> b.roll >> b.gpa;

//     //wothout user input
//     // a.roll = 5;
//     // a.gpa = 5.00;
//     // char temp[100] = "Salauddin";
//     // strcpy(a.name, temp);


//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
//     cout << b.name << " " << b.roll << " " << b.gpa << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a, b;
    //with space & user input
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();   
    //getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;


    
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}
