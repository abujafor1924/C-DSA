#include<iostream>
using namespace std;

int main(){

int a=4, b=5;
/*
        4=100 binary
        5=101 binary
-------------------------------
        4^5 =001

        a = 100 =4 =>100 <<1000 : 8 left shift is 8
        a = 100 =4 =>100 <<10000 : 16 left shift is 16
        a = 100 =4 =>100 <<100000 : 32 left shift is 32
        a = 100 =4 =>100 >>10 : 2 right shift is 2
        a = 100 =4 =>100 >>1 : 1 right shift is 1
        a = 100 =4 =>100 >>0 : 0 right shift is 0



*/

cout <<" a & b = " <<(a&b) <<endl;
cout <<" a | b = " <<(a|b) <<endl;
cout <<" a ^ b = " <<(a^b) <<endl;
cout <<" a << 1 = " <<(a << 1) <<endl;
cout <<" a << 2 = " <<(a << 2) <<endl;
cout <<" a << 3 = " <<(a << 3) <<endl;
cout <<" a >> 1 = " <<(a >> 1) <<endl;
cout <<" a >> 2 = " <<(a >> 2) <<endl;
cout <<" a >> 3 = " <<(a >> 3) <<endl;
cout <<" ~a = " <<(~a) <<endl;
cout <<" ~b = " <<(~b) <<endl;


return 0;
}
