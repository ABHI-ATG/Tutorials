#include<iostream>
using namespace std;
template <class t1=int,class t2=float>
class abhi{
public:
t1 a; 
t2 b;
abhi(t1 x, t2 y){
    a=x;
    b=y;
}
void display(){
    cout<<"the value of a and b is "<<a<<endl;
    cout<<"the value of b is "<<b;
}
};


int main(){
abhi<> a(3,5.6);
a.display();

abhi<char , char> b('y','u');
b.display();

return 0;
}