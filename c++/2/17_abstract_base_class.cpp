#include<iostream>
using namespace std;
class base{
int a; 
public:

virtual void display()=0;
// {
//     cout <<"base class"<<endl;
// }
};
class der1:public base{
    int b;
        public:
        void display(){
            cout << "derived class 1"<<endl;
        }
};
class der2:public base{
    int c;
    public:
    void display(){
        cout << "derived class 2"<<endl;
    }
};
int main(){
der2 obj2;
// obj2.display();
base *bptr;
bptr=&obj2;
bptr->display();//pointer to derived 

// if i want to use the derived class diplay to run 
// then i will use the virtual function in base class display 

//if their is no display function in derived class 2 then the function will run the base class display function 

//if we want that their must be display function then we can make the pure virtual function 
// syntax virtual void function ()=0;
// but the function should not be declared 

return 0;
}