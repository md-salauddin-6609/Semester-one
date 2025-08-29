#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;


    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "Total Mark Of " << name << " " << "=" << " "<< math+english << endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed", 20, 88, 90);
    Student rakib("Rakib Ahmed", 10, 55, 80);
    // cout << sakib.name << endl;
    sakib.total();
    rakib.total();
    return 0;
}