#include<iostream>
using namespace std;
class complex {
    int real , imaginary;
    public:
    void get(int a, int b){
        real=a;
        imaginary=b;
    }
    void put(){
        cout<<"the complex number is "<<real<<" + "<<imaginary<<"i"<<endl; 
    }
};
int main(){
// complex  c ; 
// complex  *ptr ; 
complex *ptr = new complex  ;
// ptr=&c;
// (*ptr).get (3,4);//bracket is essential 
// // preecedence of dot operatr is more than the bracket 
// (*ptr).put();

ptr ->get(3,4);//arrow operator 
ptr->put();


//array of objects 
complex *pt=new complex[3];
pt ->get(4,5);//arrow operator 
pt->put();

return 0;
}