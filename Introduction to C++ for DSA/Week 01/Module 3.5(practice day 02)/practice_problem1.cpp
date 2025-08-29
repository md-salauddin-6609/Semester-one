#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;


    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }

};

int main()
{
    Student salman("salman", 5, 'A', 80, 9);
    Student atiq("atiq", 10, 'A', 90, 9);
    Student solim("solim", 15, 'A', 95, 9);
   if(salman.math_marks > atiq.math_marks && salman.math_marks > solim.math_marks)
   {
    cout << salman.name;
   }
   else if(atiq.math_marks > salman.math_marks && atiq.math_marks > solim.math_marks)
   {
    cout << atiq.name;
   }
   else if(solim.math_marks > salman.math_marks && solim.math_marks > atiq.math_marks)
   {
    cout << solim.name;
   }
    return 0;
}