#include<iostream>
using namespace std;
class base1{
public:
void greed(){
    cout<<"how are you"<<endl;
}
};
class base2{
public:
    
void greed(){
    cout<<"kaise ho?"<<endl;
}
};
class derived:public base1,public base2{
public:
void greed(){
    base1::greed();//ambiguity resolution
    /*both base have same function i.e.. greed 
    above amibiguity code will solve this problem
    */
}
};

int main(){
base1 a;
base2 b;
a.greed();
b.greed();
derived c;
c.greed();
return 0;
}