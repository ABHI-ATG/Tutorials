#include<iostream>
#include<fstream>
/*
the useful classes for working with files in c++are 
1.fstreambase 
2.ifstream -derived from fstreambase
3.ofstream - derived 
*/
/*
2 ways to open a file 
1.using a constructor 
2.using the member function open() of the class 
*/
using namespace std;


int main(){
    string st1="abhi";
    string st2;

// ofstream out("sample.txt");
// out<<st1;

ifstream in("sample.txt");
// in>>st2;
getline(in,st2);
cout<<st2<<endl;

getline(in,st2);
cout<<st2;
return 0;
}