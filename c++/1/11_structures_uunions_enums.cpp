#include<iostream>
using namespace std;
typedef struct student{
int no;
char name;

}st;

//*********unions*******

typedef union money{
int rice;
char car;
float pounds;
}mn;


int main(){
st abhi;
abhi.no=12;
abhi.name='a';
cout<<abhi.no<<endl;
cout<<abhi.name<<endl;

mn emp;
emp.rice=3;
emp.car='c';
cout<<emp.rice<<endl;
cout<<emp.car<<endl;

enum meal{breakfast, lunch,dinner};
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;

meal m1=breakfast;
cout<<m1;
return 0;
}