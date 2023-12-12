#include<iostream>
using namespace std;

void swapvelue(int *x,int *y);

int main()
{

    int a=10, b=20;
    cout << "Before swaping : ";
    cout << " a " << a <<" b " << b <<endl;
    swapvelue(&a,&b); // actual paramiter
    cout << "After swaping : ";
    cout << " a " << a << " b " << b <<endl;

    return 0;
}


//formal paramiter
void swapvelue(int *x,int *y)
{
    int temp;

    temp=*x;
    *x = *y;
    *y=temp;
}
