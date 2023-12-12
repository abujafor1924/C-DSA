#include<iostream>
using namespace std;

int main()
{

    //array declaretion in c++
    int x[6] = {23,45,12,4,56,8};

    for (int i=0; i<6; i++)
    {

        cout << x[i] <<endl;
    }

    cout << "----------------\n";

    for( int n : x)
    {
        cout << n <<endl;
    }

    return 0;
}
