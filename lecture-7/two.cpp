#include<iostream>
using namespace std;


int main(){

int c,*pc;
pc = &c;
*pc = 22;
cout << " value of " <<c <<endl;
cout << " value of " <<*pc <<endl;

return 0;
}
