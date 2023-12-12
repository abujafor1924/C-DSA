#include<iostream>
using namespace std;


int main()
{
    int x[] = {23,45,12,4,56,8};

    int arsz=sizeof(x)/sizeof(x[0]);
    cout <<arsz;


    return 0;
}
