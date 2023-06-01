#include<iostream>
using namespace std;
class complex{
    friend int calculator :: sum(int a,int b);
int a,b;
public:
void setnumber(int n1,int n2){
    a=n1;
    b=n2;
}
// friend function
friend complex sumcomplex(complex o1,complex o2);

void printnumber(){
cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
}

};
complex sumcomplex(complex o1,complex o2){

    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
class calculator{
int n;
public:
int sum(int a,int b){
    return (a+b);
}
};
int main(){
complex c1,c2;
c1.setnumber(1,4);
c2.setnumber(5,7);
c1.printnumber();
c2.printnumber();
complex sum;
sum=sumcomplex(c1,c2);
sum.printnumber();
// calculator r;
// r=sum(3,5);
// cout<<r;
return 0;
}
// properties of friend function
/*
1. not in thwe scope of class 
2. since it is not in the class it cannot be called from the object of that class
3. can be invoked without the help of any object 
4. usually contains the object of argumwnts
5. can be declared inside public or private section of the class 
6. it cnanot access the member direcrly by their names and need objects name member name

*/