#include<iostream>
#include<iomanip>
using namespace std;


int x=100;  // global variable

int main()
{
    int x=10;// local variable
    {   // block carly baket is block scop
        cout <<x <<endl;
    }
    {
        int x=20;  // local variable
        cout <<x <<endl;
    }
    {
        int x=200;
        cout <<::x <<endl; //100 //scop resulation use for use gloval variable
    }
    cout <<x <<endl;


    return 0;
}

