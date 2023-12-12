#include<iostream>
using namespace std;

int main()
{
    int *pc,c;

    c=22;
    cout << "value of c = " << c <<endl;
    cout << "adress of c = " << &c <<endl;
    pc=&c;
    cout <<" adress of pointer velue *pc in c = " << pc <<endl;
    cout <<" velue of pointer velue pc in c = " << *pc <<endl;
    cout <<" adress of pointer velue = " << &pc <<endl;
    *pc=4;
    cout << " normal velu change by pointer velue : " <<*pc <<endl;
    cout << " normal velu change by pointer velue : " <<c <<endl;




    return 0;
}
