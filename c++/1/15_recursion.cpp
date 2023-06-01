#include<iostream>
using namespace std;
int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
int num;
cin>>num;
int b;
b=fact(num);
cout<<b;
return 0;
}