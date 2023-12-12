#include <iostream>
using namespace std;

int linier( int arr[], int x);

int main() {
   int arr[5] = {4, 6, 8, 9, 3};
   int x= 8;
   int res=linier(arr,x);
   if(res == -1)
   {
       cout << x << " is not found ";

   }else{
   cout << x <<" is found index " <<res <<endl;
   }
   return 0;
}

int linier(int arr[],int x)
{
 for (int i=0; i<5;i++)
 {
     if(arr[i]==x){
        return i;
     }
 }
};
