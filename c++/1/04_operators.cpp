#include<iostream>
//there are two tyoes of header files
//1. system header files -- it is comes with the compiler
//2. user desfined header fileit is written by the programmmer 
using namespace std;
int main(){
    int a=5,b=2;
cout<<"opearators in c++";
cout<<"the value of a*b  "<<a*b<<endl;
cout<<"the value of a/b  "<<a/b<<endl;
cout<<"the value of a+b  "<<a+b<<endl;
cout<<"the value of a-b  "<<a-b<<endl;
cout<<"the value of a%b  "<<a%b<<endl;
// cout<<"the value of ab"<<ab;
// conditional operator   a<b
//logical operator- a<b && a>c
cout<<"the conditional operator "<<(a>=b)<<endl;
cout<<"the conditional operator "<<(a==b)<<endl;
cout<<"the conditional operator "<<(a<=b)<<endl;
cout<<"the conditional operator "<<(a!=b)<<endl;
//logical operators
cout<<"the logical operator "<<((a<=b)&&(a!=b))<<endl;
cout<<"the logical operator "<<((a<=b)&&(a==b))<<endl;

return 0;
}