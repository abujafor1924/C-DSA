#include<iostream>
using namespace std;

int larges(int,int); // code overly
int larges(int,int,int);
int larges(int,int,int,int);

int main()
{

    int choice, lrg,lrg1,lrg2;
    while(1)
    {

        cout << " Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1 :
            lrg =larges(10,20);
            cout <<lrg <<endl;
            break;
        case 2:
            lrg1 =larges(10,20,30);
            cout <<lrg1 <<endl;
            break;

        case 3:
            lrg2 =larges(10,20,30,40);
            cout <<lrg2 <<endl;
            break;

        default:
            cout << " Invelid choose please try again";
        }


    }



    return 0;
}

int larges(int x,int y)
{

    int m= (x > y) ? x : y ;
    return m;

}

int larges(int x,int y, int z)
{

    int m= (x > y && x > z) ? x : (y > z) ? y : z;
    return m;

}

int larges(int x,int y, int z, int k)
{

    int m= (x > y && x > z && x > k) ? x :
           (y > z && y > k) ? y :
           (z > k) ? z : k;
    return m;

}
