#include<iostream>
using namespace std;



int sum(int x=5,int y=7); //defalt argument function


int main()
{

    int r;
    r =sum();
    cout << r <<endl;
    r =sum(2);
    cout << r <<endl;
    r =sum(20,10);
    cout << r <<endl;

    return 0;
}

int sum(int x,int y)
{
    return x+y;
}
