#include<iostream>
using namespace std;
int main(){
char arr[12]={'a','b','h','i'};
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
cout<<arr[3]<<endl;
//********pointer to array*********
char *p=arr;
cout<<*(p)<<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;

return 0;
}