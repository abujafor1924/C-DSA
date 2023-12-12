#include <iostream>
#include <cmath>

using namespace std;


double calculetArea(double sid1, double sid2, double sid3)
{
    double s= (sid1+sid2+sid3)/2;
    double area=sqrt(s*(s-sid1)*(s-sid2)*(s-sid3));
    return area;
}

int main()
{
    double sid1,sid2,sid3;

    cout <<"Enter First sid : " ;
    cin >>sid1;

    cout <<"Enter second sid : " ;
    cin >>sid2;

    cout <<"Enter Third sid : " ;
    cin >>sid3;

    if(sid1+sid2>sid3&&sid1+sid3>sid2&&sid2+sid3>sid1)
    {
        double area=calculetArea(sid1,sid2,sid3);
        cout << "The area of the triangle is: " << area << endl;
    }
    else
    {

    cout << "Invalid input. The given sides do not form a valid triangle." << endl;
    }

    return 0;
}
