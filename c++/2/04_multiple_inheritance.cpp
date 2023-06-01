#include <iostream>
using namespace std;
class base1
{
    protected :
    int a;
    public:

    void setbase1(int y){
a=y;
    }
};
class base2
{
    protected :
    int b;
    public:

    void setbase2(int x){
b=x;
    }
};
/* class (name class) :visiblity-mode base1, visibility mode base2{
body
}*/
class derived:public base1,public base2
{
    public:
    void show(){
        cout<<" the value of base 1 is "<<a<<endl;
        cout<<" the value of base 2 is "<<b<<endl;
        cout<<" the sum of base 1 and base 2 is "<<a+b<<endl;
    }
};

int main()
{
derived abhi;
abhi.setbase1(23);
abhi.setbase2(33);
abhi.show();
    return 0;
}