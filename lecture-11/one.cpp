
#include<iostream>
#include<cmath>
using namespace std;

void displayArray(int x[]);

int main()
{
    int x[6]= {12,43,23,53,43,8};

    displayArray(x);

    return 0;
}

void displayArray(int x[])
{
    for( int i=0; i<6; i++)
    {
        cout <<x[i] <<endl;
    }

}





