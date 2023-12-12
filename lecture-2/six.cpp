#include<iostream>
using namespace std;

int main(){
/*
sizeof
& = adress oparetor
* = pointer oparetor
?: = ternary oparetor
*/

int a,b,l;
cin >> a >>b;

cout <<&a <<endl <<&b <<endl;
cout <<sizeof(a)  <<endl <<sizeof(b)<<endl;
//(a%2==0)?  cout <<"Event Number " : cout <<" Odd Number";

l=(a>b)? a:b;
cout<<l <<endl;






return 0;
}
