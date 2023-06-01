//In call by reference, we give adress of variables
#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *x , int *y);
int main()
{int a=3 , b=4;
printf("the value of a and b before swap is %d and %d\n",a,b);
//wrong_swap(a,b);// which will not work due call by value
swap(&a,&b);
printf("the value of a and b after swap is %d and %d",a,b);
    
}
void wrong_swap(int a, int b){
int temp;
temp=a;
a=b;
b=temp;
}
void swap(int *x, int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}