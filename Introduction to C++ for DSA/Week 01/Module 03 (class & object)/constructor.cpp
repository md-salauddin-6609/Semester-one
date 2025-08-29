#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int clas;
    double gpa;


    Student(int roll, int clas, double gpa)
    {
        this->roll = roll;
        this->clas = clas;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(5, 10, 4.5);
    // Student rahim;
    // rahim.roll = 15;
    // rahim.clas = 9;
    // rahim.gpa = 3.20;

    Student karim(9, 3, 5.00);
    // Student karim;
    // karim.roll = 2;
    // karim.clas = 9;
    // karim.gpa = 5.00;

    cout << rahim.roll << " " << rahim.clas << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.clas << " " << karim.gpa << endl;
    return 0;
}