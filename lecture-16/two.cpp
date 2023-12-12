#include<iostream>
using namespace std;

class Example
{


private:
    int a,b;

public:
    // sort Example use only contructore
    Example():a(10),b(20){};// defalt constructor
    Example(int x, int y):a(x),b(y){};// peramitaries constructor
    void display();

};

// Example () : No peramiter is defalt constructor
//Example (int x, int y) : peramiter use is peramitereble constructor
//copy contructore
/*   **** sortcurt use or practice
Example::Example()//constructor have no variable
{
    a=10;
    b=20;

};

Example :: Example(int x, int y)
{
    a=x;
    b=y;
};

*/

void Example :: display()
{
    cout <<"a = " <<a <<endl;
    cout <<"b = " <<b <<endl;
    cout <<"a+b =  " <<a+b <<endl;
};


int main()
{

    Example obj;
    obj.display();
    Example obj1(7,6);
    obj1.display();


    return 0;
}
