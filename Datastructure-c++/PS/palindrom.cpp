#include <iostream>
using namespace std;

bool isPalindrom(int number)
{
    int originalNumber = number;
    int reversedNumber=0;

    while (number > 0)
    {
        int digit= number % 10;
        reversedNumber = reversedNumber *10 + digit;
        number /= 10;
    }
    return originalNumber == reversedNumber;

}


int main()
{
    int n;
    cout << "Enter your targeted Number : ";
    cin>>n;
    cout << "Palindrome numbers less than n are: ";

    for (int i = 0; i < n; ++i)
    {
        if (isPalindrom(i))
        {
            cout << i << " \t";
        }
    }
    cout << endl;
    return 0;
}

