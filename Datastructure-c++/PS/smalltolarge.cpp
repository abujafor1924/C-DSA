#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter your First Number : ";
    cin >> a;
    cout << "Enter your Second Number : ";
    cin >> b;
    cout << "Enter your Third Number : ";
    cin >> c;

    if (a > b)
    {
        swap(a, b);
    }
    if (b > c)
    {
        swap(b, c);
    }
    if (a > b)
    {
        swap(a, b);
    }

    cout << "Numbers in ascending order: " << a << ", " << b << ", " << c << endl;

    return 0;
}
