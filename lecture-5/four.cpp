#include<iostream>
using namespace std;


void myFunction(int,int);


int main(){


int a,b;

cout << " Enter Value Off a & b : ";
cin >> a >> b;
myFunction(a,b);


return 0;
}


void myFunction(int x,int y){

cout << " a + b = "<< x + y <<endl;

}







