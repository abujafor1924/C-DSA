#include<iostream>
using namespace std;

//  parents class this name
class one
{
protected:
    int a,b;
};


//child class this name
class two : public one
{
   public:
       void setValue(int x, int y)
       {
           a=x;
           b=y;
       }
       void getValue()
       {
           cout <<a <<endl;
           cout <<b <<endl;
           cout <<a+b <<endl;
       }

};


int main()
{

    two obj;
    obj.setValue(10,20);
    obj.getValue();

    return 0;
}
