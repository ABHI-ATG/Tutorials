#include<iostream>
using namespace std;
class base {
public :
int var_base;
void display(){
    cout<<"the value of var_base is "<<var_base<<endl;
}
};
class derived:public base{
public :
int var_derived ;
void display(){
    cout<<"the value of var_derived is "<<var_derived<<endl;
}
};

int main(){
base obj_base ;
base *base_pointer;
derived obj_derived ;
//base class pointer to derived class object
*base_pointer=obj_derived;
base_pointer->var_base=23;
base_pointer->display();
// //derived class pointer to object base 
// derived *derived_pointer;
// *derived_pointer=obj_base;
derived *derived_pointer;
derived_pointer=&obj_derived;
derived_pointer->var_derived=45;
derived_pointer->display();
return 0;
}