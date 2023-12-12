#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    double number;
    cout <<"Enter a number : ";
    cin>>number;

    double sqrtRoot = sqrt(number);
    int nearistInt=static_cast<int>(round(sqrtRoot));//static_cast<int> ensuring for integar.
    cout <<" Nearist Integer of squar Root is : " <<nearistInt <<endl;

    return 0;
}
