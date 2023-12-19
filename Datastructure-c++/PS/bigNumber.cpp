#include<iostream>
using namespace std;


int main()
{
    int a,b,c;
    cout <<"Enter your First Number : ";
    cin >>a;
    cout <<"Enter your Second Number : ";
    cin >>b;
    cout <<"Enter your Thierd Number : ";
    cin >>c;

    if(a>b&&a>c)
    {
        cout <<a << " is big number then " <<b <<"&" <<c;
    }
    else if(b>a&&b>c)
    {
        cout <<b << " is big number then " <<a <<"&" <<c;
    }
    else
    {
        cout <<c << " is big number then " <<a <<"&" <<b;
    }



    return 0;
}
