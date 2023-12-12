#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){

    string str="100";
    cout <<" B = D : " <<stoi(str,nullptr,2) <<endl; // stoi string to number convert method
    cout <<" O = D : " <<stoi(str,nullptr,8) <<endl;
    cout <<" H = D : " <<stoi(str,nullptr,16) <<endl;

return 0;
}
