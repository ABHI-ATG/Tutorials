#include<iostream>
using namespace std;
class shop{
    int id ; 
    int price ;
    public:
       int get(int a, int b){
        id=a;
        price=b;
    }
    int put(){
        cout<<"the id of item  is "<<id<<" and price is "<<price<<endl; 
    }
};

int main(){
int size=2 ;
// int *ptr = &size ;

shop *s=new shop [size];
int a , b;
shop *s1=s;
for (int i = 0; i<size ;i++){
    cout <<"enter the id and price "<<i+1<<endl;
    cin>>a>>b;
    s->get(a,b);
s++;
}
for (int i=0;i<size;i++){
    cout <<s1->put();
s1++;
}
return 0;
}