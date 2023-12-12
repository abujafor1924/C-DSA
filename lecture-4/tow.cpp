#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main(){

double n1 = 225.0, n2 = 300.0, n3 = 16;

cout <<fixed <<setprecision(5);
cout<< sqrt(n1) <<endl;
cout<< sqrt(n2) <<endl;
cout<< sqrt(n3) <<endl;
cout <<"------------\n";
cout <<pow(n1,1.0/2.0) <<endl;// other option without sqrt root using
cout <<pow(n2,1.0/2.0) <<endl;
cout <<pow(n3,1.0/2.0) <<endl;


return 0;
}

