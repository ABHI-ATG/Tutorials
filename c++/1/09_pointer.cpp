#include<iostream>
using namespace std;
int main(){
int a=4;
int *b=&a;
cout<<a;//value
cout<<endl<<*b<<endl;//value
cout<<b<<endl;//adress
cout<<&a;//adress
//pointer to pointer
int **c=&b;
cout<<&b<<endl;
cout<<c<<endl;
cout<<*c<<endl;
cout<<**c<<endl;

return 0;
}