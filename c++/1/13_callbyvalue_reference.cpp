#include<iostream>
using namespace std;
int swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
   return 0;
}
int swap2(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
int main(){
int x=5,y=7;
swap(x,y);
// swap(&x,&y);
cout<<x<<endl<<y;

return 0;
}