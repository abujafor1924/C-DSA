#include<iostream>
#include<iomanip>
using namespace std;

int main(){

cout <<"c++ Manipulator = " <<endl;
cout <<"-------------------------- " <<endl;

int a=1,ab=10,abc=100,abcd=1000;

//cout <<setfill('*') <<endl;
cout <<setw(4)<<a <<endl;
cout <<setw(4) <<ab<<endl;
cout <<setw(4)<<abc<<endl;
cout <<setw(4)<<abcd<<endl;
cout <<"-------------------------- " <<endl;


cout <<"a =" <<setw(4)<<a <<endl;
cout <<"ab =" <<setw(4) <<ab<<endl;
cout <<"abc =" <<setw(4)<<abc<<endl;
cout <<"abcd =" <<setw(4)<<abcd<<endl;
cout <<"-------------------------- " <<endl;

cout <<setw(7)<<"a =" <<setw(4)<<a <<endl;
cout <<setw(6)<<"ab =" <<setw(4) <<ab<<endl;
cout <<setw(5)<<"abc =" <<setw(4)<<abc<<endl;
cout <<setw(4)<<"abcd =" <<setw(4)<<abcd<<endl;
cout <<"------------" <<endl;

cout <<left<<setw(7)<<"a =" <<setw(4)<<a <<endl;
cout <<left<<setw(6)<<"ab =" <<setw(4) <<ab<<endl;
cout <<left<<setw(5)<<"abc =" <<setw(4)<<abc<<endl;
cout <<left <<setw(4)<<"abcd =" <<setw(4)<<abcd<<endl;
cout <<"------------" <<endl;


cout <<left<<setw(7)<<"a =" <<right <<setw(4)<<a <<endl;
cout <<left<<setw(6)<<"ab =" <<right <<setw(4) <<ab<<endl;
cout <<left<<setw(5)<<"abc =" <<right <<setw(4)<<abc<<endl;
cout <<left <<setw(4)<<"abcd =" <<right <<setw(4)<<abcd<<endl;
cout <<"------------" <<endl;

return 0;
}
