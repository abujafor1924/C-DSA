
#include<iostream>
using namespace std;


class student
{
public:
    int sID;
    string sName;
    double sCgpa;
};



int main()
{


    student obj;

    obj.sID = 1001;
    obj.sName = "Abu Jafor";
    obj.sCgpa = 3.65;


    cout << " Student Id : "  <<obj.sID <<endl;
    cout << " Student Name : "  <<obj.sName <<endl;
    cout << " Student Cgpa : "  <<obj.sCgpa <<endl;

    return 0;
}
