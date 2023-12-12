#include<iostream>
using namespace std;

class Example
{
private: int a,b;
public:
    Example()
    {
       a=b=0;
    };
    Example(int x, int y)
    {
        a=x;
        b=y;
    };
    Example( Example &obj)
    {
        a=obj.a;
        b=obj.b;
    };

    void display(){
    cout <<a <<endl;
    cout <<b <<endl;

    }
};

int main()
{
    Example obj1;
    obj1.display();

    Example obj2(10,15);
    obj2.display();

    Example obj3(obj2);
    obj3.display();


    return 0;
}
