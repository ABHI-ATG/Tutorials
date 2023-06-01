#include<iostream>
#include<fstream>

using namespace std;


int main(){
ofstream out;
out.open("sample.txt");
out<<"hello"<<endl;
out<<"abhi bhai"<<endl;
out<<"atg"<<endl;
out.close();

string st;


ifstream in;
in.open("sample.txt");
// in>>st;
// cout<<st;

while(in.eof()==0){
    getline(in,st);
    cout<<st;
}






return 0;
}