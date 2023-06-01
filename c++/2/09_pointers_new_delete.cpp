#include<iostream>
using namespace std;


int main(){
int a=4;
int *ptr;
ptr=&a;
cout<<"the value of a is "
<<*ptr<<endl;

int *p=new int (40);
float *p1=new float (40);

cout<<"the value is "
<<*p<<endl;

int *arr=new int [3];
arr[0]=1;
arr[1]=2;
arr[2]=3;
cout<<"the value of a0 is "
<<arr[0]<<endl;
cout<<"the value of a1 is "
<<arr[1]<<endl;
cout<<"the value of a2 is "
<<arr[2]<<endl;

int *ar=new int [3];
ar[0]=1;
ar[1]=2;
ar[2]=3;
delete[] ar;
cout<<"the value of a0 is "
<<ar[0]<<endl;
cout<<"the value of a1 is "
<<ar[1]<<endl;
cout<<"the value of a2 is "
<<ar[2]<<endl;

return 0;
}