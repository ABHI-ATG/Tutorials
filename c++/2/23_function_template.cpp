#include<iostream>
using namespace std;

template<class t1=int>
float average(t1 a,t1 b){
float c ;
c=(a+b)/2;
return c;
}

int main(){
    float d;
d=average(4,5);
cout<<"the value of average is "<<d;
return 0;
}