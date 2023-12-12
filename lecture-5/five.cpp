#include<iostream>
using namespace std;



int sum(int ,int);


int main(){


    int a ,b ;
    cout << "Enter a & b Number: ";
    cin >> a >> b;
    int r = sum(a,b);

    cout << " A +  B = " <<r << endl;





return 0;
}


int sum(int x ,int y){

int r= x + y;
return r;

}





