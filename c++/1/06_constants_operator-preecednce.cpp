#include<iostream>
using namespace std;
int main(){
const int a=3;//here a is constant and cant be change in program
cout<<a<<endl;
// a=45;   not possible


//*****manipulator******
// endl is manipulator
 int d=3,f=21,g=4353;
 cout<<"without setw "<<d<<endl;
 cout<<"without setw "<<f<<endl;
 cout<<"without setw "<<g<<endl;
//  cout<<"with setw"<<setw(4)<<d<<endl;
//  cout<<"with setw"<<setw(4)<<f<<endl;
//  cout<<"with setw"<<setw(4)<<g<<endl;






return 0;
}