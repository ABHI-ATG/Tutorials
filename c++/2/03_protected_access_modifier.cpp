#include<iostream>
using namespace std;
class base{
    protected:
int a;
private:
int b;
public:

};
//for protected member
/*
                                public derivation    private derivation         protected derivation 
    1. private member               not inherited        not inherited             not inherited  
    2. protected member           protected                private                  protected
    3. public members             public             private                        protected
*/
class derived: protected base{
public:

};
int main(){
derived d;
//cout<<d.a;//will show errror


return 0;
}