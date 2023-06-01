#include<iostream>
using namespace std;
class simple{
int a,b;
public:
simple(int x,int y=5)
{
    a=x;
    b=y;
}
void print(){
    cout<<"your value is "<<a<<" & "<<b;
}
};


int main(){
simple c(0);
c.print();

return 0;}