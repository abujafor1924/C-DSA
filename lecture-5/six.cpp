#include<iostream>
using namespace std;

void sum();
void sub();
void multiapply();
void div();

int main(){

sum();
sub();
multiapply();
div();

return 0;
}



void sum(){

    int x, y, r;

    cout << " Enter  Two Number: ";
    cin >> x >> y;
    r=x+y;
    cout << "x + y = " <<r <<endl;


}
void sub(){

    int x, y, r;

    cout << " Enter  Two Number: ";
    cin >> x >> y;
    r=x-y;
    cout << "x - y = " <<r <<endl;


}
void multiapply(){

    int x, y, r;

    cout << " Enter  Two Number: ";
    cin >> x >> y;
    r=x*y;
    cout << "x * y = " <<r <<endl;
}

void div(){

    int x, y, r;

    cout << " Enter  Two Number: ";
    cin >> x >> y;
    r=x/y;
    cout << "x / y = " <<r <<endl;
}
