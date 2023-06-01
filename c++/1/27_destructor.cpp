#include<iostream>
using namespace std;
int count =0;

class num {
int a,b;
public:
num(){
    count++;
cout<<"constructor is called "<<count<<endl;
}
~num(){
    cout <<"THIS IS THE TIME WHEN DESTRUCTOR IS CALLED"<<count<<endl;
    count--;
}
};

int main(){
num n1;
    cout<<"start main"<<endl;

{
    cout<<"before block"<<endl;

    num n2,n3;
    cout<<"after block"<<endl;

}
    cout<<"back to main"<<endl;

return 0;
}