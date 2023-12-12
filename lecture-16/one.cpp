#include<iostream>
using namespace std;

class Example
{
    private:
        int x, y;

public:
    //constructor
    Example()
    {
        cout <<" Value of X = ";
        cin>>x;
        cout <<" value of Y = ";
        cin>>y;

    }
    void display(){
    cout<< " x=" <<x <<endl;
    cout<< " y=" <<y <<endl;
    cout<< " x + y = " <<x+y <<endl;
    }
};



int main()
{

    Example obj;//obj call many but uniq value
    obj.display();
    return 0;
}
