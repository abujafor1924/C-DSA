#include<iostream>
#include<cmath>
using namespace std;

//double digToReadiant(double degree);

int main()
{
    double a, b, c;

    cout <<"Enter Length of Three side : ";
    cin >> a >>b >>c;

    double angleA= acos((b*b+c*c-a*a)/(2*b*c));
    double angleB= acos((a*a+c*c-b*b)/(2*a*c));
    double angleC= acos((a*a+b*b-c*c)/(2*a*b));

    angleA=angleA * 180 /M_PI;
    angleB=angleB * 180 /M_PI;
    angleC=angleC * 180 /M_PI;


    cout <<"Angles of the triangle are : "
<<angleA <<" degree " <<angleB <<" degree " <<angleC <<" degree " <<endl;


    return 0;
}


//double digToReadiant(double degree)
//{
//
//    return degree * M_PI/180;
//}
