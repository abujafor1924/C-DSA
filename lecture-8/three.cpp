#include<iostream>
#include<cmath>

using namespace std;



int main()
{

    int n,*pn;
    cout <<"Enter of n = ";
    cin >> n;
    pn=&n;
    cout<<" value of pointer = " << pow(*pn,2) <<endl;
    cout<<" value of normal = " << pow(n,2) <<endl;





    return 0;
}
