#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int year;

    cout<<"Enter is your velid Year : ";
    cin>>year;

    if(year%400==0||(year%100!=0&&year%4==0))
    {
        cout<<"This is Leap Year";
    }
    else
    {
        cout<<"is not Leaf Year";
    }





    return 0;
}
