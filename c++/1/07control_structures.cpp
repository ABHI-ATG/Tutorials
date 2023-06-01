//control structures
//sequence structure-    sequence structure
//selection structure-   true or flase condition
//loop structure-    condition check then true then again condition
#include<iostream>
using namespace std;
int main(){
int age;
cout<<"your age";
cin>>age;
//**********else if ladder***********
// if(age>18){
//     cout<<"you can come to the party";

// }
// else if(age<18){
//     cout<<"you cant come to the party";
// }
// else{
//     cout<<"just wait for one year bro";
// }

//********switch case**********
switch (age)
{
case /* constant-expression */18:
    /* code */cout<<"you are 18, just for one more";
    break;
case 19:
cout<<"yeah come ";
break;
default:
cout<<"wait";
    break;
}
return 0;
}