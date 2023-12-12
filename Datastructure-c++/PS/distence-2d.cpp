#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    double x1,y1;
    cout << "Enter Your First Distence : ";
    cin>>x1 >>y1;

     double x2,y2;
    cout << "Enter Your Second Distence : ";
    cin>>x2 >>y2;

    double result=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout << "Distence is = " <<result <<endl;







    return 0;
}
