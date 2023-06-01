#include<iostream>
using namespace std;
/*
case 1 
class a : class b 
// order of execution of constructor class b then class a 

class 2 
class a: class b , class c{}
// order of execution of constructor class b then class c then a 

class 3 
class a : class b , virtual class c{
}
// order of execution of constructor class c then class b then a 


*/
class base1 {
int data;
public:
base1(int a){
    data=a;
}
void display (){
    cout<<"the value of base 1 constructor is "<<data<<endl;
}
};
class base2 {
int data;
public:
base2(int a){
    data=a;
}
void display2 (){
    cout<<"the value of base 2 constructor is "<<data<<endl;
}
};
class derived :public base1 ,public base2{
int d1 , d2 ; 
public :
derived (int a , int b, int c, int d ):base1(a),base2(b){
    d1=c;
    d2=d;
}
void display3 (){
    cout<<"the value of d1 is"<<d1<<endl;
    cout<<"the value of d2 is"<<d2<<endl;
}
};
int main(){
derived abhi(1,2,3,4);
abhi.display();
abhi.display2();

return 0;
}