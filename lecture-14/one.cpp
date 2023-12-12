#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


class student
{
public:
    int sID;
    string sName;
    double sCgp;
    // function value
    void setvalue(int sID, string sName, double sCgp);
    void getValue();
};


void student :: setvalue(int sID, string sName, double sCgp)
{

    this -> sID= sID;
    this -> sName=sName;
    this -> sCgp=sCgp;
};



void student :: getValue()
{

    cout <<left <<setw(7) <<"ID : " <<sID <<endl;
    cout <<left <<setw(7) <<"Name : " <<sName <<endl;
    cout <<left <<setw(7) <<"Gpa : " <<sCgp <<endl;
    cout <<endl;
    cout  <<"---------------------------- "  <<endl;

};


int main()
{

    student s1;
    s1.setvalue(1001,"abdullah",3.55);
    s1.getValue();

    // function value
    return 0;
}
