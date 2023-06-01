#include <iostream>
using namespace std;
//constsructor help us to intitialise the class
class complex{
    public:
    int a,b;
    // constructor is a special member function with same name as of the class 
    complex(void);//constructor declaration
    void print(){
        cout<<"your number is "<<a<<" + "<<b<<"i";
    }
};
complex ::complex(void){
    a=5;
    b=10;
}
int main()
{
complex c;
c.print();
    return 0;
}