#include<iostream>
using namespace std;
int c=34;
int main(){
int a=4,b=3,c;
c=a+b;
cout<<"the sum is "<<c<<endl;
cout<<"the global c is "<<::c;//scope resolution operator(::)

//float g=34.4;//here float number will be consider as double
float  g=34.4f;//so we use f to declare the number as float

double k=23.4;

cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"the size of 34.4 is "<<sizeof(34.4f)<<endl;
cout<<"the size of 34.4 is "<<sizeof(34.4F)<<endl;
cout<<"the size of 34.4 is "<<sizeof(34.4l)<<endl;
cout<<"the size of 34.4 is "<<sizeof(34.4L)<<endl;



// *******REFERNCE VARIABLE*******
float x=423;
float &y=x;
cout<<x<<endl;
y++;
cout<<y<<endl;
cout<<x<<endl;

// ********typecasting*******

int h=34;
float z=34.34;

cout<<"the value of h is "<<float(h)<<endl;
cout<<"the value of g is "<<int(z)<<endl;





return 0;
}