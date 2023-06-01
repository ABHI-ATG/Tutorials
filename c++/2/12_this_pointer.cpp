#include<iostream>
using namespace std;
class A {
    int a ;
    public :
    void setdata(int a){
        //this pointer
        // it is a keyword which is a pointer which points to the object which invokes the the master funvtion 
        this ->a=a;
    }
    void getdata(){
        cout << "the value of a is "<<a;
    }
};

int main(){
A a;
a.setdata(4);
a.getdata();

return 0;
}