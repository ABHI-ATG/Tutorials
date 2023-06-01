#include<iostream>
using namespace std;
/*
template<class t1,class t2>
class nameofclass{
    body
};
*/
template<class t1,class t2>

class num{
    t1 data;
    t2 data2;
    public:
    num(t1 a,t2 b){
        data=a;
        data2=b;

    }
    void display(){
        cout<<data;
        cout<<endl<<data2;

    }
};

int main(){
num <int,float>obj(4,5.6);
obj.display();

return 0;
}