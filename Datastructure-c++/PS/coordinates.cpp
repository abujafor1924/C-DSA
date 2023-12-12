#include<iostream>
#include<cmath>
using namespace std;

double calculetArea(double x1,double y1,double x2 , double y2, double x3, double y3)
{
    return 0.5* abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
}

int main()
{
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of vertex 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of vertex 2 (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of vertex 3 (x3 y3): ";
    cin >> x3 >> y3;


    double area=calculetArea(x1,y1,x2,y2,x3,y3);
     cout << "The area of the triangle is: " << area << endl;



    return 0;
}

