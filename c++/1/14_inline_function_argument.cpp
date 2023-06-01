#include<iostream>
using namespace std;
int prod(int a,int b){
    static int c=0;//static apni purani value nahi bhulta function mai
    c=c+1;
    return a*b+c;
}
int money(int a,int rate=2){//default argument
    return a*rate;
}
const int num=34;
int main(){
int a,b;
cin>>a>>b;
cout<<"the product of two number is "<<prod(a,b)<<endl;
// cout<<"the product of two number is "<<prod(a,b)<<endl;
// cout<<"the product of two number is "<<prod(a,b)<<endl;
// cout<<"the product of two number is "<<prod(a,b)<<endl;
// cout<<"the product of two number is "<<prod(a,b)<<endl;
int mon=45;
cout<<money(mon);
return 0;
}