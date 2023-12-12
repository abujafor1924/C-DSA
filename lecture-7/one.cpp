#include<iostream>
using namespace std;


int main()
{

    int c = 22; //normal variable
    int *pc; //pointer veriable   ,  this is veriable adress ditect kore

    cout <<" velue of a + b = " << c <<endl;
    cout <<" adress of a + b = " << &c <<endl; // Adress &
    cout <<" velue of a + b = " << sizeof(c )<<endl; // veriable size
        pc = &c;

    cout << "velue at pc : " <<pc <<endl;
    cout << "adress of pc : " <<&pc <<endl;
    cout << "value of pc (*pc) : " << *pc <<endl;


    return 0;
}
