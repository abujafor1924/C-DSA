#include<iostream>
using namespace std;

int main()
{

    int a=10, b=20,*pa,*pb, temp;
    pa=&a;
    pb=&b;
    cout <<"Before swaping = ";
    cout << "a = " <<a  <<" b = " <<b <<endl;



    /*

    temp=a;
    a=b;
    b=temp;

    */

    temp=*pa;
    *pa=*pb;
    *pb=temp;

    cout <<"after swaping = ";
    cout << "a = " <<a  <<" b = " <<b <<endl;


    return 0;
}
