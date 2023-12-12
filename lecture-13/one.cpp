#include<iostream>
#include<iomanip>
using namespace std;


class student
{
public:
    int sID;
    string sName;
    double sCgp;
    void setValue(int x, string y, double z);
    void display();
};


void student::display()
{
    cout << left <<setw(6) << "ID :" <<sID <<endl;
    cout << left <<setw(6) << "Name :" <<sName <<endl;
    cout << left <<setw(6) << "Gpa :" <<sCgp <<endl;
    cout <<  "-----------------"  <<endl;
};

 void student :: setValue(int x, string y, double z){
    sID=x;
    sName=y;
    sCgp=z;
 }

int main()
{

    student s1;
    s1.setValue(1001,"Abdullah",3.55);
    s1.display();

    student s2;
    s2.setValue(1002,"Abdullah mojumder",3.65);
    s2.display();




    return 0;

}
