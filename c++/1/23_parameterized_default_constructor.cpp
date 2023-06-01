#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(int,int);
    //parameterized constructor
    //implicit call

    void printnumber(){
        cout<<"the number is "<<a<<"+"<<b<<"i";
    }
};
complex ::complex(int x,int y){
    a=x;
    b=y;

}
int main(){
// complex c;
// c.printnumber();
complex d=complex(5,7);
d.printnumber();
return 0;
}