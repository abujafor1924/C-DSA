#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "enter your number : ";
    cin>>n;

    int sum=0; //int sum = n * (n + 1) / 2;  witout for loop

    for(int i=0;i<n;i++)
        sum+=i;

   cout << "The sum of the series 1+2+3+...+" <<n <<" is " <<sum <<endl;



    return 0;
}
