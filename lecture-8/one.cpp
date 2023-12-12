#include<iostream>
using namespace std;

int main(){


int a,b,sum,*pa,*pb;
cout <<"Enter a value a & b = ";
cin >> a >> b;
pa=&a;
pb=&b;
sum= *pa + *pb ;
cout <<"total pointer + value: " << sum <<endl;

return 0;
}
