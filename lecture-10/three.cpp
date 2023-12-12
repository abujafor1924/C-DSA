#include<iostream>
using namespace std;

int main()
{
    int x[6]={12,45,75,34,56,780}; // array largest number

    int largestNum=x[0];

    for (int i=0;i<6;i++)
    {
        if(largestNum < x[i]){
            largestNum=x[i];
        }
    }
    cout <<largestNum <<endl;
    return 0;
}
