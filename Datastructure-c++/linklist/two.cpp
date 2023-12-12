#include <iostream>
using namespace std;


void arrayElement(int arr[], int asize);
int linier( int arr[], int x,int asize);


int main()
{
    int arr[] = {4, 6, 8, 9, 3,45,7,56,34,24,43};

    int asize=sizeof(arr)/sizeof(arr[0]);
    cout << asize <<endl;
    arrayElement(arr,asize);
    cout<<endl;
    int x;
    cout <<" Enter your array number : ";
    cin>> x;
    int res=linier(arr,x,asize);
    if(res == -1)
    {
        cout << x << " is not found ";

    }
    else
    {
        cout << x <<" is found index " <<res <<endl;
    }
    return 0;
}

void arrayElement(int arr[], int asize)
{
    for (int i=0; i<asize; i++)
    {
        cout<<arr[i]<<" \t";
    }

}


int linier(int arr[],int x,int asize)
{
    for (int i=0; i<asize; i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
};
